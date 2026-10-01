#include <bits/stdc++.h>
using namespace std;

#define maxSize 100

void nhapMang(int A[], int &n)
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
}

void insertionSort(int A[], int n)
{
    for (int i = 0; i, n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (A[i] < A[j])
            {
                int tmp = A[i];
                A[i] = A[j];
                A[j] = tmp;
            }
        }
    }
}

int main()
{
    int X[maxSize];
    int spt;

    nhapMang(X, spt);

    return 0;
}