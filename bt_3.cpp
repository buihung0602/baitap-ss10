#include<stdio.h>
using namespace std;
int main(){
	int arr[]={3,5,2,7,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	for (int i=1;i<n;i++){
		int temp=arr[i];
		int j;
		for(j=i-1;j>=0&&arr[j]>temp;j--){
			arr[j+1]=arr[j];
	
		}
		arr[j+1]=temp;
			}
for(int i=0;i<n;i++){
	printf("%d",arr[i]);
}
	return 0;
}
