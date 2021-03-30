#include <stdio.h>
void nhap(int n, int a[]){
	int i;
 for(i=0;i<n;i++){
  scanf("%d",&a[i]);
 }
 }
void in(int n, int a[]){
	int i;
 for(i=0;i<n;i++){
  printf("%d\t",a[i]);
 }
}
void chen(int n,int m, int x, int a[], int b[]){
int i;
 for(i=m+n-1;i>=m+x;i--){
  a[i]=a[i-m];
 }
 for( i=m+x-1;i>=x;i--){
  a[i]=b[i-x];
 }
 for( i=0;i<n+m;i++){
  printf("%d ",a[i]);
 }
}
main()
{
 int n, a[100],b[100],m,x;
 scanf("%d%d%d",&n,&m,&x);
 nhap(n,a);
 nhap(m,b);
 chen(n,m,x,a,b);
}