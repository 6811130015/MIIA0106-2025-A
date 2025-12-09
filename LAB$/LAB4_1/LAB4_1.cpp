// LAB4_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int a = 2;

    int b = 0;
    int c = 0;
    while (b <1)
    {
        
        if (c % a == 0)
        {
            cout << c<<"\n";
        }

        if (c > 20)
        {
            b++;
        }
        c++;
    }


}

