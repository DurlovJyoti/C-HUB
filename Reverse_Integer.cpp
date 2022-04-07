/*
Given a signed 32-bit integer x, returns x with its digit reversed. I f reversing x causes the value to go outside the signed 32-bit integer range.
*/
#include<iostream>
#include<limits.h>
using namespace std;
int main(){
int n;
cin>> n;
int ans = 0;
while(n!=0){
    int digit = n%10; 
    if(ans>INT_MAX/10 || ans<INT_MIN/10){
        return 0;
    }
    ans = (ans*10)+digit;
    n = n/10;
}
cout << ans << endl;
return 0;
}



