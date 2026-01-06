#include <iostream>
using namespace std;
struct Address {
	int number;
	char road[20];
	char district[20];
	char province[20];
	// TODO: (ถ้าต้องการเพิ่ม) เช่น postcode[6]

};
struct Phone {
	char home[10];
	char mobile[10];
};
struct Student {
	char id[9];
	char name[20];
	char surname[20];
	// TODO:

};
int main() {
	Student s1;
	Address s2;
	Phone s3;
	// TODO 3) รับค่าข้อมูลนักศึกษา 1 คน (รวมที่อยู่ + โทรศัพท์)
	cout << "Enter Student Information:\n";
	cout << "ID: "; cin >> s1.id;
	cout << "Name: "; cin >> s1.name;
	cout << "Surname: "; cin >> s1.surname;
	cout << "Address - House Number: "; cin>> s2.number;
	cout << "Address - Road: "; cin>> s2.road;
	cout << "Address - District: "; cin>> s2.district;
	cout << "Address - Province:"; cin>> s2.province;
	cout << "Phone - Home: "; cin>> s3.home;
	cout << "Phone - Mobile: "; cin>> s3.mobile;
	cout << "\n===== Output =====\n";
	//// TODO 4): แสดงผลข้อมูลทั้งหมด (รวม address และ phone)
	cout << "Student Information:\n";
	cout << "ID: " << s1.id << endl;
	cout << "Name: " << s1.name << endl;
	cout << "Surname: " << s1.surname << endl;
	cout << "Address:\n";
	cout << "  House Number: " << s2.number << endl;
	cout << "  Road: " << s2.road << endl;
	cout << "  District: " << s2.district << endl;
	cout << "  Province: " << s2.province << endl;
	cout << "Phone:\n";
	cout << "  Home: " << s3.home << endl;
	cout << "  Mobile: " << s3.mobile << endl;
	return 0;
}