/*
1234
 234
  34
   4
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i =1;
    while(i<=n){
        int space = i-1;
        while(space){
            cout<<" ";
            space = space -1;
        }
        int j= n-i+1;
       int start =i;
        while(j){
            cout<<start;
            start +=1;
            j-=1;
        }
        cout<< endl;
        i+=1;

    }
    return 0;
}