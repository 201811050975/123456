#include <iostream>
using namespace std;

main()
{   int M,N,c;
    cin>>N>>M;
	char a[100][100];
	for(int m=0;m<M;m++)//输入字符数组
	{
		for(int n=0;n<N;n++)
        cin>>a[m][n];
    }
	cin>>c;
	for(int h=0;h<c;h++)//此处是病毒经历的周期数
    {
		for(int i=0;i<M;i++)//遍历数组
		{
		for(int j=0;j<N;j++)
		{
			if(a[i][j]=='X')
			{
				if(i-1>=0&&a[i-1][j]!='P')//判断数组的位置是否在边缘以及该位置是否是保护区
					a[i-1][j]='Y';
				if(i+1<M&&a[i+1][j]!='P')
					a[i+1][j]='Y';
				if(j-1>=0&&a[i][j-1]!='P')
					a[i][j-1]='Y';
				if(j+1<N&&a[i][j+1]!='P')
					a[i][j+1]='Y';
			}
		}
		}
		for(int q=0;q<M;q++)//遍历数组
		{
		for(int p=0;p<N;p++)
		{
			if(a[q][p]=='Y')
				a[q][p]='X';
		}
		}

	}
	for(int k=0;k<M;k++)//输出数组
	{
		for(int l=0;l<N;l++)
        cout<<a[k][l];
		cout<<endl;
    }

}