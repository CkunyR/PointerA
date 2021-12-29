//--指针减指针（地址j减地址）
//得到的是指针和指针之间元素的个数

#include <stdio.h>

int main()
{
	char ch[10] = { 0 };
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = &arr[9] - &arr[1];//大地址减去小地址（同一块空间）
	printf("%d\n", p);
	printf("%d\n", &arr[9] - &ch[0]);//err
	return 0;
}