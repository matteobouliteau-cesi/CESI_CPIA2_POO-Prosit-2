#include <iostream>
#include "crypt.h"

using namespace std;

int main()
{
	CesarEncryption test("test.txt", "test2.txt", 1);
	test.encrypt();

	cout << "\n";
	CesarDecryption test2("test2.txt", "test3.txt", 1);
	test2.decrypt();

	return 0;
}

