#include <stdio.h>
#include <stdbool.h>

bool isStrictlyPalindromic(int n) {
    return false; // Sempre da erro

    // Palindromo pode ser verificado fazendo o inverso e vericando se os numeros sao iguais

    // int copy;
    // int copyInBaseA;
    // int copyInBaseB;
    // int digits;p

    // for (int i = 2; i < (n - 1); i++) {
    //     digits = 1;
    //     copyInBaseA = 0;
    //     copyInBaseB = 0;

    //     // Para a base de i
    //     for (copy = n; copy != 0 ; copy /= i) {
    //         copyInBaseA *= 10;

    //         copyInBaseA += copy % i;
    //         copyInBaseB += (copy % i) * digits;

    //         digits *= 10;
    //     }

    //     // Verificar os digitos
    //     while (copyInBaseA != 0 && copyInBaseB != 0) {
    //         if ((copyInBaseA % i) != (copyInBaseB % i))
    //             return false;

    //         copyInBaseA /= i;
    //         copyInBaseB /= i;
    //     }
    // }

    // return true;
}
