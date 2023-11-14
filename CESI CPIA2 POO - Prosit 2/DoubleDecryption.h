#pragma once
#include <iostream>
#include "Decryption.h"
#include "EncryptionDecryption.h"
#include "CesarDecryption.h"
#include "LogicalDecryption.h"

using namespace std;

class DoubleDecryption : public Decryption
{
private:
	CesarDecryption* cesar;
	LogicalDecryption* logical;
public:
	DoubleDecryption(string srcFile, string destFile, int offset, bool* key);
	~DoubleDecryption();
	void decrypt(void);
};

