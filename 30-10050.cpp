// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=991
#include <cstdio>
#include <iostream>
#include <vector>

int main (void){
    int nTestCase = -1, nSimDay = -1, nParty = -1;
    std::vector<int> hartals;

    std::cin >> nTestCase;
    for(int t = 0; t < nTestCase; t++){
        std::cin >> nSimDay >> nParty;

        int tmp = -1;
        for(int s = 0; s < nParty; s++){
            std::cin >> tmp;
            hartals.push_back(tmp);
        }

        int lostDay = 0;
        for(int i = 1; i <= nSimDay; i++){
            if((i % 7 != 6) && (i % 7 != 0)){  // is not Fri. or Sat.
                bool lost = false;
                for(auto a : hartals){
                    if(i % a == 0){
                        lost = true;
                    }
                }
                if(lost){
                    // std::cout << "-> " << i << std::endl;
                    lostDay++;
                }
            }
        }

        std::cout << lostDay << std::endl;


        hartals.clear();
    }

    return 0;
}

/*
2    testCases
14   days
3    parties
3    h1
4    h2
8    h3
100
4
12
15
25
40
*/