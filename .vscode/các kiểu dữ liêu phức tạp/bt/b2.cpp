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

int countEven(int A[], int n)
{
    int countEven = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] % 2 == 0)
            countEven++;
    }
    return countEven;
}
int countOdd(int A[], int n)
{
    int countOdd = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] % 2 != 0)
            countOdd++;
    }
    return countOdd;
}
int main()
{
    int X[maxSize];
    int spt;
    nhapMang(X, spt);
    cout << countEven(X, spt) << " " << countOdd(X, spt);
}