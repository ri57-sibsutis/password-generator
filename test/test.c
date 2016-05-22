#include <ctest.h>
#include <mode.h>

CTEST(check_LAM, test_LAM)
{
	//Given
	const int lenght = 5;
	const int amount = 5;
	const int mode = 4;
	//When
	int statusL = 1, statusA = 1, statusM = 1;
	const int statusEND = check(lenght, amount, mode, &statusL, &statusA, &statusM);

	//Then
	const int expected_sA = 1;
	const int expected_sL = 1;
	const int expected_sM = 1;

	ASSERT_EQUAL(expected_sA, statusA);
	ASSERT_EQUAL(expected_sL, statusL);
	ASSERT_EQUAL(expected_sM, statusM);
	ASSERT_EQUAL(1, statusEND);
}

CTEST(check_LAM, test_LAM_border_max)
{
	//Given
	const int lenght = 20;
	const int amount = 20;
	const int mode = 4;
	//When
	int statusL = 1, statusA = 1, statusM = 1;
	const int statusEND = check(lenght, amount, mode, &statusL, &statusA, &statusM);

	//Then
	const int expected_sA = 1;
	const int expected_sL = 1;
	const int expected_sM = 1;

	ASSERT_EQUAL(expected_sA, statusA);
	ASSERT_EQUAL(expected_sL, statusL);
	ASSERT_EQUAL(expected_sM, statusM);
	ASSERT_EQUAL(1, statusEND);
}

CTEST(check_LAM, test_LAM_border_min)
{
	//Given
	const int lenght = 4;
	const int amount = 1;
	const int mode = 1;
	//When
	int statusL = 1, statusA = 1, statusM = 1;
	const int statusEND = check(lenght, amount, mode, &statusL, &statusA, &statusM);

	//Then
	const int expected_sA = 1;
	const int expected_sL = 1;
	const int expected_sM = 1;

	ASSERT_EQUAL(expected_sA, statusA);
	ASSERT_EQUAL(expected_sL, statusL);
	ASSERT_EQUAL(expected_sM, statusM);
	ASSERT_EQUAL(1, statusEND);
}

CTEST(check_LAM, test_error_statusL)
{
	//Given
	const int lenght = 25;
	const int amount = 5;
	const int mode = 4;
	//When
	int statusL = 1, statusA = 1, statusM = 1;
	const int statusEND = check(lenght, amount, mode, &statusL, &statusA, &statusM);

	//Then
	const int expected_sA = 1;
	const int expected_sL = 0;
	const int expected_sM = 1;

	ASSERT_EQUAL(expected_sA, statusA);
	ASSERT_EQUAL(expected_sL, statusL);
	ASSERT_EQUAL(expected_sM, statusM);
	ASSERT_EQUAL(0, statusEND);
}

CTEST(check_LAM, test_error_statusA)
{
	//Given
	const int lenght = 5;
	const int amount = 50;
	const int mode = 4;
	//When
	int statusL = 1, statusA = 1, statusM = 1;
	const int statusEND = check(lenght, amount, mode, &statusL, &statusA, &statusM);

	//Then
	const int expected_sA = 0;
	const int expected_sL = 1;
	const int expected_sM = 1;

	ASSERT_EQUAL(expected_sA, statusA);
	ASSERT_EQUAL(expected_sL, statusL);
	ASSERT_EQUAL(expected_sM, statusM);
	ASSERT_EQUAL(0, statusEND);
}

CTEST(check_LAM, test_error_statusM)
{
	//Given
	const int lenght = 5;
	const int amount = 5;
	const int mode = 6;
	//When
	int statusL = 1, statusA = 1, statusM = 1;
	const int statusEND = check(lenght, amount, mode, &statusL, &statusA, &statusM);

	//Then
	const int expected_sA = 1;
	const int expected_sL = 1;
	const int expected_sM = 0;

	ASSERT_EQUAL(expected_sA, statusA);
	ASSERT_EQUAL(expected_sL, statusL);
	ASSERT_EQUAL(expected_sM, statusM);
	ASSERT_EQUAL(0, statusEND);
}

CTEST(mode_test, test_mode1)
{
	//Given
	const int lenght = 6;
	char password[lenght];
	
	//When
	const int dopsym = mode1(lenght, password);
	const int len = slen(password);

	//Then
	ASSERT_EQUAL(0, dopsym);
	ASSERT_EQUAL(len, lenght);
}

CTEST(mode_test, test_mode1_2)
{
	//Given
	const int lenght = 10;
	char password[lenght];
	
	//When
	const int dopsym = mode1(lenght, password);
	const int len = slen(password);

	//Then
	ASSERT_EQUAL(0, dopsym);
	ASSERT_EQUAL(len, lenght);
}

CTEST(mode_test, test_mode2)
{
	//Given
	const int lenght = 6;
	char password[lenght];
	
	//When
	const int dopsym = mode2(lenght, password);
	const int len = slen(password);

	//Then
	ASSERT_EQUAL(0, dopsym);
	ASSERT_EQUAL(len, lenght);
}

CTEST(mode_test, test_mode2_2)
{
	//Given
	const int lenght = 15;
	char password[lenght];
	
	//When
	const int dopsym = mode2(lenght, password);
	const int len = slen(password);

	//Then
	ASSERT_EQUAL(0, dopsym);
	ASSERT_EQUAL(len, lenght);
}

CTEST(mode_test, test_mode3)
{
	//Given
	const int lenght = 6;
	char password[lenght];
	
	//When
	const int dopsym = mode3(lenght, password);
	const int len = slen(password);
	
	//Then
	ASSERT_EQUAL(0, dopsym);
	ASSERT_EQUAL(len, lenght);
}

CTEST(mode_test, test_mode3_2)
{
	//Given
	const int lenght = 10;
	char password[lenght];
	
	//When
	const int dopsym = mode3(lenght, password);
	const int len = slen(password);
	
	//Then
	ASSERT_EQUAL(0, dopsym);
	ASSERT_EQUAL(len, lenght);
}

CTEST(mode_test, test_mode4)
{
	//Given
	const int lenght = 6;
	char password[lenght];
	
	//When
	const int dopsym = mode4(lenght, password);
	const int len = slen(password);
	
	//Then
	ASSERT_EQUAL(0, dopsym);
	ASSERT_EQUAL(len, lenght);
}

CTEST(mode_test, test_mode4_2)
{
	//Given
	const int lenght = 10;
	char password[lenght];
	
	//When
	const int dopsym = mode4(lenght, password);
	const int len = slen(password);
	
	//Then
	ASSERT_EQUAL(0, dopsym);
	ASSERT_EQUAL(len, lenght);
}

