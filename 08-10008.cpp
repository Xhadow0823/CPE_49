// http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=12&page=show_problem&problem=949
#include <cstdio>
#include <iostream>
#include <string>

int alphaTable['Z'-'A'+1];

int main(void){
    int nLine = -1;
    std::string line;

    for(int i = 0; i < 'Z'-'A'+1; i++){
        alphaTable[i] = 0;
    }

    std::cin >> nLine;  getchar();  // IMPORTANT: "/r/n"
    for(int l = 0; l < nLine; l++){
        std::getline(std::cin, line);
        // std::cout << "-> " << line << std::endl;
        for(auto a : line){
            a = toupper(a);
            std::cout << char(toupper(a)) << "|";
            if(a >= 'A' && a <= 'Z'){
                alphaTable[a-'A']++;
            }
        }
        std::cout << std::endl;
    }

    // output
    // for(int i = 0; i < 'Z'-'A'+1; i++){
    //     std::cout << char(i+'A') << ": " << alphaTable[i] << std::endl;
    // }

    while(true){
        // find max
        int maxi = 'Z'-'A';
        for(int i = 'Z'-'A'; i >= 0; i--){
            if(alphaTable[i] >= alphaTable[maxi]){
                maxi = i;
            }
        }
        if(alphaTable[maxi]){
            std::cout << char(maxi+'A') << " " << alphaTable[maxi] << std::endl;
            alphaTable[maxi] = 0;
        }else{
            break;
        }
    }

    return 0;
}

/* inputs: 
3
This is a test.
Count me 1 2 3 4 5.
Wow!!!!  Is this question easy?
*/