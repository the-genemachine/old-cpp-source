
#include<iostream.h>
#include<string.h>
main()
{
	char name1[12],name2[12],mixed[25],title[20];

	strcpy(name1,"Rosalinda");
	strcpy(name2,"Zeke");
	strcpy(title,"This is the title.");

	cout<<"\t\t"<<title<<"\n\n";
	cout<<"Name1 is "<<name1<<"\n";
	cout<<"Name2 is "<<name2<<"\n";

	if(strcmp(name1,name2)>0) strcpy(mixed,name1);
	else strcpy(mixed,name2);

	cout<<"The biggest name alphbetically is "<<mixed<<"\n";

	strcpy(mixed,name1);
	strcat(mixed," ");
	strcat(mixed,name2);

	cout<<"Both names are "<<mixed<<"\n";

	return 0;
}

