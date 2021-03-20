// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1350
#include <iostream>
#include <string>

int main (void){
    int nLine = -1;

    std::string line;
    while(true){
        std::cin >> nLine;
        if(!nLine){
            break;
        }

        const int top = 0,
                  north = 1,
                  west = 2;
        int die[3] = {1, 2, 3};  // top, north, west

        for(int t = 0; t < nLine; t++){
            std::cin >> line;

            int tmp = die[top];
            if(line=="north"){
                die[top] = 7 - die[north];
                die[north] = tmp;
            }else if(line=="south"){
                die[top] = die[north];
                die[north] = 7 - tmp;
            }else if(line=="east"){
                die[top] = die[west];
                die[west] = 7 - tmp;
            }else if(line=="west"){
                die[top] = 7 - die[west];
                die[west] = tmp;
            }else{
                exit(1);
            }
        }
        std::cout << die[top] << std::endl;
    }

    return 0;
}

// {1, 2, 3} -> {top, north, west}