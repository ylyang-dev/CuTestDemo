#include <string.h>

#include "CuTest.h"
#include "../src/StringUtilities.h"


void TestStrToUpper_LowerCase ( CuTest *tc )
{
	char*	input = strdup ( "hello world" );
	char*	actual = StrToUpper ( input );
	char*	expected = "HELLO WORLD";

	CuAssertStrEquals ( tc, expected, actual );
}

void TestStrToUpper_MixedCase ( CuTest *tc )
{
	char*	input = strdup ( "HELLo world" );
	char*	actual = StrToUpper ( input );
	char*	expected = "HELLO WORLD";

	CuAssertStrEquals ( tc, expected, actual );
}

void TestStrToUpper_Numbers ( CuTest *tc )
{
	char*	input = strdup ( "12345 world" );
	char*	actual = StrToUpper ( input );
	char*	expected = "12345 WORLD";

	CuAssertStrEquals ( tc, expected, actual );
}

void TestStrToUpper_EmptyString ( CuTest *tc )
{
	char*	input = strdup ( "" );
	char*	actual = StrToUpper ( input );
	char*	expected = "";

	CuAssertStrEquals ( tc, expected, actual );
}

void TestStrToLower_UpperCase ( CuTest *tc )
{
	char*	input = strdup ( "HELLO WORLD" );
	char*	actual = StrToLower ( input );
	char*	expected = "hello world";

	CuAssertStrEquals ( tc, expected, actual );
}

void TestStrToLower_MixedCase ( CuTest *tc )
{
	char*	input = strdup ( "HELLo world" );
	char*	actual = StrToLower ( input );
	char*	expected = "hello world";

	CuAssertStrEquals ( tc, expected, actual );
}

void TestStrToLower_Numbers ( CuTest *tc )
{
	char*	input = strdup ( "12345 WORLD" );
	char*	actual = StrToLower ( input );
	char*	expected = "12345 world";

	CuAssertStrEquals ( tc, expected, actual );
}

void TestStrToLower_EmptyString ( CuTest *tc )
{
	char*	input = strdup ( "" );
	char*	actual = StrToLower ( input );
	char*	expected = "";

	CuAssertStrEquals ( tc, expected, actual );
}

CuSuite* StrUtilGetSuite ()
{
	CuSuite* suite = CuSuiteNew ();

	SUITE_ADD_TEST ( suite, TestStrToUpper_LowerCase );
	SUITE_ADD_TEST ( suite, TestStrToUpper_MixedCase );
	SUITE_ADD_TEST ( suite, TestStrToUpper_Numbers );
	SUITE_ADD_TEST ( suite, TestStrToUpper_EmptyString );
	SUITE_ADD_TEST ( suite, TestStrToLower_UpperCase );
	SUITE_ADD_TEST ( suite, TestStrToLower_MixedCase );
	SUITE_ADD_TEST ( suite, TestStrToLower_Numbers );
	SUITE_ADD_TEST ( suite, TestStrToLower_EmptyString );

	return suite;
}

