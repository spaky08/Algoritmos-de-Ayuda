#include <stdio.h>
bool check(char caracter){
	switch(caracter){
		case '{':
		case '}':
		case '\n':
		case ';':
		return true;
	}
	return false;
}
int main(int argc, char const *argv[]){
	char caracter;	
	while(scanf("%c",&caracter)!=EOF){
		if(check(caracter)) printf("%c\n",caracter);
		else printf("%c",caracter );
	}
	return 0;
}
