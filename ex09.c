#include <unistd.h>
int main(void){
    int i=0;
    int j;
    char a;
    while (i<10)
    {
        a=i+'0';
        j=0;
        while (j<=i)
        {
            write(1,&a,1);
            j++;
        }
        i++;
    }
    return 0;

}