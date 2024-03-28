//Print all the even numbers from 1 to 100


#include<iostream>
using namespace std;

int main(){

    int num=100;
    
    for(int i=1; i<=num; i++){
        if(i%2==0){
            cout<<i<<endl;
        }
        
    }
    return 0;
}

