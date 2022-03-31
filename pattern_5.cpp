/*123
  456
  789*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    int count = 0;
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=n){
            count = count+1;
            cout<<count<<" ";
            j+=1;
        }
        cout<< endl;
        i+=1;
    } 
return 0;
}