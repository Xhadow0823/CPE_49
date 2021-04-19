// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=21&page=show_problem&problem=1870
#include <iostream>
#include <string>

bool multipleOf11(std::string n){
    int oddSum = 0, evenSum = 0;
    for(int i = 0; i < n.length(); i++){
        if(i%2){
            oddSum += (n[i]-'0');
        }else{
            evenSum += (n[i]-'0');
        }
    }
    return ((oddSum - evenSum)%11)? false:true;
}

int main (void){
    std::string n;

    while(true){
        std::cin >> n;
        if(n == "0"){
            break;
        }
        std::cout << n << " is "<< (multipleOf11(n)? "":"not ") <<"a multiple of 11." << std::endl;
    }

    return 0;
}