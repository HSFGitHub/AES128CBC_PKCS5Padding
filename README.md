# AES128CBC_PKCS5Padding
AES128CBC_PKCS5Padding 加密方式

1.使用方式：
  #import "NSString+AES128.h"
  
  key 和 iv 必须为16位。  
  key : 公钥    iv : 偏移量    iv要和服务器加密时，商量好。
  
  加密：
  
    NSString *aesPassword2 = [NSString AES128CBC_PKCS5Padding_EncryptStrig:@"需要加密的内容"
                                                                       key:@"公钥（16位）" 
                                                                       iv:@"偏移量（16位）"];
    
    NSString *aesPassword = [NSString AES128CBC_PKCS5Padding_EncryptStrig:@"需要加密的内容"
                                                                 keyAndIv:@"key和iv可以使用同一的16位"];
  
  解密:
  
    NSString *aesDncrypt2 = [NSString AES128CBC_PKCS5Padding_DecryptString:@"加密的字符串"
                                                                       key:@"公钥" 
                                                                       iv:@"偏移量"];
    
    NSString *aesDncrypt =  [NSString AES128CBC_PKCS5Padding_DecryptString:@"加密的字符串"
                                                                  keyAndIv:@"key与iv一样时"];
