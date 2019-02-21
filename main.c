#include <stdio.h>

int main()

{

    int i, nombre, resultat;

        printf("\nEntrer un nombre : ");

        scanf("%d",&nombre);

        resultat = 1;

        for (i=2;i<=nombre;i++)

        {
            resultat = resultat*i;
        }

        printf("\n\nLa factorielle de %d est : %d \n ",nombre,resultat);
}
