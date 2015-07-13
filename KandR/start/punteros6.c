#include<stdio.h>

int strncmp2(char *s, char*ct, int n);
int main(){

	int salida = 0;
	int n = 2;
	char s[] = "hola";
	char ct[] = "adios";
	salida = strncmp2(s, ct, n);

	printf("salida: %d\n", salida);
}


int strncmp2(char *s, char*ct, int n){
	int salida = 0;
	int flag = 0;
	while(s <= s+n && flag == 0){
		if(*s != *ct){
			salida = *s-*ct;
			flag = 1;
		}
	*s++;
	*ct++;
	}
	return salida;
}
