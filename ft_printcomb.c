#include <stdio.h>
#include <unistd.h>

void ft_putchar(char a){
    write(1,&a,1);
}

void ft_printcomb(){
    char a = '0';
    char b;
    char c;

    while(a <= '7'){
    b = a+1;

        while(b <= '8'){
        c = b+1;

            while(c <= '9'){

                    ft_putchar(a);
                    ft_putchar(b);
                    ft_putchar(c);
                    if (a == '7' && b == '8' && c == '9'){
                break;
            }

                    ft_putchar(',');
                    ft_putchar(' ');
                        c++;        }
        b++;
    }
    a++;
}




}
int main(){
    ft_printcomb();
    return 0;
}
