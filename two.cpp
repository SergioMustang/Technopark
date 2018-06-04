#include <stdlib.h>
#include <cstdio>

int main() {
    system("chcp 65001");
    int buffer, M[100], numberOfnumbers, result;
    result = 0;
    fprintf(stdout, "Введите количество чисел:\n");
    scanf("%d", &numberOfnumbers);
    fprintf(stdout, "Введите числа через пробел:\n");
    for (int tmp = 0; tmp < numberOfnumbers; tmp++) {
        scanf("%d", &buffer);
        M[tmp] = buffer;
        result++;
        for (int tmp2 = 0; tmp2 < tmp; tmp2++) {

            if(M[tmp2] == buffer){
                result--;
                break;
            }
        }
    }
    fprintf(stdout, "result = %d",result);
    return 0;
}