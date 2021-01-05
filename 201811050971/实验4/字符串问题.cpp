#include<iostream>
using namespace std;
main()
{ 
	int S,T,k;
cin>>T>>S;
char a[200][100];
for(int s=0;s<S;s++)
{
	for(int t=0;t<T;t++)
	{
			cin>>a[s][t];
	}
	
}
cin>>k;
for(int b=0;b<k;b++)
{
	for(int i=0;i<S;i++)
	{
		for(int j=0;j<T;j++)
		{
		if(a[i][j]=='X')
		{

			if(i-1>=0&&a[i-1][j]!='P')
				a[i-1][j]='Z';
			if(i+1>=0&&a[i+1][j]!='P')
				a[i+1][j]='Z';
			if(j-1>=0&&a[i][j-1]!='P')
				a[i][j-1]='Z';
			if(j+1>=0&&a[i][j+1]!='P')
				a[i][j+1]='Z';
		}
		}
	}
	for(int m=0;m<S;m++)//±éÀúÊý×é
	{
		for(int n=0;n<T;n++)
		{
			if(a[m][n]=='Z')
				a[m][n]='X';
		}
	}

}
	for(int c=0;c<S;c++)
	{
		for(int d=0;d<T;d++)
			cout<<a[c][d];
		cout<<endl;
	}
		
}
