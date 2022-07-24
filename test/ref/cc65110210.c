/*
  !!DESCRIPTION!! linker bug
  !!ORIGIN!!      testsuite
  !!LICENCE!!     public domain
*/

/*
with SVN version: 4973M

$ cl65 -v -o test.prg tests/cc65110210.c
Opened include file '/usr/local/lib/cc65/include/stdio.h'
Opened include file '/usr/local/lib/cc65/include/stddef.h'
Opened include file '/usr/local/lib/cc65/include/stdarg.h'
Opened include file '/usr/local/lib/cc65/include/limits.h'
0 errors, 0 warnings
Opened output file 'tests/cc65110210.s'
Wrote output to 'tests/cc65110210.s'
Closed output file 'tests/cc65110210.s'
cl65: Subprocess 'ld65' aborted by signal 11

*/

#include <stdio.h>
#include <limits.h>

void (*p1func)();

void func(void)
{
    (*p1func)();
}

int main(void)
{
    printf("it works :)\n");

    return (0);
}
