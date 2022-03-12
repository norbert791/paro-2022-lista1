#include <iostream>
#include <cstdio>

int main(int N, char** args) {
    if (N < 2) {
        std::cout<<"You must input an integer."<<std::endl;
        return 0;
    }
    long int age = std::strtol(args[1],nullptr, 10);
    if (age >= 18) {
        std::cout<<"Happy adult life!"<<std::endl;
    }
    else if (age > 0 && age < 17) {
        std::cout<<"Happy adolescence!"<<std::endl;
    }
    else {
        std::cout<<"Happy birthdate-awaiting!"<<std::endl;
    }
    return 0;
}
