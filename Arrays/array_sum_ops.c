/*#include<stdio.h>
int main()
{
	int arr[]={2,4,6,8};
	int size = sizeof arr/sizeof arr[0];
	int total =0;
	printf("the sizeof arr %lu and the sizeof arr[0] %lu \n ,size of arr,size of arr[0]]");
for	(int i=0;i<size;i++)
	{
		total=total+arr[i];
	}
	printf("the sum of array=%d\n",total);
	return 0;
}*/

#include<stdio.h>

int smallestArrElement(int *ptr,int size){
	int small=ptr[1];
	int i;
	for(i=0;i<size;i++){
		if(small>ptr[i]){
			small=ptr[i];
		}
	}
	return small;
}


int main(){
	int arr[]={2,3,1,10,5};
	int smallest=0;
	int size=sizeof arr/sizeof arr[0];
	
	smallest=smallestArrElement(arr,size);
	
//	largest=largestElement(arr,size);
	
	
	printf("the smallest number is %d\n",smallest);
	return 0;
}
	
	
	
	
	



