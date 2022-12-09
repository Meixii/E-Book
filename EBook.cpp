
/*
*
*
                    Lakbay ni Pepe   ||    Group 3 "Mga Bata ni Sir RR"   ||    BSCS1A @2022
*
*
*/

#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
#include <Windows.h>
#include <dos.h>
#include <wchar.h>
#include <locale.h>
#include <iomanip>
#include <conio.h>
#include <stdio.h>
#include <ctime>

using namespace std;

//// Function Declaration:
    // Main Menu
void Logo();
void Face();
void toc();
void Home();

    // Rizal
void Rizal();
void Rizal2();

    // Navigation
void nav_Rizal2();
void nav_noli();
void nav_noli2();
void nav_fili();
void nav_fili2();
void nav_Fil_K();
void nav_Nol_K();
void nav_end();

    // Noli Me Tangere
void noli();
void noli2();


    // chapter
void chap_Nol_K();
void chap_Fil_K();

    // compiled
void Nol_C();
void Fil_C();

    // El Filibusterismo
void fili();
void fili2();


    // print
void print_Nol_C();
void print2_Nol_C();
void print_Fil_C();
void print_Fil_K();
void print_Nol_K();
void print_Nol_C();
void print2_Nol_C();
void print_Fil_C();
void print2_Fil_C();

void nav_end();
void AboutUs();
void quit();

    // error
void error();

    // bookmark

int bm;

void bookmark();
void bookmark_option_toc();
void bookmark_option_nol();
void bookmark_option_fil();
void bookmark_add();
void bookmark_remove();


/*

    <==============================================================================>
    <==============================================================================>

*/

int k_num, c_num;

// Text Color
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);


/*

    <==============================================================================>
    <==============================================================================>

*/


int main()
{
    // Start Menu
    system("mode 120, 95");
    system("TITLE Lakbay ni Pepe - Group 3");
    Logo();

    cout << "                                             ";
    system("pause");
    system("cls");

    Home();
    return 0;
}

// Logo
void Logo() {

    system("TITLE Lakbay ni Pepe - Group 3");

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

// Home
void Home() {

    system("TITLE Lakbay ni Pepe - Home");



    Logo();

    SetConsoleTextAttribute(hConsole, 11);
    cout << "             Ang \"Lakbay ni Pepe\" (LnP) ay isang elektronik na libro o \"E\-Book\" kung tawagin; Gawa ng grupo" << endl;
    cout << "           ika\-tatlo na pinangalanang \"Mga Bata ni Sir RR\". Ang LnP ay naglalaman ng mga kaalaman patungkol" << endl;
    cout << "           sa bidang si \"Pepe\" at ang mga likhang nobela na nakasalin sa wikang Tagalog. Ang kilalang nobela" << endl;
    cout << "           na ito ay pinamagatang \"Noli Me Tangere\" at \"El Filibusterismo\". Ang programang ito ay naglalaman" << endl;
    cout << "           ng buod sa bawat kabanata, mga pagkikilanlan sa mga tauhan, at mga talasalitaan nang mas maunawaan " << endl;
    cout << "           ng mga mangbabasa ang mga salitang matatalinghaga sa bawat nobelang nabanggit." << endl << endl;
    
    cout << endl << "           " ;
    SetConsoleTextAttribute(hConsole, 8);
    for (int i = 1; i <= 97; i++) {
        cout << "-";
    }
    
    cout << endl;
    
    SetConsoleTextAttribute(hConsole, 8);
    cout << "             The \"Lakbay ni Pepe\" app was created for offline browsing of Dr. Jose P. Rizal's books such as" << endl;
    cout << "           \"Noli Me Tangere\" and \"El Filibusterismo\". This program was created for educational purposes only" << endl;
    cout << "           and makes no claims for any public use. Check \"Kilalanin ang mga Gumawa\" for the references used." << endl;
    cout << "           ";

    SetConsoleTextAttribute(hConsole, 8);
    for (int i = 1; i <= 97; i++) {
        cout << "-";
    }

    cout << endl << endl << "                                             ";
    SetConsoleTextAttribute(hConsole, 7);
    system("pause");
    system("cls");
    return toc();
}

// Table of Contents
void toc() {

    system("TITLE Lakbay ni Pepe - Mapa");

    int table;
    cout << "" << endl << endl << endl << endl << endl;
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
    cout << "                                       ------------------";
    SetConsoleTextAttribute(hConsole, 7);
    cout << " Rizal";
    SetConsoleTextAttribute(hConsole, 11);
    cout <<" ------------------" << endl;
    cout << "                                        [ ";
    SetConsoleTextAttribute(hConsole, 7);
    cout << "1";
    SetConsoleTextAttribute(hConsole, 11);
    cout << " ] Ang Bida" << endl << endl;

    SetConsoleTextAttribute(hConsole, 11);
    cout << "                                       -------------";
    SetConsoleTextAttribute(hConsole, 7);
    cout << " Noli Me Tangere";
    SetConsoleTextAttribute(hConsole, 11);
    cout << " -------------" << endl;

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

    SetConsoleTextAttribute(hConsole, 11);
    cout << "                                       ------------";
    SetConsoleTextAttribute(hConsole, 7);
    cout << " El Filibusterismo";
    SetConsoleTextAttribute(hConsole, 11);
    cout << " ------------" << endl;

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

    SetConsoleTextAttribute(hConsole, 11);
    cout << "                                       -----------";
    SetConsoleTextAttribute(hConsole, 7);
    cout << " Tungkol sa Programa";
    SetConsoleTextAttribute(hConsole, 11);
    cout << " -----------" << endl;

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
    cout << "                                       -------------------------------------------" << endl;
    SetConsoleTextAttribute(hConsole, 8);
    cout << "                                              Tip: Maglagay lamang ng numero" << endl;
    SetConsoleTextAttribute(hConsole, 11);
    cout << "                                       -------------------------------------------" << endl << endl;
    SetConsoleTextAttribute(hConsole, 7);
    cout << "                                       Pumili ng inyong destinasyon: ";
    SetConsoleTextAttribute(hConsole, 11);
    cin >> table;
    /*
    1. Ang Bida

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
        Nol_C();
        break;

    case 4: // Mga Kabanata ng Noli Me Tangere
        system("cls");
        chap_Nol_K();
        break;

    case 5: // Buod ng El Filibusterismo
        system("cls");
        fili();
        break;

    case 6: // Pagkakakilanlan sa mga Tauhan
        system("cls");
        Fil_C();
        break;

    case 7: // Mga Kabanata ng El Filibusterismo
        system("cls");
        chap_Fil_K();
        break;

    case 8: // Kilalanin ang mga gumawa
        system("cls");
        AboutUs();
        break;

    case 9: // Itigil ang paglalakbay
        system("cls");
        quit();
        break;

    default:

        if (cin.fail())
        {
            cin.clear(); cin.ignore(512, '\n');
        }
        error();
        return toc();
        break;
    }
}


// Rizal
void Face() {
    SetConsoleTextAttribute(hConsole, 7);
    cout << "                                               ,,,*,/," << endl;
    cout << "                                              ,((*,,**/(#%%&%#(###%%%#(#%*" << endl;
    cout << "                                            //(((##**/(//***(#(%%%%%%%%%%&#%&*" << endl;
    cout << "                                          //*(%&&@&%,/**////((#((/(#/(%@@&&&&&&#" << endl;
    cout << "                                        *(%%%&&&&&#(#/#*/#(#%(/(////(#&/*,,,*/#%#(*," << endl;
    cout << "                                       ,#&&&&&@@&&&%&&&%&%&&%%#(#&@&%*,,,,,,,,,,,,,(%#" << endl;
    cout << "                                     ,(*%&@&@&@@@@&&%&@@@@@@@@@&&&#*,,,,,,.,,,,,,,,,/##" << endl;
    cout << "                                    ,*%&&&&&&&@&&&&#/****,,,,,,,,,,,,,,,.,.,,,,,****/#%%" << endl;
    cout << "                                    /(&&&&&&&@@@@&%#***,,,,,,,,.,.............,,,,**(&&#(" << endl;
    cout << "                                    /&&@&@@@@@@@@&&/**,,,,,...................,,,,,,/&&#*" << endl;
    cout << "                                     (&@@@@&@@@&%**,,,,,,,,,,*/#%%%#*,..,,,,*/(#(//((&&" << endl;
    cout << "                                      #@@@@&&@@&*,,,,,,,**,,*(#%#/*#%#/,,*/%&&#**,,//#," << endl;
    cout << "                                     *#,.*(&&&&(,,,,,,,,/&((,#@&,(&**,..../%#%&@@&%&&/" << endl;
    cout << "                                    *&,/&/*,*##/,,,,,.......,,*,,,,.......,/**///((#((&" << endl;
    cout << "                                    **,*(@#,,*/***,,,......................***,******/#" << endl;
    cout << "                                    *,.,(./,,,////***,,,,,,,..,...,,........(,,,,,,*/(," << endl;
    cout << "                                     ***,...,**/(/**/****,,,,,,.,,*.......,,/,,,,,,/#/" << endl;
    cout << "                                        ,*,.,.*///********,,,,....../##&&&&&&/,,**(%," << endl;
    cout << "                                           %&%*********,,,,,,,.....,,..,,,((*,,*(#/" << endl;
    cout << "                                            &#(/*****,,,,,,,,,,(#%&%%%%%&%%%((#(##" << endl;
    cout << "                                            ***#(*/****,*,,,,,,,,,,,.,....,**(#(#," << endl;
    cout << "                                            ,./*#&%#(/*****,****,***/#%&&%##((#%/" << endl;
    cout << "                                       ,%@&%......,&&%%(//*,,,,,,,...,,,**//(#%," << endl;
    cout << "                                     &&&&@&&%.........,/#&&%%(/*,,,,,,***/(##*" << endl;
    cout << "                                  *&&&&&@&&&&&#..........,***/%&&&&&&&&&&&&&&&&#" << endl;
    cout << "                     *&&&&#**(&&&&&&&&&@&&&&&&&&#..........,,****#(/*///#&&&&&&&&&#" << endl;
    cout << "                    &&%@&&&&@@@@&&&&&&&&&&&&&&&&&&%.........,,,*/(/**//(&&&&&&&&&&&&&%" << endl;
    cout << "                  %&&&&&&&&&&@&&&&&&&&&&&&%%%&&&&&&&%&&#.....,,**/////%&&&&&&&&&&&&&&&&&&%," << endl;
    cout << "               /&&&&&&&&&&&&&&&&&&&&&&&&&#%%%%%&&&&&&%%%&&&&@&&&&&&&&&&&&&&&&&&&&&%%%%%%&%&&&&&*" << endl << endl;
}

void Rizal() {
    system("TITLE Lakbay ni Pepe - Ang Bayani");


    SetConsoleTextAttribute(hConsole, 14);
    cout << "       ____________________________________________________________________________________________________________" << endl;
    cout << "      /_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/" << endl << endl;

    Face();

    SetConsoleTextAttribute(hConsole, 11);
    cout << "              Si";
    SetConsoleTextAttribute(hConsole, 7);
    cout << " Dr. Jose Protacio Rizal Mercado y Alonzo Realonda";
    SetConsoleTextAttribute(hConsole, 11);
    cout << " (pinanganak noong ";
    SetConsoleTextAttribute(hConsole, 7);
    cout << "19 Hunyo 1861";
    SetConsoleTextAttribute(hConsole, 11);
    cout << " at namatay" << endl;
    cout << "         noong ";
    SetConsoleTextAttribute(hConsole, 7);
    cout << "30 Disyembre 1896";
    SetConsoleTextAttribute(hConsole, 11);
    cout << ") ay isang Pilipinong bayani at isa sa pinakatanyag na tagapagtaguyod ng " << endl;
    cout << "         pagbabago sa Pilipinas noong panahon ng pananakop ng mga Kastila. Siya ang kinikilala bilang  " << endl;
    cout << "         pinakamagaling na bayani at tinala bilang isa sa mga";
    SetConsoleTextAttribute(hConsole, 7);
    cout << " pambansang bayani ng Pilipinas";
    SetConsoleTextAttribute(hConsole, 11);
    cout << " ng Lupon ng mga" << endl;
    cout << "         Pambansang Bayani." << endl << endl;

    cout << "         Pinanganak si Rizal sa isang mayamang angkan sa";
    SetConsoleTextAttribute(hConsole, 7);
    cout << " Calamba, Laguna";
    SetConsoleTextAttribute(hConsole, 11);
    cout << " at";
    SetConsoleTextAttribute(hConsole, 7);
    cout << " pampito sa labing - isang anak";
    SetConsoleTextAttribute(hConsole, 11);
    cout << " ng" << endl;
    cout << "         mag-asawang";
    SetConsoleTextAttribute(hConsole, 7);
    cout << " Francisco Engracio Rizal Mercado y Alejandro";
    SetConsoleTextAttribute(hConsole, 11);
    cout << " at";
    SetConsoleTextAttribute(hConsole, 7);
    cout << " Teodora Morales Alonzo Realonda y Quintos." << endl;
    SetConsoleTextAttribute(hConsole, 11);
    cout << "         Nag-aral siya sa Ateneo Municipal de Manila, at nakakuha ng diploma sa Batsilyer ng Sining at nag-aral" << endl;
    cout << "         ng medisina sa Pamantasan ng Santo Tomas sa Maynila. Ipinagpatuloy niya ang kanyang pag-aaral sa" << endl;
    cout << "         Universidad Central de Madrid sa Madrid, Espanya, at nakakuha ng Lisensiya sa Medisina, na nagbigay " << endl;
    cout << "         sa kanyan ng karapatan  sanayin ang medisina. Nag-aral din siya sa Pamantasan ng Paris at Pamantasan " << endl;
    cout << "         ng Heidelberg." << endl;
    SetConsoleTextAttribute(hConsole, 14);
    cout << "       ____________________________________________________________________________________________________________" << endl;
    cout << "      /_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/" << endl << endl;
    SetConsoleTextAttribute(hConsole, 7);
    cout << "                                               ";
    system("pause");
    system("cls");
    return Rizal2();
}

void Rizal2() {
    system("TITLE Lakbay ni Pepe - Ang Bayani");
    system("cls");

    SetConsoleTextAttribute(hConsole, 14);
    cout << "                                        __________________________________________" << endl;
    cout << "                                       /_____/_____/_____/_____/_____/_____/_____/" << endl << endl;
    SetConsoleTextAttribute(hConsole, 11);
    cout << "                                                          Rizal" << endl;
    SetConsoleTextAttribute(hConsole, 14);
    cout << "                                        __________________________________________" << endl;
    cout << "                                       /_____/_____/_____/_____/_____/_____/_____/" << endl << endl;

    SetConsoleTextAttribute(hConsole, 7);
    cout << "                                                       Nabigasyon:" << endl;

    SetConsoleTextAttribute(hConsole, 8);
    for (int i = 1; i <= 120; i++) {
        cout << "-";
    }
    cout << endl;

    SetConsoleTextAttribute(hConsole, 11);
    cout << "                               Bumalik :  ";
    SetConsoleTextAttribute(hConsole, 14);
    cout << "1";

    SetConsoleTextAttribute(hConsole, 11);
    cout << "       Noli Me Tangere : ";
    SetConsoleTextAttribute(hConsole, 14);
    cout << "2";

    SetConsoleTextAttribute(hConsole, 11);
    cout << "       El Filibusterismo : ";
    SetConsoleTextAttribute(hConsole, 14);
    cout << "3" << endl;

    SetConsoleTextAttribute(hConsole, 11);
    cout << "                                       Mapa ni Pepe : ";
    SetConsoleTextAttribute(hConsole, 14);
    cout << "4";

    SetConsoleTextAttribute(hConsole, 11);
    cout << "       Ipagliban ang Paglalakbay: ";
    SetConsoleTextAttribute(hConsole, 14);
    cout << "5" << endl;

    SetConsoleTextAttribute(hConsole, 8);
    for (int i = 1; i <= 120; i++) {
        cout << "-";
    }
    cout << endl << endl;

    {
        SetConsoleTextAttribute(hConsole, 14);
        cout << "       ____________________________________________________________________________________________________________" << endl;
        cout << "      /_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/" << endl << endl;

        SetConsoleTextAttribute(hConsole, 11);

        cout << "              Isang polimata si Rizal; maliban sa medisina, mahusay siya sa pagpinta, pagguhit, paglilok at " << endl;
        cout << "         pag-ukit. Isa siyang makata, manunulat, at nobelista na ang pinakatanyag sa kanyang mga gawa ay ang" << endl;
        cout << "         nobela ng ";
        SetConsoleTextAttribute(hConsole, 7);
        cout << "Noli Me Tangere";
        SetConsoleTextAttribute(hConsole, 11);
        cout << ", at ang kasunod nitong ";
        SetConsoleTextAttribute(hConsole, 7);
        cout << "El filibusterismo";
        SetConsoleTextAttribute(hConsole, 11);
        cout << ". Isa ring poliglota si Rizal, na " << endl;
        cout << "         nakakaunawa ng ";
        SetConsoleTextAttribute(hConsole, 7);
        cout << "dalawampu\'t dalawang mga wika." << endl << endl;

        SetConsoleTextAttribute(hConsole, 11);
        cout << "              Itinatag ni Jose Rizal ang ";
        SetConsoleTextAttribute(hConsole, 7);
        cout << "La Liga Filipina";
        SetConsoleTextAttribute(hConsole, 11);
        cout << ", isang samahan na naging daan sa pagkabuo ng ";
        SetConsoleTextAttribute(hConsole, 7);
        cout << "Katipunan" << endl;
        SetConsoleTextAttribute(hConsole, 11);
        cout << "         na pinamunuan ni ";
        SetConsoleTextAttribute(hConsole, 7);
        cout << "Andres Bonifacio";
        SetConsoleTextAttribute(hConsole, 11);
        cout << ", isang lihim na samahan na nagpasimula ng Himagsikang Pilipino laban" << endl;
        cout << "         sa Espanya na naging saligan ng Unang Republika ng Pilipinas sa ilalim ni ";
        SetConsoleTextAttribute(hConsole, 7);
        cout << "Emilio Aguinaldo";
        SetConsoleTextAttribute(hConsole, 11);
        cout << ". Siya ay" << endl;
        cout << "         tagapagtaguyod ng pagkakaroon ng Pilipinas ng sarili nitong pamahalaan sa mayapang pamamaraan kaysa sa" << endl;
        cout << "         marahas na himagsikan, at susuportahan lamang ang karahasan bilang huling dulugan. Naniniwala si Rizal" << endl;
        cout << "         na ang tanging katwiran sa pagpapalaya sa Pilipinas at pagkakaroon nito ng sariling pamahalaan ay ang " << endl;
        cout << "         pagbabalik ng karangalan ng mga mamamayan, at kanyang winika: ";
        SetConsoleTextAttribute(hConsole, 7);
        cout << "Bakit kalayaan, kung ang mga alipin ngayon" << endl;
        cout << "         ay magiging maniniil ng hinaharap?";
        SetConsoleTextAttribute(hConsole, 11);
        cout << "; Ang pangkahalatang napagsang-ayunan ng mga dalubhasa sa buhay ni " << endl;
        cout << "         Rizal ay ang pagbitay dito ang naghudyat upang magsimula ang Himagsikang Pilipino." << endl << endl;

        cout << "              Si Jose Rizal ay ";
        SetConsoleTextAttribute(hConsole, 7);
        cout << "nahatulan noong Disyembre 26, 1896";
        SetConsoleTextAttribute(hConsole, 11);
        cout << " ng kamatay sa dahilang napagbintangan siya na" << endl;
        cout << "         nagpasimula ng rebelyon laban sa mga Kastila. Bago dumating ang araw ng kanyang kamatayan ay naisulat" << endl;
        cout << "         niya ang ";
        SetConsoleTextAttribute(hConsole, 7);
        cout << "\"Mi Ultimo Adios\"";
        SetConsoleTextAttribute(hConsole, 11);
        cout << " o mas kilala bilang \"Ang Huling Paalam\" bilang gabay sa susunod pang mga" << endl;
        cout << "         henerasyon. Noong ";
        SetConsoleTextAttribute(hConsole, 7);
        cout << "Disyembre 30, 1896";
        SetConsoleTextAttribute(hConsole, 11);
        cout << " ay binaril si Dr. Jose Protacio Rizal Mercado y Alonzo Realonda sa" << endl;
        SetConsoleTextAttribute(hConsole, 7);
        cout << "         Bagumbayan";
        SetConsoleTextAttribute(hConsole, 11);
        cout << " na mas kilala na ngayon bilang Luneta." << endl << endl;
    }

    SetConsoleTextAttribute(hConsole, 14);
    cout << "       ____________________________________________________________________________________________________________" << endl;
    cout << "      /_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/";
    SetConsoleTextAttribute(hConsole, 7);

    nav_Rizal2();

}

void nav_Rizal2() {
    int nav;

    nav = _getch();
    switch (nav) {

    case 49: // ,
        system("cls");
        Rizal();
        break;

    case 50: // ,
        system("cls");
        noli();
        break;

    case 51:
        system("cls");
        fili();
        break;

    case 52:
        system("cls");
        toc();
        break;

    case 53:
        system("cls");
        quit();
        break;

    default:
        error();
        return Rizal2();
        break;
    }

}


/*

    <==============================================================================>
    <==============================================================================>

*/


// Noli Me Tangere - Buod
void noli() {
    system("TITLE Lakbay ni Pepe - Noli Me Tangere");

    SetConsoleTextAttribute(hConsole, 14);
    cout << "                                        __________________________________________" << endl;
    cout << "                                       /_____/_____/_____/_____/_____/_____/_____/" << endl << endl;
    SetConsoleTextAttribute(hConsole, 11);
    cout << "                                                     Noli Me Tangere"<< endl;
    SetConsoleTextAttribute(hConsole, 14);
    cout << "                                        __________________________________________" << endl;
    cout << "                                       /_____/_____/_____/_____/_____/_____/_____/" << endl << endl;

    SetConsoleTextAttribute(hConsole, 7);
    cout << "                                                       Nabigasyon:" << endl;

    SetConsoleTextAttribute(hConsole, 8);
    for (int i = 1; i <= 120; i++) {
        cout << "-";
    }
    cout << endl;



    SetConsoleTextAttribute(hConsole, 11);
    cout << "       Bumalik  (Rizal):  ";
    SetConsoleTextAttribute(hConsole, 14);
    cout << "1";

    SetConsoleTextAttribute(hConsole, 11);
    cout << "       Susunod (Buod): ";
    SetConsoleTextAttribute(hConsole, 14);
    cout << "2";

    SetConsoleTextAttribute(hConsole, 11);
    cout << "       Mapa ni Pepe : ";
    SetConsoleTextAttribute(hConsole, 14);
    cout << "3";

    SetConsoleTextAttribute(hConsole, 11);
    cout << "       Ipagliban ang Paglalakbay: ";
    SetConsoleTextAttribute(hConsole, 14);
    cout << "4" << endl;

    SetConsoleTextAttribute(hConsole, 8);
    for (int i = 1; i <= 120; i++) {
        cout << "-";
    }
    cout << endl << endl;

    SetConsoleTextAttribute(hConsole, 11);

    for (int i = 1; i <= 120; i++) {
        cout << "=";
    }
    cout << "\n" << endl;

    SetConsoleTextAttribute(hConsole, 7);
    ifstream nol_b("Resources/Noli/Buod/nol_b.txt");
    string str;
    while (getline(nol_b, str)) {
        cout << str << "\n";
    }

    cout << endl;

    SetConsoleTextAttribute(hConsole, 11);
    for (int i = 1; i <= 120; i++) {
        cout << "=";
    }
    nav_noli();
}

void noli2()
{
system("TITLE Lakbay ni Pepe - Noli Me Tangere");

    SetConsoleTextAttribute(hConsole, 14);
    cout << "                                        __________________________________________" << endl;
    cout << "                                       /_____/_____/_____/_____/_____/_____/_____/" << endl << endl;
    SetConsoleTextAttribute(hConsole, 11);
    cout << "                                                     Noli Me Tangere" << endl;
    SetConsoleTextAttribute(hConsole, 14);
    cout << "                                        __________________________________________" << endl;
    cout << "                                       /_____/_____/_____/_____/_____/_____/_____/" << endl << endl;

    SetConsoleTextAttribute(hConsole, 7);
    cout << "                                                       Nabigasyon:" << endl;

    SetConsoleTextAttribute(hConsole, 8);
    for (int i = 1; i <= 120; i++) {
        cout << "-";
    }
    cout << endl;

    SetConsoleTextAttribute(hConsole, 11);
    cout << "                               Bumalik  (Buod):  ";
    SetConsoleTextAttribute(hConsole, 14);
    cout << "1";

    SetConsoleTextAttribute(hConsole, 11);
    cout << "       Mga Tauhan : ";
    SetConsoleTextAttribute(hConsole, 14);
    cout << "2";

    SetConsoleTextAttribute(hConsole, 11);
    cout << "       Mga Kabanata : ";
    SetConsoleTextAttribute(hConsole, 14);
    cout << "3" << endl;

    SetConsoleTextAttribute(hConsole, 11);
    cout << "                                       Mapa ni Pepe : ";
    SetConsoleTextAttribute(hConsole, 14);
    cout << "4";

    SetConsoleTextAttribute(hConsole, 11);
    cout << "       Ipagliban ang Paglalakbay: ";
    SetConsoleTextAttribute(hConsole, 14);
    cout << "5" << endl;

    SetConsoleTextAttribute(hConsole, 8);
    for (int i = 1; i <= 120; i++) {
        cout << "-";
    }
    cout << endl << endl;

    SetConsoleTextAttribute(hConsole, 11);

    for (int i = 1; i <= 120; i++) {
    cout << "=";
    }
    cout << "\n" << endl;

    SetConsoleTextAttribute(hConsole, 7);
    ifstream nol_b("Resources/Noli/Buod/nol_b1.txt");
    string str;
    while (getline(nol_b, str)) {
    cout << str << "\n";
    }

    cout << endl;

    SetConsoleTextAttribute(hConsole, 11);
    for (int i = 1; i <= 120; i++) {
    cout << "=";
    }
    nav_noli2();
}

void nav_noli() {
    int nav;

    nav = _getch();
    switch (nav) {

    case 49: // ,
        system("cls");
        Rizal();
        break;

    case 50: // ,
        system("cls");
        noli2();
        break;

    case 51:
        system("cls");
        toc();
        break;

    case 52:
        system("cls");
        quit();
        break;

    default:
        error();
        noli();
        break;
    }

}

void nav_noli2() {
    int nav;

    nav = _getch();
    switch (nav) {

    case 49: // ,
        system("cls");
        noli();
        break;

    case 50: // ,
        system("cls");
        Nol_C();
        break;

    case 51:
        system("cls");
        chap_Nol_K();
        break;

    case 52:
        system("cls");
        toc();
        break;

    case 53:
        system("cls");
        quit();
        break;

    default:
        error();
        noli2();
        break;
    }

}


// Noli Me Tangere - Chapters
void chap_Nol_K() {
    system("TITLE Noli Me Tangere - Kabanata");
    using namespace std;

    cout << "" << endl << endl << endl << endl << endl << endl << endl;
    SetConsoleTextAttribute(hConsole, 14);
    cout << "                                        __________________________________________" << endl;
    cout << "                                       /_____/_____/_____/_____/_____/_____/_____/" << endl << endl;
    SetConsoleTextAttribute(hConsole, 11);

    cout << "                                            Mga Kabanata sa Noli Me Tangere\n" << endl;
    cout << "                                                       [ 1 - 64 ]" << endl;
    SetConsoleTextAttribute(hConsole, 14);
    cout << "                                        __________________________________________" << endl;
    cout << "                                       /_____/_____/_____/_____/_____/_____/_____/" << endl << endl;
    SetConsoleTextAttribute(hConsole, 11);

    cout << "                                       Pumili ng kabanata: ";
    cin >> k_num;
    system("cls");
    return print_Nol_K();
}

void print_Nol_K() {

    fstream nol_k;
    nol_k.open("Resources/Noli/Buod/nol_k_" + to_string(k_num) + ".txt", ios::in);

    fstream nol_t;
    nol_t.open("Resources/Noli/Talasalitaan/nol_t_" + to_string(k_num) + ".txt", ios::in);

    if (nol_k.is_open())
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


        // Navigation UI

        SetConsoleTextAttribute(hConsole, 7);
        cout << "                                                       Nabigasyon:" << endl;

        SetConsoleTextAttribute(hConsole, 8);
        for (int i = 1; i <= 120; i++) {
            cout << "-";
        }
        cout << endl;
        SetConsoleTextAttribute(hConsole, 11);
        cout << "                           Huling Kabanata: ";
        SetConsoleTextAttribute(hConsole, 14);
        cout << "1";
        SetConsoleTextAttribute(hConsole, 11);
        cout << "      Kasunod na Kabanata : ";
        SetConsoleTextAttribute(hConsole, 14);
        cout << "2";
        SetConsoleTextAttribute(hConsole, 11);
        cout << "      Mga Kabanata : ";
        SetConsoleTextAttribute(hConsole, 14);
        cout << "3" << endl;


        SetConsoleTextAttribute(hConsole, 11);
        cout << "                                    Mapa ni Pepe : ";
        SetConsoleTextAttribute(hConsole, 14);
        cout << "4";
        SetConsoleTextAttribute(hConsole, 11);
        cout << "      Ipagliban ang Paglalakbay: ";
        SetConsoleTextAttribute(hConsole, 14);
        cout << "5" << endl;

        SetConsoleTextAttribute(hConsole, 8);
        for (int i = 1; i <= 120; i++) {
            cout << "-";
        }

        cout << endl << endl;

        SetConsoleTextAttribute(hConsole, 11);

        for (int i = 1; i <= 120; i++) {
            cout << "=";
        }
        cout << "\n" << endl;
        SetConsoleTextAttribute(hConsole, 7);
        string line;
        while (getline(nol_k, line))
        {
            cout << line << endl;
        }
        nol_k.close();

        cout << endl;
    }


    if (nol_t.is_open())
    {
        SetConsoleTextAttribute(hConsole, 11);
        for (int i = 1; i <= 120; i++) {
            cout << "-";
        }
        cout << "\n" << endl;

        SetConsoleTextAttribute(hConsole, 7);
        cout << "       Talasalitaan:" << endl;
        SetConsoleTextAttribute(hConsole, 14);
        string line_t;
        while (getline(nol_t, line_t))
        {
        cout << "       " << line_t << endl;
        }
        nol_t.close();
    }

    else if (cin.fail())
    {
        cin.clear(); cin.ignore(512, '\n');
        cout << "" << endl << endl << endl << endl << endl << endl << endl;
        SetConsoleTextAttribute(hConsole, 14);
        cout << "                                        __________________________________________" << endl;
        cout << "                                       /_____/_____/_____/_____/_____/_____/_____/" << endl << endl;
        SetConsoleTextAttribute(hConsole, 11);

        cout << "                                            Mga Kabanata sa Noli Me Tangere\n" << endl;
        cout << "                                                       [ 1 - 64 ]" << endl;
        SetConsoleTextAttribute(hConsole, 14);
        cout << "                                        __________________________________________" << endl;
        cout << "                                       /_____/_____/_____/_____/_____/_____/_____/" << endl << endl;
        SetConsoleTextAttribute(hConsole, 11);

        SetConsoleTextAttribute(hConsole, 11);
        cout << "                                       -------------------------------------------" << endl << endl;
        SetConsoleTextAttribute(hConsole, 5);
        cout << "                                           ERROR: ";
        SetConsoleTextAttribute(hConsole, 8);
        cout << "Maglagay lamang ng Numero" << endl;
        SetConsoleTextAttribute(hConsole, 7);
        cout << "                                           Babalik sa huling pinanggalingan..." << endl << endl;
        SetConsoleTextAttribute(hConsole, 11);
        cout << "                                       -------------------------------------------" << endl << endl;

        Sleep(2500);
        system("cls");
        chap_Nol_K();
    }

    else // if user inputted 0 or
    {
        system("cls");

        cout << "" << endl << endl << endl << endl << endl << endl << endl;
        SetConsoleTextAttribute(hConsole, 14);
        cout << "                                        __________________________________________" << endl;
        cout << "                                       /_____/_____/_____/_____/_____/_____/_____/" << endl << endl;
        SetConsoleTextAttribute(hConsole, 11);

        cout << "                                            Mga Kabanata sa Noli Me Tangere\n" << endl;
        cout << "                                                       [ 1 - 64 ]" << endl;
        SetConsoleTextAttribute(hConsole, 14);
        cout << "                                        __________________________________________" << endl;
        cout << "                                       /_____/_____/_____/_____/_____/_____/_____/" << endl << endl;
        SetConsoleTextAttribute(hConsole, 11);

        SetConsoleTextAttribute(hConsole, 11);
        cout << "                                       -------------------------------------------" << endl << endl;
        SetConsoleTextAttribute(hConsole, 5);
        cout << "                                           ERROR: ";
        SetConsoleTextAttribute(hConsole, 8);
        cout << "Hindi mahanap ang Kabanata." << endl;
        SetConsoleTextAttribute(hConsole, 7);
        cout << "                                           Babalik sa huling pinanggalingan..." << endl << endl;
        SetConsoleTextAttribute(hConsole, 11);
        cout << "                                       -------------------------------------------" << endl << endl;

        Sleep(2500);
        system("cls");
        chap_Nol_K();
    }

    cout << endl;
    SetConsoleTextAttribute(hConsole, 11);
    for (int i = 1; i <= 120; i++) {
        cout << "=";
    }
    nav_Nol_K();
}

void nav_Nol_K() {
    int nav;

    nav = _getch();
    switch (nav) {

    case 27:
        system("cls");
        chap_Nol_K();
        break;

    case 49: // ,
        system("cls");
        system("cls");
        k_num--;
        if (k_num >= 1) {
            print_Nol_K();
        }
        else {
            chap_Nol_K();
        }
        break;

    case 50: // ,
        system("cls");
        k_num++;
        if (k_num <= 64)
        {
            print_Nol_K();
        }

        else {
            nav_end();
        }

        break;

    case 51:
        system("cls");
        chap_Nol_K();
        break;

    case 52:
        system("cls");
        toc();
        break;

    case 53:
        system("cls");
        quit();
        break;

    default:
        error();
        print_Nol_K();
        break;
    }

}


// Noli Me Tangere - Tauhan 1
void Nol_C() {
        system("TITLE Noli Me Tangere - Tauhan");

        SetConsoleTextAttribute(hConsole, 14);
        cout << "                                        __________________________________________" << endl;
        cout << "                                       /_____/_____/_____/_____/_____/_____/_____/" << endl << endl;
        SetConsoleTextAttribute(hConsole, 11);
        cout << "                                                Kilalanin ang mga Tauhan" << endl;
        cout << "                                                mula sa \"Noli Me Tangere\"" << endl;
        SetConsoleTextAttribute(hConsole, 14);
        cout << "                                        __________________________________________" << endl;
        cout << "                                       /_____/_____/_____/_____/_____/_____/_____/" << endl << endl;

        SetConsoleTextAttribute(hConsole, 7);
        cout << "                                                       Nabigasyon:" << endl;

        SetConsoleTextAttribute(hConsole, 8);
        for (int i = 1; i <= 120; i++) {
            cout << "-";
        }
        cout << endl;
        SetConsoleTextAttribute(hConsole, 11);
        cout << "                       Susunod na pahina: ";
        SetConsoleTextAttribute(hConsole, 14);
        cout << "1";
        SetConsoleTextAttribute(hConsole, 11);
        cout << "      Mapa ni Pepe : ";
        SetConsoleTextAttribute(hConsole, 14);
        cout << "2";
        SetConsoleTextAttribute(hConsole, 11);
        cout << "      Ipagliban ang Paglalakbay: ";
        SetConsoleTextAttribute(hConsole, 14);
        cout << "3" << endl;

        SetConsoleTextAttribute(hConsole, 8);
        for (int i = 1; i <= 120; i++) {
            cout << "-";
        }

        cout << endl << endl;

        SetConsoleTextAttribute(hConsole, 11);
        for (int i = 1; i <= 120; i++) {
            cout << "=";
        }

        cout << endl << endl;

        c_num = 1;

        fstream nol_c;
        nol_c.open("Resources/Noli/Tauhan/nol_c" + to_string(c_num) + ".txt", ios::in);

        if (nol_c.is_open()) {
            SetConsoleTextAttribute(hConsole, 7);
            string line;
            while (getline(nol_c, line))
            {
                cout << "   " << line << endl;
            }
            nol_c.close();

            cout << endl << endl;

            SetConsoleTextAttribute(hConsole, 11);
            for (int i = 1; i <= 120; i++) {
                cout << "=";
            }

        }

        else if (cin.fail())
        {
            error();
            Nol_C();
        }

        else
        {
            error();
            Nol_C();
        }

        int nav;

        nav = _getch();
        switch (nav) {

        case 49: // ,
            system("cls");
            c_num++;
            print_Nol_C();
            break;

        case 50:
            system("cls");
            toc();
            break;

        case 51:
            system("cls");
            quit();
            break;

        default:
            error();
            Nol_C();
            break;
        }
    }

// Noli Me Tangere - Tauhan 2 - 3
void print_Nol_C() {
    system("TITLE Noli Me Tangere - Tauhan");

    SetConsoleTextAttribute(hConsole, 14);
    cout << "                                        __________________________________________" << endl;
    cout << "                                       /_____/_____/_____/_____/_____/_____/_____/" << endl << endl;
    SetConsoleTextAttribute(hConsole, 11);
    cout << "                                                Kilalanin ang mga Tauhan" << endl;
    cout << "                                                mula sa \"Noli Me Tangere\"" << endl;
    SetConsoleTextAttribute(hConsole, 14);
    cout << "                                        __________________________________________" << endl;
    cout << "                                       /_____/_____/_____/_____/_____/_____/_____/" << endl << endl;

    SetConsoleTextAttribute(hConsole, 7);
    cout << "                                                       Nabigasyon:" << endl;

    SetConsoleTextAttribute(hConsole, 8);
    for (int i = 1; i <= 120; i++) {
        cout << "-";
    }
    cout << endl;
    SetConsoleTextAttribute(hConsole, 11);
    cout << "            Huling pahina: ";
    SetConsoleTextAttribute(hConsole, 14);
    cout << "1";
    SetConsoleTextAttribute(hConsole, 11);
    cout << "      Susunod na pahina: ";
    SetConsoleTextAttribute(hConsole, 14);
    cout << "2";
    SetConsoleTextAttribute(hConsole, 11);
    cout << "      Mapa ni Pepe : ";
    SetConsoleTextAttribute(hConsole, 14);
    cout << "3";
    SetConsoleTextAttribute(hConsole, 11);
    cout << "      Ipagliban ang Paglalakbay: ";
    SetConsoleTextAttribute(hConsole, 14);
    cout << "4" << endl;

    SetConsoleTextAttribute(hConsole, 8);
    for (int i = 1; i <= 120; i++) {
        cout << "-";
    }

    cout << endl << endl;

    SetConsoleTextAttribute(hConsole, 11);
    for (int i = 1; i <= 120; i++) {
        cout << "=";
    }



    cout << endl << endl;
    fstream nol_c;
    nol_c.open("Resources/Noli/Tauhan/nol_c" + to_string(c_num) + ".txt", ios::in);


    if (nol_c.is_open()) {
        SetConsoleTextAttribute(hConsole, 7);
        string line;
        while (getline(nol_c, line))
        {
            cout << "   " << line << endl;
        }
        nol_c.close();

        cout << endl << endl;

        SetConsoleTextAttribute(hConsole, 11);
        for (int i = 1; i <= 120; i++) {
            cout << "=";
        }
    }

    else if (cin.fail())
    {
        error();
        print_Nol_C();
    }

    else
    {
        error();
        print_Nol_C();
    }

    int nav;

    nav = _getch();


    switch (nav) {


    case 49: // ,
        system("cls");
        c_num--;
        if (c_num == 1) {
            return Nol_C();
        }
        else {
            print_Nol_C();
        }
        break;

    case 50: // ,
        system("cls");
        c_num++;
        if (c_num <= 4)
        print_Nol_C();
        else {
            return print2_Nol_C();
        }
        break;

    case 51:
        system("cls");
        toc();
        break;

    case 52:
        system("cls");
        quit();
        break;

    default  :
        error();
        print_Nol_C();
        break;
    }
}

// Noli Me Tangere - Tauhan 5
void print2_Nol_C() {
    system("TITLE Noli Me Tangere - Tauhan");

    SetConsoleTextAttribute(hConsole, 14);
    cout << "                                        __________________________________________" << endl;
    cout << "                                       /_____/_____/_____/_____/_____/_____/_____/" << endl << endl;
    SetConsoleTextAttribute(hConsole, 11);
    cout << "                                                Kilalanin ang mga Tauhan" << endl;
    cout << "                                                mula sa \"Noli Me Tangere\"" << endl;
    SetConsoleTextAttribute(hConsole, 14);
    cout << "                                        __________________________________________" << endl;
    cout << "                                       /_____/_____/_____/_____/_____/_____/_____/" << endl << endl;

    SetConsoleTextAttribute(hConsole, 7);
    cout << "                                                       Nabigasyon:" << endl;

    SetConsoleTextAttribute(hConsole, 8);
    for (int i = 1; i <= 120; i++) {
        cout << "-";
    }
    cout << endl;
    SetConsoleTextAttribute(hConsole, 11);
    cout << "                       Huling pahina: ";
    SetConsoleTextAttribute(hConsole, 14);
    cout << "1";
    SetConsoleTextAttribute(hConsole, 11);
    cout << "      Mapa ni Pepe : ";
    SetConsoleTextAttribute(hConsole, 14);
    cout << "2";
    SetConsoleTextAttribute(hConsole, 11);
    cout << "      Ipagliban ang Paglalakbay: ";
    SetConsoleTextAttribute(hConsole, 14);
    cout << "3" << endl;

    SetConsoleTextAttribute(hConsole, 8);
    for (int i = 1; i <= 120; i++) {
        cout << "-";
    }

    cout << endl << endl;

    SetConsoleTextAttribute(hConsole, 11);
    for (int i = 1; i <= 120; i++) {
        cout << "=";
    }


    cout << endl << endl;

    c_num = 5;
    fstream nol_c;
    nol_c.open("Resources/Noli/Tauhan/nol_c" + to_string(c_num) + ".txt", ios::in);


    if (nol_c.is_open()) {
        SetConsoleTextAttribute(hConsole, 7);
        string line;
        while (getline(nol_c, line))
        {
            cout << "   " << line << endl;
        }
        nol_c.close();

        cout << endl << endl;

        SetConsoleTextAttribute(hConsole, 11);
        for (int i = 1; i <= 120; i++) {
            cout << "=";
        }
    }

    else if (cin.fail())
    {
        error();
        print2_Nol_C();
    }

    else
    {
        error();
        print2_Nol_C();
    }

    int nav;

    nav = _getch();

    switch (nav) {


    case 49: // ,
        system("cls");
        c_num--;
        if (c_num == 4) {
            return print_Nol_C();
        }
        else {
            print2_Nol_C();
        }
        break;

    case 50:
        system("cls");
        toc();
        break;

    case 51:
        system("cls");
        quit();
        break;

    default:
        error();
        print2_Nol_C();
        break;
    }
}


/*

    <==============================================================================>
    <==============================================================================>

*/


// El Filibusterismo - Buod
void fili() {
    system("TITLE El Filibusterismo - Buod");
    SetConsoleTextAttribute(hConsole, 14);
    cout << "                                        __________________________________________" << endl;
    cout << "                                       /_____/_____/_____/_____/_____/_____/_____/" << endl << endl;
    SetConsoleTextAttribute(hConsole, 11);
    cout << "                                                    El Filibusterismo" << endl;
    SetConsoleTextAttribute(hConsole, 14);
    cout << "                                        __________________________________________" << endl;
    cout << "                                       /_____/_____/_____/_____/_____/_____/_____/" << endl << endl;


    SetConsoleTextAttribute(hConsole, 7);
    cout << "                                                       Nabigasyon:" << endl;

    SetConsoleTextAttribute(hConsole, 8);
    for (int i = 1; i <= 120; i++) {
        cout << "-";
    }
    cout << endl;

    SetConsoleTextAttribute(hConsole, 11);
    cout << "       Bumalik  (Rizal):  ";
    SetConsoleTextAttribute(hConsole, 14);
    cout << "1";

    SetConsoleTextAttribute(hConsole, 11);
    cout << "       Susunod (Buod): ";
    SetConsoleTextAttribute(hConsole, 14);
    cout << "2";

    SetConsoleTextAttribute(hConsole, 11);
    cout << "       Mapa ni Pepe : ";
    SetConsoleTextAttribute(hConsole, 14);
    cout << "3";

    SetConsoleTextAttribute(hConsole, 11);
    cout << "       Ipagliban ang Paglalakbay: ";
    SetConsoleTextAttribute(hConsole, 14);
    cout << "4" << endl;

    SetConsoleTextAttribute(hConsole, 8);
    for (int i = 1; i <= 120; i++) {
        cout << "-";
    }
    cout << endl << endl;


    SetConsoleTextAttribute(hConsole, 11);


    for (int i = 1; i <= 120; i++) {
        cout << "=";
    }
    cout << "\n" << endl;

    SetConsoleTextAttribute(hConsole, 7);
    ifstream nol_b("Resources/Fili/Buod/fil_b.txt");
    string str;
    while (getline(nol_b, str)) {
        cout << str << "\n";
    }

    cout << endl;

    SetConsoleTextAttribute(hConsole, 11);
    for (int i = 1; i <= 120; i++) {
        cout << "=";
    }

    nav_fili();
}

void fili2()
{
    system("TITLE El Filibusterismo - Buod");
    SetConsoleTextAttribute(hConsole, 14);
    cout << "                                        __________________________________________" << endl;
    cout << "                                       /_____/_____/_____/_____/_____/_____/_____/" << endl << endl;
    SetConsoleTextAttribute(hConsole, 11);
    cout << "                                                    El Filibusterismo" << endl;
    SetConsoleTextAttribute(hConsole, 14);
    cout << "                                        __________________________________________" << endl;
    cout << "                                       /_____/_____/_____/_____/_____/_____/_____/" << endl << endl;


    SetConsoleTextAttribute(hConsole, 7);
    cout << "                                                       Nabigasyon:" << endl;

    SetConsoleTextAttribute(hConsole, 8);
    for (int i = 1; i <= 120; i++) {
        cout << "-";
    }
    cout << endl;

    SetConsoleTextAttribute(hConsole, 11);
    cout << "                               Bumalik  (Buod):  ";
    SetConsoleTextAttribute(hConsole, 14);
    cout << "1";

    SetConsoleTextAttribute(hConsole, 11);
    cout << "       Mga Tauhan: ";
    SetConsoleTextAttribute(hConsole, 14);
    cout << "2";

    SetConsoleTextAttribute(hConsole, 11);
    cout << "       Mga Kabanata: ";
    SetConsoleTextAttribute(hConsole, 14);
    cout << "3" << endl;

    SetConsoleTextAttribute(hConsole, 11);
    cout << "                                       Mapa ni Pepe : ";
    SetConsoleTextAttribute(hConsole, 14);
    cout << "4";

    SetConsoleTextAttribute(hConsole, 11);
    cout << "       Ipagliban ang Paglalakbay: ";
    SetConsoleTextAttribute(hConsole, 14);
    cout << "5" << endl;

    SetConsoleTextAttribute(hConsole, 8);
    for (int i = 1; i <= 120; i++) {
        cout << "-";
    }
    cout << endl << endl;



    SetConsoleTextAttribute(hConsole, 11);

    for (int i = 1; i <= 120; i++) {
        cout << "=";
    }
    cout << "\n" << endl;

    SetConsoleTextAttribute(hConsole, 7);
    ifstream nol_b("Resources/Fili/Buod/fil_b1.txt");
    string str;
    while (getline(nol_b, str)) {
        cout << str << "\n";
    }

    cout << endl;

    SetConsoleTextAttribute(hConsole, 11);
    for (int i = 1; i <= 120; i++) {
        cout << "=";
    }

    nav_fili2();

}

void nav_fili() {
    int nav;

    nav = _getch();
    switch (nav) {


    case 49: // ,
        system("cls");
        Rizal();
        break;

    case 50: // ,
        system("cls");
        fili2();
        break;

    case 51:
        system("cls");
        toc();
        break;

    case 52:
        system("cls");
        quit();
        break;

    default:
        error();
        fili();
        break;
    }

} // fix error

void nav_fili2() {
    int nav;

    nav = _getch();
    switch (nav) {

    case 49: // ,
        system("cls");
        fili();
        break;

    case 50: // ,
        system("cls");
        Fil_C();
        break;

    case 51:
        system("cls");
        chap_Fil_K();
        break;

    case 52:
        system("cls");
        toc();
        break;

    case 53:
        system("cls");
        quit();
        break;

    default:
        error();
        fili2;
        break;
    }

}


// El Filibusterismo - Chapters
void chap_Fil_K() {
    system("TITLE El Filibusterismo - Kabanata");
    using namespace std;

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


    cout << "                                       Pumili ng kabanata: ";
    cin >> k_num;
    system("cls");
    print_Fil_K();
}

void print_Fil_K() {

    fstream fil_k;
    fil_k.open("Resources/Fili/Buod/fil_k_" + to_string(k_num) + ".txt", ios::in);

    fstream fil_t;
    fil_t.open("Resources/Fili/Talasalitaan/fil_t_" + to_string(k_num) + ".txt", ios::in);

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

        // Navigation

        SetConsoleTextAttribute(hConsole, 7);
        cout << "                                                       Nabigasyon:" << endl;

        SetConsoleTextAttribute(hConsole, 8);
        for (int i = 1; i <= 120; i++) {
            cout << "-";
        }

        cout << endl;
        SetConsoleTextAttribute(hConsole, 11);
        cout << "                           Huling Kabanata: ";
        SetConsoleTextAttribute(hConsole, 14);
        cout << "1";
        SetConsoleTextAttribute(hConsole, 11);
        cout << "      Kasunod na Kabanata : ";
        SetConsoleTextAttribute(hConsole, 14);
        cout << "2";
        SetConsoleTextAttribute(hConsole, 11);
        cout << "      Mga Kabanata : ";
        SetConsoleTextAttribute(hConsole, 14);
        cout << "3" << endl;


        SetConsoleTextAttribute(hConsole, 11);
        cout << "                                    Mapa ni Pepe : ";
        SetConsoleTextAttribute(hConsole, 14);
        cout << "4";
        SetConsoleTextAttribute(hConsole, 11);
        cout << "      Ipagliban ang Paglalakbay: ";
        SetConsoleTextAttribute(hConsole, 14);
        cout << "5" << endl;

        SetConsoleTextAttribute(hConsole, 8);
        for (int i = 1; i <= 120; i++) {
            cout << "-";
        }

        cout << endl;

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

        cout << endl << endl;
    }


    if (fil_t.is_open())
    {

        SetConsoleTextAttribute(hConsole, 11);
        for (int i = 1; i <= 120; i++) {
            cout << "-";
        }
        cout << "\n" << endl;

        SetConsoleTextAttribute(hConsole, 7);
        cout << "       Talasalitaan:" << endl;
        //SetConsoleTextAttribute(hConsole, 14);
        string line_t;
        while (getline(fil_t, line_t))
        {
            cout << "        " << line_t << endl;
        }
        fil_t.close();
    }

    else if (cin.fail())
    {
        cin.clear(); cin.ignore(512, '\n');
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

        SetConsoleTextAttribute(hConsole, 11);
        cout << "                                       -------------------------------------------" << endl << endl;
        SetConsoleTextAttribute(hConsole, 5);
        cout << "                                         ERROR: ";
        SetConsoleTextAttribute(hConsole, 8);
        cout << "Maglagay lamang ng Numero" << endl << endl;
        SetConsoleTextAttribute(hConsole, 11);
        cout << "                                       -------------------------------------------" << endl << endl;
        cout << "                                             ";
        SetConsoleTextAttribute(hConsole, 7);
        system("pause");
        system("cls");
        chap_Fil_K();
    }

    else // if user inputted 0 or
    {
        system("cls");

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

        SetConsoleTextAttribute(hConsole, 11);
        cout << "                                       -------------------------------------------" << endl << endl;
        SetConsoleTextAttribute(hConsole, 5);
        cout << "                                         ERROR: ";
        SetConsoleTextAttribute(hConsole, 8);
        cout << "Hindi mahanap ang Kabanata." << endl << endl;
        SetConsoleTextAttribute(hConsole, 11);
        cout << "                                       -------------------------------------------" << endl << endl;
        cout << "                                             ";
        SetConsoleTextAttribute(hConsole, 7);
        system("pause");
        system("cls");
        chap_Fil_K();
    }
    cout << "" << endl;
    SetConsoleTextAttribute(hConsole, 11);
    for (int i = 1; i <= 120; i++) {
        cout << "=";
    }
    nav_Fil_K();
}

void nav_Fil_K() {

    int nav;

        nav = _getch();
        switch (nav) {

        case 27:
            system("cls");
            chap_Fil_K();
            break;

        case 49:
            system("cls");
            k_num--;
            if (k_num >= 1) {
                print_Fil_K();
            }
            else {
                chap_Fil_K();
            }
            break;

        case 50:
            system("cls");
            k_num++;
            if (k_num <= 39)
            {
                print_Fil_K();
            }

            else {
                nav_end();
            }

            break;

        case 51:
            system("cls");
            chap_Fil_K();
            break;

        case 52:
            system("cls");
            toc();
            break;

        case 53:
            system("cls");
            quit();
            break;

        default:
            error();
            print_Fil_K();
            break;
        }
}


// El Filibusterismo - Tauhan
void Fil_C() {
    system("TITLE El Filibusterismo - Tauhan");

    SetConsoleTextAttribute(hConsole, 14);
    cout << "                                        __________________________________________" << endl;
    cout << "                                       /_____/_____/_____/_____/_____/_____/_____/" << endl << endl;
    SetConsoleTextAttribute(hConsole, 11);
    cout << "                                                Kilalanin ang mga Tauhan" << endl;
    cout << "                                               mula sa \"El Filibusterismo\"" << endl;
    SetConsoleTextAttribute(hConsole, 14);
    cout << "                                        __________________________________________" << endl;
    cout << "                                       /_____/_____/_____/_____/_____/_____/_____/" << endl << endl;

    SetConsoleTextAttribute(hConsole, 7);
    cout << "                                                       Nabigasyon:" << endl;

    SetConsoleTextAttribute(hConsole, 8);
    for (int i = 1; i <= 120; i++) {
        cout << "-";
    }
    cout << endl;
    SetConsoleTextAttribute(hConsole, 11);
    cout << "                       Susunod na pahina: ";
    SetConsoleTextAttribute(hConsole, 14);
    cout << "1";
    SetConsoleTextAttribute(hConsole, 11);
    cout << "      Mapa ni Pepe : ";
    SetConsoleTextAttribute(hConsole, 14);
    cout << "2";
    SetConsoleTextAttribute(hConsole, 11);
    cout << "      Ipagliban ang Paglalakbay: ";
    SetConsoleTextAttribute(hConsole, 14);
    cout << "3" << endl;

    SetConsoleTextAttribute(hConsole, 8);
    for (int i = 1; i <= 120; i++) {
        cout << "-";
    }

    cout << endl << endl;

    SetConsoleTextAttribute(hConsole, 11);
    for (int i = 1; i <= 120; i++) {
        cout << "=";
    }

    cout << endl << endl;

    c_num = 1;

    fstream fil_c;
    fil_c.open("Resources/Fili/Tauhan/fil_c" + to_string(c_num) + ".txt", ios::in);

    if (fil_c.is_open()) {
        SetConsoleTextAttribute(hConsole, 7);
        string line;
        while (getline(fil_c, line))
        {
            cout << "   " << line << endl;
        }
        fil_c.close();

        cout << endl << endl;

        SetConsoleTextAttribute(hConsole, 11);
        for (int i = 1; i <= 120; i++) {
            cout << "=";
        }

    }

    else if (cin.fail())
    {
        Fil_C();
    }

    else
    {
        Fil_C();
    }

    int nav;

    nav = _getch();
    switch (nav) {

    case 49: // ,
        system("cls");
        c_num++;
        print_Fil_C();
        break;

    case 50:
        system("cls");
        toc();
        break;

    case 51:
        system("cls");
        quit();
        break;

    default:
        system("cls");
        Fil_C();
        break;
    }
}

// El Filibusterismo - Tauhan 2 - 4
void print_Fil_C() {
    system("TITLE El Filibusterismo - Tauhan");

    SetConsoleTextAttribute(hConsole, 14);
    cout << "                                        __________________________________________" << endl;
    cout << "                                       /_____/_____/_____/_____/_____/_____/_____/" << endl << endl;
    SetConsoleTextAttribute(hConsole, 11);
    cout << "                                                Kilalanin ang mga Tauhan" << endl;
    cout << "                                               mula sa \"El Filibusterismo\"" << endl;
    SetConsoleTextAttribute(hConsole, 14);
    cout << "                                        __________________________________________" << endl;
    cout << "                                       /_____/_____/_____/_____/_____/_____/_____/" << endl << endl;

    SetConsoleTextAttribute(hConsole, 7);
    cout << "                                                       Nabigasyon:" << endl;

    SetConsoleTextAttribute(hConsole, 8);
    for (int i = 1; i <= 120; i++) {
        cout << "-";
    }
    cout << endl;
    SetConsoleTextAttribute(hConsole, 11);
    cout << "            Huling pahina: ";
    SetConsoleTextAttribute(hConsole, 14);
    cout << "1";
    SetConsoleTextAttribute(hConsole, 11);
    cout << "      Susunod na pahina: ";
    SetConsoleTextAttribute(hConsole, 14);
    cout << "2";
    SetConsoleTextAttribute(hConsole, 11);
    cout << "      Mapa ni Pepe : ";
    SetConsoleTextAttribute(hConsole, 14);
    cout << "3";
    SetConsoleTextAttribute(hConsole, 11);
    cout << "      Ipagliban ang Paglalakbay: ";
    SetConsoleTextAttribute(hConsole, 14);
    cout << "4" << endl;

    SetConsoleTextAttribute(hConsole, 8);
    for (int i = 1; i <= 120; i++) {
        cout << "-";
    }

    cout << endl << endl;

    SetConsoleTextAttribute(hConsole, 11);
    for (int i = 1; i <= 120; i++) {
        cout << "=";
    }



    cout << endl << endl;
    fstream fil_c;
    fil_c.open("Resources/Fili/Tauhan/fil_c" + to_string(c_num) + ".txt", ios::in);


    if (fil_c.is_open()) {
        SetConsoleTextAttribute(hConsole, 7);
        string line;
        while (getline(fil_c, line))
        {
            cout << "   " << line << endl;
        }
        fil_c.close();

        cout << endl << endl;

        SetConsoleTextAttribute(hConsole, 11);
        for (int i = 1; i <= 120; i++) {
            cout << "=";
        }
    }

    else if (cin.fail())
    {
        error();
        print_Fil_C();
    }

    else
    {
        error();
        print_Fil_C();
    }

    int nav;

    nav = _getch();


    switch (nav) {

    case 49: // ,
        system("cls");
        c_num--;
        if (c_num == 1) {
            return Fil_C();
        }
        else {
            print_Fil_C();
        }
        break;

    case 50: // ,
        system("cls");
        c_num++;
        if (c_num <= 4)
            print_Fil_C();
        else {
            return print2_Fil_C();
        }
        break;

    case 51:
        system("cls");
        toc();
        break;

    case 52:
        system("cls");
        quit();
        break;

    default:
        error();
        print_Fil_C();
        break;
    }
}

// El Filibusterismo - Tauhan 5
void print2_Fil_C() {
    system("TITLE Noli Me Tangere - Tauhan");

    SetConsoleTextAttribute(hConsole, 14);
    cout << "                                        __________________________________________" << endl;
    cout << "                                       /_____/_____/_____/_____/_____/_____/_____/" << endl << endl;
    SetConsoleTextAttribute(hConsole, 11);
    cout << "                                                Kilalanin ang mga Tauhan" << endl;
    cout << "                                               mula sa \"El Filibusterismo\"" << endl;
    SetConsoleTextAttribute(hConsole, 14);
    cout << "                                        __________________________________________" << endl;
    cout << "                                       /_____/_____/_____/_____/_____/_____/_____/" << endl << endl;

    SetConsoleTextAttribute(hConsole, 7);
    cout << "                                                       Nabigasyon:" << endl;

    SetConsoleTextAttribute(hConsole, 8);
    for (int i = 1; i <= 120; i++) {
        cout << "-";
    }
    cout << endl;
    SetConsoleTextAttribute(hConsole, 11);
    cout << "                       Huling pahina: ";
    SetConsoleTextAttribute(hConsole, 14);
    cout << "1";
    SetConsoleTextAttribute(hConsole, 11);
    cout << "      Mapa ni Pepe : ";
    SetConsoleTextAttribute(hConsole, 14);
    cout << "2";
    SetConsoleTextAttribute(hConsole, 11);
    cout << "      Ipagliban ang Paglalakbay: ";
    SetConsoleTextAttribute(hConsole, 14);
    cout << "3" << endl;

    SetConsoleTextAttribute(hConsole, 8);
    for (int i = 1; i <= 120; i++) {
        cout << "-";
    }

    cout << endl << endl;

    SetConsoleTextAttribute(hConsole, 11);
    for (int i = 1; i <= 120; i++) {
        cout << "=";
    }

    c_num = 5;
    cout << endl << endl;
    fstream fil_c;
    fil_c.open("Resources/Fili/Tauhan/fil_c" + to_string(c_num) + ".txt", ios::in);


    if (fil_c.is_open()) {
        SetConsoleTextAttribute(hConsole, 7);
        string line;
        while (getline(fil_c, line))
        {
            cout << "   " << line << endl;
        }
        fil_c.close();

        cout << endl << endl;

        SetConsoleTextAttribute(hConsole, 11);
        for (int i = 1; i <= 120; i++) {
            cout << "=";
        }
    }

    else if (cin.fail())
    {
        error();
        print_Fil_C();
    }

    else
    {
        error();
        print_Fil_C();
    }

    int nav;

    nav = _getch();

    switch (nav) {


    case 49: // ,
        system("cls");
        c_num--;
        if (c_num == 4) {
            return print_Fil_C();
        }
        else {
            print2_Fil_C();
        }
        break;

    case 50:
        system("cls");
        toc();
        break;

    case 51:
        system("cls");
        quit();
        break;

    default:
        error();
        print2_Nol_C();
        break;
    }
}


// End
void nav_end() {

    system("cls");
    cout << "" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    SetConsoleTextAttribute(hConsole, 14);
    cout << "                                        __________________________________________" << endl;
    cout << "                                       /_____/_____/_____/_____/_____/_____/_____/" << endl << endl;
    SetConsoleTextAttribute(hConsole, 11);

    cout << "                                                   Mahusay ";
    SetConsoleTextAttribute(hConsole, 7);
    cout << "manlalakbay!" << endl;
    SetConsoleTextAttribute(hConsole, 11);
    cout << "                                                Iyong natapos ang ";
    SetConsoleTextAttribute(hConsole, 7);
    cout << "Kwento!" << endl;

    SetConsoleTextAttribute(hConsole, 14);
    cout << "                                        __________________________________________" << endl;
    cout << "                                       /_____/_____/_____/_____/_____/_____/_____/" << endl << endl << endl << endl;

    SetConsoleTextAttribute(hConsole, 7);
    cout << "                                   Maari kang maglakbay muli sa iba pang destinasyon:" << endl;

    SetConsoleTextAttribute(hConsole, 8);
    for (int i = 1; i <= 120; i++) {
        cout << "-";
    }
    cout << endl;
    SetConsoleTextAttribute(hConsole, 11);
    cout << "          Noli Me Tangere: ";
    SetConsoleTextAttribute(hConsole, 14);
    cout << "1";
    SetConsoleTextAttribute(hConsole, 11);
    cout << "      El Filibusterismo: ";
    SetConsoleTextAttribute(hConsole, 14);
    cout << "2";
    SetConsoleTextAttribute(hConsole, 11);
    cout << "      Mapa ni Pepe : ";
    SetConsoleTextAttribute(hConsole, 14);
    cout << "3";
    SetConsoleTextAttribute(hConsole, 11);
    cout << "      Ipagliban ang Paglalakbay: ";
    SetConsoleTextAttribute(hConsole, 14);
    cout << "4" << endl;

    SetConsoleTextAttribute(hConsole, 8);
    for (int i = 1; i <= 120; i++) {
        cout << "-";
    }

    int nav;

    nav = _getch();
    switch (nav) {

    case 49: // ,
        system("cls");
        noli();
        break;

    case 50: // ,
        system("cls");
        fili();
        break;

    case 51:
        system("cls");
        toc();
        break;

    case 52:
        system("cls");
        quit();
        break;

    default:
        error();
        nav_end();
        break;
    }

}

// ERROR
void error() {

    system("cls");
    cout << "" << endl << endl << endl << endl << endl << endl << endl;
    SetConsoleTextAttribute(hConsole, 11);
    cout << "                                       -------------------------------------------" << endl << endl;
    SetConsoleTextAttribute(hConsole, 5);
    cout << "                                         ERROR: ";
    SetConsoleTextAttribute(hConsole, 8);
    cout << "Maglagay lamang ng tamang input." << endl << endl;
    SetConsoleTextAttribute(hConsole, 11);
    cout << "                                       -------------------------------------------" << endl << endl;

    cout << "                                           Babalik sa huling pinanggalingan...";
    Sleep(1500);
    system("cls");

}

// About Us
void AboutUs() {
    system("TITLE Lakbay ni Pepe - About Us");


    cout << "" << endl << endl << endl << endl << endl << endl << endl;
    SetConsoleTextAttribute(hConsole, 14);
    cout << "                                        __________________________________________" << endl;
    cout << "                                       /_____/_____/_____/_____/_____/_____/_____/" << endl << endl;
    SetConsoleTextAttribute(hConsole, 11);
    cout << "                                                     Tungkol sa Amin\n" << endl;


    cout << "                                              Group 3: \"";
    SetConsoleTextAttribute(hConsole, 14);
    cout << "MGA BATA NI SIR RR";
    SetConsoleTextAttribute(hConsole, 11);
    cout << "\"\n\n";

    cout << "                                     Programmers: \n";
    SetConsoleTextAttribute(hConsole, 11);
    cout << "                                       - ";
    SetConsoleTextAttribute(hConsole, 7);
    cout << "FUNGO, GIAN HIGINO \n";
    SetConsoleTextAttribute(hConsole, 11);
    cout << "                                       - ";
    SetConsoleTextAttribute(hConsole, 7);
    cout << "JULIANE, CARL JAMES \n";
    SetConsoleTextAttribute(hConsole, 11);
    cout << "                                       - ";
    SetConsoleTextAttribute(hConsole, 7);
    cout << "LISTANGCO, LAURENZ \n";
    SetConsoleTextAttribute(hConsole, 11);
    cout << "                                       - ";
    SetConsoleTextAttribute(hConsole, 7);
    cout << "LLANES, KEVIN \n";
    SetConsoleTextAttribute(hConsole, 11);
    cout << "                                       - ";
    SetConsoleTextAttribute(hConsole, 7);
    cout << "LONOZA, JOSHUA OLIVERA \n";
    SetConsoleTextAttribute(hConsole, 11);
    cout << "                                       - ";
    SetConsoleTextAttribute(hConsole, 7);
    cout << "LUGTU, BEA \n";
    SetConsoleTextAttribute(hConsole, 11);
    cout << "                                       - ";
    SetConsoleTextAttribute(hConsole, 7);
    cout << "MAYONADO, CHRISTIAN \n";
    SetConsoleTextAttribute(hConsole, 11);
    cout << "                                       - ";
    SetConsoleTextAttribute(hConsole, 7);
    cout << "MIRANDA, KARL \n";
    SetConsoleTextAttribute(hConsole, 11);
    cout << "                                       - ";
    SetConsoleTextAttribute(hConsole, 7);
    cout << "MONTE, MARTIN LORENCE \n\n";
    
    SetConsoleTextAttribute(hConsole, 11);
    cout << "                                     Campus: \n";
    SetConsoleTextAttribute(hConsole, 7);
    cout << "                                       University of Caloocan City - North Congress \n\n";
    
    SetConsoleTextAttribute(hConsole, 11);
    cout << "                                     Program: \n";
    SetConsoleTextAttribute(hConsole, 7);
    cout << "                                       Bachelor of Science in Computer Science (BSCS) \n\n";
    
    SetConsoleTextAttribute(hConsole, 11);
    cout << "                                     Section: \n";
    SetConsoleTextAttribute(hConsole, 7);
    cout << "                                       1st - A \n\n";

    SetConsoleTextAttribute(hConsole, 11);
    cout << "                                     References: \n";
    SetConsoleTextAttribute(hConsole, 7);
    cout << "                                       Noli Me Tangere (noypi.com.ph) \n";
    SetConsoleTextAttribute(hConsole, 8);
    cout << "                                       https://noypi.com.ph/noli-me-tangere-buod/ \n\n";
    SetConsoleTextAttribute(hConsole, 7);
    cout << "                                       El Filibusterismo (noypi.com.ph) \n";
    SetConsoleTextAttribute(hConsole, 8);
    cout << "                                       https://noypi.com.ph/el-filibusterismo-buod/ \n\n";

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

// Exit
void quit() {

    int exitprompt;
    char input;

    Logo();
    cout << "                            Sigurado ka ba na gusto mong itigil ang paglalakbay? ";
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
        cout << "                                           Salamat sa pagsama sa ";
        SetConsoleTextAttribute(hConsole, 11);
        cout << "Lakbay ni Pepe!" << endl;
        SetConsoleTextAttribute(hConsole, 7);
        cout << "                                                  Paalam mula sa Group 3" << endl;
        SetConsoleTextAttribute(hConsole, 14);
        cout << "                                        __________________________________________" << endl;
        cout << "                                       /_____/_____/_____/_____/_____/_____/_____/";
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
        cout << "                                                    Babalik sa ";
        SetConsoleTextAttribute(hConsole, 11);
        cout << "Simula.." << endl;
        SetConsoleTextAttribute(hConsole, 14);
        cout << "                                        __________________________________________" << endl;
        cout << "                                       /_____/_____/_____/_____/_____/_____/_____/";
        Sleep(2500);
        main();
        system("cls");
        break;

    default:
        cin.clear(); cin.ignore(512, '\n');
        error();
        return quit();
        break;
    }

}

void bookmark() {
    //fstream view

    /*
    
    [Bookmark#] Time || Location || Chapter
    
    */


}

// Bookmark for: TOC; Noli Me Tangere; El Filibusterismo


void bookmark_option_toc() {

    system("TITLE Bookmark");

    
    cout << "" << endl << endl << endl << endl << endl;
    SetConsoleTextAttribute(hConsole, 14);
    cout << "                                        __________________________________________" << endl;
    cout << "                                       /_____/_____/_____/_____/_____/_____/_____/" << endl << endl;
    SetConsoleTextAttribute(hConsole, 11);
    cout << "                                                      Bookmark Menu";
    SetConsoleTextAttribute(hConsole, 14);
    cout << "                                        __________________________________________" << endl;
    cout << "                                       /_____/_____/_____/_____/_____/_____/_____/" << endl << endl;
    SetConsoleTextAttribute(hConsole, 11);
    cout << "                                       ------------------";
    SetConsoleTextAttribute(hConsole, 7);
    cout << "Options";
    SetConsoleTextAttribute(hConsole, 11);
    cout << " ------------------" << endl;
    cout << "                                        [ ";
    SetConsoleTextAttribute(hConsole, 7);
    cout << "1";
    SetConsoleTextAttribute(hConsole, 11);
    cout << " ] View Bookmarks" << endl << endl;

    cout << "                                        [ ";
    SetConsoleTextAttribute(hConsole, 7);
    cout << "2";
    SetConsoleTextAttribute(hConsole, 11);
    cout << " ] Add a Bookmark" << endl;
    cout << "                                        [ ";
    SetConsoleTextAttribute(hConsole, 7);
    cout << "3";
    SetConsoleTextAttribute(hConsole, 11);
    cout << " ] Remove a Bookmark" << endl;
    cout << "                                        [ ";
    SetConsoleTextAttribute(hConsole, 7);
    cout << "ESC";
    SetConsoleTextAttribute(hConsole, 11);
    cout << " ] Bumalik" << endl << endl;


    SetConsoleTextAttribute(hConsole, 14);
    cout << "                                        __________________________________________" << endl;
    cout << "                                       /_____/_____/_____/_____/_____/_____/_____/" << endl << endl;
    SetConsoleTextAttribute(hConsole, 11);
    cout << "                                       -------------------------------------------" << endl;
    SetConsoleTextAttribute(hConsole, 8);
    cout << "                                              Tip: Maglagay lamang ng numero" << endl;
    SetConsoleTextAttribute(hConsole, 11);
    cout << "                                       -------------------------------------------" << endl << endl;
    SetConsoleTextAttribute(hConsole, 7);
    cout << "                                       Enter a number: ";
    SetConsoleTextAttribute(hConsole, 11);
    cin >> bm;

    bm = _getch();
    switch (bm) {

    case 27:
        system("cls");
        chap_Fil_K();
        break;

    case 49:
        system("cls");
        bookmark_add();
        break;

    case 50:
        system("cls");
        bookmark_remove();
        break;

    case 51:
        system("cls");
        chap_Fil_K();
        break;

    case 52:
        system("cls");
        toc();
        break;

    default:
        error();
        print_Fil_K();
        break;
    }


}

void bookmark_option_nol() {

}

void bookmark_option_fil() {


}

void bookmark_add() {
    // fstream add 

}


void bookmark_remove() {
    // fstream remove

}



/*

    NYI Features:
    - Bookmark System
    : Let's you bookmark a specific chapter and save it to your computer for future use
    : Stores the current integer you had selected in any Novel Chapters' and you can revert back to your bookmarked

    > Example Interface // bookmark_option();

            Would you like to:
        [ 1 ] Select a Bookmark
        [ 2 ] Add a Bookmark
        [ 3 ] Remove a Bookmark

    [ 1 ] Bookmark:

            Time                            Novel                           Chapter

    ; [1]   3:23pm, 10/23/22        |       El Filibusterismo       |       23
    ; [2]   11:05pm, 11/03/22       |       Noli Me Tangere         |       54
    ; [3]   8:47am, 11/11/22        |       El Filibusterismo       |       32

    // cls




    [ 2 ] Add a Bookmark:

    Please select a location: 
    
    [ 1 ] Noli Me Tangere     ||      [ 2 ] El Filibusterismo

    Enter here: 2

    // cls



    ========================================================================================
        Currently Selected: El Filibusterismo                  
    ========================================================================================
    Please select a chapter: [ 1 - 39 ]

    Enter here: 32

    // cls



    ========================================================================================
        Currently Selected: El Filibusterismo [ 32 ]           
    ========================================================================================
        Please confirm the selection:
        [ Esc ] Try Again
        [ Enter ] To Continue




    [ 3 ] Remove a Bookmark:

    ; [1]   Time: 3:23pm, 10/23/22        |       Bookmark Location:  El Filibusterismo       |       Chapter: 23
    ; [2]   Time: 11:05pm, 11/03/22       |       Bookmark Location:  Noli Me Tangere         |       Chapter: 54
    ; [3]   Time: 8:47am, 11/11/22        |       Bookmark Location:  El Filibusterismo       |       Chapter: 32

    Please select bookmark number:

    Enter here: 1

    // cls

    Updating Bookmark..

    // cls

    Bookmark:

    ; [1]   Time: 11:05pm, 11/03/22       |       Bookmark Location:  Noli Me Tangere         |       Chapter: 54
    ; [2]   Time: 8:47am, 11/11/22        |       Bookmark Location:  El Filibusterismo       |       Chapter: 32

    // cls

*/
