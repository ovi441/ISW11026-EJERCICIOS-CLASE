/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
void
main ()
{
  char animalfavorito[25], colorfavorito[25], nombre[100], apellido[25],
    hobbiefavorito[50], generomusicalfavorito[25], deportefavorito[25], asignaturafavorita[25],
    librofavorito[50],cancionfavorita[50],comidafavorita[50];
    
  
  int edad;
 
     printf ("Inserte su nombre ");
    scanf ("%s", nombre);
    printf ( "Inserte  su cancion favorita ");
    scanf ("%s", cancionfavorita);
    printf ( "Inserte  su comida favorita ");
    scanf ("%s", comidafavorita);
    printf ( "Inserte  libro favorito ");
    scanf ("%s", librofavorito);
    printf ( "Inserte  su animal favorito ");
    scanf ("%s", animalfavorito);
    printf ( "Inserte su color favorito ");
    scanf ("%s", colorfavorito);
    printf ( "Inserte su apellido ");
    scanf ("%s", apellido);
    printf ( "Inserte su hobbie favorito ");
    scanf ("%s", hobbiefavorito);
    printf ( "Inserte su genero musical favorito ");
    scanf ("%s", generomusicalfavorito);
    printf ( "Inserte su deporte favorito ");
    scanf ("%s", deportefavorito);
    printf ( "Inserte su asignatura favorito ");
    scanf ("%s", asignaturafavorita);
    printf ( "Inserte su edad ");
    scanf ("%d", &edad);
    printf ("Mi nombre es %s\n", nombre);
    printf ("Mi apellido es %s\n", apellido);
    printf ("Mi animal favorito es %s\n", animalfavorito);
    printf ("Mi hobbie favorito es %s\n", hobbiefavorito);
    printf ("Mi color favorito es %s\n", colorfavorito);
    printf ("Me genero musical favorito es %s\n", generomusicalfavorito);
    printf ("Mi asignatura favorita es %s\n", asignaturafavorita);
    printf ("Mi deporte favorito %s\n", deportefavorito);
     printf ("Me cancion favorita es %s\n", cancionfavorita);
    printf ("Mi comida favorita es %s\n", comidafavorita);
    printf ("Mi libro favorito %s\n", librofavorito);
    printf ("Mi edad es %d\n", edad);

}

