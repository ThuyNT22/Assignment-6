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
			int sld=0;
			for(int j=i;j<n;j++){
				if(ar[j]>0){
					sld++;
				}
				if(ar[j]<=0){
					break;
				}
			}
			if(sld>max){
				max=sld;
			}
		}
	}
	printf("So luong so duong lien tiep trong mang la %d",max);
}