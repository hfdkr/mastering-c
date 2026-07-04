#include <unistd.h>

/*
** Exercise: ex00
** Name: Hello Hafid
** Description:
**   This program prints two messages to the standard output
**   using the write system call.
**   It demonstrates basic usage of write() in C.
*/

int main(void)
{
    write(1, "Hello Hafid\n", 12);
    write(1, "\nI am learning C", 16);
    return 0;
}