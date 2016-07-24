//
//  NSData+AES128.h
//  ceshi
//
//  Created by hushuangfei on 16/7/23.
//  Copyright © 2016年 胡双飞. All rights reserved.
//  AES128/CBC/PKCS5Padding

#import <Foundation/Foundation.h>
#import <CommonCrypto/CommonCryptor.h>
@interface NSData (AES128)
/**
 *  加密
 *
 *  @param key 公钥
 *  @param iv  偏移量
 *
 *  @return 加密之后的NSData
 */
- (NSData *)AES128EncryptWithKey:(NSString *)key iv:(NSString *)iv;
/**
 *  解密
 *
 *  @param key 公钥
 *  @param iv  偏移量
 *
 *  @return 解密之后的NSData
 */
- (NSData *)AES128DecryptWithKey:(NSString *)key iv:(NSString *)iv;

@end
