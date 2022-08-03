#include <stdio.h>
int main(){
	int n;
	printf("Nhap so so nguyen cua mang n = ");
	scanf("%d",&n);

	int ar[n];
	printf("Nhap %d so nguyen:\n",n);
	for(int i=0;i<n;i++){
		scanf("%d",&ar[i]);
	}
	int max=0;
	for(int i=0;i<n;i++){
		if(ar[i]>0){
			int sum=0;
			for(int j=i;j<n;j++){
				if(ar[j]>0){
					sum=sum+ar[j];
				}
				if(ar[j]<=0){
					break;
				}
			}
			if(sum>max){
				max=sum;
			}
		}
	}
	printf("Tong lon nhat cua chuoi so duong trong mang la %d",max);
}