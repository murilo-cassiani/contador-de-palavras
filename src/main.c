/* Contador de palavras
 *
 * Este programa recebera uma serie de caracteres representando palavras em sua
 * entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
 * numero de palavras separadas que recebeu e, apos, encerrar.
 */

#include <stdio.h>
#include <string.h>

int WordCount(char sentence[]){ //função que recebe a string e conta o número de palavras (as repetidas também contam)
	int i = 0, nWord = 0;
	
	while(sentence[i]!='\0'){ //enquanto não chegar ao fim da string
		while(sentence[i]==' ') //enquanto for o caracter for um espaço
			i++; //avança
			
		if(sentence[i]!='\0') //se não é o fim da string
			nWord++; //incrementa o número de palavras
		
		while((sentence[i]!=' ') && (sentence[i]!='\0')) //enquanto o caracter fizer parte da palavra (diferente de espaço e de fim de string)
			i++; //avança
	}
	
	return nWord; //retorna depois o n_palavras
}

int isNumber(int chr){
	switch(chr){
		case '0':
			return 1;
		case '1':
			return 1;
		case '2':
			return 1;
		case '3':
			return 1;
		case '4':
			return 1;
		case '5':
			return 1;
		case '6':
			return 1;
		case '7':
			return 1;
		case '8':
			return 1;
		case '9':
			return 1;
		default:
			return 0;
	}
}

void RemDot(char sentence[]){ //função para remover pontuações
	int i = 0; 
	
	while(sentence[i]!='\0'){ //enquanto não chegar no fim da string
		switch(sentence[i]){ //analisa caracter por caracter
			case '.':
				while(isNumber(sentence[i + 1])){
					i++;
				}
				sentence[i]=' '; //substituindo por espaços
				break;
			case ',':
				while(isNumber(sentence[i + 1])){
					i++;
				}
				sentence[i]=' ';
				break;
			case ':':
				sentence[i]=' ';
				break;
			case ';':
				sentence[i]=' ';
				break;
			case '"':
				sentence[i]=' ';
				break;
			case '\'':
				sentence[i]=' ';
				break;
			case '!':
				sentence[i]=' ';
				break;
			case '?':
				sentence[i]=' ';
				break;
			case ')':
				sentence[i]=' ';
				break;
			case '(':
				sentence[i]=' ';
				break;
			case '-':
				sentence[i]=' ';
				break;
		}
		i++; //avança na string				
	}
}

int main() {
	int count;
	char sentence[1000];
		
	scanf("%[^\n]", sentence);
	
	RemDot(sentence);
	
	count = WordCount(sentence);
	
  printf("%d\n", count);
  return 0;
}


