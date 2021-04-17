// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=12&page=show_problem&problem=976
#include <iostream>

int main (void){
    unsigned long long int a = -1, b = -1, c = -1;  // unsigned long long !!!!!!
    int cnt = 0;
    int lsdA = 0, lsdB = 0;

    while(true){
        std::cin >> a >> b;
        if(a==0 && b==0){
            break;
        }

        cnt = 0;  c = 0;
        while(a>0 || b>0){
            lsdA = a % 10;
            a /= 10;
            lsdB = b % 10;
            b /= 10;

            if(lsdA + lsdB + c >= 10){
                cnt++;
                c = 1;
            }else{
                c = 0;
            }
        }

        switch(cnt){
            case 0:
                std::cout << "No carry operation.";
                break;
            case 1:
                std::cout << "1 carry operation.";
                break;
            default:
                std::cout << cnt << " carry operations.";
        }
        std::cout << std::endl;
    }

    return 0;
}

/*
123 456
555 555
123 594
0 0
*/