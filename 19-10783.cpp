// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=19&page=show_problem&problem=1724
#include <iostream>

int main(void){
    int nTest = -1;
    int a = -1, b = -1;

    std::cin >> nTest;
    for(int t = 0; t < nTest; t++){
        std::cin >> a >> b;
        // modify a and b
        if(a%2 == 0){  a++; }
        if(b%2 == 0){  b--; }
        std::cout << "Case " << t+1 << ": " << (a+b)*((b-a)/2+1)/2 << std::endl;
    }

    return 0;
}