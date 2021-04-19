// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1583
#include <iostream>

unsigned long long f(unsigned long long x, unsigned long long y){
    return (((1+(x+y))*(x+y))/2 + x);
}

int main(void){
    int nTest = -1;
    std::cin >> nTest;

    unsigned long long x1 = -1, y1 = -1, x2 = -1, y2 = -1;
    for(int t = 0; t < nTest; t++){
        // cin
        std::cin >> x1 >> y1 >> x2 >> y2;
        std::cout << "Case " << t+1 << ": " << f(x2, y2)-f(x1, y1) << std::endl;
    }

    return 0;
}