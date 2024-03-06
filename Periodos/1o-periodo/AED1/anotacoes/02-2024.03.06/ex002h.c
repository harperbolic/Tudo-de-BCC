#include "io.h"

int main ( void )
{
  int option = 0;
  double value = 0;
  bool teste = false;
  char letra = 'A';
  
  println("999999_AED1");
  
  printf( "%s%d\n", "option = ", option );
  option = readint ( "Qual a opção? " );
  printf( "%s%d\n", "option = ", option );

  printf( "%s%lf\n", "value = ", value );
  value = readdouble ( "Qual a valor? " );
  printf( "%s%lf\n", "value = ", value );

  printf( "%s%d\n", "teste = ", teste );
  value = readbool ( "Qual o teste? " );
  printf( "%s%d\n", "teste = ", teste );

  printf( "%s%c\n", "letra = ", letra );
  letra = readchar ( "Qual a opção? " );
  printf( "%s%c\n", "letra = ", letra );
  
  pause();
  return(0);
}
