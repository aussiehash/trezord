/*
 * This file is part of the TREZOR project.
 *
 * Copyright (C) 2014 SatoshiLabs
 *
 * Licensed under Microsoft Reference Source License (Ms-RSL)
 */

#pragma once

#include <string>
#include <sstream>
#include <curl/curl.h>

namespace trezord
{
namespace http_client
{

std::size_t
write_to_stream(void *data,
                std::size_t size,
                std::size_t nmemb,
                std::stringstream *stream)
{
    stream->write(static_cast<char *>(data), size * nmemb);
    return size * nmemb;
}

void
request_uri_to_stream(std::string const &uri,
                      std::stringstream *stream)
{
    CURL *curl = curl_easy_init();
    if (!curl) {
        throw std::runtime_error{"CURL init failed"};
    }

    CLOG(INFO, "http.client") << "requesting " << uri;

    curl_easy_setopt(curl, CURLOPT_URL, uri.c_str());
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_to_stream);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, stream);

    CURLcode res = curl_easy_perform(curl);
    curl_easy_cleanup(curl);
    if (res != CURLE_OK) {
        throw std::runtime_error{curl_easy_strerror(res)};
    }
}

std::string
request_uri_to_string(std::string const &uri)
{
    std::stringstream stream;
    request_uri_to_stream(uri, &stream);
    return stream.str();
}

}
}
