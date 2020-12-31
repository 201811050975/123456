#include <iostream>
using namespace std;
struct
{
	int chinese,mathematics,English,sum;
	int id;
}subject[100];
void main()
{
	int i,j,n;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>subject[i].chinese>>subject[i].mathematics>>subject[i].English;
		subject[i].id=i;
		subject[i].sum=subject[i].chinese+subject[i].mathematics+subject[i].English;
	}
	for(i=n-1;i>=1;i--)
		for(j=1;j<=n;j++)
		{
			if(subject[j].sum<subject[j+1].sum)
				swap(subject[j],subject[j+1]);
			if((subject[j].sum==subject[j+1].sum)&&(subject[j].chinese<subject[j+1].chinese))
				swap(subject[j],subject[j+1]);
			if((subject[j].sum==subject[j+1].sum)&&(subject[j].chinese==subject[j+1].chinese)&&(subject[j].id>subject[j+1].id))
				swap(subject[j],subject[j+1]);
		}
	for(i=1;i<=5;i++)
	{
		cout<<subject[i].id<<endl;
		cout<<subject[i].sum<<endl;
	}
}
int swap(int &p1,int &p2)
{
	int p;
	p=p1;
	p1=p2;
	p2=p;
	return 0;
}

