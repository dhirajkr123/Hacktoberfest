#include <stdio.h>
#include<stdlib.h>

int Merge(int a[], int arr[], int low, int mid, int high)
{
	int k = low, i = low, j = mid + 1;
	int inversionCount = 0;


	while (i <= mid && j <= high)
	{
		if (a[i] <= a[j]) {
			arr[k++] = a[i++];
		}
		else {
			arr[k++] = a[j++];
			inversionCount += (mid - i + 1);
		}
	}


	while (i <= mid)
		arr[k++] = a[i++];


	for (int i = low; i <= high; i++)
		a[i] = arr[i];

	return inversionCount;
}


int MergeSort(int a[], int arr[], int low, int high)
{

	if (high == low)
		return 0;


	int mid = (low + ((high - low) >> 1));
	int inversionCount = 0;


	inversionCount += MergeSort(a, arr, low, mid);
	inversionCount += MergeSort(a, arr, mid + 1, high);
	inversionCount += Merge(a, arr, low, mid, high);

	return inversionCount;
}

int main()
{
	int t;
	scanf(" %d",&t);
	while(t--)
    {
    int n,i;
    scanf(" %d",&n);
    int *arr = (int * )malloc(n * sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",(arr+i));
    }
    int array[n];
	  for (int i = 0; i < n; i++){
		array[i] = arr[i];}


	printf("%d ", MergeSort(arr, array, 0, n - 1));
	printf("\n");
    }
	return 0;
}
