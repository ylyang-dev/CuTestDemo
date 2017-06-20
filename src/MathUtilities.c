#include <math.h>


unsigned long factorial ( unsigned long number )
{
	if ( number <= 1 )
		return 1;
	else
		return number * factorial ( number - 1 );
}

