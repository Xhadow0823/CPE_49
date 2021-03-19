// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1134
#include <iostream>
#include <string>

int main (void){
    int nTestCase = -1;
    std::string s1, s2;
    int s1Dec = 0, s2Dec = 0;

    std::cin >> nTestCase;
    for(int t = 0; t < nTestCase; t++){
        std::cin >> s1 >> s2;

        // to decimal
        int tmp = 1;
        s1Dec = 0;
        for(auto a : s1){
            s1Dec += (a-'0')*tmp;
            tmp *= 2;
        }

        tmp = 1;
        s2Dec = 0;
        for(auto a : s2){
            s2Dec += (a-'0')*tmp;
            tmp *= 2;
        }

        /*
        if (strB_value > strA_value){
            tmp = strA_value;
            strA_value = strB_value;
            strB_value = tmp;
        }
        while (strB_value > 0){
            tmp = strA_value % strB_value;
            strA_value = strB_value;
            strB_value = tmp;
        }

        if (strA_value == 1){
            cout << "Pair #" << (i+1) << ": Love is not all you need!" << endl;
        } else {
            cout << "Pair #" << (i+1) << ": All you need is love!" << endl;
        }
        */
        std::cout << "pair #";
    }


    return 0;
}