//9. hollow triangle
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"give me n i'll give you hollow triangle"<<endl;
	cin>>n;
	
		for (int j=0;j<=n;j++)
		{
			if(j==0||j==(n))
			{
				for(int l=0;l<=j;l++)
				{
					cout<<"*";
				}
				cout<<endl;
			}
			else
			{
				for(int l=0;l<=j;l++)
				{
					if(l==0||l==j)
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
