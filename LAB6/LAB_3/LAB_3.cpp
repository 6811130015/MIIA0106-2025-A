// LAB_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;

void displayStudentInfo(string n, string i, double s, char g) {
    cout << "-------------------------" << endl;
    cout << "Name: " << n << " | ID: " << i << endl;
    cout << "Score: " << s << " | Grade: " << g << endl;
}

char calculateGrade(double score) {
	char grade;
	if (score >= 320)
		grade = 'A';
	else if (score >= 280)
		grade = 'B';
	else if (score >= 240)
		grade = 'C';
	else if (score >= 200)
		grade = 'D';
	else
		grade = 'F';
	return grade;
}


int main()
{
    const int N = 3; // students
    const int M = 4; // subjects

    string name[N], id[N];
    double score[N][M];
    double total[N];
    char grade[N];

    // TODO: วนรับ name/id
    for (int i = 0; i < 3; i++)
    {
        cout << "\n" << "NAME : ";
        getline(cin, name[i]);
        cout << "NAME : " << i + 1 << ": " << name[i];
        cout << "ID : ";
        cin >> id[i];
        total[i] = 0;

        for (int j = 0; j < M; j++) {
            cout << "SCORE : ";
            cin >> score[i][j];
            total[i] += score[i][j];
        }


        double currentScore = total[i];

        grade[i] = calculateGrade(total[i]);

        displayStudentInfo(name[i], id[i], total[i], grade[i]);
        

	}


    // TODO: nested loop รับคะแนน M วิชา + รวม total[i]
    // TODO: calculateGrade(total[i], grade[i]);

    // TODO: แสดงผลโดยใช้ displayStudentInfo(name[i], id[i], total[i], grade[i]);

    return 0;
}

