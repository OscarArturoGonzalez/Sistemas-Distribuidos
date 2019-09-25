#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

int cuentaIPN(char* cadena, int size);

int main()
{
    char Abecedario[25] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','W','X','Y','Z'};

    int LetraAleatoria;
    char* CadenaChar = NULL;
    char cadenaAux[4];
    int position = 0;

    srand(time(NULL));
    
    for(int i = 0; i < 175760; i++)
    {
        for(int j = 0; j < 3 ; j++ )
        {
            LetraAleatoria = rand() % (25);
            cadenaAux[j] = Abecedario[LetraAleatoria];
            position++;
            //std::cout << cadenaAux << std::endl;
        }
        cadenaAux[3] = ' '; 
        position++;
        //std::cout << cadenaAux << std::endl;
        if (i == 0)
        {
             CadenaChar = (char*)realloc(CadenaChar,--position * sizeof(char*));
        } else {
             CadenaChar = (char*)realloc(CadenaChar,position * sizeof(char*));
        }
        CadenaChar = (char*)realloc(CadenaChar,position * sizeof(char*));
        //CadenaChar = CadenaGrande;
        if (i == 0)
        {
            memcpy(CadenaChar, cadenaAux, strlen(cadenaAux) + 1);
        } else {
            memcpy(CadenaChar + position, cadenaAux, strlen(cadenaAux) + 1);
        }
        

    }
    //printf("%s\n",CadenaChar);
    /*
    for(int i = 0; i < position + 4; i++)
       std::cout << CadenaChar[i];

    std::cout << std::endl;
    */

    printf("Se han encontrado: %d cadenas de IPN\n", cuentaIPN(CadenaChar, position + 4));
    
    return 0;
}

int cuentaIPN(char* cadena, int size)
{
    int count = 0;

    for(int i = 0 ; i < size ; i =  i + 4)
    {
        if (i == 0)
        { 
            /*
            std::cout << "EntreX con: " << i << std::endl;
            std::cout << "EstoyX en: " << cadena[i] << std::endl;
            */
            if (cadena[i] == 'I')
                if (cadena[i + 1] == 'P')
                    if (cadena[i + 2] == 'N')
                        count++;
        } else {
            /*
            std::cout << "Entre con: " << i << std::endl;
            std::cout << "Estoy en: " << cadena[i - 1] << std::endl;
            */
            if (cadena[i - 1] == 'I')
                if (cadena[i] == 'P')
                    if (cadena[i + 1] == 'N')
                        count++;
        }
               
    }

    return count;
}