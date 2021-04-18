#include <math.h>
#include "func.h"

getRoots Func(double a, double b, double c) {
    getRoots r;

    if(a == 0){
        if(b == 0){
            r.n = 0;
            return r;
        }else{
        r.x1 = (-c)/b;
        return r;
        }
    }

    double D = pow(b, 2) - 4*a*c;

    if(D < 0.0) {
        r.n = 0;

    }
    if(D == 0.0) {
        r.x1 = -b/(2*a);
    }
    if(D > 0.0) {
        r.x1 = (-b - sqrt(D)) / (2*a);
        r.x2 = (-b + sqrt(D)) / (2*a);
    }

    return r;
}
