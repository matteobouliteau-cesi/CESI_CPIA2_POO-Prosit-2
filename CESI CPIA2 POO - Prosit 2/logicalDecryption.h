#pragma once
#include <iostream>
#include "Decryption.h"
#include "Logical.h"
#include "EncryptionDecryption.h"

using namespace std;

class LogicalDecryption : public Decryption, public EncryptionDecryption, public Logical
{
public:
	LogicalDecryption(string srcFile, string destFile, bool* key);
	void decrypt(void);
};

