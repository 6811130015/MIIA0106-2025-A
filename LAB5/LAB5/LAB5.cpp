#include<iostream>
#include<string>
using namespace std;

double squar(double x)
{
	double pi = 3.1432;
	double area = x * x * pi;
	return area;
}



int main()
{
	double radius;

	cout << "Please Write Radius : ";
	cin >> radius;


	double area = squar(radius);

	cout << "Circle AREA IS : " << area << endl;
	return 1;
}