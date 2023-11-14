#pragma once
#include <iostream>
#include "Decryption.h"
#include "Cesar.h"
#include "EncryptionDecryption.h"

using namespace std;

class CesarDecryption : public Decryption, public EncryptionDecryption, public Cesar
{
public:
	CesarDecryption(string srcFile, string destFile, int offset);
	void decrypt(void);
};