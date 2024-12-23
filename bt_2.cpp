#include<stdio.h>
using namespace std;
int main(){
	int arr[]={3,5,2,7,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	for (int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
		if(arr[j]>arr[j+1]){
			int temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
			printf("%d\n",j);
		}
}}
for(int i=0;i<n;i++){
	printf("%d",arr[i]);
}
	return 0;
}
