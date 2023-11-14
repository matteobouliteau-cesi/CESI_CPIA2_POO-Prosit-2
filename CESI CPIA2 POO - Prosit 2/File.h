#pragma once
#include <iostream>
#include <fstream>

using namespace std;

class File
{
private :
	fstream file;
public :
	File(void);
	File(string name);
	~File();
	string read(void);
	void open(string name);
	void write(string content);
};

