#include <stdlib.h>
#include <cstdio>

int main() {
    system("chcp 65001");
    long long numberOfnumbers, result;
    long long *M;
    result = 0;
    scanf("%lli", &numberOfnumbers);
    M = (long long*)malloc(numberOfnumbers * sizeof(long long));
    for (int tmp = 0; tmp < numberOfnumbers; tmp++) {
        scanf("%lli", &M[tmp]);
        result++;
        for (int tmp2 = 0; tmp2 < tmp; tmp2++) {
            if(M[tmp2] == M[tmp]){
                tmp--;
                result--;
                numberOfnumbers--;
                break;
            }
        }
    }
    fprintf(stdout, "%lli ",result);
    return 0;
}