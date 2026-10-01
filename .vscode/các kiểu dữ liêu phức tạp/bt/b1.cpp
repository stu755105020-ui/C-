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

int sum(int A[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += A[i];
    }
    return sum;
}
int main()
{
    int X[maxSize];
    int spt;
    nhapMang(X, spt);
    cout << sum(X, spt);
}