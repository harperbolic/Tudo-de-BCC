#include <stdio.h>

void println ( char *text )
{
  printf( "%s\n", text);
}
void pause ()
{
  printf( "%s\n", "Apertar ENTER para continuar." );
  getchar( );
}
int main ( void )
{
  int option = 0;
  println("999999_AED1");


  printf( "%s%d\n", "option = ", option );
  printf( "%s", "Qual a opção? ");
  scanf( "%d", &); getchar( );
  printf( "%s%d\n", "option = ", option);
  
  pause();
  return(0);
}
