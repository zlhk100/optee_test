#include <stdio.h>
#include <string.h>
#include <inttypes.h>
#include <malloc.h>
#include <time.h>

#include "xtest_test.h"
#include "xtest_helpers.h"

#include <sservices.h>
#include <util.h>
#include <assert.h>

static void xtest_tee_test_9001_single(ADBG_Case_t *c)
{
	SServicesResult ta_result = SServices_ERROR_GENERIC_ERROR;

	SServices_LibraryInit();

	ta_result = SServices_GetTime();

	SServices_LibraryDeInit();

	ADBG_EXPECT(c, SServices_SUCCESS, ta_result);
}
ADBG_CASE_DEFINE(regression, 9001, xtest_tee_test_9001_single,
		 "Send get_time command to sservices TA");
