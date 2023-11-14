#include "EncryptionDecryption.h"
#include <iostream>

using namespace std;

EncryptionDecryption::EncryptionDecryption(string srcFile, string destFile) {
	this->srcFile = srcFile;
	this->destFile = destFile;
}

void EncryptionDecryption::setSrcFile(string srcFile) {
	this->srcFile = srcFile;
}

void EncryptionDecryption::setDestFile(string destFile) {
	this->destFile = destFile;
}

string EncryptionDecryption::getSrcFile(void) {
	return this->srcFile;
}

string EncryptionDecryption::getDestFile(void) {
	return this->destFile;
}
