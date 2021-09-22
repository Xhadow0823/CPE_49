#include <iostream>

int f(const int v, const int t) {
    return 2 * t * v;
}

int main (void) {
    int vAtt = 0, t = 0;

    while(std::cin >> vAtt >> t){
        std::cout << f(vAtt, t) << std::endl;
    }

    return 0;
}