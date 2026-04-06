#include <stdio.h>
int main (){
  static int llamadas = 0; //estatica local: persiste entre llamadas
  llamadas++;
  printf("llamada #%d\n", llamadas);
}