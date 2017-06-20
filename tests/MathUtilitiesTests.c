#include <string.h>

#include "CuTest.h"
#include "../src/MathUtilities.h"


void TestFactorial_Zero ( CuTest *tc )
{
	unsigned long	actual = factorial ( 0 );
	unsigned long	expected = 1;

	CuAssertIntEquals ( tc, expected, actual );
}

void TestFactorial_One ( CuTest *tc )
{
	unsigned long	actual = factorial ( 1 );
	unsigned long	expected = 1;

	CuAssertIntEquals ( tc, expected, actual );
}

void TestFactorial_Ten ( CuTest *tc )
{
	unsigned long	actual = factorial ( 10 );
	unsigned long	expected = 3628800;

	CuAssertIntEquals ( tc, expected, actual );
}

CuSuite* MathUtilitiesGetSuite ()
{
	CuSuite* suite = CuSuiteNew ();

	SUITE_ADD_TEST ( suite, TestFactorial_Zero );
	SUITE_ADD_TEST ( suite, TestFactorial_One );
	SUITE_ADD_TEST ( suite, TestFactorial_Ten );

	return suite;
}

