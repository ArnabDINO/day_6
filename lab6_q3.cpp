//3.Hollow square with diagonals
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout <<"Give the number of stars in each side of the square"<<endl;
	cin>> n;
	for (int i=0;i<n;i++)//for printing multiple rows
	{
		if (i==0||i==(n-1))//condition for first and last row of the square
		{
			for (int j=0;j<n;j++)//for printing out the elements of a row
			{
				cout<<"*";
			}
			cout<<endl;
		}
		else
		{
			for(int j=0;j<n;j++)//for printing out the elements of a row
			{
				if(j==i||j==(n-1-i)||j==0||j==(n-1))//selection of the for positions in each row where the stars will printed
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
