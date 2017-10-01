
//	Program that will count from 1 to 12, print the count and it's square.

#include<iostream.h>
#include<iomanip.h>
main()
{
	cout<<"Count"<<setw(10)<<"Square\n";
	for(int cnt=1;cnt<=12;cnt++)
		{
			cout<<cnt<<setw(10)<<cnt*cnt<<"\n";
		}
	return 0;
}
