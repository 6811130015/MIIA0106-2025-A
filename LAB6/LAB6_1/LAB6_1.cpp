#include<iostream>
#include<string>
using namespace std;

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

int main()
{

	const int N = 5;
	string name[N], id[N];
	double score[N];
	char grade[N];
	// TODO: วนรับข้อมูล N คน
	for( int i =0 ; i<5 ; i++)
	{
		// Hint: getline(cin >> ws, name[i]); สําหรับชื่อ
		cout << "NAME : ";
		getline(cin >> ws, name[i]);
		cout<< "ID : ";
		cin >> id[i];
		cout << "SCORE : ";
		cin >> score[i];

		// TODO: calculateGrade(score[i], grade[i]);

		grade[i] = calculateGrade(score[i]);

		cout << "Name: " << name[i] << endl;
		cout << "ID: " << id[i] << endl;
		cout << "Score: " << score[i] << endl;
		cout << "Grade: " << grade[i] << endl;

		// TODO: วนแสดงผล N คน ด้วย displayStudentInfo

	}
	delete[] name;
	delete[] id;
	delete[] score;
	delete[] grade;



	
	return 0;

}

