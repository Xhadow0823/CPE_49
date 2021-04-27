// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2324
#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <string>

int main (void){
    int nTest = -1, n = -1;
    long long tmp = -1;
    std::vector<long long> mat;
    std::string trash;

    std::cin >> nTest;
    for(int t = 0; t < nTest; t++){
        std::cin >> trash >> trash >> n;

        bool sym = true;
        for(int i = 0; i < n*n; i++){
            std::cin >> tmp;
            if(tmp<0){
                sym = false;
            }
            mat.push_back(tmp);
        }

        for(int i = 0; i < (n*n)/2 && sym; i++){
            if(mat[i]!=mat[n*n-i-1]){
                sym = false;
            }
        }

        std::cout << "Test #" << t+1 << ": " << (sym? "Symmetric.":"Non-symmetric.") << std::endl;
        mat.clear();
    }

    return 0;
}

/*
2
N = 3
5 1 3
2 0 2
3 1 5
N = 3
5 1 3
2 0 2
0 1 5

*/