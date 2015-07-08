#include <stdio.h>

int swap_referencia(int *x, int *y);

int swap_valor(int x, int y);

int main (int argc, char *argv[]){
	int x = 9;
	int *p;
	int z[10];
	int i;
	for(i=0; i<10; i++){
		z[i] = i+1;
	}
	int *q, *t;
	q = &z[0];
	t = &z[0];

	if(q == t){
		printf("Son iguales, q y t\n");
	}

	for(i = 0; i < 10; i++){
		printf("El valor: %d\n", *(q++));
	}

	p = &x; //ahora el puntero p apunta a x
	printf(" La direccion de memoria de x es: %p\n", p);
	printf(" El valor de x es: %x\n", *p); // La mamera de coger el valor al que apunta p es con el *, o sea, el valor de x
	*p = 5;
	printf("El valor de x es: %d\n", x);
	int y = 3;
	
	printf("x: %d, y: %d\n", x, y);

	swap_referencia(&x, &y);
	printf("x: %d, y: %d\n", x,y);

	printf("El paso por valor\n");
	swap_valor(x, y);
	printf("x: %d, y:%d\n", x, y);
}

int swap_referencia(int *x, int *y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;

}

int swap_valor(int x, int y){
	int temp;
	temp= x;
	x= y;
	y = temp;
}
