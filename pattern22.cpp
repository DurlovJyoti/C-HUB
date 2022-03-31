/*
   1
  23
 456  
*/


#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i =1;
    int start = 0;
    while(i<=n){
        int space = n-i;
        while(space){
            cout<<" ";
            space-=1;
        }
        
        int j =1;
        while (j<=i){
            start+=1;
            cout<<start;
            j+=1;
        }
        cout<<endl;
        i+=1;

    }
    return 0;
}