/*
  Biblitoeca para automatizar algumas coisas da matéria de Algoritmos e Estrutura de Dados 1
  desenvolvido por Harper Moreira Mascarenhas
  license: GPL 3.0
*/

#include <stdio.h>

int methodSelector (int)
{
  int x = 0;

  do
    {
      printf("\n%s\n\n", "861240 - Harper Moreira Mascarenhas");
      
      printf("\n%s\n", "Options");
      printf("\n%s\n", "0 - Quit");
      printf("\n%s", "1 to 20 - Select a method");
      scanf("%d", x); getchar();
      printf("\n");
      
      switch (x)
	{
	case 0: return     (1); break;
	case 1: method_01  ( ); break;
	case 2: method_02  ( ); break;
	case 3: method_03  ( ); break;
	case 4: method_04  ( ); break;
	case 5: method_05  ( ); break;
	case 6: method_06  ( ); break;
	case 7: method_07  ( ); break;
	case 8: method_08  ( ); break;
	case 9: method_09  ( ); break;
	case 10: method_10 ( ); break;
	case 11: method_11 ( ); break;
	case 12: method_12 ( ); break;
	case 13: method_13 ( ); break;
	case 14: method_14 ( ); break;
	case 15: method_15 ( ); break;
	case 16: method_16 ( ); break;
	case 17: method_17 ( ); break;
	case 18: method_18 ( ); break;
	case 19: method_19 ( ); break;
	case 20: method_20 ( ); break;
	default:
	  printf("\n%s\n", "ERROR: undefined option");
	  printf("\n%s\n", "Press ENTER to continue");
	  getchar();
	}
    }
  while (x != 0);

    } // end switch
}


/*
  support methods
  case 21: method_21 ( ); break;
  case 22: method_22 ( ); break;
  case 23: method_23 ( ); break;
  case 24: method_24 ( ); break;
  case 25: method_25 ( ); break;
  case 26: method_26 ( ); break;
  case 27: method_27 ( ); break;
  case 28: method_28 ( ); break;
  case 29: method_29 ( ); break;
  case 30: method_30 ( ); break;
  case 31: method_31 ( ); break;
  case 32: method_32 ( ); break;
  case 33: method_33 ( ); break;
  case 34: method_34 ( ); break;
  case 35: method_35 ( ); break;
  case 36: method_36 ( ); break;
  case 37: method_37 ( ); break;
  case 38: method_38 ( ); break;
  case 39: method_39 ( ); break;
  case 40: method_40 ( ); break;
  case 41: method_41 ( ); break;
  case 42: method_42 ( ); break;
  case 43: method_43 ( ); break;
  case 44: method_44 ( ); break;
  case 45: method_45 ( ); break;
  case 46: method_46 ( ); break;
  case 47: method_47 ( ); break;
  case 48: method_48 ( ); break;
  case 49: method_49 ( ); break;
  case 50: method_50 ( ); break;
*/
