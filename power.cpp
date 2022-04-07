/*
Given an integer n, print true it is a power of two else false
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    int count = 0;
    while(n!=0){
       if (n&1){
           count += 1;
       }
       n = n >> 1;

    }
    if(count==1){cout<<"True";} // since power of 2 contains only one 1 bit so comparing count with 1
    else{cout<<"False";}
    return 0;
}