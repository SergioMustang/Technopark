#include <stdlib.h>
#include <cstdio>
#include <unordered_set>


int main() {
    system("chcp 65001");
    long long numberOfnumbers, result;
    result = 0;
    scanf("%lli", &numberOfnumbers);
    std::unordered_set<long long> set;
    for (int i = 0; i < numberOfnumbers; i++) {
        long long tmp = 0;
        scanf("%lli", &tmp);
        if (set.find(tmp) == set.end()) {
            result++;
            set.insert(tmp);
        }
    }
    fprintf(stdout, "%lli ", result);
    return 0;
}