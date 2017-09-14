// #include <stdio.h>
#include <iostream>
#include <string>
#include<cstdlib>

int main(void){
    std::string *ptr;
    ptr = (std::string *)malloc(sizeof(std::string)*4);
    // std::string A = "hello";
    ptr[0] = "hello 2";
    
    std::cout<<ptr;
    
    free(ptr);
    
}