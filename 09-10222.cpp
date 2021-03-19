// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=14&page=show_problem&problem=1163
#include <cstdio>
#include <iostream>
#include <string>

std::string kb = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";

int main (void){
    std::string line;
    std::getline(std::cin, line);

    for(auto a : line){
        if(a == ' '){
            std::cout << " ";
        }else{
            int decodedIdx = kb.find(tolower(a))-2;
            std::cout << kb[decodedIdx];
        }
    }
    std::cout << std::endl;

    return 0;
}

/*
k[r dyt I[o
*/


//o -> [
//k -> h