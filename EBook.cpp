#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
#include <Windows.h>
#include <dos.h>
#include <wchar.h>
#include <locale.h>

using namespace std;

// Main Menu
void Logo();
void toc();
void Tutorial();
void Home();

// Rizal
void Rizal();

// Noli Me Tangere
void noli();
    // chapter
void k_noli();
void c_noli();
void t_noli();

    // compiled
void C_noli();

// El Filibusterismo
void fili();
    // chapter
void k_fili();
void c_fili();
void t_fili();

    // compiled
void C_fili();

void AboutUs();
void quit();
//void function(void);
//void tablefk();

int main()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD CursorPosition;

    // Start Menu
    system("mode 120, 50");
    Logo();

    cout << "                                             ";
    system("pause");
    system("cls");

    Home();
    
    return 0;
}
/*
void function(void)
{
    wchar_t example[1];
    example[0] = L'ñ';
    putwchar(example[0]);
    putwchar(L'\n');
}
*/

// ***************************************************************************************************************************************************************************************
// ***************************************************************************************************************************************************************************************

    /*
    setlocale(LC_ALL, "");
    function();
    return 0;
    */

// Logo

void Tutorial()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD CursorPosition;

    Logo();

    system("pause"); system("cls");
}

void Logo() {

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD CursorPosition;

    cout << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 14);

    cout << "             ________________________________________________________________________________________________" << endl;
    cout << "            /_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/" << endl << endl;
    cout << "                                         Group III: Mga Bata ni Sir RR Presents.." << endl << endl; SetConsoleTextAttribute(hConsole, 11);
    cout << "                .____            __   ___.                         .__  __________                               " << endl;
    cout << "                |    |   _____  |  | _\\_ |__ _____  ___.__.   ____ |__| \\______   \\ ____ ______   ____           " << endl;
    cout << "                |    |   \\__  \\ |  |/ /| __ \\\\__  \\<   |  |  /    \\|  |  |     ___// __ \\\\____ \\_/ __ \\          " << endl;
    cout << "                |    |___ / __ \\|    < | \\_\\ \\/ __ \\\\___  | |   |  \\  |  |    |   \\  ___/|  |_> >  ___/          " << endl;
    cout << "                |_______ (____  /__|_ \\|___  (____  / ____| |___|  /__|  |____|    \\___  >   __/ \\___  >         " << endl;
    cout << "                        \\/    \\/     \\/    \\/     \\/\\/           \\/                    \\/|__|        \\/          " << endl << endl;
    SetConsoleTextAttribute(hConsole, 14);
    cout << "            ________________________________________________________________________________________________" << endl;
    cout << "           /_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/" << endl;

    cout << endl;
    cout << endl;

    SetConsoleTextAttribute(hConsole, 11);

}


// About Us

void AboutUs() {
    
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD CursorPosition;

    Logo();
    SetConsoleTextAttribute(hConsole, 14);
    cout << "                                        __________________________________________" << endl;
    cout << "                                       /_____/_____/_____/_____/_____/_____/_____/" << endl << endl;
    SetConsoleTextAttribute(hConsole, 11);
    cout << "                                                       ABOUT US\n" << endl;


    cout << "                                           Group 3: \"MGA BATA NI SIR RR\"\n\n";

    cout << "                       Programmers: \n";
    cout << "                            - LLANES, KEVIN \n";
    cout << "                            - FUNGO, GIAN HIGINO \n";
    cout << "                            - MAYONADO, CHRISTIAN \n";
    cout << "                            - LONOZA, JOSHUA OLIVERA \n";
    cout << "                            - MONTE, MARTIN LORENCE \n";
    cout << "                            - MIRANDA, KARL \n";
    cout << "                            - LUGTU, BEA \n";
    cout << "                            - LISTANGCO, LAURENZ \n";
    cout << "                            - JULIANE, CARL JAMES \n\n";

    cout << "                       Campus: \n";
    cout << "                           University of Caloocan City - North Congress \n\n";

    cout << "                       Program: \n";
    cout << "                           Bachelor of Science in Computer Science (BSCS) \n\n";

    cout << "                       Section: \n";
    cout << "                           1st - A \n\n";
    SetConsoleTextAttribute(hConsole, 14);
    cout << "                                        __________________________________________" << endl;
    cout << "                                       /_____/_____/_____/_____/_____/_____/_____/" << endl << endl;
    SetConsoleTextAttribute(hConsole, 11);
    cout << "                                             ";
    SetConsoleTextAttribute(hConsole, 7);
    system("pause");
    system("cls");
    toc();
}

// ***************************************************************************************************************************************************************************************
// ***************************************************************************************************************************************************************************************

// Home

void Home() {
    
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD CursorPosition;

    Logo();

    SetConsoleTextAttribute(hConsole, 11);

    cout << "      Ang \"Lakbay ni Pepe\" ay binubuo ng mga kaukulang impormasyon ukol kay Dr. Jose P. Rizal at mga likhang niyang nobela" << endl;
    cout << "    na \"Noli me tangere\" at \"El Filibusterismo\" na isinalin sa tagalog at ito ay binuod, makikita rin ang mga tauhan at " << endl;
    cout << "    mga talasalatian sa bawat kabanata ng mga nabanggit na nobela." << endl << endl;

    cout << "    The \"Lakbay ni Pepe\" application was created for offline browsing of Dr. Jose P. Rizal's books such as \"Noli me " << endl;
    cout << "    Tangere\" and \"El Filibusterismo.\" This program was created for educational purposes only and makes no claims for" << endl;
    cout << "    public use." << endl << endl;

    cout << "                                             ";
    SetConsoleTextAttribute(hConsole, 7);
    system("pause");
    system("cls");
    toc();
}

/*
To do:
- content
    - introduction
    - 
*/

// Table of Contents

void toc() {

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD CursorPosition;

    int table;

    SetConsoleTextAttribute(hConsole, 14);
    cout << "                                        __________________________________________" << endl;
    cout << "                                       /_____/_____/_____/_____/_____/_____/_____/" << endl << endl;
    SetConsoleTextAttribute(hConsole, 11);
    cout << "                                                       Mapa ni ";
    SetConsoleTextAttribute(hConsole, 7);
    cout << "Pepe\n" << endl;
    SetConsoleTextAttribute(hConsole, 14);
    cout << "                                        __________________________________________" << endl;
    cout << "                                       /_____/_____/_____/_____/_____/_____/_____/" << endl << endl;
    SetConsoleTextAttribute(hConsole, 11);

    cout << "                                        [ "; 
    SetConsoleTextAttribute(hConsole, 7);
    cout << "1";
    SetConsoleTextAttribute(hConsole, 11);
    cout << " ] Ang Bida" << endl << endl;

    cout << "                                        [ ";
    SetConsoleTextAttribute(hConsole, 7);
    cout << "2";
    SetConsoleTextAttribute(hConsole, 11);
    cout << " ] Buod ng Nobelang \"Noli Me Tangere\"" << endl;
    cout << "                                        [ ";
    SetConsoleTextAttribute(hConsole, 7); 
    cout << "3";
    SetConsoleTextAttribute(hConsole, 11);
    cout << " ] Pagkakakilanlan sa mga Tauhan" << endl;
    cout << "                                        [ ";
    SetConsoleTextAttribute(hConsole, 7); 
    cout << "4";
    SetConsoleTextAttribute(hConsole, 11);
    cout << " ] Mga Kabanata ng \"Noli Me Tangere\"" << endl << endl;

    cout << "                                        [ ";
    SetConsoleTextAttribute(hConsole, 7); 
    cout << "5";
    SetConsoleTextAttribute(hConsole, 11); 
    cout << " ] Buod ng Nobelang \"El Filibusterismo\"" << endl;
    cout << "                                        [ ";
    SetConsoleTextAttribute(hConsole, 7); 
    cout << "6";
    SetConsoleTextAttribute(hConsole, 11); 
    cout << " ] Pagkakakilanlan sa mga Tauhan" << endl;
    cout << "                                        [ ";
    SetConsoleTextAttribute(hConsole, 7);
    cout << "7";
    SetConsoleTextAttribute(hConsole, 11);
    cout << " ] Mga Kabanata ng \"El Filibusterismo\"" << endl << endl;

    cout << "                                        [ ";
    SetConsoleTextAttribute(hConsole, 7); 
    cout << "8";
    SetConsoleTextAttribute(hConsole, 11);
    cout << " ] Kilalanin ang mga Gumawa" << endl;
    cout << "                                        [ ";
    SetConsoleTextAttribute(hConsole, 7); 
    cout << "9";
    SetConsoleTextAttribute(hConsole, 11);
    cout << " ] Itigil ang paglalakbay" << endl << endl;

    SetConsoleTextAttribute(hConsole, 14);
    cout << "                                        __________________________________________" << endl;
    cout << "                                       /_____/_____/_____/_____/_____/_____/_____/" << endl << endl;
    SetConsoleTextAttribute(hConsole, 11);

    cout << " Pumili ng iyong destinasyon: ";
    SetConsoleTextAttribute(hConsole, 7);
    cin >> table;
    /*
    1. Dr. Jose P. Rizal

    2. Buod ng Noli Me Tangere
    3. Pagkakakilanlan sa mga Tauhan 
    4. Mga Kabanata ng Noli Me Tangere

    5. Buod ng El Filibusterismo
    6. Pagkakakilanlan sa mga Tauhan
    7. Mga Kabanata ng El Filibusterismo

    8. Kilalanin ang mga gumawa
    9. Itigil ang paglalakbay
    */
    switch (table) {
    case 1: // Dr. Jose P. Rizal
        system("cls");
        Rizal();
        break;
    
    case 2: // Buod ng Noli Me Tangere
        system("cls");
        noli();
        break;
    
    case 3: // Pagkakakilanlan sa mga Tauhan 
        system("cls");
        C_noli();
        break;
    
    case 4: // Mga Kabanata ng Noli Me Tangere
        system("cls");
        k_noli();
        break;
    
    case 5: // Buod ng El Filibusterismo
        system("cls");
        fili();
        break;

    case 6: // Pagkakakilanlan sa mga Tauhan
        system("cls");
        C_fili();
        break;

    case 7: // Mga Kabanata ng El Filibusterismo
        system("cls");
        k_fili();
        break;

    case 8: // Kilalanin ang mga gumawa
        system("cls");
        AboutUs();
        break;

    case 9: // Itigil ang paglalakbay
        system("cls");
        quit();
        break;

    defaut:
        break;
    }
    
    system("pause");
    system("cls");
}


// ***************************************************************************************************************************************************************************************
// ***************************************************************************************************************************************************************************************

void Rizal() {

}


// Noli me Tangere - Full {Whole Summary, Characters, Termnilogies}

void noli() {
   
    cout << "Noli Me Tangere\n";
    
    ifstream fil_b("Resources/Fili/Buod/fil_b.txt");
    string str;
    while (getline(fil_b, str)) {
        cout << str << "\n";
    }

    system("pause");
    system("cls");
}

// Noli me Tangere - Chapters

void k_noli() {
    using namespace std;

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD CursorPosition;

    int k_num;
    cout << "" << endl << endl << endl << endl << endl << endl << endl;
    SetConsoleTextAttribute(hConsole, 14);
    cout << "                                        __________________________________________" << endl;
    cout << "                                       /_____/_____/_____/_____/_____/_____/_____/" << endl << endl;
    SetConsoleTextAttribute(hConsole, 11);

    cout << "                                            Mga Kabanata sa Noli me Tangere\n" << endl;
    cout << "                                                       [ 1 - 64]" << endl;
    SetConsoleTextAttribute(hConsole, 14);
    cout << "                                        __________________________________________" << endl;
    cout << "                                       /_____/_____/_____/_____/_____/_____/_____/" << endl << endl;
    SetConsoleTextAttribute(hConsole, 11);

    cout << "                                       Pumili ng kabanata: ";
    cin >> k_num;

    system("cls");

    fstream fil_k;
    fil_k.open("Resources/Noli/Buod/nol_k_" + to_string(k_num) + ".txt", ios::in);

    if (fil_k.is_open())
    {

        SetConsoleTextAttribute(hConsole, 14);
        cout << "                                        __________________________________________" << endl;
        cout << "                                       /_____/_____/_____/_____/_____/_____/_____/" << endl << endl;
        SetConsoleTextAttribute(hConsole, 11);
        cout << "                                                       Kabanata " << k_num << " " << endl;
        SetConsoleTextAttribute(hConsole, 14);
        cout << "                                        __________________________________________" << endl;
        cout << "                                       /_____/_____/_____/_____/_____/_____/_____/" << endl << endl;
        SetConsoleTextAttribute(hConsole, 11);

        for (int i = 1; i <= 120; i++) {
            cout << "=";
        }
        cout << "\n" << endl;
        SetConsoleTextAttribute(hConsole, 7);
        string line;
        while (getline(fil_k, line))
        {
            cout << line << endl;
        }
        fil_k.close();
    }

    else if (cin.fail())
    {
        cin.clear(); cin.ignore(512, '\n');
        SetConsoleTextAttribute(hConsole, 14);
        cout << "                                        __________________________________________" << endl;
        cout << "                                       /_____/_____/_____/_____/_____/_____/_____/" << endl << endl;
        SetConsoleTextAttribute(hConsole, 11);

        cout << "                                            Mga Kabanata sa Noli me Tangere\n" << endl;
        cout << "                                                       [ 1 - 64]" << endl;
        SetConsoleTextAttribute(hConsole, 14);
        cout << "                                        __________________________________________" << endl;
        cout << "                                       /_____/_____/_____/_____/_____/_____/_____/" << endl << endl;
        SetConsoleTextAttribute(hConsole, 11);

        cout << "                                       ERROR: Maglagay lamang ng Numero" << endl << endl;

        cout << "                                       ";
        SetConsoleTextAttribute(hConsole, 14);
        system("pause");
        system("cls");
        k_fili();
    }

    else // if user inputted 0 or 
    {
        system("cls");
        SetConsoleTextAttribute(hConsole, 14);
        cout << "                                        __________________________________________" << endl;
        cout << "                                       /_____/_____/_____/_____/_____/_____/_____/" << endl << endl;
        SetConsoleTextAttribute(hConsole, 11);

        cout << "                                            Mga Kabanata sa Noli me Tangere\n" << endl;
        cout << "                                                       [ 1 - 64]" << endl;
        SetConsoleTextAttribute(hConsole, 14);
        cout << "                                        __________________________________________" << endl;
        cout << "                                       /_____/_____/_____/_____/_____/_____/_____/" << endl << endl;
        SetConsoleTextAttribute(hConsole, 11);

        cout << "                                       ERROR: Hindi mahanap ang Kabanata" << endl;
        cout << "                                       ";
        SetConsoleTextAttribute(hConsole, 14);
        system("pause");
        system("cls");
        k_fili();
    }
    cout << "" << endl;
    SetConsoleTextAttribute(hConsole, 11);
    for (int i = 1; i <= 120; i++) {
        cout << "=";
    }
    cout << "\n" << endl;

    char nav;
    SetConsoleTextAttribute(hConsole, 14);
    cout << "                                        __________________________________________" << endl;
    cout << "                                       /_____/_____/_____/_____/_____/_____/_____/" << endl << endl;
    SetConsoleTextAttribute(hConsole, 11);
    cout << "                                                       Navigation " << endl << endl;
    SetConsoleTextAttribute(hConsole, 11);
    cout << "         Huling Kabanata: ";
    SetConsoleTextAttribute(hConsole, 14);
    cout << "B";
    SetConsoleTextAttribute(hConsole, 11);
    cout << "         Kasunod na Kabanata : ";
    SetConsoleTextAttribute(hConsole, 14);
    cout << "N";
    SetConsoleTextAttribute(hConsole, 11);
    cout << "         Maglagay ng Kabanata : ";
    SetConsoleTextAttribute(hConsole, 14);
    cout << "I";
    SetConsoleTextAttribute(hConsole, 11);
    cout << "         Umalis: ";
    SetConsoleTextAttribute(hConsole, 14);
    cout << "X" << endl << endl;
    SetConsoleTextAttribute(hConsole, 14);
    cout << "                                        __________________________________________" << endl;
    cout << "                                       /_____/_____/_____/_____/_____/_____/_____/" << endl << endl;

    SetConsoleTextAttribute(hConsole, 14);
    cout << "                                              Pumili ng Destinasyon: ";
    cin >> nav;

    switch (toupper(nav)) {
    case 'B':
        system("cls");
        /* Previous */
        quit();
        break;

    case 'N':
        system("cls");
        /* Next */
        quit();
        break;

    case 'I':
        system("cls");
        /* Chapter El Fili */
        k_noli();
        break;

    case 'X':
        system("cls");
        quit();
        break;

    default:

        break;
    }

    system("pause");
    system("cls");
}

// Noli me Tangere - Characters

void c_noli() {
    

    cout << "Mga Tauhan sa Noli me Tangere\n";

    ifstream fil_t("Resources/Fili/Tauhan/fil_t.txt");
    string str;
    while (getline(fil_t, str)) {
        cout << str << "\n";
    }
    system("pause");
    system("cls");

}

// compiled
void C_noli() {


}

// Noli me Tangere - Terminologies

void t_noli() {
    

    cout << "Mga Talasalitaan sa Noli me Tangere\n";
    system("pause");
    system("cls");
}

// compiled
void T_noli() {


}
// ***************************************************************************************************************************************************************************************
// ***************************************************************************************************************************************************************************************


// El Filibusterismo - Full {Whole Summary, Characters, Termnilogies}

void fili() {
    cout << "El Filibusterismo\n";
    
    system("pause");
    system("cls");
}

// El Filibusterismo - Chapters
/*
void tablefk() {
    fstream fil_k;
    fil_k.open("Resources/Fili/Buod/fil_k_" + to_string(k_num) + ".txt", ios::in);

    if (fil_k.is_open())
    {
        cout << endl;
        cout << "                                                    [ Kabanata " << k_num << " ]" << endl << endl;

        for (int i = 1; i <= 120; i++) {
            cout << "=";
        }
        cout << "\n" << endl;

        string line;
        while (getline(fil_k, line))
        {
            cout << line << endl;
        }
        fil_k.close();
    }

    else if (cin.fail())
    {
        cin.clear(); cin.ignore(512, '\n');
        cout << "Maglagay lamang ng numero." << endl << endl;
        system("pause");
        system("cls");
        k_fili();
    }

    else // if user inputted 0 or 
    {
        system("cls");
        cout << "Hindi mahanap ang kabanata." << endl;
        system("pause");
        system("cls");
        k_fili();
    }
}
*/

void k_fili() {
    using namespace std;

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD CursorPosition;

    int k_num;          // yung mga apostrophe nalang problema
    cout << "" << endl << endl << endl << endl << endl << endl << endl;
    SetConsoleTextAttribute(hConsole, 14);
    cout << "                                        __________________________________________" << endl;
    cout << "                                       /_____/_____/_____/_____/_____/_____/_____/" << endl << endl;
    SetConsoleTextAttribute(hConsole, 11);

    cout << "                                            Mga Kabanata sa El Filibusterismo\n" << endl;
    cout << "                                                       [ 1 - 39]" << endl;
    SetConsoleTextAttribute(hConsole, 14);
    cout << "                                        __________________________________________" << endl;
    cout << "                                       /_____/_____/_____/_____/_____/_____/_____/" << endl << endl;
    SetConsoleTextAttribute(hConsole, 11);

    cout << "                                       Pumili ng kabanata: ";
    cin >> k_num;

    system("cls");

    fstream fil_k;
    fil_k.open("Resources/Fili/Buod/fil_k_" + to_string(k_num) + ".txt", ios::in);

    if (fil_k.is_open())
    {

        SetConsoleTextAttribute(hConsole, 14);
        cout << "                                        __________________________________________" << endl;
        cout << "                                       /_____/_____/_____/_____/_____/_____/_____/" << endl << endl;
        SetConsoleTextAttribute(hConsole, 11);
        cout << "                                                       Kabanata " << k_num << " " << endl;
        SetConsoleTextAttribute(hConsole, 14);
        cout << "                                        __________________________________________" << endl;
        cout << "                                       /_____/_____/_____/_____/_____/_____/_____/" << endl << endl;
        SetConsoleTextAttribute(hConsole, 11);
   
        for (int i = 1; i <= 120; i++) {
            cout << "=";
        }
        cout << "\n" << endl;
        SetConsoleTextAttribute(hConsole, 7);
        string line;
        while (getline(fil_k, line))
        {
            cout << line << endl;
        }
        fil_k.close();
    }

    else if (cin.fail())
    {
        cin.clear(); cin.ignore(512, '\n');
        SetConsoleTextAttribute(hConsole, 14);
        cout << "                                        __________________________________________" << endl;
        cout << "                                       /_____/_____/_____/_____/_____/_____/_____/" << endl << endl;
        SetConsoleTextAttribute(hConsole, 11);

        cout << "                                            Mga Kabanata sa El Filibusterismo\n" << endl;
        cout << "                                                       [ 1 - 39]" << endl;
        SetConsoleTextAttribute(hConsole, 14);
        cout << "                                        __________________________________________" << endl;
        cout << "                                       /_____/_____/_____/_____/_____/_____/_____/" << endl << endl;
        SetConsoleTextAttribute(hConsole, 11);

        cout << "                                       ERROR: Maglagay lamang ng Numero" << endl << endl;
        
        cout << "                                       ";
        SetConsoleTextAttribute(hConsole, 14);
        system("pause");
        system("cls");
        k_fili();
    }
    
    else // if user inputted 0 or 
    {
        system("cls");
        SetConsoleTextAttribute(hConsole, 14);
        cout << "                                        __________________________________________" << endl;
        cout << "                                       /_____/_____/_____/_____/_____/_____/_____/" << endl << endl;
        SetConsoleTextAttribute(hConsole, 11);

        cout << "                                            Mga Kabanata sa El Filibusterismo\n" << endl;
        cout << "                                                       [ 1 - 39]" << endl;
        SetConsoleTextAttribute(hConsole, 14);
        cout << "                                        __________________________________________" << endl;
        cout << "                                       /_____/_____/_____/_____/_____/_____/_____/" << endl << endl;
        SetConsoleTextAttribute(hConsole, 11);

        cout << "                                       ERROR: Hindi mahanap ang Kabanata" << endl;
        cout << "                                       ";
        SetConsoleTextAttribute(hConsole, 14);
        system("pause");
        system("cls");
        k_fili();
    }
    cout << "" << endl;
    SetConsoleTextAttribute(hConsole, 11);
    for (int i = 1; i <= 120; i++) {
        cout << "=";
    }
    cout << "\n" << endl;

    char nav;
    SetConsoleTextAttribute(hConsole, 14);
    cout << "                                        __________________________________________" << endl;
    cout << "                                       /_____/_____/_____/_____/_____/_____/_____/" << endl << endl;
    SetConsoleTextAttribute(hConsole, 11);
    cout << "                                                       Navigation " << endl << endl;
    SetConsoleTextAttribute(hConsole, 11);
    cout << "         Huling Kabanata: ";
    SetConsoleTextAttribute(hConsole, 14);
    cout << "B";
    SetConsoleTextAttribute(hConsole, 11);
    cout << "         Kasunod na Kabanata : ";
    SetConsoleTextAttribute(hConsole, 14);
    cout << "N";
    SetConsoleTextAttribute(hConsole, 11);
    cout << "         Maglagay ng Kabanata : ";
    SetConsoleTextAttribute(hConsole, 14);
    cout << "I";
    SetConsoleTextAttribute(hConsole, 11);
    cout << "         Umalis: ";
    SetConsoleTextAttribute(hConsole, 14);
    cout << "X" << endl << endl;
    SetConsoleTextAttribute(hConsole, 14);
    cout << "                                        __________________________________________" << endl;
    cout << "                                       /_____/_____/_____/_____/_____/_____/_____/" << endl << endl;

    SetConsoleTextAttribute(hConsole, 14);
    cout << "                                              Pumili ng Destinasyon: ";
    cin >> nav;

    switch (toupper(nav)) {
        case 'B':
            system("cls");
            /* Previous */
            quit();
            break;

        case 'N':
            system("cls");
            /* Next */
            quit();
            break;

        case 'I':
            system("cls");
            /* Chapter El Fili */
            k_fili();
            break;

        case 'X':
            system("cls");
            quit();
            break;

        default:

            break;
    }

    system("pause");
    system("cls");
}

void quit() {

    int exitprompt;
    char input;

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD CursorPosition;

    Logo();
    cout << "                            Are you sure you want to terminate the program? ";
    SetConsoleTextAttribute(hConsole, 7);
    cout << "[y / n]: ";
    SetConsoleTextAttribute(hConsole, 11);
    cin >> input;

    cout << "" << endl << endl;
    switch (toupper(input)) {
        case 'Y':
            system("cls");
            Logo();
            SetConsoleTextAttribute(hConsole, 14);
            cout << "                                        __________________________________________" << endl;
            cout << "                                       /_____/_____/_____/_____/_____/_____/_____/" << endl << endl;
            SetConsoleTextAttribute(hConsole, 7);
            cout << "                                           Salamat sa pag ";
            SetConsoleTextAttribute(hConsole, 11);
            cout << "Lakbay ni Pepe!" << endl;
            SetConsoleTextAttribute(hConsole, 7);
            cout << "                                                    Exiting Program..." << endl;
            SetConsoleTextAttribute(hConsole, 14);
            cout << "                                        __________________________________________" << endl;
            cout << "                                       /_____/_____/_____/_____/_____/_____/_____/" << endl << endl;
                Sleep(2500);
                exit(0);
            break;

        case 'N':
            system("cls");
            Logo();
            SetConsoleTextAttribute(hConsole, 14);
            cout << "                                        __________________________________________" << endl;
            cout << "                                       /_____/_____/_____/_____/_____/_____/_____/" << endl << endl;
            SetConsoleTextAttribute(hConsole, 7);
            cout << "                                                Going back to "; 
            SetConsoleTextAttribute(hConsole, 11);
            cout << "main menu.." << endl;
            SetConsoleTextAttribute(hConsole, 14);
            cout << "                                        __________________________________________" << endl;
            cout << "                                       /_____/_____/_____/_____/_____/_____/_____/" << endl << endl;
                Sleep(2500);
                main();
                system("cls");
            break;
    }

}

// El Filibusterismo - Characters

void c_fili() {
    

    cout << "Mga Tauhan sa El Filibusterismo\n";
    system("pause");
    system("cls");
}

void C_fili() {


}

// El Filibusterismo - Terminologies

void t_fili() {
    

    cout << "Mga Talasalitaan sa El Filibusterismo\n";
    system("pause");
    system("cls");
}

void T_fili() {


}

// ***************************************************************************************************************************************************************************************
// ***************************************************************************************************************************************************************************************

/* BOOKMARK





*/



/*
    char nav;
    cin >> nav;

    if (nav == 'B')
    {
        int k_num = k_num--;
        fstream fil_k;
        fil_k.open("Resources/Fili/Buod/fil_k_" + to_string(k_num) + ".txt", ios::in);
    }
        else if (fil_k.is_open())
        {
            cout << endl;
            cout << "                                                    [ Kabanata " << k_num << " ]" << endl << endl;

            for (int i = 1; i <= 120; i++) {
                cout << "=";
            }
            cout << "\n" << endl;

            string line;
            while (getline(fil_k, line))
            {
                cout << line << endl;
            }
            fil_k.close();
        }

        else if (cin.fail())
        {
            cin.clear(); cin.ignore(512, '\n');
            cout << "Maglagay lamang ng numero." << endl << endl;
            system("pause");
            system("cls");
            k_fili();
        }
    */

// NOTES:

/*

string #;
int #;

do {
        c_cars = _getch();
        switch (c_cars) {
        case 0:
            _getch();
            break;
        case 13:
            std::cout << std::endl;
            break;
        case 27:
            system("cls");
            goto LoginForm;
        case 8:
            if (CarsHider.length() > 0) {
                CarsHider.erase(CarsHider.end() - 1);
                std::cout << c_cars << ' ' << c_cars;
            }
            break;
        default:
            CarsHider += c_cars;
            std::cout << c_cars;
            break;
        }
    } while (c_cars != 13);

*/


/*
* Encountered Problems:
        // fstream ASCII such as: " ' ñ
        // fstream margin/border

* In Progress:
        // Navigation [Previous, Next]
        // Bookmark
        // fstream (Talasalitaan, Tauhan)

* Currently Visible in the Program:
        // Title Screen (Logo)
        // Disclaimer
        // About Us
        // Kabanata (El Filibusterismo)
        // some unfinished navigation for return/exit tas another input ng chapter purposes.
*/

/*
Previous 
getline from existing cin then 

*/


/* 

    cout << "Do you wish to continue? (y/n)" << endl;

    char response;
    cin >> response;

    switch (response)
    {
    if (!( a != 'Y' && a != 'y'))
    case 'y':
        k_fili();
        system("cls");
        break;
    case 'n':
        Home();
        break;
    default: cout << "invalid choice";
    }
    

*/

/*
switch(){
    case 
    break;
    default:

}

*/

/* ternary operator
condition ? expression1 : if not

k == 1 ? Kabanata : cout << "Please check your input.";
*/

/*
&& [both conditions are true]
|| [if at least one condition is true]
! [reverse the logical state//bool]

*/

/* String

getline(cin, name);

if (name.length() > 12){
    cout << "Name can't be over 12 characters"\n;
}
bool value
if (name.empty()) {
    cout << "You didn't enter a name";

}

name.clear;

name.append("@gmail.com"); // 

name.at(0) // checks character

name.insert(0, "@"); //

name.find(' ');

name.erase (0, 3); // deletes

*/

/* While Loop

string mexie;
    while (mexie.empty()) {
        cout << "Enter a name: ";
        cin >> mexie;
    }
    cout << mexie;

*/

/* Do While Loop

int num;
do {
    cout << "Enter a number: ";
    cin >> num;
}while(num < 0);

*/




/* For Loop [ repeat code a certain time]

for(int i = 1; i <= 3; i++){
cout << "repeat this three times";
}

break; // ends the loop
continue; // skips something inside the loop

*/

/*

// You can get rid of that flickering green box by disabling the cursor.

fputs("\e[?25l", stdout); // hide the cursor 

// If you want it back, you can re - enable it.

fputs("\e[?25h", stdout); // show the cursor 

*/


/* fstream open file {need to change this medyo nahihirapan pako sa fstream}
    int k_num;


    ifstream fil_b("Resources/Fili/Buod/fil_k" + k_num + ".txt");
    string str;
    while (getline(fil_b, str)) {
        cout << str << "\n";
    }

    fstream show;
    show.open("fil_k_" + k_num + ".txt", ios::in);

    if (show.is_open())
    {
        cout << "              [ Kabanata ]        " << endl;
        cout << "__________________________________________" << endl;
        string line;
        while (getline(show, line))
        {
            cout << line << endl;
        }
        show.close();
    }

    else
    {
        system("cls");
        cout << "Chapter does not exist." << endl;
        system("pause");
    }


    ifstream fil_b("Resources/Fili/Buod/fil_k" + k_num + ".txt");
    string str;
    while (getline(fil_b, str)) {
        cout << str << "\n";
    }



*/

/* pseudo-random

srand(time(NULL));

int num = (rand() % 6) + 1;
1 to 6
*/

/* Array:

int a[5];

for (int i = 0; i < 5; ++i)
{
    cout << a[i] << " ";
}

*/

/*
cout << " HOW TO ACCESS SUBSECTIONS:                  " << endl;
cout << " > To Access Account" << endl;
cout << " - PRESS \" ____ \" " << endl;
cout << " > To Access Navigation" << endl;
cout << " - PRESS \" ____ \" to go on El filibusterismo book page " << endl;
cout << " - PRESS \" ____ \" to go on Noli me tangere book page " << endl;
cout << " > To Access Navigation";
cout << " - PRESS \" ____ \" ";
*/


/*
lagay mo about us dito: lahat ng tungkol saten xD siguro members, school etcccc
kk

uhm pasabi nga pala sa kanila gawin ung references naten. tignan mo screen ko
Yung gagawin nila, lalagay nila sa textfile/notepad ung buod, tapos ung talasalitaan, nakahiwalay yon.

bali isang kabanata isang file

file name:

talambuhasy ni rizal = rizal.txt

el fili kabanata # = fil_k_1.txt

el fili talasalitaan # = fil_t_1.txt

el fili tauhan = fil_c.txt

noli me tangehere  kabanata # = nol_k_1.txt

noli me tangehere tala # = nol_t_1.txt

noli me tangehere tauhan = nol_c.txt

---

copy na lang nila ung nandon
el fili site: https://noypi.com.ph/el-filibusterismo-buod/
noli site: https://noypi.com.ph/noli-me-tangere-buod/

tagalog yan

ewan tagalog nalang xdd yan na reference naten bat ipaparaphrase ba naten HAHAHAHA

lagay nalang naten sources siguro sa about us credits naten


Group 3: Mga Bata ni Sir RR
*/

// About Us 

// Bookmark

// Home

// Table of Contents

// Rizal

// Noli Me Tangere // El Filibusterismo

// Characters

// Glossary/Vocabulary


/* 29/10/22 11:17pm
Ang balak ko sa Navigation tutorial is:

ay Tagalog ba focus naten Language or english T_T, sanay ako sa english eh di ako pilipino xDD ehhh gagamitin naten buod tagalog parang di bagay
sino mag ttranslate
HAHAHAHA

xDD

kung english to isang pasadahan nalang or kung usto mo English yung main mode naten tas pede tayo mag lagay ng separate na page na "Tagalog" Parang [EN] / [TL]

sige sige

*/


/*
Pages:
- start
- tutor

- home
- toc // table of contents

/////////////////////////////////////////////

medyo huli nalang naten to..

- acc // account
- login
- signup
- bm // bookmark
- fgt_pass // forgot password


/////////////////////////////////////////////



*************************************************************************************

// ang idea ko here is may isang void lang or ung function ba tas dun parang ayun ung page then puro fstream read nalang.
// one page lang siya then puro "system("cls")" nalang kung mag nnext something or kung ano gagawin nung user.

- rizal
- noli
- fili

- chap // chapter
- chap_noli
- chap_fili

- ch // character
- ch_noli
- ch_fili

- glo // glossary/vocabulary
- glo_noli
- glo_fili
*************************************************************************************

- as // about us

- exit

*/

/*
Navigation:
 [1] Previous Chapter
 [2] Next Chapter
 [3] Jump to Chapter // redirect to TOC
 [4] Bookmark // bookmark this chapter
 [5] Home // redirect to main

 //

int jump;
void ChapPage();

switch (nav) {
case 1: // Previous
    cout << "Going back to the previous Chapter..";
    Sleep(1500);
    goto ;
        break;

case 2: // Next
    cout << "Moving to the next Chapter..";
    Sleep(1500);
    goto ;
    break;


case 3: // JUMP
    int jump;

    if (jump)
    cout << "Please enter a chapter number: ";
    cin >> jump; 
    goto ChapPage;
    break;

//
Regarding to case 3:

- a user will give a single number of their choice 1-39 on el fili, 1-64 on noli
- if we're proceeding with this method, we might need to have separate navigation for el fili and noli, or just make another condition which prompts the user for another input whether it's from noli or el fili, but it wouldn't make any sense if the user is in case that is viewing a noli section and that thing shows up, it should had be noli only.

- my idea on jump page is that the number the user input, the chapter is devided into several textfile with their corresponding number [noli_k_21.txt] (noli = story, k = chapter, 21 = chapter number)
- the user input will rewrite the read chapter from fstream, if the previous read is for e.g: 15, and the user input is 21, the read "noli_k_" << chapter << ".txt"; = noli_k_21.txt will be read, thus the text inside of it will show up. The text will be cleared before that with "system(cls);" 


Another solution:
- make the case 3 as TOC instead it will redirect the user to the Table of Contents in which the listed chapters are settled.
- its actually good idea to have that but I prefer to have a jump page which I could just go insert the chapter I want and it'll pop-up, the only thing is that we'll do it twice for the other story which is not actually a big deal considering you could just copy the code and change the value. I'll give it a thought next day.

idk kung may iba pa alternatives


//


case 4: // Table of Contents
    cout << "Please wait";
    Sleep(1500);
    toc();
    break;

case 5: // Home
    cout << "Please wait";
    Sleep(1500);
    home();
    break;

default:
    cout << "Please enter correct destination!";
}

ChapPage:

//copy of Chapter
*/


/*
Console Window FontColor:
    SetConsoleTextAttribute(hConsole, k);

Console Window Size:
    length: 980
    width: 720

*/

/*
Start:

/*
 Table of Contents: Main

 TOC contains the ff:
 - Rizal
 - Noli Me Tangere
 - El Filibusterismo
 - Mga Tauhan
 - Talasalitaan
 - Tungkol sa Amin

 // 

*/

/*
Rizal:
R contains the ff:
- Talambuhay ni Rizal > [ifstream] rizal.txt
- Mga akda ni Rizal
*/

/*
Time in/out of the User
*/

// ***************************************************************************************************************************************************************************************
// ***************************************************************************************************************************************************************************************

/* 

    // To Do:

- Tutorial Stage
- We need more context, wording, and also proofing at the end.
- 


*/

// ***************************************************************************************************************************************************************************************
// ***************************************************************************************************************************************************************************************

// LOGS:

/* 102922 9:59pm
- Created the Program.
*/

/* 103022 11:01pm
- Created the Start logo.
- Noted some useful stuffs.
*/

/* 110122 8:47pm
- Experimenting with <fstream>.
- Made some changes in AboutUs.
*/

/* 110322 11:50pm
- Created so many voids T_T
- Temporarily Removed "Account" plan.
- Started making a code for Navigation menu.
- Noted some important stuffs
*/

/* 110422 4:05pm
- Nearly done with experimenting with fstream, now waiting for more contents..
- Added references; El Filibusterismo {Characters, Chapters, Summary}
- Base commands are almost done.
*/

/* 110422 6:33pm
- Finished experimenting with fstream, the program can now read files by inputting chapter number.
    - Issue: ASCII UTF-8
- Removed Account Plan.
*/



