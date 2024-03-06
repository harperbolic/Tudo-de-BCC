#include <stdio.h>

void println ( char *text )
{
  printf( "%s\n", text);
}


int main ( void )
{

  //printf("%s\n", "999999_AED1");
  //printf("%s\n", Apertar ENTER para continuar.");
  println("999999_AED1");
  println("Apertar ENTER para continuar." );
  getchar( );
  return(0);
}
