

#include <iostream>
#include <string>
using namespace std;

int main()
{
    
    string uid;
    string name;
    int point;

    cout << "Enter studen ID : \n";
    cin >> uid;

    cout << "Enter student name : \n";
    cin >> name;

    cout << "Enter score : \n";
    cin >> point;

    if (point >= 0 && point <= 100)
    {
        


        cout << 
            "------Student Report-------" << "\n";
        cout << "\n";
        cout << 
            "Student ID : "<<uid<<"\n";
        cout << 
            "Name       : "<<name << "\n";
        cout << 
            "Score      : "<<point << "\n";

        if (point >= 90) cout << 
            "Grade      : A";

        else if (point >= 80) cout << 
            "Grade      : B";

        else if (point >= 70) cout << 
            "Grade      : C";

        else if (point >= 60) cout << 
            "Grade      : D";
        else  cout << 

            "Grade      : F";
        cout <<"\n"<< 
            "---------------------------" << "\n";
        cout << "\n";
    }
    else
    {
        cout << "\nERROR";
    }





    


}
