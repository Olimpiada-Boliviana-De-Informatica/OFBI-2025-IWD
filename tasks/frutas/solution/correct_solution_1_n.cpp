#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    scanf("%d\n", &N);
    long long suma = 0;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        scanf("%d", &A[i]);
        suma += A[i];
    }

    int divisores = 0;
    for (long long d = 1; d <= suma; ++d) {
        if (suma % d == 0) {
            divisores++;
            if (d != suma / d) {
                divisores++;
            }
        }
    }

    printf("%d\n", divisores);
    return 0;
}
