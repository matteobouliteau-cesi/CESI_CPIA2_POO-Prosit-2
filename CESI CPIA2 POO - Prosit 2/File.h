#pragma once
#include <iostream>
#include <fstream>

using namespace std;

class File
{
private :
	fstream* file;
public :
	File(string name);
	~File();
	void setFile(fstream* file);
	fstream* getFile(void);
	string read(void);
	void write(string content);
};

