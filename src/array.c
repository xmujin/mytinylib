#include "array.h"
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>


#define swap(a, b) swapValue(&(a), &(b))

static inline void swapValue(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int arraySum(int *array, int length)
{
    assert(array != NULL && length >= 0);
    int res = 0;
    for (int i = 0; i < length; i++)
    {
        res += array[i];
    }
    return res;
}


int arrayGetMax(int *array, int length)
{
    assert(array != NULL && length > 0);
    int res = array[0];
    for (int i = 1; i < length; i++)
    {
        if(array[i] > res)
        {
            res = array[i];
        }
    }
    return res;
}

void arrayReverse(int *array, int length)
{
    assert(array != NULL && length > 0);
    int l = 0, r = length - 1;
    while(l < r)
    {
        swap(array[l], array[r]);
        l++;
        r--;
    }
}

void arrayInsert(int *array, int length, int pos, int val)
{
    assert(array != NULL && length > 0 && pos >= 0);
    for (int i = length - 1; i > pos; i--)
    {
        array[i] = array[i - 1];
    }
    array[pos] = val;
}

static int compareAscending(const void * a, const void * b)
{
    return (*(int*)a - *(int*)b);
}
static int compareDescending(const void * a, const void * b)
{
    return (*(int*)b - *(int*)a);
}

void arrayQuickSort(int *array, int length, SortWay sortway)
{
    assert(array != NULL && length > 0);
    if(sortway == ASCENDING)
    {
        qsort(array, length, sizeof(int), compareAscending);
    }
    else 
    {
        qsort(array, length, sizeof(int), compareDescending);
    }
    
}

void arraySelectionSort(int *array, int length)
{
    assert(array != NULL && length > 0);
    for (int i = 0; i < length - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < length; j++)
        {
            if(array[j] < array[i])
            {
                min = j; // 找出最小值的索引
            }
        }
        if(min != i)
        {
            swap(array[min], array[i]);
        }
    }
}


void arrayBubbleSort(int *array, int length)
{
    assert(array != NULL && length > 0);
    for (int i = 0; i < length - 1; i++)
    {
        for (int j = 0; j < length - i -1; j++)
        {
            if(array[j] > array[j + 1])
            {
                swap(array[j], array[j + 1]);
            }
        }
    }
    
}