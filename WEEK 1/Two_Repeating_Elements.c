#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//  1: Naive (Nested Loops)
void naive(int A[], int size)
{
    printf("1. Naive : Repeated Elements: ");
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (A[i] == A[j]) {
                printf("%d ", A[i]);
            }
        }
    }
    printf("\n");
}

void hashMap(int A[], int size, int m)
{
    int *hash = (int *)calloc(m + 1, sizeof(int));
    printf("2. Hash Map: Repeated Elements: ");
    for (int i = 0; i < size; i++) {
        hash[A[i]]++;
    }
    for (int i = 0; i <= m; i++) {
        if (hash[i] == 2) {
            printf("%d ", i);
        }
    }
    printf("\n");
    free(hash);
}

int factorial(int n)
{
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

//  3: Using Math’s Formula
void mathFormula(int A[], int n)
{
    int X = 0, Y = 1, S = n * (n + 1) / 2;
    int fact = factorial(n);
    for (int i = 0; i < n + 2; i++) {
        X += A[i];
        Y *= A[i];
    }
    int sum = X - S;
    int product = Y / fact;
    int subtract = sqrt(sum * sum - 4 * product);

    int a = (sum + subtract) / 2;
    int b = sum - a;

    printf("3. Math Formula: Repeated Elements: %d and %d\n", a, b);
}

void Index(int A[], int size)
{
    printf("4. Array Element as Index: Repeated Elements: ");
    for (int i = 0; i < size; i++) {
        if (A[abs(A[i])] < 0) {
            printf("%d ", abs(A[i]));
        } else {
            A[abs(A[i])] = -A[abs(A[i])];
        }
    }
    printf("\n");
}

void xor(int A[], int n)
{
    int XOR = 0, X = 0, Y = 0, size = n + 2;
    for (int i = 0; i < size; i++) {
        XOR ^= A[i];
    }
    for (int i = 1; i <= n; i++) {
        XOR ^= i;
    }

    int right_most_bit = XOR & ~(XOR - 1);

    for (int i = 0; i < size; i++) {
        if (A[i] & right_most_bit) {
            X ^= A[i];
        } else {
            Y ^= A[i];
        }
    }
    for (int i = 1; i <= n; i++) {
        if (i & right_most_bit) {
            X ^= i;
        } else {
            Y ^= i;
        }
    }
    printf("5. XOR: Repeated Elements: %d and %d\n", X, Y);
}

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

void sorting(int A[], int size)
{
    qsort(A, size, sizeof(int), compare);
    printf("6. Sorting: Repeated Elements: ");

    for (int i = 0; i < size - 1; i++)
    {
        if (A[i] == A[i + 1])
        {
            printf("%d ", A[i]);
        }
    }
    printf("\n");
}

int main()
{
    int A[] = {1, 4, 5, 6, 3, 2, 5, 2};
    int n = 6;
    int size = sizeof(A) / sizeof(A[0]);

    naive(A, size);

    int A1[] = {1, 4, 5, 6, 3, 2, 5, 2};
    hashMap(A1, size, 6);

    int A2[] = {1, 4, 5, 6, 3, 2, 5, 2};
    mathFormula(A2, n);

    int A3[] = {1, 4, 5, 6, 3, 2, 5, 2};
    Index(A3, size);

    int A4[] = {1, 4, 5, 6, 3, 2, 5, 2};
    xor(A4, n);

    int A5[] = {1, 4, 5, 6, 3, 2, 5, 2};
    sorting(A5, size);

    return 0;
}