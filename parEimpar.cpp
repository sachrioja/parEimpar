//número par ó impar
#include <iostream>
#include <conio.h>

int main()
{
   int x; //Declarar variable
   std::cout<<"Digite un numero: ";
   std::cin>>x; //Ingresar valor

   if(x%2 == 0){   //Condicionales
       std::cout<<"El numero es par";
   }
   else{
       std::cout<<"El numero es impar";
   }
    
    getch();
    return 0;
}

