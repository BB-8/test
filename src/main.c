#include <stdlib.h>
#include <stdio.h>

#define VERSION_MAJOR 0
#define VERSION_MINOR 1

int main(int argc, char *argv[])
{
    int a;
    int b;
    int r;

    printf("+ Demo Project version : %d.%d\n", VERSION_MAJOR, VERSION_MINOR);
    printf("+ Project Home         : https://gitlab.com/gdb/demoi\n");

    a = strtol(argv[1], 0, 10 );
    b = strtol(argv[2], 0, 10);

    if (argv[3][0] == '+') {
        r = a+b;
    } else if( argv[3][0] == '-') {
        r = a-b;
    } else if (argv[3][0] == '*') {
        r = a*b;
    } else if (argv[3][0] == '/') {
        r = a/b;
    }

    printf ("%d\n", r);
    return 0;
}
