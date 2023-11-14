#pragma once
#include <iostream>
#include "Encryption.h"
#include "Logical.h"
#include "EncryptionDecryption.h"

using namespace std;

class LogicalEncryption : public Encryption, public EncryptionDecryption, public Logical
{
public:
	LogicalEncryption(string srcFile, string destFile, bool* key);
	void encrypt(void);
};

