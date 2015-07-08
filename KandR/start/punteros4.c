#include <stdio.h>

int strend(char *s, char *t);
int strendPunteros(cahr *s, char *t);
int largoChars(char *s);

int main(){
	
	char s[] = "hola mundo";
	char t[] = "mundo";
	char r[] = "jor";
	printf("\n%s\" esta al final de  %s\": %d\n",r,t, strend(t, r));
	printf("\n\"%s\" esta la final de \"%s\": %d\n", t,s, strend(s, t));
	
}

int largoChars(char *s){
	int largo = 0;
	while(s[largo] !='\0'){
		largo++;	
	}
	return largo;
}	

int strend( char *s, char *t){
	
	int j = 0;
	int i = largoChars(s)-largoChars(t);
	
	while(s[i] == t[j] && s[i] !='\0' && t[j] !='\0'){
		j++;
		i++;
	}
	if(i==largoChars(s)){
		return 1;
	} else{
		return 0;
	}
}

int largoCharsPuntero(char *s){
	int largo = 0;
	while(*s !=0){
		largo++;
		*s++;
	}
	return largo;
}
int strendPunteros(char *s, char *t){
	*s = largoCharsPuntero(s)-largoCharPuntero(t);
	while(*s != 0 && *t != 0) {
		if(*s == *t){
			*s++;
			*t++;	
		}
		
	}
	return 0;	
}
