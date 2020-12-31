#include <iostream.h>
void main()
{
	int i,j,k,m,N,temp;
	int a[1001];
	cout<<"输入猴子的个数m=";
	cin>>m;
	cout<<"输入从1开始数，每数到第N=";
	cin>>N;
	cout<<"时，猴子离开"<<endl;
	for(i=1;i<=m;i++)
	{
		a[i]=i;       //根据猴子的编号给猴子排序
	}
	for(i=m;i>=1;i--)   //剩下的猴子个数
   {       
     for(k=1;k<=N;k++)
        {           
          temp=a[1];   //上一次的第一个变成这一次的最后一个           
        for(j=0;j<i;j++)
           {               
              a[j]=a[j+1];           
           }           
           a[i]=temp;   
        }   
    }
	cout<<"猴子大王的编号是"<<a[1]<<endl;

}