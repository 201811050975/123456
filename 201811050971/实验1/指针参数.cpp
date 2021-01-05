#include<iostream.h>
void main()
{    
	int fun(int a,int b);
    int a,b;
    cout<<"ÇëÊäÈëa"<<endl;
    cin>>a;
    cout<<"ÇëÊäÈëb"<<endl;
    cin>>b; 
    fun(a,b);
    
}

int fun(int a,int b)
{
    int x,y,z,m,c;  
    x=a%10;
    y=b/10;
    z=a/10;
    m=b%10;
    c=x*1000+y*100+z*10+m;
	cout<<c;
	return 0;
}