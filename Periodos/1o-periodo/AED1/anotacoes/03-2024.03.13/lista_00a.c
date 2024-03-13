/**
  * ------------------------- Documentacao preliminar
  * Pontificia Universidade Catolica de Minas Gerais
  * Curso de Ciencia da Computacao
  * Algoritmos e Estruturas de Dados I
  *
  * Trabalho pratico: lista 00
  *
  * Objetivo:
  * Modelo de programa para a disciplina AED I
  * Sugestao para montar um trabalho pratico
  *
  * Autor:   Matricula: 999999  Nome: xxx yyy zzz
  * Versao:  1.0                Data: 01/mm/20aa
  *
  * Dados:
  * - opcao de execucao escolhida pelo usuario
  *
  * Resultados:
  * - execucao de um teste de cada vez a escolha do usuario
  *
  * Condicoes:
  * - so' aceitara' as opcoes oferecidas.
  *
  * Arquivos:
  *
  * - lista_00.c
  * - lista_00     ( no Linux   )
  * - lista_00.exe ( no Windows )
  *
  * Forma de compilacao:
  * - acionar o compilador no modo console 
  *   (terminal/janela de comandos):
  *
  *   Linux  : gcc -o ./lista_00 ./lista_00.c -lm
  *   Windows: gcc -o   lista_00   lista_00.c
  *
  * Forma de uso:
  * - acionar o programa   no modo console
  *   (terminal/janela de comandos):
  *
  *   Linux  :  ./lista_00
  *   Windows:    lista_00
  *
  * Referencias:
  * - Exemplos mostrados em sala de aula
  * - Apostila: Fundamentos de Programacao - Notas de aulas
  *
  */

// -------------------------- classes nativas
//                            ou auxiliares

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include "io.h"

// -------------------------- definicao de classe

/**
  * Modelo para definir exemplo de um programa.
  * Obs.: E' recomendado ter o nome do programa
  *       sem espacos em branco, acentos ou cedilha.
  */

// -------------------------- tratamento de erro

// -------------------------- definicao de constantes

// -------------------------- definicao de armazenadores globais

// -------------------------- definicao de prototipos

// -------------------------- definicao de metodos

/**
  * Metodo01.
  */
void metodo01 ( void )
{
// definir dados
// identificar
   printf ( "\n%s\n", "Metodo01" );
// ações
   // ler dados
   // testar dados
   // calcular a área
   // mostrar a área
// encerrar
   printf ( "\n%s\n", "Apertar ENTER para continuar." );
   getchar( );
} // fim metodo01 ( )

/**
  * Metodo02.
  */
void metodo02 ( void )
{
// definir dados
  int area = 0;
  int lado1 = 0, lado2 = 0;
// identificar
   printf ( "\n%s\n", "Metodo02" );
// ações
   // ler dados
   lado1 = readint("Qual o lado 1?");
   lado2 = readint("Qual o lado 2?");
   // testar dados
   // calcular a área
   area = lado1 * lado2;
   // mostrar a área
   printf("\n%s%d%s\n", "area = ", area, " [u.a.]");
// encerrar
   printf ( "\n%s\n", "Apertar ENTER para continuar." );
   getchar( );
} // fim metodo02 ( )

/**
  * Metodo03.
  */
void metodo03 ( void )
{
// definir dados
  int area = 0;
  int lado1 = 0, lado2 = 0;
// identificar
   printf ( "\n%s\n", "Metodo03" );
// ações
   // ler dados
   lado1 = readint("Qual o lado 1?");
   lado2 = readint("Qual o lado 2?");
   // testar dados
   if(lado1 > 0 && lado2 > 0)
     {
       // calcular a área
       area = lado1 * lado2;
     }
   // mostrar a área
   printf("\n%s%d%s\n", "area = ", area, " [u.a.]");
// encerrar
   printf ( "\n%s\n", "Apertar ENTER para continuar." );
   getchar( );
} // fim metodo03 ( )

/**
  * Metodo04.
  */
void metodo04 ( void )
{
// definir dados
  int area = 0;
  int lado1 = 0, lado2 = 0;
// identificar
   printf ( "\n%s\n", "Metodo04" );
// ações
   // ler dados
   lado1 = readint("Qual o lado 1?");
   lado2 = readint("Qual o lado 2?");
   // testar dados
   if(lado1 > 0 && lado2 > 0)
     {
       // calcular a área
       area = lado1 * lado2;
     }
   else
     {
       // mostrar erro
       printf("\n%s\n", "ERRO: Dado(s) invalido(s).");
     }
   // mostrar a área
   printf("\n%s%d%s\n", "area = ", area, " [u.a.]");
// encerrar
   printf ( "\n%s\n", "Apertar ENTER para continuar." );
   getchar( );
} // fim metodo04 ( )

/**
  * Metodo05.
  */
void metodo05 ( void )
{
// definir dados
  int area = 0;
  int lado1 = 0, lado2 = 0;
// identificar
   printf ( "\n%s\n", "Metodo05" );
// ações
   // ler dados
   lado1 = readint("Qual o lado 1?");
   lado2 = readint("Qual o lado 2?");
   // testar dados
   if( ! (lado1 > 0 && lado2 > 0))
     {
       // mostrar erro
       printf("\n%s\n", "ERRO: Dado(s) invalido(s).");
     }
   else
     {
       // calcular a área
       area = lado1 * lado2;
     }
   // mostrar a área
   printf("\n%s%d%s\n", "area = ", area, " [u.a.]");
// encerrar
   printf ( "\n%s\n", "Apertar ENTER para continuar." );
   getchar( );

} // fim metodo05 ( )

/**
  * Metodo06.
  */
void metodo06 ( void )
{
// definir dados
  int area = 0;
  int lado1 = 0, lado2 = 0;
// identificar
   printf ( "\n%s\n", "Metodo06" );
// ações
   // ler dados
   lado1 = readint("Qual o lado 1?");
   lado2 = readint("Qual o lado 2?");
   // testar dados
   if(lado1 <=0 || lado2 <=0)
     {
       // mostrar erro
       printf("\n%s\n", "ERRO: Dado(s) invalido(s).");
     }
   else
     {
       // calcular a área
       area = lado1 * lado2;
     }
   // mostrar a área
   printf("\n%s%d%s\n", "area = ", area, " [u.a.]");
// encerrar
   printf ( "\n%s\n", "Apertar ENTER para continuar." );
   getchar( );
} // fim metodo06 ( )

/**
  * Metodo07.
  */
void metodo07 ( void )
{
// definir dados
  int area = 0;
  int lado1 = 0, lado2 = 0;
// identificar
   printf ( "\n%s\n", "Metodo07" );
// ações
   // ler primeiro dado
   lado1 = readint("Qual o lado 1?");

   // testar o primeiro dado
   if(lado1 > 0)
     {
       // ler o segundo dado
       lado2 = readint("Qual o lado 2?");
       if(! (lado2 > 0))
	 {
	   printf("\n%s\n", "ERRO: Segundo dado inválido.");
	 }
       // calcular a área
       area = lado1 * lado2;
     }
   else
     {
       // mostrar erro
       printf("\n%s\n", "ERRO: Primeiro dado invalido.");
     }
   // mostrar a área
   printf("\n%s%d%s\n", "area = ", area, " [u.a.]");
// encerrar
   printf ( "\n%s\n", "Apertar ENTER para continuar." );
   getchar( );
} // fim metodo07 ( )

/**
  * Metodo08.
  */
void metodo08 ( void )
{
// definir dados
  int area = 0;
  int lado1 = 0, lado2 = 0;
// identificar
   printf ( "\n%s\n", "Metodo08" );
// ações
   // ler primeiro dado
   lado1 = readint("Qual o lado 1?");

   // testar o primeiro dado
   if(! (lado1 > 0))
     {
       // mostrar erro
       printf("\n%s\n", "ERRO: Primeiro dado invalido.");
     }
   else
     {
       // ler o segundo dado
       lado2 = readint("Qual o lado 2?");
       if(! (lado2 > 0))
	 {
	   printf("\n%s\n", "ERRO: Segundo dado inválido.");
	 }
       // calcular a área
       area = lado1 * lado2;
     }
   // mostrar a área
   printf("\n%s%d%s\n", "area = ", area, " [u.a.]");
// encerrar
   printf ( "\n%s\n", "Apertar ENTER para continuar." );
   getchar( );
} // fim metodo08 ( )

/**
  * Metodo09.
  */
void metodo09 ( void )
{
  // definir dados
  int area = 0;
  int lado1 = 0, lado2 = 0;
// identificar
   printf ( "\n%s\n", "Metodo09" );
// ações
   // ler primeiro dado
   lado1 = readint("Qual o lado 1?");

   // testar o primeiro dado
   if(! (lado1 > 0))
     {
       // mostrar erro
       printf("\n%s\n", "ERRO: Primeiro dado invalido.");
     }
   else
     {
       // ler o segundo dado
       lado2 = readint("Qual o lado 2?");
       if(! (lado2 > 0))
	 {
	   printf("\n%s\n", "ERRO: Segundo dado inválido.");
	 }
       // calcular a área
       area = lado1 * lado2;
     }
   // mostrar a área
   printf("\n%s%d%s\n", "area = ", area, " [u.a.]");
// encerrar
   printf ( "\n%s\n", "Apertar ENTER para continuar." );
   getchar( );
} // fim metodo09 ( )

/**
  * Metodo10.
  */
void metodo10 ( void )
{
// definir dados
  int area = 0;
  int lado1 = 0, lado2 = 0;
// identificar
   printf ( "\n%s\n", "Metodo10" );
// ações
   // ler dados
   lado1 = readint("Qual o lado 1?");
   lado2 = readint("Qual o lado 2?");
   // testar dados
   if(lado1 > 0 && lado2 > 0 && lado1 != lado2)
     {
       // calcular a área
       area = lado1 * lado2;
     }
   else
     {
       // mostrar erro
       printf("\n%s\n", "ERRO: Dado(s) invalido(s).");
     }
   // mostrar a área
   printf("\n%s%d%s\n", "area = ", area, " [u.a.]");
// encerrar
   printf ( "\n%s\n", "Apertar ENTER para continuar." );
   getchar( );// identificar
   printf ( "\n%s\n", "Metodo10" );
// encerrar
   printf ( "\n%s\n", "Apertar ENTER para continuar." );
   getchar( );
} // fim metodo10 ( )


/**
  * Metodo11.
  */

void metodo11 ( void )
{
// definir dados
  int area = 0;
  int lado1 = 0, lado2 = 0;
// identificar
   printf ( "\n%s\n", "Metodo11" );
// ações
   // ler dados
   lado1 = readint("Qual o lado 1?");
   lado2 = readint("Qual o lado 2?");
   // testar dados
   if( !(lado1 > 0 && lado2 > 0 && lado1 != lado2))
     {
       // mostrar erro
       printf("\n%s\n", "ERRO: Dado(s) invalido(s).");
     }
   else
     {
       // calcular a área
       area = lado1 * lado2;
     }

   // mostrar a área
   printf("\n%s%d%s\n", "area = ", area, " [u.a.]");
// encerrar
   printf ( "\n%s\n", "Apertar ENTER para continuar." );
   getchar( );// identificar
   printf ( "\n%s\n", "Metodo10" );
// encerrar
   printf ( "\n%s\n", "Apertar ENTER para continuar." );
   getchar( );
} // fim metodo11 ( )


/**
  * Metodo12.
  */

void metodo12 ( void )
{
  // definir dados
  int area = 0;
  int lado1 = 0, lado2 = 0;
// identificar
   printf ( "\n%s\n", "Metodo12" );
// ações
   // ler primeiro dado
   lado1 = readint("Qual o lado 1?");

   // testar o primeiro dado
   if(! (lado1 > 0))
     {
       // mostrar erro
       printf("\n%s\n", "ERRO: Primeiro dado invalido.");
     }
   else
     {
       // ler o segundo dado
       lado2 = readint("Qual o lado 2?");
       if(! (lado2 > 0))
	 {
	   printf("\n%s\n", "ERRO: Segundo dado inválido.");
	 }
       else
	 {
	   // calcular a área
	   area = lado1 * lado2;
	 }
     }
   // mostrar a área
   if(area > 0)
     {
       printf("\n%s%d%s\n", "area = ", area, " [u.a.]");
     }
// encerrar
   printf ( "\n%s\n", "Apertar ENTER para continuar." );
   getchar( );
} // fim metodo12 ( )


/**
  * Metodo13.
  */

void metodo13 ( void )
{
  // definir dados
  int area = 0;
  int lado1 = 0, lado2 = 0;
// identificar
   printf ( "\n%s\n", "Metodo13" );
// ações
   // ler primeiro dado
   do
     {
       lado1 = readint("Qual o lado 1?");
     }  // testar o primeiro dado
   while(! (lado1 > 0));
   do
     {
       lado2 = readint("Qual o lado 2?");
     }  // testar o primeiro dado
   while(! (lado2 > 0));
   // calcular a área
   area = lado1 * lado2;
   // mostrar a área
   printf("\n%s%d%s\n", "area = ", area, " [u.a.]");

// encerrar
   printf ( "\n%s\n", "Apertar ENTER para continuar." );
   getchar( );
} // fim metodo13 ( )


void metodo14 ( void )
{
  // definir dados
  int area = 0;
  int lado1 = 0, lado2 = 0;
// identificar
   printf ( "\n%s\n", "Metodo14" );
// ações
   // ler primeiro dado
   do
     {
       lado1 = readint("Qual o lado 1?");
     }  // testar o primeiro dado
   while(! (lado1 > 0));
   do
     {
       lado2 = readint("Qual o lado 2?");
     }  // testar o primeiro dado
   while(lado2 <= 0 || lado1 == lado2);
   // calcular a área
   area = lado1 * lado2;
   // mostrar a área
   printf("\n%s%d%s\n", "area = ", area, " [u.a.]");

// encerrar
   printf ( "\n%s\n", "Apertar ENTER para continuar." );
   getchar( );
} // fim metodo14 ( )

// -------------------------- definicao do metodo principal

int main ( void )
{
// definir dados/resultados
   int opcao = 0;

// repetir ate' desejar parar
   do
   {
   // identificar
      printf ( "\n" );             // para saltar linha
      printf ( "%s\n", "Lista_00 - v.0.0 - 01/mm/20aa"       );
      printf ( "%s\n", "Matricula: 999999 Nome: xxx yyy zzz" );
   
   // mostrar opcoes
      printf ( "%s\n", "Opcoes:"         );
      printf ( "%s\n", " 0 - parar"      );
      printf ( "%s\n", " 1 - metodo 01   2 - metodo 02" );
      printf ( "%s\n", " 3 - metodo 03   4 - metodo 04" );
      printf ( "%s\n", " 5 - metodo 05   6 - metodo 06" );
      printf ( "%s\n", " 7 - metodo 07   8 - metodo 08" );
      printf ( "%s\n", " 9 - metodo 09  10 - metodo 10" );
      printf ( "%s\n", "" );        // para saltar linha
   
   // ler opcao
      printf ( "%s", "Qual a sua opcao? " );
      scanf  ( "%d", &opcao ); getchar ( );
      printf ( "%d",  opcao );
   
   // escolher acao
      switch ( opcao )
      {
         case  0:               
            break;
         case  1: metodo01 ( ); 
            break;
         case  2: metodo02 ( ); 
            break;
         case  3: metodo03 ( ); 
            break;
         case  4: metodo04 ( ); 
            break;
         case  5: metodo05 ( ); 
            break;
         case  6: metodo06 ( ); 
            break;
         case  7: metodo07 ( ); 
            break;
         case  8: metodo08 ( ); 
            break;
         case  9: metodo09 ( ); 
            break;
         case 10: metodo10 ( ); 
            break;
         case 11: metodo11();
	    break;
         case 12: metodo12();
	    break;
         case 13: metodo13();
	    break;
      case 14: metodo14();
	break;
         default:
            printf ( "\n%s\n\n", "ERRO: Opcao invalida." );
            break;
      } // fim escolher
   }
   while ( opcao != 0 );

// encerrar execucao
   printf ( "\n%s\n\n", "Apertar ENTER para terminar." );
   getchar( );
   return (0);
} // end main ( )


/*
----------------------------- documentacao complementar

----------------------------- notas / observacoes / comentarios

----------------------------- previsao de testes

----------------------------- historico

Versao	Data		      Modificacao
  0.1	__/__		      esboco

 ---------------------------- testes

Versao	Teste
  0.1	01. ( OK )	      identificacao de programa

*/
