//Write a program to check whether a character is an alphabet or not.
#include<iostream>
using namespace std;

int main(){
    char Text;
    
    //Number Likhe
    cout<<"Enter the Three Number :";
    cin>>Text;

    if((Text >= 'a' && Text <= 'z') || (Text >= 'A' && Text <= 'Z')){
        cout<<"The Text "<<Text<<" is a Alphabet.";
    }
    else{
        cout<<"The Text "<<Text<<" is a Alphabet.";
    }
return 0;
}