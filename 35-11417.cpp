// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2412
#include <iostream>

int GCD(int i, int j){
    int tmp = 0;
    if(j > i){
        tmp = i;
        i = j;
        j = tmp;
    }
    while(j > 0){
        tmp = i % j;
        i = j;
        j = tmp;
    }
    return i;
}

int main (void){
    int n = -1, g = 0;

    while(true){
        std::cin >> n;
        if(n == 0){
            break;
        }

        g = 0;
        for(int i = 1; i < n; i++){
            for(int j = i+1; j <= n; j++){
                g += GCD(i, j);
            }
        }

        std::cout << g << std::endl;
    }

    return 0;
}

/*
10
100
500
0
*/