/* WAP to check if a number is prime or not (use of break statement) */

/* #include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the Number : "<<endl;
    cin>>num;

    
} */

#include <iostream>
using namespace std;

int main() {
  int n, i, flag = 0;
  cout << "Enter a +Ve Number : ";
  cin >> n;

  for (i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      flag = 1;
      break;
    }
  }

  if (flag == 0)
    cout << n << " is a prime number." << endl;
  else
    cout << n << " is not a prime number." << endl;

  return 0;
}