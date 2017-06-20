#include <stdio.h>

#include "CuTest.h"


CuSuite*	MathUtilitiesGetSuite ();
CuSuite*	StringUtilitiesGetSuite ();


void RunAllTests ( void )
{
	CuString*	output = CuStringNew ();
	CuSuite*	suite = CuSuiteNew ();

	CuSuiteAddSuite ( suite, MathUtilitiesGetSuite () );
	CuSuiteAddSuite ( suite, StringUtilitiesGetSuite () );

	CuSuiteRun ( suite );
	CuSuiteSummary ( suite, output );
	CuSuiteDetails ( suite, output );

	printf("%s\n", output->buffer);
}


int main ( void )
{
	RunAllTests ();
}

