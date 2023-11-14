#include "LogicalEncryption.h"
#include <fstream>
#include <iostream>

using namespace std;

LogicalEncryption::LogicalEncryption(string srcFile, string destFile, bool* key) : EncryptionDecryption(srcFile, destFile), Logical(key) {}

void LogicalEncryption::encrypt(void) {
	ofstream dest(getDestFile().c_str(), ios::out | ios::trunc);
	dest << "";
	dest.close();

	ifstream src(getSrcFile().c_str(), ios::in);
	dest.open(getDestFile().c_str(), ios::out | ios::app);

	char readChar;
	bool bit;
	int keyCount = 0;
	bool *key = getKey();

	while (src.get(readChar)) {
		for (int i = 7; i >= 0; --i) {
			bit = ((readChar >> i) & 1);

			if ( (bit or key[keyCount]) && !(bit && key[keyCount]) ) {
				readChar |= 1 << i;
			}
			else {
				readChar &= ~(1 << i);
			}

			keyCount = (keyCount + 1) % 12;
		}

		dest << readChar;
	}

	src.close();
	dest.close();
}
