
#include<iostream.h>
const int null=0;
main()
{
	char name[5];

	name[0]='D';
	name[1]='a';
	name[2]='v';
	name[3]='e';
	name[4]=null;

	cout<<"The name is "<<name<<"\n";
	cout<<"One letter is "<<name[2]<<"\n";
	cout<<"Part of the name is "<<&name[1]<<"\n";

	return 0;
}
