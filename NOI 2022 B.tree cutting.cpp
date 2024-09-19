#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n-1], b[n-1];

    for(int i = 0; i < n-1; i++)
    {
        cin>>a[i]>>b[i];
    }

    sort(b, b+n-1, greater());
    cout<<b[0] - 1;
}