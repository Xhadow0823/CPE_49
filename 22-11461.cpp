// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2456
#include <iostream>
#include <vector>

int main (void){
    int a = -1, b = -1, cnt = 0;
    const int limit = 100000;
    std::vector<int> squares;

    for(int i = 1; i <= limit; i++){
        squares.push_back(i*i);
    }

    while(std::cin >> a >> b){
        if(a * b == 0){
            break;
        }

        cnt = 0;
        for(const auto it : squares){
            if(it > b){
                break;
            }else if(it>=a && it<=b){
                cnt++;
            }
        }
        std::cout << cnt << std::endl;
    }

    return 0;
}

/*
1 4
1 10
0 0

*/