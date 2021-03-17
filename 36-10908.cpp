// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1849
#include <cstdio>
#include <iostream>
#include <string>

int main (void){
    int nTestCase = -1;
    int mMax = -1, nMax = -1;
    int q = -1;

    std::cin >> nTestCase;
    for(int t = 0; t < nTestCase; t++){
        std::cin >> mMax >> nMax >> q;
        std::cout << mMax << " " << nMax << " " << q << std::endl;
        
        std::string line[mMax];
        for(int l = 0; l < mMax; l++){
            std::cin >> line[l];
        }

        int r = -1, c = -1;
        for(int i = 0; i < q; i++){
            std::cin >> r >> c;

            int minToBorder = std::min(std::min(mMax-1-r, r),
                                       std::min(nMax-1-c, c));
            // std::cout << "minToBorder: " << minToBorder << std::endl;
            char ch = line[r][c];
            int j = minToBorder;
            for(; j > 0; j--){
                for(int x = -j; x < j; x++){
                    for(int y = -j; y < j; y++){
                        if(line[r+x][c+y] != ch){
                            goto BB;
                        }
                    }
                }
                // success
                break;
                // fail
                BB:;
            }
            // std::cout << "j = " << j << std::endl;
            std::cout << 2*j + 1 << std::endl;
        }
    }

    return 0;
}

/*
1
7 10 4
abbbaaaaaa
abbbaaaaaa
abbbaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaccaaaaaa
aaccaaaaaa
1 2
2 4
4 6
5 2
*/