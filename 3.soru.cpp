//Ceyda Yenilmez
//2018280053


#include <stdio.h>
#include <math.h>

int main()
{
	float input_array[10];
	int i,j;
	float a1, a2, a3;
	for (i=0;i<10;i++){
		printf("Dizinin %d. elemanini giriniz ..: ", i+1);
		scanf("%f", &input_array[i]);
	}
	a1 = 0;
	a2 = 1;
	a3 = 0;
	for (i=0;i<10;i++){
		a1 = a1 + input_array[i];
		a2 = a2 * input_array[i];
		a3 = a3 + (1 / input_array[i]);
	}
	
	float AO, GO, HO;
	
	AO = a1 / 10;
	GO = pow(a2,1.0/10.0);
	HO = 10 / a3;
	
	printf("\nDizinin aritmatik ortalamasi : %f", AO);
	printf("\nDizinin geometrik ortalamasi : %f", GO);
	printf("\nDizinin harmonik ortalamasi  : %f", HO);
}
