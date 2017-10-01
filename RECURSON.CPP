
#include<iostream.h>
int count_dn(int count);
main()
{
	int index=8;
	count_dn(index);
	return 0;
}
//////////////////////////////COUNT_DN FUNCTION/////////////////////////////
int count_dn(int count)
{
	count--;
	cout<<"The value of count is "<<count<<"\n";
	if(count>0)
		{
			count_dn(count);
		}
	else
  	cout<<"Now the count is "<<count<<"\n";
	return 0;
}
