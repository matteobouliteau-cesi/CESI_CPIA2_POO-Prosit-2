#pragma once
#include <iostream>

using namespace std;

class EncryptionDecryption
{
private:
	string srcFile;
	string destFile;
public:
	EncryptionDecryption(string srcFile, string destFile);
	void setSrcFile(string srcFile);
	void setDestFile(string destFile);
	string getSrcFile(void);
	string getDestFile(void);
};

