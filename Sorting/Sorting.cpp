#include <iostream>

// exchange two elements in array a[]
template <typename T>
void exch(T a[], int i, int j)
{
	T temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}

// 1) the implementation of insertion sort
template <typename T>
void InsertionSort(T a[], int N)
{
	for (int i = 1; i < N; i++)
	{
		for (int j = i; j>0 && a[j]<a[j - 1]; j--)
			exch(a, j, j - 1);
	}
}

// 2) the implementaton of selection sort
template <typename T>
void SelectionSort(T a[], int N)
{
	for (int i = 0; i<N; i++)
	{
		for (int j=i+1; j<N; j++)
		{
			if (a[j] < a[i])
				exch(a, i, j);
		}
	}
}


int main()
{
	//	int aa[] = {100, 50, 20, 60, 30,16, 62, 6, 8};
	//	double aa[] = {10.2, 0.66, 3.58, 0.001, 100.506, 2.345, 7.568};
	char aa[] = { 'j', 'f', 'g', 'w', 'x', 'e', 'd', 'a', 'b' };

	int N = sizeof(aa) / sizeof(aa[0]);

	SelectionSort(aa, N);

	for (int i = 0; i < N; i++)
		std::cout << std::dec << aa[i] << std::endl;

	return 0;
}