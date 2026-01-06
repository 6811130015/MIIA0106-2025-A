#include <iostream>
#include <string>
using namespace std;
struct Student {
	string id;
	string nickname;
	string lineid;
	string phone;
};
int main() {
	Student s1; // ตัวแปรเดี่ยวของ struct
	cout << "=== Input Student 1 ===\n";
	// TODO: cin >> ...
	cout<<"Enter ID: "<< endl;
	cin>> s1.id;
	cout<<"Enter Nickname: "<< endl;
	cin>> s1.nickname;
	cout<<"Enter Line ID: "<< endl;
	cin>> s1.lineid;\
	cout<<"Enter Phone: "<< endl;
	cin>> s1.phone;

	cout << "\n=== Output Student 1 ===\n";
	// TODO: cout << ...
	cout<< s1.id << endl;
	cout<< s1.nickname << endl;
	cout<< s1.lineid << endl;
	cout<< s1.phone << endl;

	return 0;
}