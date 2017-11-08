#include "include/stdio.h"
#include "include/shell.h"
#include "include/stdlib.h"
#include "include/time.h"
#include "include/string.h"

void
start_shell(){
char buffer[MAX_SIZE]={0};
  buffer[0] = 0;
  int exit = -1;
  printf("Bienvenido a ClicOS REVENGE");
	do{
    printf("ClicOS: ");
    scanf("%s",buffer);
    if(strcmp(buffer,"help")==0){
      printf("Comandos de ClicOS Revenge:\n");
      printf("clear              : Borra la pantalla.\n");
      printf("date               : Muestra la fecha actual.\n");
      printf("echo [message]     : Muestra una linea de texto [message].\n");
      printf("exit               : Cierra la consola.\n");
      printf("help               : Muestra el manual de ayuda.\n");
      printf("hour               : Muestra la hora actual.\n");
      printf("sleep              : La consola espera durante un tiempo.\n");
      printf("graph              : Devuelve la direccion mac del dispositivo.\n");
      printf("divide             : Probar la excepcion de dividir por 0.")
    }else if(strcmp(buffer,"exit")==0){
      exit = 1;
    }else if(strncmp(buffer,"echo ",5)==0){
      printf("%s\n",buffer+5);
    }else if(strcmp(buffer,"hour")==0){
      printf("%s\n", get_hour());
    }else if(strcmp(buffer,"date")==0){
      printf("%s\n", get_date());
    }else if(strcmp(buffer,"clear")==0){
      cls();
    }else if(strcmp(buffer,"sleep")==0){
      sleep(2400);
      printf("Dormi 10 segundos.\n");
    }else if(strcmp(buffer,"graph")==0){
      printf("MAC ADDRESS: ");
      // print_mac();
    }
 }  while(exit == -1);
  printf(" Ahora puede apagar el equipo.");
}
