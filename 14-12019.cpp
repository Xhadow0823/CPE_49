// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=242&page=show_problem&problem=3170
#include <cstdio>
#include <iostream>

const char* weekDay[] = {"Monday",
                         "Tuesday",
                         "Wednesday",
                         "Thursday",
                         "Friday",
                         "Saturday",
                         "Sunday"};
//  month           1   2  3  4  5  6   7  8  9  10 11  12
int mondayDay[] = {10, 21, 0, 4, 9, 6, 11, 8, 5, 10, 7, 12};

int main (void){
    int nLine = -1;
    int m = -1, d = -1;

    std::cin >> nLine;

    for(int l = 0; l < nLine; l++){
        std::cin >> m >> d;

        std::cout << weekDay[(d-mondayDay[m-1] + (7*5)) % 7] << std::endl;
    }

    return 0;
}

/*
8
1 6
2 28
4 5
5 26
8 1
11 1
12 25
12 31
*/