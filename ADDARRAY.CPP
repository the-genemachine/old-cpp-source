
#include<iostream.h>
main()
{
	int arrays[10],array1[10],array2[10];

	for(int a=0;a<10;a++)
		{
			array1[a]=a*2;
			array2[a]=a*10;
			arrays[a]=array1[a]+array2[a];
		}
	for(a=0;a<10;a++)
  	cout<<a+1<<"\t"<<array1[a]<<" + "<<array2[a]<<" = "<<arrays[a]<<"\n";

	return 0;
}
