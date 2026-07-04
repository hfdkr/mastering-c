#include <unistd.h>
int main(void){
    int i=0;
    char x;
    while (i<10)
    {
        x=i+'0';
        write(1,&x,1);
        write(1,&x,1);
        i++;
    }
    return 0;

}