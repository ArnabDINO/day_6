//4. Rhombus Star Pattern
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Give the number of stars in one rows of the rhombus"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)//for changing the rows
	{
		for(int j=(n-i);j>0;j--)//loop for spaces
		{
			cout<<" ";
		}
		for(int j=0;j<n;j++)//loop for the stars
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
