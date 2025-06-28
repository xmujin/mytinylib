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

void arrayInsert_normal(void) {
    int a[5] = {1, 2, 3, 4};
    arrayInsert(a, 5, 2, 33);
    TEST_ASSERT_EQUAL(33, a[2]);
    int a1[1] = {3};
    arrayInsert(a, 1, 0, 22);
    TEST_ASSERT_EQUAL(22, a[0]);
    arrayInsert(a, 5, 4, 15);
    TEST_ASSERT_EQUAL(15, a[4]);
} 

void arraySort_ascendingAndDecending(void) {
    int a[5] = {3, 4, 2, 1, 7};
    arrayQuickSort(a, 5, ASCENDING);
    TEST_ASSERT_EQUAL(4, a[3]);
    arrayQuickSort(a, 5, DECENDING);
    TEST_ASSERT_EQUAL(7, a[0]);
}


void arraySelectionSort_normal(void) {
    int a[5] = {3, 7, 3, 22, 11};
    arraySelectionSort(a, 5);
    TEST_ASSERT_EQUAL(7, a[2]);

}

void arrayBubbleSort_normal(void) {
    int a[5] = {3, 7, 3, 22, 11};
    arrayBubbleSort(a, 5);
    TEST_ASSERT_EQUAL(7, a[2]);
}


// not needed when using generate_test_runner.rb
int main(void) {
    UNITY_BEGIN();
    RUN_TEST(arraySum_normalValues);
    RUN_TEST(arraySum_nullArray);
    RUN_TEST(arrayGetMax_normalValues);
    RUN_TEST(arrayReverse_oddLength);
    RUN_TEST(arrayReverse_evenLength);
    RUN_TEST(arrayInsert_normal);
    RUN_TEST(arraySort_ascendingAndDecending);
    RUN_TEST(arraySelectionSort_normal);
    RUN_TEST(arrayBubbleSort_normal);
    return UNITY_END();
}