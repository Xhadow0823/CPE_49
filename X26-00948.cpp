// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=889
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>

std::vector<int> fib{1, 2};  // 0,1,    1,2,3.....
int main(void){
    int n = -1;
    int dec = -1, tmp = -1;
    std::string fib_base = "";

    std::cin >> n;

    // make fib
    int idx = 1;
    while(idx <= 100000001){
        fib.push_back(fib[idx-1] + fib[idx]);
        idx++;
    }
    std::cout << "fib done" << std::endl;

    for(int t = 0; t < n; t++){
        std::cin >> dec;
        tmp = dec;
        fib_base = "";

        idx = fib.size() - 1;
        while(tmp != 0){
            if(tmp >= fib[idx]){
                if(fib_base=="" || fib_base.back()!='1'){
                    fib_base += "1";
                    tmp -= fib[idx];
                }
            }else if(fib_base == ""){
                // do nothing
            }else{  // tmp < fib[idx]
                fib_base += "0";
            }
            idx--;
        }
        std::cout << "PP\n";
        
        while(idx>=0){
            fib_base += "0";
            idx--;
        }

        std::cout << dec << " = " << fib_base << " (fib)" << std::endl;
    }

    return 0;
}

/*
10
1
2
3
4
5
6
7
8
9
10
*/