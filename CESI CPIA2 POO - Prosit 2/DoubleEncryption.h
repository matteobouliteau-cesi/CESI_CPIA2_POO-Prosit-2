#pragma once
#include <iostream>
#include "Encryption.h"
#include "EncryptionDecryption.h"
#include "CesarEncryption.h"
#include "LogicalEncryption.h"

using namespace std;

class DoubleEncryption : public Encryption
{
private:
	CesarEncryption *cesar;
	LogicalEncryption *logical;
public:
	DoubleEncryption(string srcFile, string destFile, int offset, bool* key);
	~DoubleEncryption();
	void encrypt(void);
};

