// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=12&page=show_problem&problem=979
#include <cstdio>
#include <iostream>
#include <vector>


std::vector<bool> table;

int main (void){
    int n = -1;
    int last = -1, current = -1;

    while(std::cin >> n){
        std::cin >> last;
        table.assign(n, false);

        for(int i = 1; i < n; i++){
            std::cin >> current;
            table[abs(current-last)] = true;

            last = current;
        }
        
        if(std::all_of(table.begin()+1, table.end(), [](bool b){return b;})){
            std::cout << "Jolly" << std::endl;
        }else{
            std::cout << "Not jolly" << std::endl;
        }

        table.clear();
    }


    return 0;
}

/*
4 1 4 2 3
5 1 4 2 -1 6
*/