#include <string.h>
#include <ctype.h>


char* StrToUpper ( char* str )
{
	char*	p;

	for ( p = str ; *p ; ++p )
		*p = toupper ( *p );

	return str;
}


char* StrToLower ( char* str )
{
	char*	p;

	for ( p = str ; *p ; ++p )
		*p = tolower ( *p );

	return str;
}

