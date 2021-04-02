// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=25&page=show_problem&problem=2307
#include <iostream>
#include <string>

int main (void){
    std::string num;
    int sum = 0;

    while(true){
        std::cin >> num;
        if(num == "0"){
            break;
        }

        while(num.length()>1){    
            sum = 0;
            for(auto a : num){
                sum += (a-'0');
            }
            num = std::to_string(sum);
        }
        std::cout << num << std::endl;
    }

    return 0;
}

/*
2
11
47
1234567892
0
*/