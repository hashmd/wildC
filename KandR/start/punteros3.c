#include <stdio.h>

void strcatt( char *s, char *t);
void concatt(char *s, char *t);

int main(){
	
	char s[] = "hola";
	char t[] = "mundo";

	strcatt( s, t);
}

void strcatt( char *s, char *t){
	
	int i=0;
	char z[9];
	while(*s !='\0'){
		z[i] = *s;
		++s;
		++i;
	}
	while(*t != '\0'){
		z[i] = *t;
		++t;
		++i;
	}
	fflush(stdout); // limpia el buffer de salida
	printf("%s\n", z);

}

void concatt( char *s, char *t){

}
