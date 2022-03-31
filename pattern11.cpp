/*
A A A 
B B B
C C C
*/
#include<iostream>
  using namespace std;
  int main(){
      int n;
      cin>>n;
      int i =0;
      while(i<=n-1){
           int j = 1;
           while (j<=n){
               char ch = 'A'+i;
               cout << ch << " ";
               j+=1;
           }
           cout << endl;
           i+=1;
      }
  return 0;
  }