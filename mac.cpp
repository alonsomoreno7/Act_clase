#include <iostream>
using namespace std;


//1. añadir cajita feliz 
//2. (0-7 años) puede comprarlo
//3 (7-14 años) puede "" 2 precio
//4(14-18 años) "" 3 precio
//5(18-80 años) no lo puede "astro uca"

int main()
{
    float wallet = 100.00, restante;
    int menuGlobal, menuMorning, menuAfternoon, menuNight, year;
    cout << "-------------MAC---------------" << "\n";
    cout << "1. Menu de mañana" << "\n";
    cout << "2. Menu de la tarde" << "\n";
    cout << "3. Menu de la noche" << "\n";
    cout << "4. Leave" << "\n";
    cout << "Bienvenido, ¿Qué menu desea visualizar? (Digite la opcion en numero)" << "\n";
    cin >> menuGlobal;

    switch (menuGlobal)
    {
    case 1:
        // Menu de la mañana
        cout << "-------------Menu de inicio del morning - MAC---------------" << "\n";
        cout << "1. Mac Moffin ($3)" << "\n";
        cout << "2. HotCakes ($4.75)" << "\n";
        cout << "3. Jugo ($1.25)" << "\n";
        cout << "4. Papas ($2)" << "\n";
        cout << "5. Cajita feliz ($50)" << "\n";
        cout << "Bienvenido, tenga buenos dias, que desea ordenar: " << "\n";
        cin >> menuMorning;

        switch (menuMorning)
        {
        case 1:
            cout << "Usted ha seleccionado un Mac Moffin ($3)" << "\n";
            restante = wallet - 3;
            cout << "Su saldo actual es de: $" << restante << "\n";
            break;
        case 2:
            cout << "Usted ha seleccionado unos HotCakes ($4.75)" << "\n";
            restante = wallet - 4.75;
            cout << "Su saldo actual es de: $" << restante << "\n";
            break;
        case 3:
            cout << "Usted ha seleccionado un Jugo ($1.25)" << "\n";
            restante = wallet - 1.25;
            cout << "Su saldo actual es de: $" << restante << "\n";
            break;
        case 4:
            cout << "Usted ha seleccionado unas Papas ($2)" << "\n";
            restante = wallet - 2;
            cout << "Su saldo actual es de: $" << restante << "\n";
            break;
        case 5:
            cout << "Usted ha seleccionado una cajita feliz, necistamos saber su edad nos la podria compartir: ";
            cin >> year;
            if (year >= 0 && year <= 7)
            {
                cout << "Usted tiene edad para comprar la cajita feliz, Su saldo actual es de: $"<< restante << "\n";
                restante = wallet - 50;
            }
            else if (year >= 7 && year <= 14)
            {
                cout << "Se le cobrara el doble precio de la cajita feliz, Su saldo actual es de: $"<< restante << "\n";
                restante = wallet - 50;
            }
            else if (year >= 14 && year <= 18)
            {
                cout << "Se le cobrara el triple precio de la cajita feliz, Su saldo actual es de: $"<< restante << "\n";
                restante = wallet - 50;
            }
            else if (year >= 18 && year <= 80)
            {
                cout << "no lo puede 'astro uca' ";
            }
            else{
                cout <<" error edad no valida porfavor selecione una opcion valida :D";
            }

        break;

        default:
            cout << "Ha ocurrido un error, pruebe mas tarde. \n";
            break;
        }
        break;

    case 2:
        // Menu de la tarde
        cout << "-------------Menu de inicio del dia - MAC---------------" << "\n";
        cout << "1. Big Mac ($4)" << "\n";
        cout << "2. HotCakes ($4.75)" << "\n";
        cout << "3. Jugo ($1.25)" << "\n";
        cout << "4. Papas ($2)" << "\n";
        cout << "5. Cajita feliz ($15)" << "\n";
        cout << "Bienvenido, tenga buenos dias, que desea ordenar: " << "\n";
        cin >> menuAfternoon;

        switch (menuAfternoon)
        {
        case 1:
            cout << "Usted ha seleccionado un Mac Moffin ($3)" << "\n";
            restante = wallet - 3;
            cout << "Su saldo actual es de: $" << restante << "\n";
            break;
        case 2:
            cout << "Usted ha seleccionado unos HotCakes ($4.75)" << "\n";
            restante = wallet - 4.75;
            cout << "Su saldo actual es de: $" << restante << "\n";
            break;
        case 3:
            cout << "Usted ha seleccionado un Jugo ($1.25)" << "\n";
            restante = wallet - 1.25;
            cout << "Su saldo actual es de: $" << restante << "\n";
            break;
        case 4:
            cout << "Usted ha seleccionado unas Papas ($2)" << "\n";
            restante = wallet - 2;
            cout << "Su saldo actual es de: $" << restante << "\n";
            break;

        case 5:
            cout << "Usted ha seleccionado una cajita feliz, necistamos saber su edad nos la podria compartir: ";
            cin >> year;
            if (year >= 0 && year <= 7)
            {
                cout << "Usted tiene edad para comprar la cajita feliz, Su saldo actual es de: $"<< restante << "\n";
                restante = wallet - 50;
            }
            else if (year >= 7 && year <= 14)
            {
                cout << "Se le cobrara el doble precio de la cajita feliz, Su saldo actual es de: $"<< restante << "\n";
                restante = wallet - 50;
            }
            else if (year >= 14 && year <= 18)
            {
                cout << "Se le cobrara el triple precio de la cajita feliz, Su saldo actual es de: $"<< restante << "\n";
                restante = wallet - 50;
            }
            else if (year >= 18 && year <= 80)
            {
                cout << "no lo puede 'astro uca' ";
            }
            else{
                cout <<" error edad no valida porfavor selecione una opcion valida :D";
            }
            break;
        default:
            cout << "Ha ocurrido un error, pruebe mas tarde. \n";
        break;
        }

        break;

    case 3:
        // Menu de la noche
        cout << "-------------Menu de inicio del dia - MAC---------------" << "\n";
        cout << "1. Big Mac ($4)" << "\n";
        cout << "2. HotCakes ($4.75)" << "\n";
        cout << "3. Jugo ($1.25)" << "\n";
        cout << "4. Papas ($2)" << "\n";
        cout << "5. Cajita feliz ($15)" << "\n";
        cout << "Bienvenido, tenga buenos dias, que desea ordenar: " << "\n";
        cin >> menuNight;

         switch (menuNight)
        {
        case 1:
            cout << "Usted ha seleccionado un Mac Moffin ($3)" << "\n";
            restante = wallet - 3;
            cout << "Su saldo actual es de: $" << restante << "\n";
            break;
        case 2:
            cout << "Usted ha seleccionado unos HotCakes ($4.75)" << "\n";
            restante = wallet - 4.75;
            cout << "Su saldo actual es de: $" << restante << "\n";
            break;
        case 3:
            cout << "Usted ha seleccionado un Jugo ($1.25)" << "\n";
            restante = wallet - 1.25;
            cout << "Su saldo actual es de: $" << restante << "\n";
            break;
        case 4:
            cout << "Usted ha seleccionado unas Papas ($2)" << "\n";
            restante = wallet - 2;
            cout << "Su saldo actual es de: $" << restante << "\n";
            break;
        case 5:
         cout << "Usted ha seleccionado una cajita feliz, necistamos saber su edad nos la podria compartir: ";
            cin >> year;
            if (year >= 0 && year <= 7)
            {
                cout << "Usted tiene edad para comprar la cajita feliz, Su saldo actual es de: $"<< restante << "\n";
                restante = wallet - 50;
            }
            else if (year >= 7 && year <= 14)
            {
                cout << "Se le cobrara el doble precio de la cajita feliz, Su saldo actual es de: $"<< restante << "\n";
                restante = wallet - 50;
            }
            else if (year >= 14 && year <= 18)
            {
                cout << "Se le cobrara el triple precio de la cajita feliz, Su saldo actual es de: $"<< restante << "\n";
                restante = wallet - 50;
            }
            else if (year >= 18 && year <= 80)
            {
                cout << "no lo puede 'astro uca' ";
            }
            else{
                cout <<" error edad no valida porfavor selecione una opcion valida :D";
            }
        break;
         default:
            cout << "Ha ocurrido un error, pruebe mas tarde. \n";
            break;
        }
        break;

        break;
    case 4:
        // Salir
        cout << "Muchas gracias vuelva pronto........! \n";
        return 0;
        break;
    default:
        // No ingreso correctamente la opcion
        cout << "Podrias ingresar datos correctos \n";
        break;
    }


    return 0;
}