#include "DoubleDecryption.h"
#include "CesarDecryption.h"
#include "LogicalDecryption.h"
#include <fstream>
#include <iostream>

using namespace std;

DoubleDecryption::DoubleDecryption(string srcFile, string destFile, int offset, bool* key) {
	this->cesar = new CesarDecryption(srcFile, destFile + "_TEMP", offset);
	this->logical = new LogicalDecryption(destFile + "_TEMP", destFile, key);
}

DoubleDecryption::~DoubleDecryption() {
	delete(this->logical);
	delete(this->cesar);
}

void DoubleDecryption::decrypt(void) {
	this->cesar->decrypt();
	this->logical->decrypt();
	remove((this->cesar->getDestFile()).c_str());
}
