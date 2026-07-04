#include <unistd.h>
int main (void){
    int i=0;
    char c;

    while(i<10){
        c=i+'0';
        write(1,&c,1);
        write(1,"\n",1);
        i++;
    }
}