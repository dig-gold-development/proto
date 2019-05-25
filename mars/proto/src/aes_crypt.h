/*
 * aes_crypt.h
 *
 *  Created on: 2013-7-17
 *      Author: zhouzhijie
 */

#ifndef AES_CRYPT_H_
#define AES_CRYPT_H_


int aes_cbc_encrypt_time_check(const unsigned char* pKey, unsigned int uiKeyLen
                               , const unsigned char* pInput, unsigned int uiInputLen
                               , unsigned char** ppOutput, unsigned int* pOutputLen);

int aes_cbc_decrypt_time_check(const unsigned char* pKey, unsigned int uiKeyLen
                               , const unsigned char* pInput, unsigned int uiInputLen
                               , unsigned char** ppOutput, unsigned int* pOutputLen, bool checkTime);

int aes_cbc_encrypt(const unsigned char* pKey, unsigned int uiKeyLen
		, const unsigned char* pInput, unsigned int uiInputLen
		, unsigned char** ppOutput, unsigned int* pOutputLen);
int aes_ecb_encrypt(const unsigned char* pKey, unsigned int uiKeyLen
		, const unsigned char* pInput, unsigned int uiInputLen, int bFinal
		, unsigned char** ppOutput, unsigned int* pOutputLen);

int aes_cbc_decrypt(const unsigned char* pKey, unsigned int uiKeyLen
		, const unsigned char* pInput, unsigned int uiInputLen
		, unsigned char** ppOutput, unsigned int* pOutputLen);
int aes_ecb_decrypt(const unsigned char* pKey, unsigned int uiKeyLen
		, const unsigned char* pInput, unsigned int uiInputLen, int bFinal
		, unsigned char** ppOutput, unsigned int* pOutputLen);

#endif /* AES_CRYPT_H_ */
