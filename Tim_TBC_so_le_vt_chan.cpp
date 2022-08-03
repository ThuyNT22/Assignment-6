#include <stdio.h>
int main(){
	int n;
	printf("Nhap so so muon nhap vao mang n = ");
	scanf("%d",&n);

	int ar[n];
	int j=0;
	int sum=0;
	printf("Nhap %d so nguyen\n",n);
	for(int i=0;i<n;i++){
		scanf("%d",&ar[i]);
	}
	for(int i=1;i<n;i+=2){
		if(ar[i]%2==1){
			j++;
			sum=sum+ar[i];
		}
	}
	int tbc;
	tbc = sum/j;
	printf("Trung binh cong cac so le o vi tri chan trong mang la %d",tbc);

}