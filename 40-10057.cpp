// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=998
#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>


int main (void){
    int n = -1;
    int tmp = -1;
    int maxMedian = -1, minMedian = -1;
    std::vector<int> x;

    while(std::cin >> n){
        for(int t = 0; t < n; t++){
            std::cin >> tmp;
            x.push_back(tmp);
        }
        
        // find max and min median!!
        std::sort(x.begin(), x.end());
        if(n % 2 == 0){
            maxMedian = minMedian = x[n/2];
        }else{
            minMedian = x[n/2-1];
            maxMedian = x[n/2];
        }

        int cnt = 0;
        for(auto a : x){
            if(a == maxMedian || a == minMedian){
                cnt++;
            }
        }

        int possibleMedian = 0;
        if(n % 2 == 0){
            possibleMedian = maxMedian - minMedian + 1;
        }else{
            possibleMedian = 1;
        }

        std::cout << minMedian << " " << cnt << " " << possibleMedian << std::endl;
        // process here

        x.clear();
    }

    return 0;
}

/*
2
10
10
4
1
2
2
4
*/