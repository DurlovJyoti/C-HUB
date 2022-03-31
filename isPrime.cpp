// to find the prime no
// check %n !=0 from 2 to n-1 if the no n to find is prime or not.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter the no"<< " ";
    cin >> n;
    bool isPrime = 1;
    int i = 2;
    while( i < n){
        if (i%n == 0){
            isPrime = 0;
            break;
        }
        i+=1;
    }
    if (isPrime == 0){
        cout << "not a prime no"<< endl;
        }
    else{
        cout << "prime"<< endl;
        }    
    return 0;

} 