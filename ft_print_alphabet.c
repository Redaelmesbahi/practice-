#include <stdio.h>
#include <unistd.h>

void ft_putchar(char a){
    write(1,&a,1);
}
int main(){
        char i = 'a';
    while (i < 'z'){
        ft_putchar(i);
        i++;
    }

}
