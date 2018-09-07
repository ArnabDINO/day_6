//1.square star pattern
#include <iostream>
using namespace std;
int main()
{
	int n,j;
	cout<<"give the number of stars in each side"<<endl;
	cin>>n;
	for (int i=0;i<n;i++)//loop for the rows
	{
		for(int j=0;j<n;j++)//loop for printing every elements in a row
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
