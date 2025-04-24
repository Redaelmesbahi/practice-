#include <stdio.h>
#include <unistd.h>

void ft_putchar(char a){
    write(1,&a,1);
}
int main(){
        ft_putchar('A');
    }
