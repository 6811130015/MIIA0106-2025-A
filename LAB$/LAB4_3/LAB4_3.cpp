
#include <iostream>
using namespace std;

int main()
{
    cout << "*******µÒÃÒ§¼Å¤Ù³*******";

    int a = 1;
    int b = 5;
    int c=0;

    cout << "\nµÒÃÒ§áÁè 1\n";
    for (int i = 1; i <= 12; i++)
    {
        c = a * i;
        cout << c<<"\n";
    }


    cout << "\nµÒÃÒ§áÁè 5\n";
    for (int i = 1; i <= 12; i++)
    {
        c = b * i;
        cout << c<<"\n";
    }
}
