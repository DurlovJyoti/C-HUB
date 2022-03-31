//* * *
//* * *
//* * *
// print the pattren above
#include<iostream>
int main(){
int n;
std::cin >> n;
int row = 1;
while (row <=n){
    int col = 1;
    while (col <= n){
        std::cout << "*" << " ";
        col+=1;
    }
    std::cout << std::endl;
    row+=1;
}
return 0;


}