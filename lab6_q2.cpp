//2. Hollow sqare star pattern
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"give the number of stars in each side of the square"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		if (i==0||i==(n-1))
		{
			for (int j=0;j<n;j++)
			{
				cout<<"*";
			}
			cout<<endl;
		}
		else
		{
			for (int j=0;j<n;j++)
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
	return 0;
}
