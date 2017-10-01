
#include<iostream.h>
#include<string.h>
void ForwardAndBackwards(char LineOfChar[],int index);
main()
{
	int index=0;
  char LineOfChar[80];
	strcpy(LineOfChar,"This is a string.\n");
	ForwardAndBackwards(LineOfChar,index);
	return 0;
}
///////////////////FORWARD_AND_BACKWARDS FUNCTION///////////////////////////
void ForwardAndBackwards(char LineOfChar[],int index)
{
	if(LineOfChar[index])
		{
			cout<<LineOfChar[index];
			index++;
			ForwardAndBackwards(LineOfChar,index);
		}
	cout<<LineOfChar[index];
}
