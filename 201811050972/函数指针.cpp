#include<iostream.h>
void main()
{
	int fun(int *a,int *b);
	int a,b;
	cout<<"ÇëÊäÈëa£º"<<endl;
	cin>>a;
	cout<<"ÇëÊäÈëb"<<endl;
	cin>>b;
	fun(&a,&b);
}
int fun(int *a,int *b)
{
	int ge,shi,bai,qian,c;
	shi=*a/10;
	qian=*a%10;
	ge=*b/10;
	bai=*b%10;
    c=ge+shi*10+bai*100+qian*1000;
	cout<<"c="<<c<<endl;
	return 0;
}