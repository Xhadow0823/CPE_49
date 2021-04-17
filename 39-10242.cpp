// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1183
#include <iostream>
#include <cstdio>

int main (void){
    double input[8];

    while(std::cin >> input[0]){
        for(int i = 1; i < 8; i++){
            std::cin >> input[i];
        }

        int overlappingIdx = -1;
        for(int i = 0; i < 8; i+=2){
            for(int j = i+2; j < 8; j+=2){
                if((input[i]==input[j])&&(input[i+1]==input[j+1])){
                    input[i] = -input[i];  input[i+1] = -input[i+1];
                    input[j] = input[j+1] = 0.0;
                    overlappingIdx = i;
                    break;
                }
            }
            if(overlappingIdx != -1){  break; }
        }

        double sum[2] = {0, 0};
        for(int i = 0; i < 8; i+=2){
            sum[0] += input[i];  sum[1] += input[i+1];
        }
        printf("%.3f %.3f\n", sum[0], sum[1]);
    }

    return 0;
}

// A, B, C three points
// B is the overlapping one
// ans = B + (C-B) + (A-B)
//     = (C+A) - B  // ,or
//     = (A+B+C) - B*2

/*
0.000 0.000 0.000 1.000 0.000 1.000 1.000 1.000
1.000 0.000 3.500 3.500 3.500 3.500 0.000 1.000
1.866 0.000 3.127 3.543 3.127 3.543 1.412 3.145
*/