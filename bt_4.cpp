#include <stdio.h>

int main() {
	int arr[] = {5,3,4,1,2},
	n = sizeof(arr)/sizeof(arr[0]);
	for (int i=0;i<n-1;i++) {
		int min=i;
		for (int j=i+1; j<n; j++) {
			if (arr[j]<arr[min]) {
				min=j;
			}
		}
		int temp=arr[min];
		arr[min]=arr[i];
		arr[i]=temp;
		
 }
	printf("mang duong sap xep la: ");
	for (int i=0;i<n;i++) {
		printf("%d ",arr[i]);
	}
	return 0;
}
