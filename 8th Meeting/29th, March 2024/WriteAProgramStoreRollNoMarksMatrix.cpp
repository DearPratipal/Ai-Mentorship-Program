/* Write a program to store roll number and 
marks obtained by 4 students side by side in a 
matrix */

#include <iostream>

using namespace std;

int main() {
    const int num_students = 4;
    const int num_subjects = 3;

    int student_marks[num_students][num_subjects + 1]; // +1 for roll numbers

    
    for (int i = 0; i < num_students; ++i) {
        cout << "Enter roll number for student " << i + 1 << ": ";
        cin >> student_marks[i][0];

        cout << "Enter marks for student " << i + 1 << " (out of 100) for each subject:" << endl;

        for (int j = 1; j <= num_subjects; ++j) {
            cout << "Subject " << j << ": ";
            cin >> student_marks[i][j];
        }
    }


    cout << "\nRoll Number\tSubject 1\tSubject 2\tSubject 3" << endl;
    
    for (int i = 0; i < num_students; ++i) {
        cout << student_marks[i][0] << "\t\t";
        for (int j = 1; j <= num_subjects; ++j) {
            cout << student_marks[i][j] << "\t\t";
        }
        cout << endl;
    }

    return 0;
}
