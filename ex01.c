#include <unistd.h>

int main(void)
{
    write(1, "Hello Hafid\n", 12);
    write(1, "\nI am learning C", 16);
    return 0;
}
