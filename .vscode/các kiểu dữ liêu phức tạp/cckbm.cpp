#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[10] = {1, 3, 4, 5, 7};
    int b[100];
    b[0] = 5;
    b[1] = 10;
    b[100] = 5;
    for (int i = 0; i <= 100; i++)
    {
        cout << b[i] << " ";
    }
}