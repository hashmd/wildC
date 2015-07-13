#include <stdio.h>

char *copiar(char *s, char *ct, int n);
char *strncat2(char *s, char *ct, int n);

int main(){
	char s [40] = "hola mundo";
	char ct [] = "test";
	int n = 4;
	
	fflush(stdout);
	printf("El array original es: %s, El nuevo array es: \n", s);
	copiar(s, ct, n);
	printf("%s\n", s);

	
	char *q = s;	
	int contador = 0;
	while(*q != '\0'){
		q++;
		contador++;
	}
	int x = sizeof(s) - contador;
	if(n <= x){
		strncat2(s, ct, n);
		printf("s concatenado con ct es: %s\n", s);
	}
	else{
		printf("Error(strncat): s no tiene suficiente espacio\n");
	}
}

char *copiar(char *s, char *ct, int n){
	int contador=0;	
	if(n <= sizeof(s)){
		while( contador < n){
			*s++ = *ct++;
			contador++;
		}
		return s;
	}else{
		return '\0';
	}
}

char *strncat2(char *s, char *ct, int n){

	while(*s){
		s++;
	}
	while(	*s++ = *ct++)
