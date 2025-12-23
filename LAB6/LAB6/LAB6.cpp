
#include<iostream>
#include<string>
using namespace std;

char calculateGrade(double score);

int main()
{
	string name, id;
	double score;
	char grade;
	// TODO: รับชื่อ (getline)
	cout << "NAME : ";
	getline(cin , name);
	// TODO: รับรหัสและคะแนน (cin)
	cout<< "ID : ";
	cin >> id;
	// TODO: calculateGrade(score, grade);
	cout << "SCORE : ";
	cin >> score;
	// TODO: displayStudentInfo(name, id, score, grade);
	grade = calculateGrade(score);

	cout << "Name: " << name << endl;
	cout << "ID: " << id << endl;
	cout << "Score: " << score << endl;
	cout << "Grade: " << grade << endl;

	cin.ignore();

	return 0;
}

char calculateGrade(double score) {
	char grade;
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