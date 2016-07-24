//
//  NSString+AES128.m
//  ceshi
//
//  Created by hushuangfei on 16/7/23.
//  Copyright © 2016年 胡双飞. All rights reserved.
//

#import "NSString+AES128.h"
#import "NSData+AES128.h"
@implementation NSString (AES128)

//加密
+ (NSString *)AES128CBC_PKCS5Padding_EncryptStrig:(NSString *)string keyAndIv:(NSString *)keyAndIv{
    
    NSData *data = [string dataUsingEncoding:NSUTF8StringEncoding];
    NSData *encryptData = [data AES128EncryptWithKey:keyAndIv iv:keyAndIv];
    NSString *encryptring =  [encryptData base64EncodedStringWithOptions:NSDataBase64Encoding64CharacterLineLength];
    return encryptring;

}
//加密
+ (NSString *)AES128CBC_PKCS5Padding_EncryptStrig:(NSString *)string key:(NSString*)key iv:(NSString *)iv{
    NSData *data = [string dataUsingEncoding:NSUTF8StringEncoding];
    NSData *encryptData = [data AES128EncryptWithKey:key iv:iv];
    NSString *encryptring =  [encryptData base64EncodedStringWithOptions:NSDataBase64Encoding64CharacterLineLength];
    return encryptring;
    
}
//解密
+ (NSString *)AES128CBC_PKCS5Padding_DecryptString:(NSString *)string keyAndIv:(NSString *)keyAndIv{
    
    NSData *decryptBase64data = [[NSData alloc]initWithBase64EncodedString:string options:NSDataBase64DecodingIgnoreUnknownCharacters];
    NSData *decryptData = [decryptBase64data AES128DecryptWithKey:keyAndIv iv:keyAndIv];
    NSString *decryptString = [[NSString alloc]initWithData:decryptData encoding:NSUTF8StringEncoding];
    return decryptString;
   
}
//解密
+ (NSString *)AES128CBC_PKCS5Padding_DecryptString:(NSString *)string key:(NSString *)key iv:(NSString *)iv{
    
    NSData *decryptBase64data = [[NSData alloc]initWithBase64EncodedString:string options:NSDataBase64DecodingIgnoreUnknownCharacters];
    NSData *decryptData = [decryptBase64data AES128DecryptWithKey:key iv:iv];
    NSString *decryptString = [[NSString alloc]initWithData:decryptData encoding:NSUTF8StringEncoding];
    return decryptString;
    
}

@end
