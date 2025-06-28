#include "array.h"
#include <stdio.h>
#include <assert.h>

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