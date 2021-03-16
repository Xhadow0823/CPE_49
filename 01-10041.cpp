// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=12&page=show_problem&problem=982
#include <cstdio>
#include <iostream>
#include <cmath>

int main (void){
    int lines = 0, nums = 0;
    int n = -1;
    int max = -1, min = 30001;

    std::cin >> lines;
    for(int i = 0; i < lines; i++){
        std::cin >> nums;
        for(int j = 0; j < nums; j++){
            std::cin >> n;
            min = std::min(n, min);
            max = std::max(n, max);
        }
        std::cout << abs(max-min) << std::endl;
    }


    return 0;
}