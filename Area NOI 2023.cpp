#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int tinggi[n], lebar[n], luas[n];
	
	for(int i = 0; i < n; i++)
	{
		cin>>tinggi[i]>>lebar[i];
		luas[i] = tinggi[i] * lebar[i];
	}
	
	sort(luas, luas+n, greater<int>());
	cout<<luas[0];
}