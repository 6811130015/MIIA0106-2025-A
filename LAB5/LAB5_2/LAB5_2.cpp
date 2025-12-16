#include<iostream>
#include<string>
using namespace std;

double num(double a ,double b , double c) 
{
    if (a >= b && a >= c) {
        return a;
    }
    else if (b >= a && b >= c) {
        return b;
    }
    else {
        return c;
    }
}

int main()
{
    int num1;
    int num2;
    int num3;
    cout<< "Enter first number: ";
    cin>> num1;
    cout<< "Enter second number: ";
    cin>> num2;
    cout<< "Enter third number: ";
    cin>> num3;

    int maxnum = num(num1, num2, num3);

    std::cout << "Maximum  is: " << maxnum << std::endl;

	return 1;
}