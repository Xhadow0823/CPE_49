// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2004
#include <iostream>
#include <vector>
#include <set>

int main (void){
    int n = -1, tmp = -1, cnt = 1;
    std::vector<int> bs;
    std::set<int> set;
    bool b2 = true;

    while(std::cin >> n){
        for(int i = 0; i < n; i++){
            std::cin >> tmp;
            bs.push_back(tmp);
        }

        for(int i = 0; i < bs.size(); i++){
            if(i!=bs.size()-1 && bs[i]>=bs[i+1]){
                // std::cout << "R1\n";
                b2 = false;
                break;
            }
            if(bs[i]<1){
                // std::cout << "R2\n";
                b2 = false;
                break;
            }
            for(int j = i; j < bs.size(); j++){
                set.insert(bs[i]+bs[j]);
            }
        }
        if(set.size() != n*(n-1)/2+n){
            // std::cout << "R3\n";
            b2 = false;
        }

        std::cout << "Case #" << cnt++ << ": It is " << (b2?"":"not ")<< "a B2-Sequence.\n" << std::endl;
        bs.clear();  set.clear();
    }

    return 0;
}

/*
4
1 2 4 8
4
3 7 10 14

*/