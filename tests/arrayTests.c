#include "unity.h"
#include "array.h"
void setUp(void) {
    // set stuff up here
}

void tearDown(void) {
    // clean stuff up here
}

void test_arraySum_normalValues(void) {
    //test stuff
    int a[] = {-1, 2, -3, 4, 5};
    TEST_ASSERT_EQUAL_INT(7, arraySum(a, 5));
}

void test_arraySum_nullArray(void) {
    //test stuff
    int a[] = {};
    TEST_ASSERT_EQUAL_INT(0, arraySum(a, 0));
}

void test_arrayGetMax_normalValues(void) {
    //test stuff
    int a1[] = {1, -3, 5, 9, 13, 88};
    TEST_ASSERT_EQUAL_INT(88, arrayGetMax(a1, 6));
    int a2[] = {-3, -4, -5, -6, -7, -8};
    TEST_ASSERT_EQUAL_INT(-3, arrayGetMax(a2, 6));
}


// not needed when using generate_test_runner.rb
int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_arraySum_normalValues);
    RUN_TEST(test_arraySum_nullArray);
    RUN_TEST(test_arrayGetMax_normalValues);

    return UNITY_END();
}