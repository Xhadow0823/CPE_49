// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=12&page=show_problem&problem=996
#include <cstdio>
#include <iostream>

int main (void){
    int a = -1, b = -1;
    while(std::cin >> a >> b){
        std::cout << b-a << std::endl;
    }

    return 0;
}

/*
10 12
10 14
100 200
*/