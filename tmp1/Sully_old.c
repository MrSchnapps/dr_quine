#include <stdio.h>

void ft_print(FILE *file, char *str, int i)
{
    fprintf(file, str, 10, 34, str, i);
}

int main() {
    int i = 5;

    i--;
    char *filename = asprintf("Sully_%d.c", i);
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        return (1);
    }
    
    char *str = "%1$c%2$c%4$d%2$c%1$c%1$c%3$s";

    ft_print(file, str, i);
    free(filename);
    return (0);
}