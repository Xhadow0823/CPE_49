// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1162
#include <iostream>
#include <cmath>
#include <string>


int main (void){
    double s = -1, a = -1;
    std::string unit;

    const double R = 6440;
    const double min2deg = 360/(24*60);

    double arc = 0, chord = 0;
    while(std::cin >> s >> a >> unit){
        if(unit == "min"){
            // a *= min2deg; //****************************
            a /= 60;
        }

        if(a > 360){
            a = int(a)%360;
        }
        if(a > 180){
            a = 360-a;
        }
        arc = (s+R) * M_PI * (a/180.0);
        chord = sin(a/2 * (M_PI/180)) * (s+R) * 2;

        printf("%.6f %.6f\n", arc, chord);
    }

    return 0;
}

/*
500 30 deg
700 60 min
200 45 deg
*/