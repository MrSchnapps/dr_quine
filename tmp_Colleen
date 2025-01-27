#include <stdio.h>

/*
    First and outside comment.
*/
void another_function(char *str)
{
    printf(str, 10, 34, str);
}

int main()
{
    /*
        Second and inside main comment.
    */
    char *output = "#include <stdio.h>%1$c%1$c/*%1$c    First and outside comment.%1$c*/%1$cvoid another_function(char *str)%1$c{%1$c    printf(str, 10, 34, str);%1$c}%1$c%1$cint main()%1$c{%1$c    /*%1$c        Second and inside main comment.%1$c    */%1$c    char *output = %2$c%3$s%2$c;%1$c    another_function(output);%1$c    return (0);%1$c}%1$c";
    another_function(output);
    return (0);
}
