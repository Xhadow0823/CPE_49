// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=13&page=show_problem&problem=1042
#include <iostream>

int main (void){
    unsigned long long n;
    int cnt = 1;

    while(std::cin >> n){
        std::cout << cnt++ << std::endl;
    }

    return 0;
}
// ’kuti’ (10,000,000), ’lakh’ (100,000), ’hajar’ (1,000), ’shata’ (100)
//        8                     6                  4                2
//<=999999999999999

//23764
//1. 23 hajar 7 shata 64
//45897458973958
//2. 45 lakh 89 hajar 7 shata 45 kuti 89 lakh 73 hajar 9 shata 58