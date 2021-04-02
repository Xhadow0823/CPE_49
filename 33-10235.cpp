// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1176
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

bool isPrime(std::string num){
    int n = std::stoi(num);
    int limit = sqrt(n);
    for(int i = 2; i <= limit; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

int main (void){
    std::string n, rn;

    while(std::cin >> n){
        // is prime ?
        if(isPrime(n)){
            rn = n;
            std::reverse(rn.begin(), rn.end());

            // if reverse is a prime?
            if(isPrime(rn)){
                std::cout << n << " is emirp." << std::endl;
            }else {  // reverse is not a prime, but n is prime
                std::cout << n << " is prime." << std::endl;
            }
        }else{  // not a prime
            std::cout << n << " is not prime." << std::endl;
        }
    }

    return 0;
}

/*
17
18
19
179
199
*/