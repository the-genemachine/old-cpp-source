
#include<iostream.h>
#include<string.h>
main()
{
	char s1[7],s2[7],s3[7],s4[30];
	strcpy(s1,"one");
	strcpy(s2,"two");
	strcpy(s3,"three");

	strcat(s4,s1);
	strcat(s4," ");
	strcat(s4,s2);
	strcat(s4," ");
	strcat(s4,s3);

	for(int i=0;i<10;i++)
		cout<<s4<<"\n";

	return 0;
}
