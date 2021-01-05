#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
 
struct student {
	int id;
	int chinese;
	int math;
	int english;
	int sum;
} stu[355];
 
bool compare (const student &s1, const student &s2) 
{
	if (s1.sum == s2.sum) 
	{
		if (s1.chinese == s2.chinese) 
		{
			return s1.id < s2.id;
		}
		return s1.chinese > s2.chinese;
	}
	return s1.sum > s2.sum;
}
 
int main()
{
	int n;
	scanf ("%d", &n);
	for (int i=0; i<n; i++)
	{
		stu[i].id = i+1;
		cin >> stu[i].chinese >> stu[i].math >> stu[i].english;
		stu[i].sum = stu[i].chinese + stu[i].english + stu[i].math; 
	}
	sort (stu, stu+n, compare);
	for (int j=0; j<5; j++)
	{
		cout << stu[j].id << " " << stu[j].sum << endl;
	}
	return 0;
}
