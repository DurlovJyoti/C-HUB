/*
fbonacci series
0 1 1 2 3 5...........
logic 0+1 =1 1+1 = 2 1+2=3.......
*/
#include<iostream>
using namespace std;
int main(){
    int n = 10;
    cin >> n;
    int first = 0, second =1;
    cout << first << " " << second << " ";
    for (int i=1;i<=n;i++){
        int nextNumber = first + second;
        cout << nextNumber<< " ";
        first = second;
        second = nextNumber;
    }
}