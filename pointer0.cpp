#include<iostream>

int main(){

    int var = 8;    //var is value
    int* ptr = &var; //&var address ptr holds the address
    //typeless
    *ptr=10; //gives the value stored at that address
    //std::cin.get();
    std::cout<<*ptr<<'\n';
    
}