#Monitor SSH connection
When build a ssh connection as proxy server, use it to monitor the connection state. When connection is broken, ssh connection can be rebuilt.
```
./mssh cmd check_cmd
```
- cmd: a script to automatically build ssh connection
- check_cmd: check the ssh connection state and get ssh connection PID
