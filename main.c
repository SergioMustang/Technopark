#include <stdio.h>
#include <stdlib.h>


void Reverse(int MatrixRazmer, int M[MatrixRazmer][MatrixRazmer]) {
    int Buffer;
    for (int tmp = 0; tmp < MatrixRazmer; tmp++) {
        for (int tmp2 = tmp; tmp2 < MatrixRazmer; tmp2++) {
            Buffer = M[tmp][tmp2];
            M[tmp][tmp2] = M[tmp2][tmp];
            M[tmp2][tmp] = Buffer;
        }
    }
}


void EnterTheMatrix(int MatrixRazmer, int M[MatrixRazmer][MatrixRazmer]) {
    int Buffer;
    for (int tmp = 0; tmp < MatrixRazmer; tmp++) {
        for (int tmp2 = 0; tmp2 < MatrixRazmer; tmp2++) {
            printf("Вершина %d пересекается с %d? Укажите вес ребра", tmp, tmp2);
            scanf("%d", &Buffer);
            M[tmp][tmp2] = Buffer;
        }
    }

}

void MatrixInfo(int MatrixRazmer, int M[MatrixRazmer][MatrixRazmer]) {
    printf("Матрица смежности: \n");
    for (int tmp = 0; tmp < MatrixRazmer; tmp++) {
        for (int tmp2 = 0; tmp2 < MatrixRazmer; tmp2++) {
            printf("%d  ", M[tmp][tmp2]);
        }
        printf("\n");
    }

}

int main() {
    system("chcp 65001");
    printf("Введите количество вершин:");
    int MatrixSize;
    scanf("%d", &MatrixSize);
    int Matrix[MatrixSize][MatrixSize];
    EnterTheMatrix(MatrixSize, Matrix);
    printf("Первоначальная матрица: \n");
    MatrixInfo(MatrixSize, Matrix);
    Reverse(MatrixSize, Matrix);
    printf("Перевёрнутая матрица: \n");
    MatrixInfo(MatrixSize, Matrix);
    return 0;
}