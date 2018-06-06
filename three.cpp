#include <stdlib.h>
#include <cstdio>

int main() {
    system("chcp 65001");
    long long s, l1, r1, l2, r2, x1, x2, diap1, diap2, interval;
    scanf("%lli %lli %lli %lli %lli", &s, &l1, &r1, &l2, &r2);
    if ((r1 + r2) < s) {
        fprintf(stdout, "-1");
        exit(0);
    }
    if ((l1 + l2) > s) {
        fprintf(stdout, "-1");
        exit(0);
    }
    diap1 = r1 - l1;
    diap2 = r2 - l2;
    if ((diap1 / diap2) <= 1) {
        if (diap1 > 100) {
            interval = diap1 / 10;
            for (int tmp = 1; tmp < 12; tmp++) {
                if ((s - (l1 + (tmp * interval))) <= r2 && (s - (l1 + (tmp * interval))) >= l2) {
                    tmp--;
                    l1 = l1 + (tmp * interval);
                    break;
                }
            }
        }
        for (long long tmp = l1; tmp <= r1; tmp++) {
            long long buffer = s - tmp;
            if (buffer <= r2 && buffer >= l2) {
                x1 = tmp;
                x2 = buffer;
                fprintf(stdout, "%lli %lli", x1, x2);
                break;
            }
            if (tmp == r1) {
                fprintf(stdout, "-1");
                break;
            }
        }
    } else {
        if (diap2 > 100) {
            interval = diap2 / 10;
            for (int tmp = 1; tmp < 12; tmp++) {
                if ((s - (l2 + (tmp * interval))) <= r1 && (s - (l2 + (tmp * interval))) >= l1) {
                    tmp--;
                    l2 = l2 + (tmp * interval);
                    break;
                }
            }
        }
        for (long long tmp = l2; tmp <= r2; tmp++) {
            long long buffer = s - tmp;
            if (buffer <= r1 && buffer >= l1) {
                x2 = tmp;
                x1 = buffer;
                fprintf(stdout, "%lli %lli", x1, x2);
                break;
            }
            if (tmp == r2) {
                fprintf(stdout, "-1");
                break;
            }
        }
    }
    return 0;
}