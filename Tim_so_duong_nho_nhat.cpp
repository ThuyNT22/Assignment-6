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
	int min=ar[0];
	int z=0;
	for(int i=0;i<n;i++){
		if(ar[i]<=min && ar[i]>0){
			min=ar[i];
			z++;
		}
	}
	//chua xu ly duoc truong hop cac phan tu dau mang lien tiep bang 0
	if(z!=0){
		printf("So nguyen duong be nhat la %d",min);
	}else{
		printf("Mang khong co so nguyen duong be nhat");
	}
	
}