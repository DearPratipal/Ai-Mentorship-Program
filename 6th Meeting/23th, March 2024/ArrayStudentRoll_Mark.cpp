/* Given an array of marks of students, if the
mark of any student is less than 35 print its roll
number. [roll number here refers to the index of the
array.] */

#include<iostream>
using namespace std;
int main(){
    int marks[5] = {65,47,89,32,14};
    int rollNo = marks[0];
    for (int idx = 0; idx < 5; idx++)
    {
        if (marks[idx] < 35)
        {
            rollNo = idx;
            cout<<"the roll number of student having number less than 35 is :"<<rollNo<<endl; 
        }
        else
        continue;
        
    }
    return 0;
}