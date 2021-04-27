// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=13&page=show_problem&problem=1111
#include <iostream>

int main (void){
    long long s = -1, d = -1;

    while(std::cin >> s >> d){
        while(d>0){
            d -= (s);
            s++;
        }
        std::cout << s-1 << std::endl;
    }

    return 0;
}

/*
1 6
3 10
3 14

*/
/*
3
5
6
*/