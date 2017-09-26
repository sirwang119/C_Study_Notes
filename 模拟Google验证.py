import hmac, base64, struct, hashlib, time  
import sys  
  
  
def get_hotp_token(secret, intervals_no):  
    key = base64.b32decode(secret, True)  
    msg = struct.pack(">Q", intervals_no)  
    h = hmac.new(key, msg, hashlib.sha1).digest()  
    o = ord(h[19]) & 15  
    h = (struct.unpack(">I", h[o:o+4])[0] & 0x7fffffff) % 1000000  
    return h  
  
def get_totp_token(secret):  
    return get_hotp_token(secret, intervals_no=int(time.time())//30)  
  
  
  
def main():  
    user = "maxbai"#str(crt.Arguments[0])     # user account for ssh account  
    gtoken = "EFCJY5BS5C62AHUO" #str(crt.Arguments[1])  # google token value  
    pwd = "max123123123" #str(crt.Arguments[2])     # password for ssh  
    crt.Screen.Send("ssh "+user+"@127.10.10.31 -p 23\r")    # ssh command  
      
    #result = crt.Screen.WaitForString("connecting (yes/no)?", 2)  
    #if result == 1:  
        #crt.Screen.Send("yes\r")  
    result = crt.Screen.WaitForString("Verification code:", 5)  
    if result == 0:  
        return ""  
    crt.Screen.Send(str(get_totp_token(gtoken))+"\r")  
    result = crt.Screen.WaitForString("assword:", 5)  
    if result == 0:  
        return ""  
    crt.Screen.Send(pwd+"\r")  
  
main()  
