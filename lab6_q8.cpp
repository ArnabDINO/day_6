//8.right angled triangle
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"give the number of stars in base"<<endl;
	cin>>n;
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
