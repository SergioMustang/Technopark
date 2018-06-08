#include <stdlib.h>
#include <cstdio>

int main() {
    system("chcp 65001");
    long long  n, x, tmp;
    tmp = 1;
    x = 0;
    scanf("%lli", &n);
    while (tmp <= n) {
        tmp = tmp * 2;
        x++;
    }
    fprintf(stdout, "%lli", x);
    return 0;
}