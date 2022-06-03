#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, k, flag = 0;
    char vari[15], typ[15], b[15], c;
    printf("Enter the number of variables:");
    scanf(" %d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the variable[%d]:", i);
        scanf(" %c", &vari[i]);
        printf("Enter the variable-type[%d](float-f,int-i):", i);
        scanf(" %c", &typ[i]);
        if (typ[i] == 'f')
            flag = 1;
    }
    printf("Enter the Expression(end with $):");
    i = 0;
    getchar();
    while ((c = getchar()) != '$')
    {
        b[i] = c;
        i++;
    }
    k = i;
    for (i = 0; i < k; i++)
    {
        if (b[i] == '/')
        {
            flag = 1;
            break;
            getch();
        }
    }
    for (i = 0; i < n; i++)
    {
        if (b[0] == vari[i])
        {
            if (flag == 1)
            {
                if (typ[i] == 'f')
                {
                    printf("\nthe datatype is correctly defined..!\n");
                    // getchar();
                    break;
                    getch();
                }
                else
                {
                    printf("Identifier %c must be a float type..!\n", vari[i]);
                    // getchar();
                    break;
                    getch();
                }
            }
            else
            {
                printf("\nthe datatype is correctly defined..!\n");
                // getchar();
                break;
                getch();
            }
        }
    }

    return 0;
}
