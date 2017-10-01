
#include<iostream.h>
main()
{
	for(int xx=5;xx<15;xx++)
		{
			if(xx==8)break;
			cout<<"In the break loop, xx is now "<<xx<<"\n";
		}

	for(xx=5;xx<15;xx++)
		{
			if(xx==8)continue;
			cout<<"In the continue loop, xx is now "<<xx<<"\n";
		}
	return 0;
}
