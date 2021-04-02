// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1131
#include <iostream>
#include <vector>

int main(void){
    int n = 0, m = 0;
    std::vector<int> seq;

    while(std::cin >> n >> m){
        if(n < m || n<=1 || m<=1){
            std::cout << "Boring!" << std::endl;
            continue;
        }

        while(n > 1){
            if(n % m == 0){
                seq.push_back(n);
            }else{
                seq.clear();
                break;
            }
            n /= m;
        }
        if(seq.size() == 0){
            std::cout << "Boring!" << std::endl;
        }else{
            std::cout << seq[0];
            for(int i = 1; i < seq.size(); i++){
                std::cout << " " << seq[i];
            }
            std::cout << " 1" << std::endl;
        }
        seq.clear();
    }

    return 0;
}

/*
125 5
30 3
80 2
81 3
*/
/*
125 25 5 1
Boring!
Boring!
81 27 9 3 1
*/