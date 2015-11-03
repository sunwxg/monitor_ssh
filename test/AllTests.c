// File is generated automatically. Don't edit it.

#include "unity_fixture.h"

TEST_GROUP_RUNNER(child_process)
{
	RUN_TEST_CASE(child_process,child_process);
}

static void runAllTests(void)
{
	RUN_TEST_GROUP(child_process);
}

int main(int argc, const char* argv[])
{
    return UnityMain(argc, argv, runAllTests);
}
