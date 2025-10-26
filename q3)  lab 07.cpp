#include<stdio.h>
int main(){

	int n;
	printf("Enter the array size : ");
	scanf("%d",&n);
	int size[n];
	

	int i;

	for(i=0;i<n;i++){
	
		printf("Enter the number %d : \n",i+1);
		scanf("%d",&size[i]);
		
}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				printf("Number %d in array occur many times",arr[i]);
			}
		}
	}
	return 0;
}
