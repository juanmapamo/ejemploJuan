#include <stdio.h>
int main () 
{
    int numero;
    int contador = 0;
    int continuar;
    do
    {
        printf("Ingrese un numero.\n");
        scanf("%d", &numero);
        for (int i = 1; i <= numero; i++)
        {
            if (numero % i == 0)
            {
                contador++;
            }
        }
        if (contador > 2) 
        {
            printf (" El numero %d no es primo. \n", numero);
        }
        else 
        {
            printf ("El numeor %d es primo. \n", numero);
        }
        printf ("Deseas continuar? 1=Si, 0=No");
        scanf ("%d", &continuar);
        if (continuar == 1)
        {
            contador=0;
        }
    } while (continuar==1);
    return 0;
}
