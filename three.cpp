#include <stdlib.h>
#include <cstdio>

int main() {
    system("chcp 65001");
    long long s, l1, r1, l2, r2, s1min, s2max;
    scanf("%lli %lli %lli %lli %lli", &s, &l1, &r1, &l2, &r2);
    if ((r1 + r2) < s  || (l1 + l2) > s) {
        fprintf(stdout, "-1");
        exit(0);
    }
    s1min = s - r2; if (s1min < l1) s1min = l1;
    s2max = s - l1; if (s2max > r2) s2max = r2;
    fprintf(stdout, "%lli ", s1min);
    fprintf(stdout, "%lli", s2max);
    return 0;
}