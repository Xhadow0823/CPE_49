// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1130
#include <cstdio>
#include <iostream>
#include <string>

std::string field[100];
int n = -1, m = -1;
void addAround(int x, int y){
    for(int i = x-1; i <= x+1; i++){
        for(int j = y-1; j <= y+1; j++){
            if(i < 0 || j < 0 || i >= n || j >= m || (i==x&&j==y) || field[i][j]=='*'){
                continue;
            }else{
                field[i][j]++;
            }
        }
    }
}
int main (void){
    // int n = -1, m = -1;
    // std::string field[100];
    int fieldCnt = 1;

    while(true){
        std::cin >> n >> m;
        if(n*m == 0){
            break;
        }

        for(int r = 0; r < n; r++){
            std::cin >> field[r];
            for(auto& a : field[r]){
                if(a == '.'){
                    a = '0';
                }
            }
        }
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(field[i][j] == '*'){
                    addAround(i, j);
                }
            }
        }

        // output
        std::cout << "Field #" << fieldCnt++ << ":" << std::endl;
        for(int i = 0; i < n; i++){
            std::cout << field[i] << std::endl;
        }
        std::cout << std::endl;
    }

    return 0;
}

/*
4 4
*...
....
.*..
....
3 5
**...
.....
.*...
0 0
*/