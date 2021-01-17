#include "lib0020.h"

long long height_limit(long long M){
    long long l = 1, r = M + 1, m;
    while(l != r){
        m = (l + r) / 2;
        if(is_broken(m))
            r = m;
        else
            l = m + 1;
    }
    return l - 1;
}   