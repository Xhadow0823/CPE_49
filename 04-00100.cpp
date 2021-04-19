// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=3&page=show_problem&problem=36
#include <iostream>

int count(int x){
    int cnt = 1;
    while(x!=1){
        cnt++;
        if(x%2){
            x = x*3 + 1;
        }else{
            x = x/2;
        }
    }
    return cnt;
}

int main (void){
    int i = -1, j = -1;
    int maximum = -1;

    while(std::cin >> i >> j){
        int begin = std::min(i, j), 
            end = std::max(i, j);
        maximum = -1;
        for(int a = begin; a <= end; a++){
            maximum = std::max(count(a), maximum);
        }
        std::cout << i << " " << j << " " << maximum << std::endl;
    }

    return 0;
}