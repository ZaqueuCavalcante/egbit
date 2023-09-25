/*
    Gera o arquivo binário para ser
    gravado na EEPROM, utilizada no Display Decimal
    do computador de 8 bits.
    
    Autor: Eng. Wagner Rambo
    
    Data: 2017



*/

#include <stdio.h>
#include <stdlib.h>

char data[] = { 0x7E,  // '0'
                0x30,  // '1'
                0x6D,  // '2'
                0x79,  // '3'
                0x33,  // '4'
                0x5B,  // '5'
                0x5F,  // '6'
                0x70,  // '7'
                0x7F,  // '8'
                0x7B}; // '9'

char blank   = 0x00;
char signal  = 0x01;

unsigned short anchor;


int main(int argc, char *argv[])
{
    FILE *arquivo;
    int value_bin = 0;
    arquivo = fopen("dec_disp.bin","wb");
 
 
 // Unsigned (valores entre 000 e 255)  
    //unidade
    for(value_bin = 0; value_bin < 256; value_bin += 1)
                  fwrite(&data[value_bin%10], 1, 1, arquivo);
                  
    //dezena
    for(value_bin = 256; value_bin < 512; value_bin += 1)
                  fwrite(&data[((value_bin-256)/10)%10], 1, 1, arquivo);
                  
    //centena
    for(value_bin = 512; value_bin < 768; value_bin += 1)
                  fwrite(&data[(value_bin-512)/100], 1, 1, arquivo);
    
    
    //blank
    for(value_bin = 768; value_bin < 1024; value_bin += 1)
                  fwrite(&blank, 1, 1, arquivo);
                  
              
// Signed (valores entre -128 e 127)                
    //unidade
    for(value_bin = 1024; value_bin < 1280; value_bin += 1)
    {
         if(value_bin < (1024+128))  
         {   
                  anchor = -2;    
                  fwrite(&data[(value_bin-1024)%10], 1, 1, arquivo);
         }         
         else
         {
                  anchor += 2;
                  fwrite(&data[(value_bin-1024-anchor)%10], 1, 1, arquivo);
         }         
    }
                  
    //dezena
    for(value_bin = 1280; value_bin < 1536; value_bin += 1)
    {
         if(value_bin < (1280+128))  
         { 
                  anchor = -2;     
                  fwrite(&data[((value_bin-1280)/10)%10], 1, 1, arquivo);
         }
         else
         {
                  anchor += 2;
                  fwrite(&data[((value_bin-1280-anchor)/10)%10], 1, 1, arquivo);
         }
         
     }
                  
                  
    //centena
    for(value_bin = 1536; value_bin < 1792; value_bin += 1)
    {
        if(value_bin < (1536+128))  
        {     
            anchor = -2;       
            fwrite(&data[(value_bin-1536)/100], 1, 1, arquivo);
        }
        else
        {
            anchor += 2;
            fwrite(&data[(value_bin-1536-anchor)/100], 1, 1, arquivo);
        }
    }
    
    
    //blank
    for(value_bin = 1792; value_bin < 2048; value_bin += 1)
    {
        if(value_bin < (1792+128))
        {
                  fwrite(&blank, 1, 1, arquivo);
        }
        else
        {
                  fwrite(&signal,1, 1, arquivo);    
        }
   
     }
   
   
    
    fclose(arquivo);
    
    printf("Arquivo binario gerado com sucesso!\n\n");
    
    
    
    
  
  system("PAUSE");	
  return 0;
  
} //end main
























