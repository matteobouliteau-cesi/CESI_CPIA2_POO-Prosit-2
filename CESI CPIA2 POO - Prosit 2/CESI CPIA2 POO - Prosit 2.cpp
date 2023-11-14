#include <iostream>
#include "crypt.h"

using namespace std;

int main()
{
	DoubleEncryption test("test.txt", "test2.txt", 1, new bool[4]{1,0,0,1});
	test.encrypt();

	DoubleDecryption test2("test2.txt", "test3.txt", 1, new bool[4]{ 1,0,0,1 });
	test2.decrypt();

	return 0;
}

