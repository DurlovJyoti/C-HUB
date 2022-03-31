/* 1
   2 3
   4 5 6
   7 8 9 10 */
#include<iostream>
  using namespace std;
  int main(){
      int n;
      cin>>n;
      int i =1;
      int count = 0;
      while(i<=n){
          int j = 1;
          while(j<=i){
              count = count+1;
              cout << count << " ";
              j+=1;
          }
          cout << endl;
          i+=1;
                  
      }
      return 0;
}