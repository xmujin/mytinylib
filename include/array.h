#ifndef __ARRAY_H_
#define __ARRAY_H_


typedef enum {
    ASCENDING,
    DECENDING
}SortWay;



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

/**
 * @brief 将元素插入指定数组
 * @param array 数组指针
 * @param length 数组长度
 * @param pos 插入的位置索引
 * @param val 插入的值
 */
void arrayInsert(int *array, int length, int pos, int val);


/**
 * @brief 对数组进行快速排序
 * @param array 数组指针
 * @param length 数组长度
 * @param sortway 升序或降序
 */
void arrayQuickSort(int *array, int length, SortWay sortway);

#endif // __ARRAY_H_