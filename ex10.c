
/* ex 10 */

#include <unistd.h>
int main(void)
{
    int i = 0;
    char n;
    char v;
    char c;
    while (i < 10)
    {
        c = i + '0';
        v = ' ';
        n = ',';
        if (i < 9)
        {
            write(1, &c, 1);
            write(1, &n, 1);
            write(1, &v, 1);
        }
        if(i==9){
            write(1, &c, 1);
        }
        i++;
    }
    return 0;
}