// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1034
#include <cstdio>
#include <iostream>
#include <string>

int main (void){
    std::string num;
    int maxBase = 0;

    while(std::cin >> num){
        maxBase = 0;

        for(auto digit : num){
            if(digit <= 'Z'){
                if(digit >= 'A'){  //A - Z
                    maxBase = std::max(digit - 'A' + 10 + 1, maxBase);
                }else if(digit >= '0'){  //0 - 9
                    maxBase = std::max(digit - '0' + 1, maxBase);
                }else{
                    continue;
                }
            }else if(digit <= 'z'){  //a - z
                maxBase = std::max(digit - 'a' + 36 + 1, maxBase);
            }else{
                continue;
            }
        }
        std::cout << "-> " << int(maxBase) << std::endl;
    }

    return 0;
}