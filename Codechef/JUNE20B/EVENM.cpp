#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k=1;
	    cin>>n;
	    int a[n][n];
	    for(int i=0;i<n;i++)
	    {
	        if(i%2==0)
	        {
	            for(int j=0;j<n;j++)
	            {
	                a[i][j]=k++;
	            }
	        }
	        else
	        {
	            for(int j=n-1;j>=0;j--)
	            {
	                a[i][j]=k++;
	            }
	        }
	    }
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        cout<<a[i][j]<<" ";
	        cout<<endl;
	    }
	}
	return 0;
}
