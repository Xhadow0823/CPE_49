// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=16&page=show_problem&problem=1361
#include <iostream>
#include <string>
#include <map>

int main (void){
    int nLine = -1;
    std::cin >> nLine;
    std::string country, trash;
    std::map<std::string, int> dict;

    for(int t = 0; t < nLine; t++){
        std::cin >> country;
        std::getline(std::cin, trash);

        dict[country] ++;
    }

    for(auto a : dict){
        std::cout << a.first << " " << a.second << std::endl;
    }

    return 0;
}