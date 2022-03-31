//to find sum of 1-n 
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int sum = 0;
    int i = 1;
    while (i<=n){
        sum = sum + i;
        
        i +=1;
    }
    cout << "the sum is" << sum;
    cout << endl;
}