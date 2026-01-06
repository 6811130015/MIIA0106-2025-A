#include <iostream>
#include <string>
using namespace std;
struct Student {
	// TODO
	string id;
	string nickname;
	string lineid;
	string phone;
};
// TODO: เขียนฟังก์ชันนี้
void printStudent(Student s1) {
	// TODO
	cout << s1.id << endl;
	cout << s1.nickname << endl;
	cout << s1.lineid << endl;
	cout << s1.phone << endl;
}
int main() {
	Student s1;
	cout << "=== Input Student 1 ===\n";
	// TODO: cin >> ...
	cout << "Enter ID: " << endl;
	cin >> s1.id;
	cout << "Enter Nickname: " << endl;
	cin >> s1.nickname;
	cout << "Enter Line ID: " << endl;
	cin >> s1.lineid; \
	cout << "Enter Phone: " << endl;
	cin >> s1.phone;


	cout << "\n=== Output (from function) ===\n";
	// TODO: เรียก printStudent
	printStudent(s1);
	return 0;
}