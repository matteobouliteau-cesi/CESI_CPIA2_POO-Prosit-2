#pragma once
#include <iostream>
#include "Encryption.h"
#include "Cesar.h"
#include "EncryptionDecryption.h"

using namespace std;

class CesarEncryption : public Encryption, public EncryptionDecryption, public Cesar
{
public:
	CesarEncryption(string srcFile, string destFile, int offset);
	void encrypt(void);
};

