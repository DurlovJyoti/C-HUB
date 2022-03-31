/*
    1
   121
  12321
 1234123
 */
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int space= n-i;
        while(space){
            cout<<" ";
            space = space-1;
        }
        int j=1;
        while(j<=i){
            cout<<j;
            j=j+1;
        }
        int count = i-1;
        while(count){
            cout<<count;
            count =count-1;
        }
        cout<<endl;
        i+=1;
    }
return 0;
}