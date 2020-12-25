#include<iostream>
using namespace std;
void main()
{
    int fun1(int a,int b);
	int fun2(int &a,int &b);
	int fun3(int *a,int *b);
    int a,b;
    printf("Please enter a and b:\n");
    cin>>a>>b; //接收正整数a和b
    fun1(a,b);
    fun2(a,b);
	fun3(&a,&b);
}
int fun1(int a,int b)
{
    int c1,c2,c3,c4,c;  //c1、c2、c3、c4分别对应c的千位、百位、十位、个位
    c1=a%10;
    c2=b/10;
    c3=a/10;
    c4=b%10;
    c=c1*1000+c2*100+c3*10+c4;
	cout<<c<<endl; 
return 0;
}

int fun2(int &a,int &b)
{
    int c1,c2,c3,c4,c;  //c1、c2、c3、c4分别对应c的千位、百位、十位、个位
    c1=a%10;
    c2=b/10;
    c3=a/10;
    c4=b%10;
    c=c1*1000+c2*100+c3*10+c4;
	cout<<c<<endl; 
return 0;
}
int fun3(int *a,int *b)
{
    int c1,c2,c3,c4,c;  //c1、c2、c3、c4分别对应c的千位、百位、十位、个位
    c1=*a%10;
    c2=*b/10;
    c3=*a/10;
    c4=*b%10;
    c=c1*1000+c2*100+c3*10+c4;
	cout<<c<<endl; 
return 0;
}