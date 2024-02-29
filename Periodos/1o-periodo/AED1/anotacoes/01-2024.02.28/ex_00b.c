// 999999_AED1
#include <stdio.h>
int main ( void )
{
  int opcao=0;
  printf ("%s\n", "999999_AED1" );
  do
    {
      printf( "%s", "Qual a opcao? " );
      scanf( "%d", &opcao ); getchar( );
      printf( "%s%d\n", "opcao = ", opcao );
    }
  while( opcao != 0);
  printf ("%s\n", "Apertar ENTER para terminar.");
  getchar( );
  return(0);
}
