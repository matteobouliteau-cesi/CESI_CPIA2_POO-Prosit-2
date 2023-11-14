#include "CesarEncryption.h"
#include <fstream>
#include <iostream>

using namespace std;

CesarEncryption::CesarEncryption(string srcFile, string destFile, int offset) : EncryptionDecryption(srcFile, destFile), Cesar(offset) {}

void CesarEncryption::encrypt(void) {
	ofstream dest(getDestFile().c_str(), ios::out | ios::trunc);
	dest << "";
	dest.close();

	ifstream src(getSrcFile().c_str(), ios::in);
	dest.open(getDestFile().c_str(), ios::out | ios::app);

	char readChar;
	int offset = getOffset();
	
	while (src.get(readChar)) {
		dest << static_cast<char>((readChar + offset) % 127);
	}

	src.close();
	dest.close();
}
