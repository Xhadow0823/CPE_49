// https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2296
#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

bool isOdd(int n){
    return bool(abs(n%2));
}

int n = -1, m = -1;
bool cmp(int a, int b){
    if(a%m != b%m){  // modulo m , ascending
        return a%m < b%m;
    }else if(isOdd(a) != isOdd(b)){
        return isOdd(a);  // odd -> even
    }else if(isOdd(a)){  //bigger odd -> smaller odd
        return a > b;
    }else{  // smaller even -> bigger even
        return a < b;
    }
}

int main (void){
    // int n = -1, m = -1;
    int tmp = 0;
    std::vector<int> nums;

    while(true){
        std::cin >> n >> m;
        std::cout << n << " " << m << std::endl;
        if(n*m == 0){
            break;
        }

        for(int i = 0; i < n; i++){
            std::cin >> tmp;
            nums.push_back(tmp);
        }
        std::sort(nums.begin(), nums.end(), cmp);

        for(auto a : nums){
            std::cout << a << std::endl;
        }
        nums.clear();
    }

    return 0;
}

/*
15 3
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
0 0
*/