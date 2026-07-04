
#include <unistd.h>

int main (void){
    int i=9;
    char a;
    while (i>=0)
    {
        a=i+'0';
        write(1,&a,1);
        i--;
    }
 return 0;
}