#include <stdio.h>
int main(){
	int n;
	printf("Nhap so so nguyen trong mang n = ");
	scanf("%d",&n);

	int ar[n];
	printf("Nhap %d so nguyen:\n",n);
	for(int i=0;i<n;i++){
		scanf("%d",&ar[i]);
	}
	int z=0;
	for(int i=n-1;i>=0;i--){
		if(ar[i]%2==1){
			printf("So le cuoi cung cua mang la %d",ar[i]);
			break;
		}else{
			z++;
		}
	}
	if(z!=0){
		printf("Mang khong co so le");
	}
}