// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1167
#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>

int main (void){
    int nTest = -1;
    std::string line;  char blank;
    std::vector<std::string> trees;
    int total = -1, cnt = -1;

    std::cin >> nTest;
for(int t = 0; t < nTest; t++){
    // input
    std::cin >> blank;
    while(std::getline(std::cin, line)){
        if(line == ""){
            break;
        }
        trees.push_back(line);
    }
    std::sort(trees.begin(), trees.end());

    total = trees.size();  cnt = 1;
    // output
    if(t != 0){
        std::cout << std::endl;
    }
    for(int i = 1; i < total; i++){
        if(trees[i] == trees[i-1]){
            cnt++;
        }else{
            printf("%s %.4f\n", trees[i-1].c_str(), (double)cnt/total*100.0);
            cnt = 1;
        }
    }

    trees.clear();
}

    return 0;
}

/*
1

Red Alder
Ash
Aspen
Basswood
Ash
Beech
Yellow Birch
Ash
Cherry
Cottonwood
Ash
Cypress
Red Elm
Gum
Hackberry
White Oak
Hickory
Pecan
Hard Maple
White Oak
Soft Maple
Red Oak
Red Oak
White Oak
Poplan
Sassafras
Sycamore
Black Walnut
Willow

*/