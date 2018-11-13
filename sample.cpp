#include<iostream>

int sum(int,int);

int main(){
    std::cout << "This is master" << std::endl;
    int a=8; int b=12;
    std::cout << sum(a,b) << std::endl;
    return 0;
}

int sum(int a,int b){
    return a+b;
}