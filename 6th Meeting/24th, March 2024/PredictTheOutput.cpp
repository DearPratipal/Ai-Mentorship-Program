/* Predict the output.
int main()
{
int sub[50], i ;
for ( i = 0 ; i <= 48 ; i++ ) ;
{
sub[i] = i ;
cout<<sub[i]<<endl ;
}
return 0;
} */
#include<iostream>
using namespace std;

int main()
{
int sub[50], i ;
for ( i = 0 ; i <= 48 ; i++ ) ;
{
sub[i] = i;
cout<<sub[i]<<endl ;
}
return 0;
}

/* The Output is 49 because the cout of [i]; 
increased value of [i] is 49 */