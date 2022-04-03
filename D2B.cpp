/*
Convert decimal to binary
steps
find the bit
reverse it
update n
*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<< "enter decimal no"<< endl;
    cin>> n;
    int ans = 0;
    int i =0;
    while(n!=0){
        int bit = n&1;
        ans = (bit*pow(10,i))+ans;
        n = n>>1;
        i++;

    }
    cout<<ans<<endl;
    return 0;

}



