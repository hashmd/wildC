#include <stdio.h>

void  sort(int *p, int z[]);
void toString(int z[]);
int main(){
	
	int *p;

	int z[10];
	p = &z[0];
	
	z[0] = 1041;
	z[1] = 1200;
	z[2] = 789;
	z[3] = 6453;
	z[4] = 1400;
	z[5] = 320;
	z[6] = 3240;
	z[7] = 210;
	z[8] = 345;
	z[9] = 650;
	
	toString(z);
	sort(p, z);
	toString(z);	
}

void sort(int *p, int z[]){
	int i, j, temp;
	int *q;
	for(i = 0; i < 10; i++){
		p = &z[i];
		for(j = i + 1; j < 10; j++){
			q = &z[j];
			if(*p > *q){
				temp = *p;
				*p = *q;
				*q = temp;
			}
		}
	}

}

void toString(int z[]){
	int i;

	printf("z: ");

	for(i = 0; i < 9; i++){
		printf("%d, ", z[i]);
	}	
	printf("%d\n" , z[9]);
}
