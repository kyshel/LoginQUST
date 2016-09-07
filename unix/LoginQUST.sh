#!/usr/bin/env bash

# Login QUST via unix command.
# Author: Kyshel
# Github: https://github.com/kyshel/LoginQUST

# Way 1 - Plain text password:
# Ex, if your usercode is 1601020101 and pass is 111111, modify like below: 
# curl -d "DDDDD=1601020101&upass=111111&0MKKey=123456" http://172.16.10.3
curl -d "DDDDD=_&upass=_&0MKKey=123456" http://172.16.10.3


# Way 2 - Encoded password (Get by catch data-pack with wireshark):
# Ex: curl -d "DDDDD=1601020101x&upass=2be0ffe2876304183c9f2f26cbab3f08123456781&R1=0&R2=1&para=00&0MKKey=123456" http://172.16.10.3

