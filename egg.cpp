#include <stdio.h>

int main()
{
	int i;
	for(i=0;i<4;++i)
	{
		printf("egg-%d\n", i );	// please print egg-1, egg-2, egg-3, ..., egg-9
	}
	for(i=4;i>2;--i)
	{
		printf("egg-%d\n", i );	// please print egg-1, egg-2, egg-3, ..., egg-9
	}
getc(stdin);
return 0;
}
