#include <iostream>
#include "crypt.h"

using namespace std;

int main()
{
	LogicalEncryption test("test.txt", "test2.txt", new bool[12]{1,0,1,1,0,0,0,1,1,1,0,0});
	test.encrypt();

	cout << "\n";
	LogicalDecryption test2("test2.txt", "test3.txt", new bool[12]{ 1,0,1,1,0,0,0,1,1,1,0,0 });
	test2.decrypt();

	return 0;
}

