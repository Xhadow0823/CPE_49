// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=14&page=show_problem&problem=1209
#include <iostream>
#include <string>
#include <vector>

int main (void){
    int x = -1;
    std::string line, trash;
    std::vector<long long> coefs;

    while(std::cin >> x){
        std::getline(std::cin, trash);
        std::getline(std::cin, line);

        int substrBegin = 0, substrEnd = 0;
        while((substrEnd=line.find(" ", substrBegin)) != std::string::npos){
            coefs.push_back(  std::stoll(line.substr(substrBegin, substrEnd-substrBegin)));
            substrBegin = substrEnd+1;
        }
        // coefs.push_back(  std::stoll(line.substr(substrBegin, line.length()-substrBegin)));  // USELESS!!

        // process
        long long power = 1, ans = 0;
        for(int i = coefs.size()-1; i >=0; i--){
            ans += (coefs[i] * power * (coefs.size()-i));
            power *= x;
        }
        std::cout << ans << std::endl;

        coefs.clear();
    }

    return 0;
}

/*
7
1 -1
2
1 1 1

*/