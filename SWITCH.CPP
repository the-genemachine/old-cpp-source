
#include<iostream.h>
main()
{
	for(int truck=3;truck<13;truck++)
		{
			switch(truck)
				{
					case 3: cout<<"The value is three.\n";
									break;
					case 4: cout<<"The value is four.\n";
									break;
					case 5:
					case 6:
					case 7:
					case 8: cout<<"The value is between 5 and 8.\n";
									break;
					case 11: cout<<"The value is eleven.\n";
									break;

					default: cout<<"It is one of the undefined values.\n";
									 break;
				}
		}
	return 0;
}
