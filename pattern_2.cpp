/* 1 1 1
    2 2 2
    3 3 3*/
#include<iostream>
int main(){
    int n;
    std::cin >> n;
    int i = 1;
    while(i<=n){
        int j =1;
        while (j<n){
            std::cout << i << " ";
            j+=1;
        }
        std::cout<< std::endl;
        i+=1;
    }
return 0;
}