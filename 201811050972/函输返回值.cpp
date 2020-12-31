#include<iostream.h>
void main()
{
	int fun(int a,int b);
	int a,b,c;
	cout<<"ÇëÊäÈëa£º"<<endl;
	cin>>a;
	cout<<"ÇëÊäÈëb"<<endl;
	cin>>b;
	c=fun(a,b);
	cout<<"c="<<c<<endl;
}
int fun(int a,int b)
{
	int ge,shi,bai,qian;
	shi=a/10;
	qian=a%10;
	ge=b/10;
	bai=b%10;
	return(ge+shi*10+bai*100+qian*1000);
}