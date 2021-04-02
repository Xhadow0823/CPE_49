// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1863
#include <iostream>
#include <string>

int main (void){
    std::string line, lineCpy;
    int digitSum = 0, degree = 0;

    while(true){
        std::cin >> line;
        if(line == "0"){
            break;
        }

        digitSum = 0;  degree = 0;
        lineCpy = line;
        while(digitSum != 9){
            // compute the digitSum
            digitSum = 0;
            for(auto a : lineCpy){
                digitSum += (a-'0');
            }
            if(digitSum%9 == 0){
                degree++;
                lineCpy = std::to_string(digitSum);
            }else{
                break;
            }
        }

        if(degree == 0){
            std::cout << line << " is not a multiple of 9." << std::endl;
        }else{
            std::cout << line << " is a multiple of 9 and has 9-degree " << degree << "." << std::endl;
        }
    }

    return 0;
}

/*
999999999999999999999
9
9999999999999999999999999999998
0
*/