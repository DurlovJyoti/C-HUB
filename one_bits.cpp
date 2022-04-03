/*
To find no of one bits from an unsigned integer
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
    cout << count;
    cout << endl;
    return 0;
}
