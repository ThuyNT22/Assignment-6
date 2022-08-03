#include <stdio.h>
int main(){
	int n;
	printf("Nhap so so nguyen can tao mang n =");
	scanf("%d",&n);

	int ar[n];
	printf("Nhap %d so nguyen:\n",n);
	for(int i=0;i<n;i++){
		scanf("%d",&ar[i]);
	}
	int x;
	printf("Nhap so nguyen x =");
	scanf("%d",&x);
	int z=0;
	for(int i=0;i<n;i++){
		if(ar[i]==x){
			z++;
		}
	}
	if(z==0){
		printf("So nguyen %d khong co trong mang",x);
	}else{
		printf("So nguyen %d co trong mang",x);
	}

}