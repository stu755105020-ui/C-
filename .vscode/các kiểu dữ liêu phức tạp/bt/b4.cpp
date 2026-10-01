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

int soChinhPhuong(int A[], int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (sqrt(A[i]) * sqrt(A[i]) == A[i])
            count++;
    }
    return count;
}

int main()
{
    int X[maxSize];
    int spt;
    nhapMang(X, spt);
    cout << soChinhPhuong(X, spt);
}