#include <iostream>
using namespace std;
void main()
{
	int N,M;
	int i,j;
	char a[100][100];
	cin>>N>>M;
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			cin>>a[i][j];
		}
	}
	int T;
	cin>>T;
	for(int k=1;k<=T;k++)
	{
		for(i=0;i<N;i++)
		{
			for(j=0;j<M;j++)
			{
			 if(a[i][j]=='X')
			{
				if(a[i][j-1]!='P'&&j>0)
				{
					a[i][j-1]='Q';
				}
				if(a[i][j+1]!='P'&&j<M-1)
				{
					a[i][j+1]='Q';
				}
			     if(a[i-1][j]!='P'&&i>0)
				{
				   a[i-1][j]='Q';
				}
			    if(a[i+1][j]!='P'&&i<N-1)
				{
				   a[i+1][j]='Q';
				}
			}
			}
		}
        for(int c=0;c<N;c++)
		{
		   for(int d=0;d<M;d++)
		   {
			if(a[c][d]=='Q')
				a[c][d]='X';
		   }
		}
	}
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			cout<<a[i][j];
		}
		cout<<endl;
	}
}