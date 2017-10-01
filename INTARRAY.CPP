
#include<iostream.h>
inline func(int index)
	{	int a;
		a=2*(index+4);
		return a;	}

main()
{
	int values[12];

	for(int index=0;index<12;index++) values[index]=func(index);
	for(index=0;index<12;index++)
		cout<<"The value at index "<<index<<" is "<<values[index]<<"\n";

	return 0;
}
			 