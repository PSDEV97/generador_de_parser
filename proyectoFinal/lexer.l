%{
     #include <stdio.h>
     #include "parser.h"
%}

%option case-insensitive
%option noyywrap
%option yylineno

IGNORA " "|\t|\n
DIGITO [0-9]
LETRA [a-zA-Z]


%%
{IGNORA}+                        {;}
"Inicio"                        {return INICIO;}
"Final"                         {return FINAL;}
"#"                             {return NUMERAL;}
"include"                       {return INCLUDE;}
"stdio.h"|"iostream"|"string.h"|"stdlib.h" {return LIBRERIA;}
"main"                          {return MAIN;}
"("                             {return A_PARENTESIS;}
")"                             {return C_PARENTESIS;}
"["                             {return A_CORCHETE;}
"]"                             {return C_CORCHETE;}
"Cierto" | "Falso"              {return BOOLEANO;}    
"Si"                            {return SI;}
"FinSi"                         {return FIN_SI;}
"SiNoSi"                        {return SI_NO_SI;}
"SiNo"                          {return SI_NO;}
"FinSiNo"                       {return FIN_SI_NO;}
"While"                      {return WHILE;}
"FinWhile"                   {return FIN_WHILE;} 
"Para"                          {return PARA;}
"FinPara"                       {return FIN_PARA;}
"Hacer"                         {return HACER;}
"FinHacer"                      {return FIN_HACER;}
"Funcion"                       {return FUNCION;}
"FinFuncion"                    {return FIN_FUNCION;}
"++"                            {return INCREMENTO;}
"--"                            {return DECREMENTO;}
"="                             {return ASIGNADOR;}
"Retorna"                       {return RETORNA;}
"TipoNumerico"                  {return TIP_NUMERICO;}
"TipoCaracter"                  {return TIP_CARACTER;}
"TipoBooleano"                  {return TIP_BOOL;}
"TipoVacio"                     {return TIP_VACIO;}
{DIGITO}+                       {return ENTERO;}
{DIGITO}+"."{DIGITO}+           {return REAL;}
{LETRA}+                        {return CARACTER;}
{LETRA}({LETRA}|{DIGITO})*      {return ID;}
":="                            {return ASIG;}
";"                             {return PCOMA;}
"<>"                            {return DIFERENTE;}
","                             {return COMA;}
"=="                            {return IGUAL;}
"."                             {return PUNTO;}
">="                            {return MAYOR_IGUAL;}
"<="                            {return MENOR_IGUAL;}
">"                             {return MAYOR;}
"<"                             {return MENOR;}
"{"                             {return LLAVE_IZ;}
"}"                             {return LLAVE_DE;}
"+"                             {return MAS;}
"-"                             {return MENOS;}
"*"                             {return POR;}
"/"                             {return ENTRE;}
"&"                             {return Y_LOGICO;}
"$"                             {return O_LOGICO;}

%%
class compilador{
    public:
        compilador(){}
        
        int compila(char NombreArchivo[50]){
           // printf("Ruta del archivo: ");
           // scanf("%s", NombreArchivo);
           int resultado = 0;
            yyin=fopen(NombreArchivo,"rt");
            
            if(yyin==NULL)
                //printf("\nNo se puede leer el archivo");
                resultado = 1;
            else{
                if (!yyparse())
                   // printf("Compilado con exito!");
                   resultado = 2;
            }
            fclose(yyin);
            return resultado;
        }

};


int yyerror(char* mensaje){
	printf("\nAnalisis suspendido");
	printf("\nMensaje: %s",mensaje);
}
