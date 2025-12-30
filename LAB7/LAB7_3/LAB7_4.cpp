#include<iostream>
#include<string>
using namespace std;


int main()
{
	int arr[] = { 10, 20, 30, 40 };
	int* p = arr;
	// TODO

	cout << *p <<" " << *(p + 1) << " " << *(p + 2) << " " << *(p + 3) << endl;

	return 0;
}