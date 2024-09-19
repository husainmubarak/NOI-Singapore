#include <bits/stdc++.h>
#define fi first
#define se second
using namespace std;


int main()
{
	int n;
	cin>>n;
	pair<int, int> sword[n];
	
	for(int i = 0; i < n; i++)
	{
		cin>>sword[i].fi>>sword[i].se;
	}
	
	sort(sword, sword+n, greater<pair<int, int>>());
	int max = sword[0].se;
	int ans = 1;
	
	for(int i = 0; i < n; i++)
	{
		if(sword[i].se > max )
		{
			max = sword[i].se;
			ans++;
		}
	}
	cout<<ans;
}
	