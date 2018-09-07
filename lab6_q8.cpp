//8.right angled triangle
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"give the number of stars in base"<<endl;
	cin>>n;
	for (int i=0;i<n;i++)//loop for changing the row
	{
		for (int j=0;j<=i;j++)//loop for printing increasing number of stars for each successive rows.
			//the upper limit of the possible value of j increaces with each iteration as i is increasing too after each cycle.
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
