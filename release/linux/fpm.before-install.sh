getent group trezord >/dev/null || groupadd -r trezord
getent passwd trezord >/dev/null || useradd -r -g trezord -d /var -s /sbin/nologin -c "TREZOR Bridge" trezord
touch /var/log/trezord.log
chown trezord:trezord /var/log/trezord.log
