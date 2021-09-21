#include <iostream>
#include <string>
#include <algorithm>

int main (void) {
    std::string lines[100];
    int index = 0, _max = 0;

    while (std::getline(std::cin, lines[index])) {
        _max = std::max((int)lines[index].length(), _max);
        index++;
    }

    for(int i = 0; i < _max; i++){
        for(int l = index-1; l >= 0; l--){
            if(lines[l].length() <= i){
                std::cout << " ";
            }else{
                std::cout << lines[l][i];
            }
        }
        std::cout << std::endl;
    }

    return 0;
}


/*
Rene Decartes once said,
"I think, therefore I am."

"R
Ie
n
te
h
iD
ne
kc
,a
r
tt
he
es
r
eo
fn
oc
re
e
s
Ia
i
ad
m,
.
"

*/