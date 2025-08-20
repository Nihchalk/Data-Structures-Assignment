#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter no. of diagonal elements";
	cin>>n;
	cout<<"Enter elemenets";
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int k=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==j)
			{
				cout<<a[k]<<" ";
				k++;
			}
			else
			{
				cout<<"0 ";
			}
		}
		cout<<endl;
	}
}
