/*
if n is an integer  234
find the product 2*3*4 and sum 2+3+4 
substract bot the result. 
*/
#include<iostream>
using namespace std;
int main(){
int n;
cout << "Enter any digit posibly more than or equal to 3 digit  "<< endl;
cin >> n;
int product = 1;
int sum = 0;
while (n!=0){
    int digit = n % 10 ; //  extracting digit
    product = product*digit;
    sum = sum + digit;
    n = n/10 ;   // updating n
}
int sub = product - sum;
cout << sub;
cout << endl;
return 0;
}