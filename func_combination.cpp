/*
to find combination nCr using factorial
*/
#include<iostream>
using namespace std;

int fact(int n){
    int fct=1;
    for(int i=1;i<=n;i++){
        fct = fct*i;
    }
    return fct;
}
int nCr(int n,int r){
    int numerator = fact(n);
    int denomerator = fact(n-r)*fact(r);
    double ans = numerator/denomerator;
    return ans;
}
int main(){
    int n,r;
    cin>>n>>r;
    cout<<nCr(n,r)<<endl;
    return 0;
}