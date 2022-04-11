/*
write func to find even and odd
*/
#include<iostream>
using namespace std;
bool isEven(int a){
    if(a&1){
        return 0;
    }
    return 1;
}
int main(){
    int num;
    cin>>num;
    if(isEven(num)){
        cout<<"even"<<endl;
    }
    else{cout<<"odd"<<endl;}
    return 0;
}