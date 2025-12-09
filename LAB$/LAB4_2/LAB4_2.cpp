
#include <iostream>
using namespace std;

int main()
{

    int a = 0;
    int b =0;

    while (a<100)
    {
        a++;
        b += a;
        cout << a<<"\n";
        
    }
    cout << "ผลรวมของเลข 1 ถึง 100 : "<<b;
}
