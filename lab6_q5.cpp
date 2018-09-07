//5 Hollow rhombus star pattern
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"give me number of stars i will give you hollow rhombus"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		if (i==0||i==(n-1))
		{
			for(int j=(n-i);j>0;j--)
			{
				cout<<" ";
			}
			for(int j=0;j<n;j++)
			{
				cout<<"*";
			}
			cout<<endl;
		}
		else
		{
			for(int j=(n-i);j>0;j--)
			{
				cout<<" ";
			}
			for(int j=0;j<n;j++)
			{
				if(j==0||j==(n-1))
				{
					cout<<"*";
				}
				else
				{
					cout<<" ";
				}
			}
			cout<<endl;
		}
	}
}
