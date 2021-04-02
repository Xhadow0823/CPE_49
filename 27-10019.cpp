// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=960
#include <iostream>
#include <vector>

int decToBinAndCount(int x){
    int b1 = 0;
    while(x > 0){
        b1 += (x%2);
        x /= 2;
    }
    return b1;
}

int hexToBinAndCount(int x){
    int b2 = 0;
    while(x > 0){
        b2 += decToBinAndCount(x%10);
        x /= 10;
    }
    return b2;
}

int main (void){
    int nLines = -1;

    std::cin >> nLines;
    for(int t = 0; t < nLines; t++){
        int m = 0;
        std::cin >> m;

        std::cout << decToBinAndCount(m) << " " << hexToBinAndCount(m) << std::endl;
    }

    return 0;
}

/*
3
265
111
1234
*/