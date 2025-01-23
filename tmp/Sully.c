#include <stdio.h>
#include <stdlib.h>

void ft_print(FILE *file, char *str, int i)
{
    fprintf(file, str, 10, 34, str, i);
}

int main()
{
    int i = 5;

    char filename[10];
    filename[9] = '\0';
    sprintf(filename, "Sully_%d.c", i);
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        return (1);
    }
    
    //char *str = "#include <stdio.h>%1$c#include <stdlib.h>%1$cvoid ft_print(FILE *file, char *str, int i)%1$c{%1$c    fprintf(file, str, 10, 34, str, i);%1$c}%1$c%1$cint main()%1$c{%1$c    int i = %4$d;%1$c%1$c    i--;%1$c    char *filename = asprintf(%2$cSully_%%d.c%2$c, i);%1$c    FILE *file = fopen(filename, %2$cw%2$c);    %1$cif (file == NULL) {%1$c        return (1);%1$c    )%1$c    char * str = %2$c%3$s%2$c;%1$c%1$c    ft_print(file, str, i);%1$c    char *compileCmd = asprintf(%3$cclang -Wall -Wextra -Werror Sully_%1$d.c -0 Sully_%1$d ; ./Sully_%1$d%2$c, %1$d); }";
    char *str = "#include <stdio.h>%1$cint main()%1$c{%1$c    int i = %3$d;%1$c    printf(%2$cnumero : %%d%2$c, i);%1$c    return(0);%1$c}";
    fprintf(file, str, 10, 34, i);
    fclose(file);
    //ft_print(file, str, i);
    char compileCmd[500]; 
    sprintf(compileCmd, "clang -Wall -Wextra -Werror Sully_%1$d.c -o Sully_%1$d ; ./Sully_%1$d", i);
    
    system(compileCmd);
    return (0);
}