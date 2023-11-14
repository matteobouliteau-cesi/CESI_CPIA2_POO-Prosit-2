#include "File.h"
#include <iostream>
#include <fstream>

using namespace std;

File::File(string name) {
	this->file = new fstream(name.c_str());
}

File::~File() {
	delete(this->file);
}

void File::setFile(fstream* file) {
	delete(this->file);
	this->file = file;
}

fstream* File::getFile(void) {
	return this->file;
}

string File::read(void) {
	return string((istreambuf_iterator<char>(*(this->file))),
		istreambuf_iterator<char>());
}

void File::write(string content) {
	*(this->file) << content;
}