#include<iostream>
#include<string>
using namespace std;


void displayStudentInfo(string n, string i, double s, char g) {
	cout << "-------------------------" << endl;
	cout << "Name: " << n << " ID	: " << i << endl;
	cout << "Score: " << s << " | Grade: " << g << endl;
}

char calculateGrade(double score, char &grade) {
	if (score >= 80)
		grade = 'A';
	else if (score >= 70)
		grade = 'B';
	else if (score >= 60)
		grade = 'C';
	else if (score >= 50)
		grade = 'D';
	else
		grade = 'F';
	return grade;
}



int main()
{

	int size;
	cout << "Enter number of students: ";
	cin >> size;
	cin.ignore(); // เคลียร์ newline ก่อน getline

	string* name = new string[size];
	string* id = new string[size];
	double* score = new double[size];
	char* grade = new char[size];

	// TODO: วนรับข้อมูล size คน
	for(int i =0 ; i < size ; i++)
	{
		// Hint: getline(cin >> ws, name[i]); สําหรับชื่อ
		cout << "NAME : ";
		getline(cin >> ws, name[i]);
		cout<< "ID : ";
		cin >> id[i];
		cout << "SCORE : ";
		cin >> score[i];
		// TODO: calculateGrade(score[i], grade[i]);
		grade[i] = calculateGrade(score[i], grade[i]);
		displayStudentInfo(name[i], id[i],score[i], grade[i]);
	}

	

	// TODO: วนแสดงผล size คน ด้วย displayStudentInfo

	// TODO: delete[] ให้ครบทุกตัวแปร

	return 0;

}