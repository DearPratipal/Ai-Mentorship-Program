//WAP to print reverse of a given number. 

#include<iostream>
using namespace std;

int main(){

    int n, rvsnum, remainder;
    cout<<"Reverse of a given number : ";
    cin>>n;

    remainder=0;

    for (int i = 1; n > 0; i++){

        int remainder = n % 10;
        n = n / 10;
        rvsnum = (rvsnum * 10) + remainder;
    }
    cout << "the reverse of given number is:" << rvsnum << endl;
    
    return 0;
}


