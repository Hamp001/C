#include <stdio.h>
#include <time.h> 

int main() {
   FILE *logFile; // se declara un puntero a FILE para manejar el archivo de registro
   time_t rawTime; // se declara una variable de tipo time_t para almacenar la hora actual en segundos
   
   logFile = fopen("gpupdate.log", "w");
   
   time(&rawTime); // se obtiene la hora actual en segundos
   
   fprintf(logFile, "Ejecutando gpupdate /force en %s", ctime(&rawTime));
   
   fclose(logFile);
   return 0;
}

