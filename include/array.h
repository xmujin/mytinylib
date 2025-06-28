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
 * 
 * @warning 在数组空间不足时会导致数组元素值被覆盖
 */
void arrayInsert(int *array, int length, int pos, int val);


/**
 * @brief 对数组进行快速排序
 * @param array 数组指针
 * @param length 数组长度
 * @param sortway 升序或降序
 */
void arrayQuickSort(int *array, int length, SortWay sortway);


/**
 * @brief 选择排序完成升序排序
 * @param array 数组指针
 * @param length 数组长度
 */
void arraySelectionSort(int *array, int length);


/**
 * @brief 冒泡排序完成升序排序
 * @param array 数组指针
 * @param length 数组长度
 */
void arrayBubbleSort(int *array, int length);

#endif // __ARRAY_H_