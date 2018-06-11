#include <stdio.h>
#include <malloc.h>

void Output(int n, int mass[]) {
    if (n > 5) {
        n = 5;
    }
    for (int tmp = n - 1; tmp >= 0; tmp--) {
        fprintf(stdout, "%d ", mass[tmp]);
    }
    fprintf(stdout, "\n");
}

void InsertionSort(int n, int mass[]) {
    int newElement, location;
    for (int tmp = 1; tmp < n; tmp++) {
        newElement = mass[tmp];
        location = tmp - 1;
        while (location >= 0 && mass[location] > newElement) {
            mass[location + 1] = mass[location];
            location = location - 1;
        }
        mass[location + 1] = newElement;
    }
}

int main() {
    int N, massN;
    massN = 0;
    scanf("%d", &N);
    int mass[6];
    for (int tmp = 0; tmp <= 4; tmp++) {
        scanf("%d", &mass[tmp]);
        massN++;
        InsertionSort(massN, mass);
        Output(massN, mass);
    }
    massN = 6;
    for (int tmp = 5; tmp < N; tmp++) {
        scanf("%d", &mass[5]);
        InsertionSort(massN, mass);
        Output(massN, mass);
    }
    return 0;
}

