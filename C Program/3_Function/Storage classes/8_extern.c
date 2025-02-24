#include <stdio.h>
extern int x; // global forward declaration, use because ignore  compilation error

void f()
{
    extern int x; // local forward declaration
    ++x;
    printf("%d ", x);
}
void g()
{
    extern int x;
    ++x;
    printf("%d ", x);
}
void main()
{
    extern int x;
    f();
    g();
    ++x;
    printf("%d", x);
}
int x = 0;