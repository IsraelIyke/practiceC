#include "main.h"

int main()
{
    int i;

    for(i = 1; i <= 100; i++)
    {
        int a = i%3;
        int b = i%5;

        if((a == 0) && (b == 0)){
            
            _putchar('F');
            _putchar('i');
            _putchar('z');
            _putchar('z');
            _putchar('B');
            _putchar('u');
            _putchar('z');
            _putchar('z');
            _putchar(' ');
            continue;
        }
        else if(a == 0){
            
            _putchar('F');
            _putchar('i');
            _putchar('z');
            _putchar('z');
            _putchar(' ');
            continue;
        }
        else if(b == 0){
            
            _putchar('B');
            _putchar('u');
            _putchar('z');
            _putchar('z');
            _putchar(' ');
            continue;
        }
       
        if(i <= 9){
        _putchar(i + '0');
         _putchar(' ');
       }

      else if(i > 9)
       {
            _putchar(i/10 + '0');
            _putchar(i%10 + '0');
            _putchar(' ');
       }
      
            
       
    }
    return 0;
}