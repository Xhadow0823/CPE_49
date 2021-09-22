#include <iostream>
#include <string>

int base62ToInt(char ch){
    if(isalnum(ch)){
        if(ch <= '9'){
            return ch - '0';
        }else if(ch <= 'Z'){
            return ch - 'A' + 10;
        }else{
            return ch - 'a' + 36;
        }
    }else{
        return 0;
    }
}

int main (void) {
    std::string line;
    int sum = -1, base = -1, n = -1;


    while(std::getline(std::cin, line)){
        sum = 0, base = 1;  // base 要做除法 不能是0!!!!!!!!!!!
        for(int i = 0; i < line.length(); i++){
            n = base62ToInt(line[i]);
            base = std::max(base, n);  // 找最大
            sum += n;
        }
        // 目前可能最大進位制是base+1

        // (base+1) - 1 要可以整除 R
        for(int i = base; i <= 62; i++){
            if(sum % (i) == 0){
                std::cout << i+1 << std::endl;
                break;
            }
            if(i == 62){
                std::cout << "such number is impossible!" << std::endl;
            }
        }

    }

    return 0;
}