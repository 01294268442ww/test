#include"Sort.h"

void TestOP()
{
	srand(time(0));
	const int N = 100000;
	int* a1 = (int*)malloc(sizeof(int) * N);
	int* a2 = (int*)malloc(sizeof(int) * N);
	int* a3 = (int*)malloc(sizeof(int) * N);
	int* a4 = (int*)malloc(sizeof(int) * N);
	int* a5 = (int*)malloc(sizeof(int) * N);
	int* a6 = (int*)malloc(sizeof(int) * N);
	for (int i = 0; i < N; ++i)
	{
		a1[i] = rand();
		a2[i] = a1[i];
		a3[i] = a1[i];
		a4[i] = a1[i];
		a5[i] = a1[i];
		a6[i] = a1[i];
	}
	int begin1 = clock();
	InsertSort(a1, N);
	int end1 = clock();
	int begin2 = clock();
	//ShellSort(a2, N);
	int end2 = clock();
	int begin3 = clock();
	//SelectSort(a3, N);
	int end3 = clock();
	int begin4 = clock();
	//HeapSort(a4, N);
	int end4 = clock();
	int begin5 = clock();
	//QuickSort(a5, 0, N - 1);
	int end5 = clock();
	int begin6 = clock();
	//MergeSort(a6, N);
	int end6 = clock();
	printf("InsertSort:%d\n", end1 - begin1);
	//printf("ShellSort:%d\n", end2 - begin2);
	//printf("SelectSort:%d\n", end3 - begin3);
	//printf("HeapSort:%d\n", end4 - begin4);
	//printf("QuickSort:%d\n", end5 - begin5);
	//printf("MergeSort:%d\n", end6 - begin6);
	free(a1);
	free(a2);
	free(a3);
	free(a4);
	free(a5);
	free(a6);
}

void TestInsertSort()
{
	int a[] = { 2,4223,432,41,4,1,9,8,54,43,63,332 };
	int sz = sizeof(a) / sizeof(a[0]);
	InsertSort(a, sz);
	ArrayPrint(a, sz);
}

void TestShellSort()
{
	int a[] = { 2,4223,432,41,4,1,9,8,54,43,63,332 };
	int sz = sizeof(a) / sizeof(a[0]);
	ShellSort(a, sz);
	ArrayPrint(a, sz);
}

void TestSelectSort()
{
	int a[] = { 2,4223,432,41,4,1,9,8,54,43,63,332 };
	int sz = sizeof(a) / sizeof(a[0]);
	SelectSort(a, sz);
	ArrayPrint(a, sz);
}

void TestHeapSort()
{
	int a[] = { 2,4223,432,41,4,1,9,8,54,43,63,332 };
	int sz = sizeof(a) / sizeof(a[0]);
	HeapSort(a, sz);
	ArrayPrint(a, sz);
}

void TestBubbleSort()
{
	int a[] = { 2,4223,432,41,4,1,9,8,54,43,63,332 };
	int sz = sizeof(a) / sizeof(a[0]);
	BubbleSort(a, sz);
	ArrayPrint(a, sz);
}

void TestQuickSort()
{
	int a[] = { 2,4223,432,41,4,1,9,8,54,43,63,332 };
	int sz = sizeof(a) / sizeof(a[0]);
	QuickSort(a, 0, sz - 1);
	ArrayPrint(a, sz);
}

void TestQuickSortNonR()
{
	int a[] = { 2,4223,432,41,4,1,9,8,54,43,63,332 };
	int sz = sizeof(a) / sizeof(a[0]);
	QuickSortNonR(a, 0, sz - 1);
	ArrayPrint(a, sz);
}

void TestMergeSort()
{
	int a[] = { 2,4223,432,41,4,1,9,8,54,43,63,332 };
	int sz = sizeof(a) / sizeof(a[0]);
	MergeSort(a, sz - 1);
	ArrayPrint(a, sz);
}

void TestMergeSortNonR()
{
	int a[] = { 2,4223,432,41,4,1,9,8,54,43,63,332 };
	int sz = sizeof(a) / sizeof(a[0]);
	MergeSortNonR(a, sz - 1);
	ArrayPrint(a, sz);
}

void TestRadixSort()
{
	int a[] = { 278,109,63,930,589,184,505,269,8,83 };
	int sz = sizeof(a) / sizeof(a[0]);
	Init(Q);
	RadixSort(a, 0, sz);
	ArrayPrint(a,sz);
	Destroy(Q);
}

int main1()
{
	//TestOP();
	//TestInsertSort();
	//TestShellSort();
	//TestSelectSort();
	//TestHeapSort();
	//TestBubbleSort();
	//TestQuickSort();
	//TestQuickSortNonR();
	//TestMergeSort();
	//TestMergeSortNonR();
	TestRadixSort();
	return 0;
}