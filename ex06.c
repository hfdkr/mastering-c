#include <unistd.h>
int main(void){
    char c='A';
    while (c<='Z')
    {
        write(1,&c,1);
        c+=2;
    }
    return 0;

} 