//9. hollow triangle
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"give me n i'll give you hollow triangle"<<endl;
	cin>>n;
	
		for (int j=0;j<=n;j++)//as usual loop for changing the current row
		{
			if(j==0||j==(n))//condition for first and last row
				//the first row could have been neglected but for symmetry purpose it has been included in the condition
			{
				for(int l=0;l<=j;l++)
				{
					cout<<"*";
				}
				cout<<endl;
			}
			else//for other cases the program will be like the hollow sqare one.
				//but in the hollow square value of the counter variable had been running from 0 to n
				//here value of l will run from 0 to j 
				//so the result will be triangle
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
