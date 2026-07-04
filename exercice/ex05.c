#include <unistd.h>
int main(void){
    char c='z';
    while (c>='a')
    {
        write(1,&c,1);
        c--;
    }
    return 0;

}