#include <stdio.h>

void swap(int* xp,int* yp);
void sort (int arr[], int n);
void printArray(int arr[], int size);
void large_num(int arr[] , int n, int k);
void small_num(int arr[] ,int y);

int main()
{
    int n,k;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr, n);

    // printf("\nSorted array in Ascending order: \n");
    // printArray(arr, n);
    scanf("%d",k);
    large_num(arr, n, k);
    small_num(arr, k);


    return 0;
}
void swap(int* xp,int* yp)
{
    int temp = *xp;
    *xp=*yp;
    *yp=temp;
}
void sort(int arr[], int n)
{
	int i, j, min_idx;

	// One by one move boundary of unsorted sub-array
	for (i = 0; i < n - 1; i++) {

		// Find the minimum element in unsorted array
		min_idx = i;
		for (j = i + 1; j < n; j++)
			if (arr[j] < arr[min_idx])
				min_idx = j;

		// Swap the found minimum element
		// with the first element
		swap(&arr[min_idx], &arr[i]);
	}
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
void large_num(int arr[] , int n, int k){
    for(int i=(n-1); i>=(n-k); i--){
        if (i==(n-3)){
            printf("The %d th largest element is %d",k,arr[i]);
        }
    }
}
void small_num(int arr[] ,int y){
    for (int i=0; i<y; i++){
        if (i==(y-1)){
            printf("The %d th smallest element is %d",y,arr[i]);
        }
    }

}
