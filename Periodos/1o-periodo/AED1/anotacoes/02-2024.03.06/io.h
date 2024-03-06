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

char readchar ( char *text )
{
  char x = 'A';
  printf( "%s", text );
  scanf( "%c", &x ); getchar( );
  return( x );
}
