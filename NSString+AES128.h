//
//  NSString+AES128.h
//  ceshi
//
//  Created by hushuangfei on 16/7/23.
//  Copyright © 2016年 胡双飞. All rights reserved.
//  AES/CBC/PKCS5Padding 

#import <Foundation/Foundation.h>
#import <CommonCrypto/CommonCryptor.h>
@interface NSString (AES128)

/**
 *  加密
 *
 *  @param string   需要加密的String
 *  @param keyAndIv key和iv都用同一的16位 （服务器商量，必须是16位  例如"1234567812345678"）
 *                  key是公钥，iv是偏移量
 *  @return 加密后的字符串
 */
+ (NSString *)AES128CBC_PKCS5Padding_EncryptStrig:(NSString *)string keyAndIv:(NSString *)keyAndIv;
/**
 *  加密
 *
 *  @param string 需要加密的string
 *  @param key    公钥
 *  @param iv     偏移量
 *
 *  @return 加密后的字符串
 */
+ (NSString *)AES128CBC_PKCS5Padding_EncryptStrig:(NSString *)string key:(NSString*)key iv:(NSString *)iv;
/**
 *  解密
 *
 *  @param string   加密的string
 *  @param keyAndIv key和iv
 *
 *  @return  解密后的内容
 */
+ (NSString *)AES128CBC_PKCS5Padding_DecryptString:(NSString *)string keyAndIv:(NSString *)keyAndIv;
/**
 *  解密
 *
 *  @param string 加密的字符串
 *  @param key    钥匙（公钥）
 *  @param iv     偏移量
 *
 *  @return 解密后的内容
 */
+ (NSString *)AES128CBC_PKCS5Padding_DecryptString:(NSString *)string key:(NSString *)key iv:(NSString *)iv;
@end
