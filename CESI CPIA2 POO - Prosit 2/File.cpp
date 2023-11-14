#include "File.h"
#include <iostream>
#include <fstream>

using namespace std;

File::File(void) {
	this->file.open("test.txt");
}

File::File(string name) {
	this->file.open(name.c_str());
}

File::~File() {
	this->file.close();
}

string File::read(void) {
	return string((istreambuf_iterator<char>(this->file)),
		istreambuf_iterator<char>());
}

void File::open(string name) {
	this->file.close();
	this->file.open(name.c_str());
}

void File::write(string content) {
	this->file << content;
}