// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1193
#include <iostream>
#include <string>
#include <map>
#include <algorithm>

int main (void){
    std::string line, out;
    std::map<char, int> table;

    int cnt = 0;
    while(std::cin >> line){
        for(const auto a : line){
            table[a]++;
        }

        std::cin >> line;
        for(const auto a : line){
            if(table[a]){
                out.push_back(a);
                table[a]--;
            }
        }

        std::sort(out.begin(), out.end());
        std::cout << out << std::endl;
        out.clear();
        table.clear();
    }


    return 0;
}