#include "unity.h"
#include "array.h"
void setUp(void) {
    // set stuff up here
}

void tearDown(void) {
    // clean stuff up here
}

void arraySum_normalValues(void) {
    //test stuff
    int a[] = {-1, 2, -3, 4, 5};
    TEST_ASSERT_EQUAL_INT(7, arraySum(a, 5));
}

void arraySum_nullArray(void) {
    //test stuff
    int a[] = {};
    TEST_ASSERT_EQUAL_INT(0, arraySum(a, 0));
}

void arrayGetMax_normalValues(void) {
    //test stuff
    int a1[] = {1, -3, 5, 9, 13, 88};
    TEST_ASSERT_EQUAL_INT(88, arrayGetMax(a1, 6));
    int a2[] = {-3, -4, -5, -6, -7, -8};
    TEST_ASSERT_EQUAL_INT(-3, arrayGetMax(a2, 6));
}

void arrayReverse_oddLength(void) {
    int a[] = {1, 3, 5, 7};
    arrayReverse(a, 4);
    TEST_ASSERT_EQUAL(5, a[1]);
}

void arrayReverse_evenLength(void) {
    int a[] = {1, 3, 5, 7, 9};
    arrayReverse(a, 5);
    TEST_ASSERT_EQUAL(1, a[4]);
}

// not needed when using generate_test_runner.rb
int main(void) {
    UNITY_BEGIN();
    RUN_TEST(arraySum_normalValues);
    RUN_TEST(arraySum_nullArray);
    RUN_TEST(arrayGetMax_normalValues);
    RUN_TEST(arrayReverse_oddLength);
    RUN_TEST(arrayReverse_evenLength);
    return UNITY_END();
}