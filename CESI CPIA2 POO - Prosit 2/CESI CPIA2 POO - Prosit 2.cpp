#include <iostream>
#include <fstream>
#include "File.h"

using namespace std;

int main()
{
    File f1 = File("test.txt");
    f1.write("Bo");
    f1.read(); f1.read();
    cout << f1.read();
}

