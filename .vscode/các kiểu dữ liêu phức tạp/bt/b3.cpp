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

int timmax(int A[], int n)
{
    int max = A[0];
    for (int i = 0; i < n; i++)
    {
        if (max < A[i])
            max = A[i];
    }
    return max;
}
int timmin(int A[], int n)
{
    int min = A[0];
    for (int i = 0; i < n; i++)
    {
        if (min > A[i])
            min = A[i];
    }
    return min;
}
int main()
{
    int X[maxSize];
    int spt;
    nhapMang(X, spt);
    cout << timmin(X, spt) << " " << timmax(X, spt);
}