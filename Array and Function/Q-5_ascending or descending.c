//

#include <stdio.h>

void swap(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortAscending(int arr[], int n)
{
	int i, j;
	
    for (i = 0; i < n-1; i++) 
	{
        for (j = 0; j < n-i-1; j++) 
		{
            if (arr[j] > arr[j+1]) 
			{
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

void sortDescending(int arr[], int n) 
{
	int i, j;
    for (i = 0; i < n-1; i++) {
    	
        for (j = 0; j < n-i-1; j++) 
		{
            if (arr[j] < arr[j+1]) 
			{
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

void displayArray(int arr[], int n) 
{
	int i, j;
    for (i = 0; i < n; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n1, n2, choice;
    
    printf("\n\n\t Enter the size of the first array: ");
    scanf("%d", &n1);
    printf("\n\n\t Enter the size of the second array: ");
    scanf("%d", &n2);
    
    int arr1[n1], arr2[n2], i;
    
    printf("\n\n\t Enter elements for the first array: ");
    
    for (i = 0; i < n1; i++) 
	{
        scanf("%d", &arr1[i]);
    }
    
    printf("\n\n\t Enter elements for the second array: ");
    for (i = 0; i < n2; i++) 
	{
        scanf("%d", &arr2[i]);
    }
    
    printf("\n\n\t Enter 1 for Ascending order or 2 for Descending order: ");
    scanf("%d", &choice);
    
    if (choice == 1) 
	{
        sortAscending(arr1, n1);
        sortAscending(arr2, n2);
        
        printf("\n\n\t Arrays sorted in Ascending order: ");
        
    } 
	else if (choice == 2) 
	{
        sortDescending(arr1, n1);
        sortDescending(arr2, n2);
        
        printf("\n\n\t Arrays sorted in Descending order: ");
    } 
	else 
	{
        printf("\n\n\t Invalid choice!");
        return 1;
    }
    
    printf("First array: ");
    displayArray(arr1, n1);
    
    printf("Second array: ");
    displayArray(arr2, n2);
    
}

