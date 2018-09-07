//2. Hollow sqare star pattern
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"give the number of stars in each side of the square"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)//loop for printing different rows
	{
		if (i==0||i==(n-1))//condition for selecting only the first and last line
		{
			for (int j=0;j<n;j++)//for printing out the elements in each of the first and last line
			{
				cout<<"*";
			}
			cout<<endl;
		}
		else//for the lines in between where there will be only two stars: one in the first place and the other in the last place
		{
			for (int j=0;j<n;j++)
			{
				if(j==0||j==(n-1))//condition for selecting the first and last elements of each row
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
