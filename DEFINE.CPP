
#include<iostream.h>
#define start 0
#define ending 9
int mx,mn;
inline minmax(a,b)
	{
		if(a>b)
			{	mx=a;
        mn=b;	}
		else
			{	mx=b;
				mn=a;	}
    return mx,mn;
	}
main()
{
	int index,count=5;

	for(index=start;index<=ending;index++)
		{
			mx=minmax(index,count);
			mn=minmax(index,count);
			cout<<"Max is "<<mx;
			cout<<" and min is "<<mn<<"\n";
		}
	return 0;
}
