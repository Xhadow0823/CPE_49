// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=235
#include <iostream>
#include <vector>

int main (void){
    int nTest = -1, len = -1;
    int cnt = 0, tmp = -1;
    std::vector<int> train;

    std::cin >> nTest;
    for(int t = 0; t < nTest; t++){
        std::cin >> len;
        for(int l = 0; l < len; l++){
            std::cin >> tmp;
            train.push_back(tmp);
        }

        cnt = 0;
        for(int i = 0; i < len; i++){
            for(int j = i+1; j < len; j++){
                if(train[i] > train[j]){
                    // swap
                    std::swap(train[i], train[j]);
                    cnt++;
                }
            }
        }

        std::cout << "Optimal train swapping takes " << cnt << " swaps." << std::endl;

        train.clear();
    }

    return 0;
}

/*
3
3
1 3 2
4
4 3 2 1
2
2 1

*/