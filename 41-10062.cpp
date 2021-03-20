// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1003
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

std::vector<int> table;
int main (void){
    std::string line;

    while(std::cin >> line){
        table.assign((128-32), 10000);  // no 0~31 and 128~255
        for(auto a : line){
            if(table[a-32] == 10000){
                table[a-32] = 1;
            }else{
                table[a-32]++;
            }
        }

        while(true){
            int idx = std::distance(table.begin(), std::min_element(table.begin(), table.end()));
            int currentMin = table[idx];
            if(currentMin == 10000){
                break;
            }
            for(int i = table.size()-1; i >= idx; i--){
                if(table[i] == currentMin){
                    // std::cout << char(i+32) << " " << table[i] << std::endl;
                    std::cout << i+32 << " " << table[i] << std::endl;
                    table[i] = 10000;
                }
            }
        }
        std::cout << std::endl;
    }

    return 0;
}