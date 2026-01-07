/**
 *  TABELA DE CONVENCOES
 *  ------------------------------------
 *  MACRO - MACRO_NAME
 *  FUNCOES - function_name()
 *  FUNCOES INDIRETAS - _function_name()
 *  VARIAVEIS - variableName
 *  STRUCTS - StructName
 *  ------------------------------------
 *
 *  Function name
 *  Function description
 *
 *  @param { type } name - use
 *  @returns { type } - use 
 *
 * */

// Includes de todo o projeto
#include <stdio.h>

struct racional {
	int num;
	int den;
};

int main (/* int argc, char *argv[] */) {

	int n;
	char opp, aux;
	struct racional x, y, res;

	scanf("%d", &n);

	for(int i = 0; i < n; i++) {
		
		scanf("%d %c %d", &x.num, &aux, &x.den);
		getchar();
		scanf("%c", &opp);
		getchar();
		scanf("%d %c %d", &y.num, &aux, &y.den);
		getchar();

		switch(opp) {
			case '+':
				res.num = ((x.num * y.den) + (y.num * x.den));
				res.den = (x.den * y.den);
				break;
			case '-':
				res.num = ((x.num * y.den) - (y.num * x.den));
				res.den = (x.den * y.den);
				break;
			case '*':
				res.num = (x.num * y.num);
				res.den = (x.den * y.den);
				break;
			case '/':
				res.num = (x.num * y.den);
				res.den = (x.den * y.num);
				break;	
		}

		printf("%d/%d\n", res.num, res.den);

	}


    return 0;
}
