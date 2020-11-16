#include <stdio.h>
#include <string.h>

int diadasemana(char data[11], char **saida, int *bissexto) {
    int d, m, y;

    if (strstr(data, "/") == NULL || strlen(data) != 10) {
        return -2;
    }

    sscanf(data, "%d/%d/%d", &d, &m, &y);

    if (y < 1900 || y > 9999)
        return -1;
    if (m < 1 || m > 12)
        return -1;
    if (d < 1 || d > 31)
        return -1;

    *bissexto = (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0));

    if (m == 2) {
        if (*bissexto) {
            if (d > 29) {
                return -1;
            }
        }

        else {
            if (d > 28) {
                return -1;
            }
        }
    }

    if (m == 4 || m == 6 || m == 9 || m == 11) {
        if (d > 30) {
            return -1;
        }
    }

    int dia = (23 * m / 9 + d + 4 + (m < 3 ? y-- : y - 2) + y / 4 - y / 100 + y / 400) % 7;
    char weekDay[7][10] = {"Domingo", "Segunda", "Terça", "Quarta", "Quinta", "Sexta", "Sábado"};

    switch (dia) {
        case 0:
            *saida = weekDay[0];
            break;
        case 1:
            *saida = weekDay[1];
            break;
        case 2:
            *saida = weekDay[2];
            break;
        case 3:
            *saida = weekDay[3];
            break;
        case 4:
            *saida = weekDay[4];
            break;
        case 5:
            *saida = weekDay[5];
            break;
        case 6:
            *saida = weekDay[6];
            break;
    }

    return 1;
}

int main() {
    int status = 0, bissexto = 0;
    char entrada[11] = {0}, *saida = NULL;

    fgets(entrada, 11, stdin);

    status = diadasemana(entrada, &saida, &bissexto);

    if (status > 0)
        printf("%s.%s\n", saida, bissexto ? " Ano bissexto." : "");

    else {
        if (status == -1)
            printf("Data inexistente.\n");
        else
            printf("Entrada invalida.\n");
    }

    return 0;
}