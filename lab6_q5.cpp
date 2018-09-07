//5 Hollow rhombus star pattern
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"give me number of stars i will give you hollow rhombus"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)//loop for changing the pwr(present working row :-))
	{
		if (i==0||i==(n-1))//for the first and last row; as there will be full n number of star in these two rows 
		{
			for(int j=(n-i);j>0;j--)//for spaces
			{
				cout<<" ";
			}
			for(int j=0;j<n;j++)//for the whole line of stars
			{
				cout<<"*";
			}
			cout<<endl;
		}
		else
		{
			for(int j=(n-i);j>0;j--)//the spaces return and they are decreasing with increasing lines
			{
				cout<<" ";
			}
			for(int j=0;j<n;j++)//the stars return too but they are same as the hollow square program 
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
