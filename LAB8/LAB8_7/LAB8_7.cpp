#include<iostream>
#include<string>
using namespace std;




struct Phone{
	string mobile;
	string home;
};

struct Parent{
	string name;
	string relationship;
	Phone parentphone;
	
};

struct Student {
	string id;
	string nickname;
	Phone myphone;
	Parent myparent;
};

void inputINFO(Student s[], int size)
{
	for (int i = 0; i < size; i++)
	{
			cout << "Enter Student " << i+1 << " ID: ";
			cin >> s[i].id;
			cout << "Enter Student " << i+1 << " Nickname: ";
			cin >> s[i].nickname;
			cout << "Enter Student " << i+1 << " Mobile Phone: ";
			cin >> s[i].myphone.mobile;
			cout << "Enter Student " << i+1 << " Home Phone: ";
			cin >> s[i].myphone.home;
			cout << "Enter Student " << i+1 << " Parent Name: ";
			cin >> s[i].myparent.name;
			cout << "Enter Student " << i+1 << " Parent Relationship: ";
			cin >> s[i].myparent.relationship;
			cout << "Enter Student " << i+1 << " Parent Mobile Phone: ";
			cin >> s[i].myparent.parentphone.mobile;
			cout << "Enter Student " << i+1 << " Parent Home Phone: ";
			cin >> s[i].myparent.parentphone.home;
		
	}
}

void outputINFO(Student s[] , int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "===== Student " << i+1 << " Information =====" << endl;
		cout << "ID: " << s[i].id << endl;
		cout << "Nickname: " << s[i].nickname << endl;
		cout << "Mobile Phone: " << s[i].myphone.mobile << endl;
		cout << "Home Phone: " << s[i].myphone.home << endl;
		cout << "Parent Name: " << s[i].myparent.name << endl;
		cout << "Parent Relationship: " << s[i].myparent.relationship << endl;
		cout << "Parent Mobile Phone: " << s[i].myparent.parentphone.mobile << endl;
		cout << "Parent Home Phone: " << s[i].myparent.parentphone.home << endl;
	
	}
}

int main()
{


	const int SIZE = 2;
	Student students[SIZE];

	inputINFO(students,SIZE);
	outputINFO(students,SIZE);



	return 0;
}