#include "menu.h"

int main()
{
    bool ejecutando = true; //INDICA SI EL PROGRAMA CONTINUA EJECUTANDOSE
    int opcion, opcion2, cantDl, cantMd, cantDf;
    int isbn;
    float precio;
    String titulo;
    TipoError error;

    do //SE ELIGIO ESTRUCTURA DO-WHILE, PORQUE "ejecutando" SIEMPRE TIENE UN VALOR ANTES DE INGRESAR AL DO, Y SE EJECUTA MIENTRAS LA CONDICION EN WHILE SE CUMPLA
    {
        system("cls");
        mostrarPrimerMenu();
        scanf("%d", &opcion);
        switch(opcion)
        {
        case 1: //REGISTRAR LIBRO
            system("cls");
            printf("Ingrese isbn del libro \n");
            scanf("%d", &isbn);
            printf("Ingrese el titulo del libro \n");
            fflush(stdin);
            titulo.scan();
            printf("Ingrese el precio base del libro \n");
            scanf("%d", &precio);

            printf("Ingrese el tipo del libro \n");
            fflush(stdin);
            titulo.scan();

            Libro * libro = new Libro(isbn, titulo, precio);
            CapaLogica::altaLibro(libro, error);
           /*
            if(!){
                printf("Ingrese el titulo del libro \n");
                //scan();
                //printf("Ingrese el precio base del libro \n");
                //Libro::Libro(isbn,titulo,precio);
            }
            else*/
                //printf("Error el libro ya esta ingresado \n");
            printf("0-Volver a menu principal \n");
            scanf("%d", &opcion);
            break;
        case 2: //REGISTRAR AUTOR
            system("cls");
            printf("\n 0-Volver a menu anterior \n");
            scanf("%d", &opcion);
            break;
        case 3: //REGISTRAR VENTA DE UN LIBRO
            system("cls");
            printf("\n 0-Volver a menu anterior \n");
            scanf("%d", &opcion);
            break;
        case 4: //LISTADOS Y CONSULTAS
            opcion2 = 0;//RESETEA OPCION
            do
            {
                system("cls");
                mostrarSegundoMenu();
                fflush(stdin);
                scanf("%d", &opcion2);
                switch(opcion2)
                {
                case 1: //LIBROS REGISTRADOS
                    system("cls");
                    printf("\n 0-Volver a menu anterior \n");
                    scanf("%d", &opcion2);
                    break;
                case 2: //LIBRO POR ISBN
                    system("cls");
                    printf("Ingrese isbn del libro \n");
                    scanf("%d", &isbn);

                        printf("No existe jugador con la cedula indicada \n");
                    printf("\n 0-Volver a menu anterior \n");
                    scanf("%d", &opcion2);
                    break;
                case 3: //AUTORES REGISTRADOS
                    system("cls");
                    printf("\n 0-Volver a menu anterior \n");
                    scanf("%d", &opcion2);
                    break;
                case 4: //TOTAL DE LIBROS VENDIDOS
                    system("cls");
                    printf("\n 0-Volver a menu anterior \n");
                    scanf("%d", &opcion2);
                    break;
                case 5: //TOTAL DE LIBROS VENDIDOS POR TIPO
                    system("cls");
                    printf("\n 0-Volver a menu anterior \n");
                    scanf("%d", &opcion2);
                    break;
                case 6: //LIBRO MAS VENDIDO
                    system("cls");
                    printf("Ingrese isbn del libro \n");
                    scanf("%d", &isbn);
                    printf("\n 0-Volver a menu anterior \n");
                    scanf("%d", &opcion2);
                    break;
                case 7: //AUTORES POR FECHA DE NACIMIENTO
                    system("cls");
                    printf("\n 0-Volver a menu anterior \n");
                    scanf("%d", &opcion2);
                    break;
                case 8:
                    opcion2=8;
                    break;
                default:
                    break;
                }
            }
            while(opcion2==0);
            break;
        case 5: //SALIR DEL PROGRAMA
            system("cls");
            printf("Finalizo sesion \n");
            ejecutando = false;
            break;
        default:
            break;
        }
    }
    while(ejecutando);
}
