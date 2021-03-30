#include<stdio.h>
#include<stdbool.h>

void nhap( int arr[], int n){
	int i;
	for(i= 0; i< n; i++){
		scanf("%d", &arr[i]);
	}
}
bool timX( int arr[100] , int n, int x ) {
	for( int i= 0; i< n; i++ ) {
		if(arr[i]== x)
			return true;
	}
	return false;
}
int dem( int arr[], int n, int x){
	int i;
	int count=0;
	for(i= 0; i< n; i++){
		if(arr[i]==x){
			count++;
		}
	}
	return count;
}
int main(){
	int n;
	int a=0;
	int arr[100], arrB[100], arrC[100];
	scanf("%d",&n);
	while(n>0) {
		arr[a]=n%10;
		a++;
		n/=10;
	}	
	for(int i= 0; i< a; i++){      
		arrB[i]=arr[a-1-i];           																						
	}
	printf("%d %d\n", arrB[0] , dem(arrB , a , arrB[0]));
	for(int i= 1; i< a; i++){
		if( !timX(arrB , i , arrB[i]) ) {
			printf("%d %d\n", arrB[i] , dem(arrB , a , arrB[i]));
		}
	}
	return 0;
}