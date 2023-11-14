#include "DoubleEncryption.h"
#include "CesarEncryption.h"
#include "LogicalEncryption.h"
#include <fstream>
#include <iostream>

using namespace std;

DoubleEncryption::DoubleEncryption(string srcFile, string destFile, int offset, bool* key) {
	this->logical = new LogicalEncryption(srcFile, destFile + "_TEMP", key);
	this->cesar = new CesarEncryption(destFile + "_TEMP", destFile, offset);
}

DoubleEncryption::~DoubleEncryption() {
	delete(this->logical);
	delete(this->cesar);
}

void DoubleEncryption::encrypt(void) {
	this->logical->encrypt();
	this->cesar->encrypt();
	remove((this->cesar->getDestFile() + "_TEMP").c_str());
}
