
#include<iostream.h>
#include<string.h>
CallName(char name[]);
main()
{
	char MyName[]="Gene-Russell Gallant";

	CallName(MyName);
	return 0;
}
//////////////////////////////CallName()////////////////////////////////////
CallName(char name[])
{
	char n[21];
	for(int ctr=1;ctr<=10;ctr++)
		{
			strcpy(n,name);
			cout<<"My name is "<<n<<"\n";
		}
	return 0;
}
					
    	