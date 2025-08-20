#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter order of matrix";
cin>>n;
int a[50];
cout<<"Enter the elements";
int k=0;
for(int i=0;i<n*(n+1)/2;i++)
{
	cin>>a[i];
	}	
for(int i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	{	if(i==j||i<j)
		{cout<<a[k]<<" ";
		k++;}
		else
		{
			cout<<"0 ";
		}
	}
	cout<<endl;
}
}
