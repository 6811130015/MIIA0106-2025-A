#include<iostream>
#include<string>
using namespace std;

int swap(int a , int b)
{

	int swap = a;
	a = b;
	b = swap;
	cout << "Swap : a = " << a << ", b = " << b << endl;
	return 0;
}

int swapref(int& a, int& b)
{
	int swapref = a;
	a = b;
	b = swapref;
	cout << "Swap : a = " << a << ", b = " << b << endl;
	return 0;
}
int main()
{
	int num1;
	int num2;

	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;
	
	cout<< "Before Swap : " << "a = " << num1 << " b = " << num2 << endl;
	swap(num1, num2);



	cout<< "Before Swapref : " << "a = " << num1 << " b = " << num2 << endl;
	swapref(num1, num2);

	return 1;
}