#include <iostream>

using namespace std;

int main()
{
    //declaracion de variables
    float saldo = 50.00, restante = 0;
    int menuPrincipal = 0, menuBoletos = 0, menuComida = 0, menuPeliculas = 0, edad = 0;

    //menu principal
    cout << "-------------CINE---------------" << "\n";
    cout << "1. Boletos" << "\n";
    cout << "2. Combos de comida" << "\n";
    cout << "3. Peliculas" << "\n";
    cout << "4. Salir" << "\n";
    cout << "--------------------------------" << "\n";
    cout << "Bienvenido, ¿Qué desea visualizar? porfavor eliga una opcion :D" << "\n";
    cin >> menuPrincipal;

    switch(menuPrincipal)
    {
    case 1: 
    //menu de para la compra de boletos
    cout << "-------------Boletos---------------" << "\n";
    cout << "1. Boleto infantil $5.00" << "\n";
    cout << "2. Boleto adulto $10.00" << "\n";
    cout << "3. Boleto adulto mayor $7.00" << "\n";
    cout << "4. Salir" << "\n";
    cout << "--------------------------------" << "\n";
    cout << "Bienvenido, ¿Que boleto estaria interesado en adquirir :D" << "\n";
    cin >> menuBoletos;

    switch(menuBoletos)
    {
    case 1:
    //Opcion de boleto infantil
    cout << "Usted escogio el boleto infantil $5.00" << "\n";
    restante = saldo - 5;
    cout << "Su saldo actual es: " << restante << "\n";
    break;
    case 2:
    //Opcion de boleto de adulto
    cout << "Usted escogio el boleto de adulto $10.00" << "\n";
    restante = saldo - 10;
    cout << "Su saldo actual es: " << restante << "\n";
    break;
    case 3:
    //Opcion de boleto de adulto mayor
    cout << "Usted escogio el boleto de adulto mayor $7.00 " << "\n";
    restante = saldo - 7;
    cout << "Su saldo actual es: " << restante << "\n";
    break;
    case 4:
    // Salir
    cout << "Muchas gracias vuelva pronto........! \n";
    return 0;
    break;

    default:
    cout << "Ha ocurrido un error, pruebe mas tarde. \n";
    break;

    }
    break;

    case 2:
    //Menu de combo de comida
    cout << "-------------comida---------------" << "\n";
    cout << "1. Palomitas + soda $6.00" << "\n";
    cout << "2. Nachos + soda $10.00" << "\n";
    cout << "3. Hotdog + soda $8.00" << "\n";
    cout << "4. Salir" << "\n";
    cout << "--------------------------------" << "\n";
    cout << "Bienvenido, ¿Que combo estaria interesado en adquirir :D?" << "\n";
    cin >> menuComida;

    switch(menuComida){
    case 1:
    //Opcion del el combo de palomitas + soda
    cout << "Usted escogio el combo de palomitas + soda $6.00" << "\n";
    restante = saldo - 6;
    cout << "Su saldo actual es: " << restante << "\n";
    break;
    case 2:
    //Opcion del el combo de Nachos + soda
    cout << "Usted escogio el combo de Nachos + soda $10.00" << "\n";
    restante = saldo - 10;
    cout << "Su saldo actual es: " << restante << "\n";
    break;
    case 3:
    //Opcion de boleto del el combo de Hotdog + soda $8.00
    cout << "Usted escogio el combo de Hotdog + soda $8.00 " << "\n";
    restante = saldo - 8;
    cout << "Su saldo actual es: " << restante << "\n";
    break;
    case 4:
    // Salir
    cout << "Muchas gracias vuelva pronto........! \n";
    return 0;
    break;

    default:
    cout << "Ha ocurrido un error, pruebe mas tarde. \n";
    break;
    }
    break;

    case 3:
    //Menu de Peliculas
    cout << "-------------Peliculas---------------" << "\n";
    cout << "1. Toy Story" << "\n";
    cout << "2. Spider-Man: No Way Home" << "\n";
    cout << "3. Deadpool" << "\n";
    cout << "4. Joker" << "\n";
    cout << "5. El Lobo de Wall Street" << "\n";
    cout << "6. Salir" << "\n";
    cout << "--------------------------------" << "\n";
    cout << "Bienvenido, ¿Que pelicula estarias interesado en ver :D?" << "\n";
    cin >> menuPeliculas;

    switch(menuPeliculas){
    //Opcion de la pelicula de toy story
    case 1:
    cout << "Usted ha seleccionado la pelicula de Toy Story, como normativa de la empresa ingrese su edad : ";
    cin >> edad;
    //verificacion de edad del usuario
    if(edad >= 0 && edad <= 12){
    cout <<"Tienes la edad necesaria para ver esta pelicula disfrutala :D" << "\n";
    }
    else if (edad >= 12 && edad <= 15)
    {
    cout << "Esta en el rango permitido para esta pelicula, sos alto capo bro :D" << "\n";           
    }
    else if (edad >= 15 && edad <= 18)
    {
    cout << "No estas un poco grande para esta pelicula bro xd?" << "\n";           
    }
    else if (edad >= 18 && edad <= 21)
    {
    cout << "No pues para gustos colores rey disfruta de la pelicula ";
    }
    else if (edad >= 21 && edad <= 80)
    {
    cout << "No pues para gustos colores rey disfruta de la pelicula ";
    }
    else{
    cout <<" Usted ha ingresado una edad no valida porfavor ingrese una edad existente :D";
    }
    break;
    case 2:
    //Opcion de la pelicula  Spider-Man: No Way Home 
   cout << "Usted ha seleccionado la pelicula de Spider-Man: No Way Home, como normativa de la empresa ingrese su edad : ";
    cin >> edad;
    //verificacion de edad del usuario
    if(edad >= 0 && edad <= 12){
    cout <<"Lo siento no cumples con la edad necesaria para ver esta pelicula" << "\n";
    }
    else if (edad >= 12 && edad <= 15)
    {
    cout << "Tienes la edad necesaria para ver esta pelicula disfrutala :D" << "\n";           
    }
    else if (edad >= 15 && edad <= 18)
    {
    cout << "Tienes mas que la edad necesaria para esta pelicula disfrutala" << "\n";           
    }
    else if (edad >= 18 && edad <= 21)
    {
    cout << "No estas un poco mayor para este tipo de peliculas";
    }
    else if (edad >= 21 && edad <= 80)
    {
    cout << "No pues para gustos colores rey disfruta de la pelicula";
    }
    else{
    cout <<" Usted ha ingresado una edad no valida porfavor ingrese una edad existente :D";
    }
    break;
    case 3:
    //Opcion de la pelicula  de Deadpool
    cout << "Usted ha seleccionado la pelicula de Deadpool, como normativa de la empresa ingrese su edad : ";
    cin >> edad;
    //verificacion de edad del usuario
    if(edad >= 0 && edad <= 12){
    cout <<"Lo siento no cumples con la edad necesaria para ver esta pelicula" << "\n";
    }
    else if (edad >= 12 && edad <= 15)
    {
    cout << "Lo siento pero aun no cumples con la edad necesaria para ver esta pelicula" << "\n";           
    }
    else if (edad >= 15 && edad <= 18)
    {
    cout << "Tienes la edad necesaria para ver esta pelicula disfrutala" << "\n";           
    }
    else if (edad >= 18 && edad <= 21)
    {
    cout << "Tienes la edad suficiente para ver esta pelicula";
    }
    else if (edad >= 21 && edad <= 80)
    {
    cout << "No pues para gustos colores rey disfruta de la pelicula";
    }
    else{
    cout <<" Usted ha ingresado una edad no valida porfavor ingrese una edad existente :D";
    }
    break;
    case 4:
    //Opcion de la pelicula  de Joker
    cout << "Usted ha seleccionado la pelicula de Joker, como normativa de la empresa ingrese su edad : ";
    cin >> edad;
    //verificacion de edad del usuario
    if(edad >= 0 && edad <= 12){
    cout <<"Lo siento no cumples con la edad necesaria para ver esta pelicula" << "\n";
    }
    else if (edad >= 12 && edad <= 15)
    {
    cout << "Lo siento pero aun no cumples con la edad necesaria para ver esta pelicula" << "\n";           
    }
    else if (edad >= 15 && edad <= 18)
    {
    cout << "Lo siento pero aun no cumples con la edad necesaria para ver esta pelicula pero ya casi" << "\n";           
    }
    else if (edad >= 18 && edad <= 21)
    {
    cout << "Tienes la edad necesaria para ver esta pelicula disfrutala";
    }
    else if (edad >= 21 && edad <= 80)
    {
    cout << "No pues para gustos colores rey disfruta de la pelicula";
    }
    else{
    cout <<" Usted ha ingresado una edad no valida porfavor ingrese una edad existente :D";
    }
    break;
    case 5:
    //Opcion de la pelicula  de El Lobo de Wall Street
    cout << "Usted ha seleccionado la pelicula de  El Lobo de Wall Street, como normativa de la empresa ingrese su edad : ";
    cin >> edad;
    //verificacion de edad del usuario
    if(edad >= 0 && edad <= 12){
    cout <<"Lo siento no cumples con la edad necesaria para ver esta pelicula" << "\n";
    }
    else if (edad >= 12 && edad <= 15)
    {
    cout << "Lo siento pero aun no cumples con la edad necesaria para ver esta pelicula" << "\n";           
    }
    else if (edad >= 15 && edad <= 18)
    {
    cout << "Lo siento pero aun no cumples con la edad necesaria para ver esta pelicula te faltan un par de años" << "\n";           
    }
    else if (edad >= 18 && edad <= 21)
    {
    cout << "Lo siento pero aun no cumples con la edad necesaria para ver esta pelicula pero ya casi";
    }
    else if (edad >= 21 && edad <= 80)
    {
    cout << "Tienes la edad necesaria para ver esta pelicula disfrutala";
    }
    else{
    cout <<" Usted ha ingresado una edad no valida porfavor ingrese una edad existente :D";
    }
    break;
    case 6:
    // Salir
    cout << "Muchas gracias vuelva pronto........! \n";
    return 0;
    break;

    default:
    cout << "Ha ocurrido un error, pruebe mas tarde. \n";
    break;
    }

    break;

    case 4:
    // Salir
    cout << "Muchas gracias vuelva pronto........! \n";
    return 0;
    break;

    default:
    cout << "Ha ocurrido un error, pruebe mas tarde. \n";
    break;
    }
}