#include<iostream>
#include<string>
using namespace std;

int main()
{
	int score = 50;
	int* ptr = &score;
	// TODO
	cout<<"score:  " << score << endl;
	cout << "&score:  " << &score << endl;
	cout << "ptr:     " << ptr << endl;
	


	return 0;
}