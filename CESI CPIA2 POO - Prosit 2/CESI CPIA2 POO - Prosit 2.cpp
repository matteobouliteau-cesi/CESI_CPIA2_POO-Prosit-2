#include <iostream>
#include <fstream>
#include "File.h"

using namespace std;

int main()
{
    File f1;
    f1.write("Bo");
    f1.read(); f1.read();
    cout << f1.read();

    return 0;
}

