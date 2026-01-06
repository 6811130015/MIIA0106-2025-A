#include <iostream>
#include <string>
using namespace std;
struct Student {
	//TODO 1) เติม field ใน struct Student ให้ครบ: studentID, nickname
	string id;
	string nickname;
	string lineid;
	string phone;
};
int main() {
	Student s1;
	Student* p = nullptr;
	// TODO 2) ใช้ pointer p ชี้ไปที่ s1
	p = &s1;
	// TODO 3) ก าหนดค่าโดยใช้ p->
	// TODO: p->studentID = ...
	p->id = "65050123";
	// TODO: p->nickname = ...
	p->nickname = "John";
	// TODO 4) แสดงผลโดยใช้ p->
	cout << "ID: " << p->id << endl;
	cout << "Nickname: " << p->nickname << endl;
	return 0;
}