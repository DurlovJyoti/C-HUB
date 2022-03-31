//to print character from A-Z,a-z and numeric 0-9
#include<iostream>
using namespace std;
int main(){
    int i = 0;
    while(i<=25){
        char CH = 'A' + i;
        cout<<CH<<" ";
        i +=1;
    }
    cout<< endl;
    int k = 0;
    while(k<=25){
        char ch = 'a' + k;
        cout<< ch << " ";
        k+=1;
    }
    cout<< endl;
    for(int j=0; j<10; j++){
        cout<<j<<" ";
    }
    cout << endl;

}