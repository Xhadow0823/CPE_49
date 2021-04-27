// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1753
#include <iostream>

int main (void){
    int nTest = -1;
    long long s = -1, d = -1;
    std::cin >> nTest;

    for(int t = 0; t < nTest; t++){
        std::cin >> s >> d;

        if(d > s){
            std::cout << "impossible" << std::endl;
        }else if((s+d)%2 != 0 || (s-d)%2 != 0){
            std::cout << "impossible" << std::endl;
        }else{
            std::cout << (s+d)/2 << " " << (s-d)/2 << std::endl;
        }
    }

    return 0;
}

/*
2
40 20
20 40

*/

// if a > b:
// a + b = s
// a - b = d
// 2a = s + d
// a = (s+d)/2
// 2b = s - d
// b = (s-d)/2