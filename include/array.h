#ifndef __ARRAY_H_
#define __ARRAY_H_



/**
 * @brief 获取数组之和
 * @param array 传入的数组指针
 * @param length 数组的长度
 * @return int 返回数组之和
 */
int arraySum(int *array, int length);

/**
 * @brief 获取数组最大值
 * @param array 传入的数组指针
 * @param length 数组的长度
 * @return int 返回数组最大值
 */
int arrayGetMax(int *array, int length);


/**
 * @brief 将数组进行翻转
 * @param array 传入的数组指针
 * @param length 数组的长度
 */
void arrayReverse(int *array, int length);

#endif // __ARRAY_H_