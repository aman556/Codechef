#include <bits/stdc++.h>

using namespace std;
long mod=1000000007;
int main()
{
    ios_base::sync_with_stdio(false);
cin.tie(NULL);
   int t;
   cin>>t;
   while(t--)
   {
       
       int n,flag=0,in1=-1;
       cin>>n;
       long a[n+1];
       for(int i = 1; i <= n; i++)
		{
			cin>>a[i];
			if(a[i] == 1)
				in1 = i;
		}

		int prefix[n+1];
        memset(prefix,0,sizeof(prefix));
		if(in1 == -1 || in1 == n)
		{
			for(int i = 1; i <= n; i++)
			{
				prefix[i] = prefix[i-1];
				if(i == n)
					prefix[i] = (prefix[i] + a[i] - (a[i] % 2 == 0 ? 1 : 0)) % mod; 
				else
					prefix[i] = (prefix[i] + 2 * (a[i]/2)) % mod;
			}
		}
		else if(in1 == 1)
		{
			for(int i = 1; i <= n; i++)
				prefix[i] = 1;
		}
		else
		{
			for(int i = 1; i <= n; i++)
			{
				prefix[i] = prefix[i-1];

				if(i == in1-1 || i == n)
					prefix[i] = (prefix[i] + a[i] - (a[i] % 2 == 0 ? 1 : 0)) % mod;
				else if(in1 != i)
					prefix[i] = (prefix[i] + 2 * (a[i]/2)) % mod;
			}
		}

		//for(int i = 1; i <= n; i++)
		//	System.out.print(" "+score[i]);
		//System.out.println();

		int q;
		cin>>q;

		long r, temp, ans;
		int n1;
		while(q-- > 0)
		{
			cin>>r;

			temp = r / n % mod;
			n1 = (int)(r % n);
			ans = (temp*prefix[n] + prefix[n1]) % mod;

			if(n1 == 0)
				n1 = n;

			if(in1 == -1 || in1 == n)
			{
				if(n1 == n)
				{
					if(a[n] % 2 == 0)
						ans++;
				}
				else if(a[n1] % 2 != 0)
					ans++;
			}
			else if(in1 > 1)
			{
				if(n1 > in1)
				{
					if(n1 == n)
					{
						if(a[n] % 2 == 0)
							ans++;
					}
					else if(a[n1] % 2 != 0)
						ans++;
				}
				else if(n1 < in1-1)
				{
					if(a[n1] % 2 != 0)
						ans++;
				}
				else if(n1 == in1-1)
				{
					if(a[in1-1] % 2 == 0)
						ans++;

				}
				else if(n1 == in1)
				{
					ans++;

					if(a[in1-1] % 2 == 0)
						ans++;
					else
						ans--;
				}
			}
			else if(in1 == 1)
			{
				if(n1 == 1 && r > n)
					ans--;
			}

			ans %= mod;
			cout<<ans<<endl;

		}
   }
   
   return 0;
}
