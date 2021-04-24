// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=4&page=show_problem&problem=208
#include <iostream>
#include <string>

int main (void){
    std::string line;

    while(std::getline(std::cin, line)){
        bool first = true;
        for(const auto a : line){
            if(a == '"'){
                if(!first){
                    std::cout << "''";
                }else{
                    std::cout << "``";
                }
                first = !first;
            }else{
                std::cout << a;
            }
        }
        std::cout << std::endl;
    }

    return 0;
}