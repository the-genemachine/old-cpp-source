
#include<iostream.h>
#define wrong(a) a*a*a
#define start 1
#define stop 9
inline squr(int num1)
	{	int squared=num1*num1;
  	return squared;	}
inline cube(int num2)
	{	int cubed=num2*num2*num2;
		return cubed;	}
main()
{
	int i,offset=5;
	for(i=start;i<=stop;i++)
		{
			cout<<"The square of "<<i+offset<<" is "<<squr(i+offset);
			cout<<" and its cube is "<<cube(i+offset)<<"\n";
			cout<<"The wrong of "<<i+offset<<" is "<<wrong(i+offset)<<"\n";
		}
	return 0;
}

	