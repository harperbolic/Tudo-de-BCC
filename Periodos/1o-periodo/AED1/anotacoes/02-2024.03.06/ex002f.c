#include <stdio.h>
#include <stdbool.h>

void println ( char *text )
{
  printf( "%s\n", text);
}
void pause ()
{
  printf( "%s\n", "Apertar ENTER para continuar." );
  getchar( );
}
int readint ( char *text )
{
  int x = 0;
  printf( "%s", text );
  scanf( "%d", &x ); getchar( );
  return( x );
}
double readdouble ( char *text )
{
  double x = 0;
  printf( "%s", text );
  scanf( "%lf", &x ); getchar( );
  return( x );
}
bool readbool ( char *text )
{
  int x = 0;
  printf( "%s", text );
  scanf( "%d", &x ); getchar( );
  return( x != 0 );
}
int main ( void )
{
  int option = 0;
  double value = 0;
  bool teste = false;
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
  
  pause();
  return(0);
}
