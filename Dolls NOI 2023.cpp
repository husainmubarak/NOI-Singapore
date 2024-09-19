#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int angka[n];

	for(int i = 0; i < n; i++)
	{
		cin>>angka[i];
	}

	int p = angka[0], ans = 1;
	if(p % 2 == 0)
	{
		cout << ans << " ";
		for (int i = 1; i < n; i++)
		{
    		bool foundDuplicate = false;
    		for (int j = 0; j < i - 1; j++)
    		{
        		if (angka[i] == angka[j])
        		{
            		foundDuplicate = true;
            		break;
        		}
    		}
   			if (angka[i] % 2 == 0 && !foundDuplicate)
    		{
        		ans++;
    		}
    		cout << ans << " ";
		}
	}
	else
	{
		cout << ans << " ";
		for (int i = 1; i < n; i++)
		{
    		bool foundDuplicate = false;
    		for (int j = 0; j < i - 1; j++)
    		{
        		if (angka[i] == angka[j])
        		{
            		foundDuplicate = true;
            		break;
        		}
    		}
   			if (angka[i] % 2 == 1 && !foundDuplicate)
    		{
        		ans++;
    		}
    		cout << ans << " ";
		}

	}
	
	
	
	
}