#include <stdio.h>

static void test(void)
{
    printf("test");   
}

int main(void)
{
    test();
    printf("hello world! \r\n");
    
    return 0;
}
