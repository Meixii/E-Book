


/*
*
*
                    Lakbay ni Pepe   ||    Group 3 "Actual na Mga Bata ni Sir RR"   ||    BSCS1A @2022
*
*/

#define _CRT_SECURE_NO_WARNINGS

    // Header
#include <chrono>
#include <ctime>
#include <fstream>
#include <iostream>
#include <string>
#include <wchar.h>
#include <locale.h>
#include <iomanip>
#include <conio.h>
#include <stdio.h>
#include <dos.h>
#include <Windows.h>

using namespace std;

    // Global Variables
int k_num, c_num, bm, nobel, selectNobel, bm_menu, c_auto, bm_selectNav;

//// Function Declaration:
    // Program
void Tutorial();
void toc(); // Mapa ni Pepe
void Home();
void AboutUs();
void quit();
void gotoxy(int x, int y);
void td();

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
void nav_bookmark(int bm_selectNav);

    // Noli Me Tangere
void noli();
void noli2();

    // El Filibusterismo
void fili();
void fili2();

    // chapter
void chap_noli();
void chap_fili();

    // chapter file
void chap_file_noli();
void chap_file_fili();


    // character
void char_noli();
void char_fili();

    // character file
void char_file_noli();
void char_file_noli_2();
void char_file_fili();
void char_file_fili_2();

    // color design
void color(int color);

    // line design
void design(int lineType);

    // LnP Logo
void Logo();

    // Rizal
void Face();

    // error
void error();

    // bookmark
void bookmark_selection();

    // novel bookmark menu
void bookmark_view_noli();
void bookmark_view_fili();

    // bookmark Main Menu
void bookmark_option(); 
void bookmark_option_select(int nobel); // use this

    // add bookmark
void bookmark_add();
void bookmark_add_chapter();
void bookmark_add_auto(int file);

    // chapter auto bookmark
void confirm_auto(int c_auto); // Auto Bookmark (Chapter)
void confirm_auto_nobel(int c_auto);

void confirm(int confirm_nobel);

// Text Color
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

// Start Menu
int main()
{ 
    system("mode 120, 100");
    system("TITLE Lakbay ni Pepe - Group 3");
    Logo();
    Home();
    return 0;
}

// Logo
void Logo() {

    system("TITLE Lakbay ni Pepe - Group 3");

    gotoxy(0, 2);
    design(2);
    cout << "                                         Group III: Mga Bata ni Sir RR Presents.." << endl << endl;
    color(11);
    cout << "                .____            __   ___.                         .__  __________                               " << endl;
    cout << "                |    |   _____  |  | _\\_ |__ _____  ___.__.   ____ |__| \\______   \\ ____ ______   ____           " << endl;
    cout << "                |    |   \\__  \\ |  |/ /| __ \\\\__  \\<   |  |  /    \\|  |  |     ___// __ \\\\____ \\_/ __ \\          " << endl;
    cout << "                |    |___ / __ \\|    < | \\_\\ \\/ __ \\\\___  | |   |  \\  |  |    |   \\  ___/|  |_> >  ___/          " << endl;
    cout << "                |_______ (____  /__|_ \\|___  (____  / ____| |___|  /__|  |____|    \\___  >   __/ \\___  >         " << endl;
    cout << "                        \\/    \\/     \\/    \\/     \\/\\/           \\/                    \\/|__|        \\/          " << endl << endl;
    design(2);

    cout << endl;
    cout << endl;

    color(11);

}

// Start
void Home() {

    system("TITLE Lakbay ni Pepe - Home");



    Logo();

    color(11);
    cout << "             Ang \"Lakbay ni Pepe\" (LnP) ay isang elektronik na libro o \"E\-Book\" kung tawagin; Gawa ng grupo" << endl;
    cout << "           ika\-tatlo na pinangalanang \"Mga Bata ni Sir RR\". Ang LnP ay naglalaman ng mga kaalaman patungkol" << endl;
    cout << "           sa bidang si \"Pepe\" at ang mga likhang nobela na nakasalin sa wikang Tagalog. Ang kilalang nobela" << endl;
    cout << "           na ito ay pinamagatang \"Noli Me Tangere\" at \"El Filibusterismo\". Ang programang ito ay naglalaman" << endl;
    cout << "           ng buod sa bawat kabanata, mga pagkikilanlan sa mga tauhan, at mga talasalitaan nang mas maunawaan " << endl;
    cout << "           ng mga mangbabasa ang mga salitang matatalinghaga sa bawat nobelang nabanggit." << endl << endl;
    
    cout << endl << "           " ;
    color(8);
    for (int i = 1; i <= 97; i++) {
        cout << "-";
    }
    
    cout << endl;
    
    color(8);
    cout << "             The \"Lakbay ni Pepe\" app was created for offline browsing of Dr. Jose P. Rizal's books such as" << endl;
    cout << "           \"Noli Me Tangere\" and \"El Filibusterismo\". This program was created for educational purposes only" << endl;
    cout << "           and makes no claims for any public use. Check \"Kilalanin ang mga Gumawa\" for the references used." << endl;
    cout << "           ";

    color(8);
    for (int i = 1; i <= 97; i++) {
        cout << "-";
    }

    cout << endl << endl << "                                             ";
    color(7);
    system("pause");
    system("cls");
    Tutorial();
}

// Gabay sa Paggamit
void Tutorial()
{
    system("TITLE Gabay sa Paggamit");
    design(2);
    color(14);
    cout << "                                                     Gabay sa Paggamit" << endl;
    color(7);
    cout << "                     Ang LnP ay halos gumamit lamang ng mga NUMERO [ 0 - 9 ] upang mapagana ang mga nabigasyon, " << endl;
    cout << "         nirerekomenda namin na gamitin ang \"Numpad\" ng inyong keyboard, at maaring gamitin din ang numero sa " << endl;
    cout << "         itaas ng mga letra ng inyong keyboard." << endl << endl;

    color(11);
    cout << "                                 .----------------. .----------------. .----------------." << endl;
    cout << "                                | .--------------. | .--------------. | .--------------. |" << endl;
    cout << "                                | |   _______    | | |     ____     | | |    ______    | |" << endl;
    cout << "                                | |  |  ___  |   | | |   .' __ '.   | | |  .' ____ '.  | |" << endl;
    cout << "                                | |  |_/  / /    | | |   | (__) |   | | |  | (____) |  | |" << endl;
    cout << "                                | |      / /     | | |   .`____'.   | | |  '_.____. |  | |" << endl;
    cout << "                                | |     / /      | | |  | (____) |  | | |  | \\____| |  | |" << endl;
    cout << "                                | |    /_/       | | |  `.______.'  | | |   \\______,'  | |" << endl;
    cout << "                                | |              | | |              | | |              | |" << endl;
    cout << "                                | '--------------' | '--------------' | '--------------' |" << endl;
    cout << "                                 .----------------. .----------------. .----------------." << endl;
    cout << "                                | .--------------. | .--------------. | .--------------. |" << endl;
    cout << "                                | |   _    _     | | |   _______    | | |    ______    | |" << endl;
    cout << "                                | |  | |  | |    | | |  |  _____|   | | |  .' ____ \\   | |" << endl;
    cout << "                                | |  | |__| |_   | | |  | |____     | | |  | |____\\_|  | |" << endl;
    cout << "                                | |  |____   _|  | | |  '_.____''.  | | |  | '____`'.  | |" << endl;
    cout << "                                | |      _| |_   | | |  | \\____) |  | | |  | (____) |  | |" << endl;
    cout << "                                | |     |_____|  | | |   \\______.'  | | |  '.______.'  | |" << endl;
    cout << "                                | |              | | |              | | |              | |" << endl;
    cout << "                                | '--------------' | '--------------' | '--------------' |" << endl;
    cout << "                                 .----------------. .----------------. .----------------." << endl;
    cout << "                                | .--------------. | .--------------. | .--------------. |" << endl;
    cout << "                                | |     __       | | |    _____     | | |    ______    | |" << endl;
    cout << "                                | |    /  |      | | |   / ___ `.   | | |   / ____ `.  | |" << endl;
    cout << "                                | |    `| |      | | |  |_/___) |   | | |   `'  __) |  | |" << endl;
    cout << "                                | |     | |      | | |   .'____.'   | | |   _  |__ '.  | |" << endl;
    cout << "                                | |    _| |_     | | |  / /____     | | |  | \\____) |  | |" << endl;
    cout << "                                | |   |_____|    | | |  |_______|   | | |   \\______.'  | |" << endl;
    cout << "                                | |              | | |              | | |              | |" << endl;
    cout << "                                | '--------------' | '--------------' | '--------------' |" << endl;
    cout << "                                 .-----------------------------------. .----------------." << endl;
    cout << "                                | .---------------------------------. | .--------------. |" << endl;
    cout << "                                | |              ____               | | |              | |" << endl;
    cout << "                                | |            .'    '.             | | |              | |" << endl;
    cout << "                                | |           |  .--.  |            | | |              | |" << endl;
    cout << "                                | |           | |    | |            | | |              | |" << endl;
    cout << "                                | |           |  `--'  |            | | |      _       | |" << endl;
    cout << "                                | |            '.____.'             | | |     (_)      | |" << endl;
    cout << "                                | |                                 | | |              | |" << endl;
    cout << "                                | '---------------------------------' | '--------------' |" << endl;
    cout << "                                 '-----------------------------------' '----------------'" << endl;

    design(2);
    color(7);
    cout << "                                               ";
    system("pause");
    system("cls");
    toc();
}

// Mapa ni Pepe
void toc() {

    system("TITLE Lakbay ni Pepe - Mapa");

    int table;
    gotoxy(0, 5);
    design(1);

/*
                                   ------------------ Rizal ------------------
                                    [ 1 ] Ang Bida
*/

    color(11);
    cout << "                                                       Mapa ni ";
    color(7);
    cout << "Pepe\n" << endl;
    design(1);
    color(11);
    cout << "                                       ------------------";
    color(14);
    cout << " Rizal";
    color(11);
    cout <<" ------------------" << endl;
    cout << "                                        [ ";
    color(7);
    cout << "1";
    color(11);
    cout << " ]";
    color(7); 
    cout << " Ang Bida" << endl << endl;


/*
                                   ------------- Noli Me Tangere -------------
                                    [ 2 ] Buod
                                    [ 3 ] Pagkakakilanlan sa mga Tauhan
                                    [ 4 ] Mga Kabanata
*/

    color(11);
    cout << "                                       -------------";
    color(14);
    cout << " Noli Me Tangere";
    color(11);
    cout << " -------------" << endl;

    cout << "                                        [ ";
    color(7);
    cout << "2";
    color(11);
    cout << " ]";
    color(7); 
    cout << " Buod" << endl;
    color(11);
    cout << "                                        [ ";
    color(7);
    cout << "3";
    color(11);
    cout << " ]"; 
    color(7); 
    cout << " Pagkakakilanlan sa mga Tauhan" << endl;
    color(11);
    cout << "                                        [ ";
    color(7);
    cout << "4";
    color(11);
    cout << " ]";
    color(7); 
    cout << " Mga Kabanata" << endl << endl;


/*
                                   ------------ El Filibusterismo ------------
                                    [ 5 ] Buod
                                    [ 6 ] Pagkakakilanlan sa mga Tauhan
                                    [ 7 ] Mga Kabanata
*/

    color(11);
    cout << "                                       ------------";
    color(14);
    cout << " El Filibusterismo";
    color(11);
    cout << " ------------" << endl;
    cout << "                                        [ ";
    color(7);
    cout << "5";
    color(11);
    cout << " ]";
    color(7); 
    cout << " Buod" << endl;
    color(11);
    cout << "                                        [ ";
    color(7);
    cout << "6";
    color(11);
    cout << " ]";
    color(7); 
    cout << " Pagkakakilanlan sa mga Tauhan" << endl;
    color(11);
    cout << "                                        [ ";
    color(7);
    cout << "7";
    color(11);
    cout << " ]";
    color(7); 
    cout << " Mga Kabanata" << endl << endl;

    /*
                                   ----------- Tungkol sa Programa -----------
                                    [ 8 ] Bookmark
                                    [ 9 ] Kilalanin ang mga Gumawa
                                    [ 10 ] Gabay sa Paggamit
    */

    color(11);
    cout << "                                       -----------";
    color(14);
    cout << " Tungkol sa Programa";
    color(11);
    cout << " -----------" << endl;
    color(11);
    cout << "                                        [ ";
    color(7);
    cout << "8";
    color(11);
    cout << " ]";
    color(7); 
    cout << " Marka" << endl;
    color(11);
    cout << "                                        [ ";
    color(7);
    cout << "9";
    color(11);
    cout << " ]";
    color(7); 
    cout << " Kilalanin ang mga Gumawa" << endl;
    color(11);
    cout << "                                        [ ";
    color(7);
    cout << "10";
    color(11);
    cout << " ]";
    color(7);
    cout << " Gabay sa Paggamit" << endl << endl;
    color(11);
    cout << "                                       ------------";
    color(14);
    cout << " Ibang Pagpipilian";
    color(11);
    cout << " ------------" << endl;

    /*
                                       ------------ Ibang Pagpipilian ------------
                                        [ 11 ] Itigil ang paglalakbay
    */       
 
    color(11);
    cout << "                                        [ ";
    color(7);
    cout << "11";
    color(11);
    cout << " ]";
    color(12); 
    cout << " Itigil ang paglalakbay" << endl << endl;



    design(1);
    color(11);
    cout << "                                       -------------------------------------------" << endl;
    color(7);
    cout << "                                              Tip: Maglagay lamang ng numero" << endl;
    color(11);
    cout << "                                       -------------------------------------------" << endl << endl;
    color(7);
    cout << "                                       Pumili ng inyong destinasyon: ";
    color(11);
    cin >> table;
  
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
        char_noli();
        break;

    case 4: // Mga Kabanata ng Noli Me Tangere
        system("cls");
        chap_noli();
        break;

    case 5: // Buod ng El Filibusterismo
        system("cls");
        fili();
        break;

    case 6: // Pagkakakilanlan sa mga Tauhan
        system("cls");
        char_fili();
        break;

    case 7: // Mga Kabanata ng El Filibusterismo
        system("cls");
        chap_fili();
        break;

    case 8: // Bookmark
        system("cls");
        nobel = 3;
        bookmark_option_select(3);
        break;

    case 9: // Kilalanin ang mga gumawa
        system("cls");
        AboutUs();
        break;

    case 10: // Gabay sa Paggamit
        system("cls");
        Tutorial();
        break;

    case 11: // Itigil ang paglalakbay
        system("cls");
        quit();
        break;

    default:
        cin.clear(); cin.ignore(512, '\n');
        error();
        return toc();
        break;
    }
}

void Rizal() {
    system("TITLE Lakbay ni Pepe - Ang Bayani");


    design(2);

    Face();

    color(11);
    cout << "              Si";
    color(7);
    cout << " Dr. Jose Protacio Rizal Mercado y Alonzo Realonda";
    color(11);
    cout << " (pinanganak noong ";
    color(7);
    cout << "19 Hunyo 1861";
    color(11);
    cout << " at namatay" << endl;
    cout << "         noong ";
    color(7);
    cout << "30 Disyembre 1896";
    color(11);
    cout << ") ay isang Pilipinong bayani at isa sa pinakatanyag na tagapagtaguyod ng " << endl;
    cout << "         pagbabago sa Pilipinas noong panahon ng pananakop ng mga Kastila. Siya ang kinikilala bilang  " << endl;
    cout << "         pinakamagaling na bayani at tinala bilang isa sa mga";
    color(7);
    cout << " pambansang bayani ng Pilipinas";
    color(11);
    cout << " ng Lupon ng mga" << endl;
    cout << "         Pambansang Bayani." << endl << endl;

    cout << "         Pinanganak si Rizal sa isang mayamang angkan sa";
    color(7);
    cout << " Calamba, Laguna";
    color(11);
    cout << " at";
    color(7);
    cout << " pampito sa labing - isang anak";
    color(11);
    cout << " ng" << endl;
    cout << "         mag-asawang";
    color(7);
    cout << " Francisco Engracio Rizal Mercado y Alejandro";
    color(11);
    cout << " at";
    color(7);
    cout << " Teodora Morales Alonzo Realonda y Quintos." << endl;
    color(11);
    cout << "         Nag-aral siya sa Ateneo Municipal de Manila, at nakakuha ng diploma sa Batsilyer ng Sining at nag-aral" << endl;
    cout << "         ng medisina sa Pamantasan ng Santo Tomas sa Maynila. Ipinagpatuloy niya ang kanyang pag-aaral sa" << endl;
    cout << "         Universidad Central de Madrid sa Madrid, Espanya, at nakakuha ng Lisensiya sa Medisina, na nagbigay " << endl;
    cout << "         sa kanyan ng karapatan  sanayin ang medisina. Nag-aral din siya sa Pamantasan ng Paris at Pamantasan " << endl;
    cout << "         ng Heidelberg." << endl;
    design(2);
    color(7);
    cout << "                                               ";
    system("pause");
    system("cls");
    return Rizal2();
}

void Rizal2() {
    system("TITLE Lakbay ni Pepe - Ang Bayani");
    system("cls");

    design(1);
    color(11);
    cout << "                                                          Rizal" << endl;
    design(1);

    color(7);
    cout << "                                                       Nabigasyon:" << endl;

    design(4);
    cout << endl;

    color(11);
    cout << "                     [ ";
    color(7);
    cout << "1";
    color(11);
    cout << " ] Bumalik";
    color(11);
    cout << "              [ ";
    color(7);
    cout << "2";
    color(11);
    cout << " ] Noli Me Tangere";
    color(11);
    cout << "              [ ";
    color(7);
    cout << "3";
    color(11);
    cout << " ] El Filibusterismo" << endl;

    color(11);
    cout << "                     [ ";
    color(7);
    cout << "4";
    color(11);
    cout << " ] ";
    color(7);
    cout << "Mapa ni Pepe";

    color(11);
    cout << "         [ ";
    color(7);
    cout << "5";
    color(11);
    cout << " ] ";
    color(12);
    cout << "Ipagpaliban ang Paglalakbay" << endl;


    design(4);
    cout << endl << endl;

    {
        design(2);

        color(11);

        cout << "              Isang polimata si Rizal; maliban sa medisina, mahusay siya sa pagpinta, pagguhit, paglilok at " << endl;
        cout << "         pag-ukit. Isa siyang makata, manunulat, at nobelista na ang pinakatanyag sa kanyang mga gawa ay ang" << endl;
        cout << "         nobela ng ";
        color(7);
        cout << "Noli Me Tangere";
        color(11);
        cout << ", at ang kasunod nitong ";
        color(7);
        cout << "El filibusterismo";
        color(11);
        cout << ". Isa ring poliglota si Rizal, na " << endl;
        cout << "         nakakaunawa ng ";
        color(7);
        cout << "dalawampu\'t dalawang mga wika." << endl << endl;

        color(11);
        cout << "              Itinatag ni Jose Rizal ang ";
        color(7);
        cout << "La Liga Filipina";
        color(11);
        cout << ", isang samahan na naging daan sa pagkabuo ng ";
        color(7);
        cout << "Katipunan" << endl;
        color(11);
        cout << "         na pinamunuan ni ";
        color(7);
        cout << "Andres Bonifacio";
        color(11);
        cout << ", isang lihim na samahan na nagpasimula ng Himagsikang Pilipino laban" << endl;
        cout << "         sa Espanya na naging saligan ng Unang Republika ng Pilipinas sa ilalim ni ";
        color(7);
        cout << "Emilio Aguinaldo";
        color(11);
        cout << ". Siya ay" << endl;
        cout << "         tagapagtaguyod ng pagkakaroon ng Pilipinas ng sarili nitong pamahalaan sa mayapang pamamaraan kaysa sa" << endl;
        cout << "         marahas na himagsikan, at susuportahan lamang ang karahasan bilang huling dulugan. Naniniwala si Rizal" << endl;
        cout << "         na ang tanging katwiran sa pagpapalaya sa Pilipinas at pagkakaroon nito ng sariling pamahalaan ay ang " << endl;
        cout << "         pagbabalik ng karangalan ng mga mamamayan, at kanyang winika: ";
        color(7);
        cout << "Bakit kalayaan, kung ang mga alipin ngayon" << endl;
        cout << "         ay magiging maniniil ng hinaharap?";
        color(11);
        cout << "; Ang pangkahalatang napagsang-ayunan ng mga dalubhasa sa buhay ni " << endl;
        cout << "         Rizal ay ang pagbitay dito ang naghudyat upang magsimula ang Himagsikang Pilipino." << endl << endl;

        cout << "              Si Jose Rizal ay ";
        color(7);
        cout << "nahatulan noong Disyembre 26, 1896";
        color(11);
        cout << " ng kamatay sa dahilang napagbintangan siya na" << endl;
        cout << "         nagpasimula ng rebelyon laban sa mga Kastila. Bago dumating ang araw ng kanyang kamatayan ay naisulat" << endl;
        cout << "         niya ang ";
        color(7);
        cout << "\"Mi Ultimo Adios\"";
        color(11);
        cout << " o mas kilala bilang \"Ang Huling Paalam\" bilang gabay sa susunod pang mga" << endl;
        cout << "         henerasyon. Noong ";
        color(7);
        cout << "Disyembre 30, 1896";
        color(11);
        cout << " ay binaril si Dr. Jose Protacio Rizal Mercado y Alonzo Realonda sa" << endl;
        color(7);
        cout << "         Bagumbayan";
        color(11);
        cout << " na mas kilala na ngayon bilang Luneta." << endl << endl;
    }

    design(2);
    color(7);
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

// Noli Me Tangere - Buod
void noli() {
    system("TITLE Lakbay ni Pepe - Noli Me Tangere");

    design(1);
    color(11);
    cout << "                                                     Noli Me Tangere"<< endl;
    design(1);

    color(7);
    cout << "                                                       Nabigasyon:" << endl;

    design(4);
    cout << endl;



    color(11);
    cout << "                                    [ ";
    color(7);
    cout << "1";
    color(11);
    cout << " ] Bumalik";
    color(11);
    cout << "              [ ";
    color(7);
    cout << "2";
    color(11);
    cout << " ] Susunod" << endl;

    color(11);
    cout << "                                    [ ";
    color(7);
    cout << "3";
    color(11);
    cout << " ] ";
    color(7);
    cout << "Mapa ni Pepe";
    color(11);
    cout << "         [ ";
    color(7);
    cout << "4";
    color(11);
    cout << " ] ";
    color(12);
    cout << "Ipagpaliban ang Paglalakbay" << endl;

    design(4);
    cout << endl << endl;

    design(3);
    cout << "\n" << endl;

    color(7);
    ifstream nol_b("Resources/Noli/Buod/nol_b.txt");
    string str;
    while (getline(nol_b, str)) {
        cout << str << "\n";
    }

    cout << endl;

    design(3);
    nav_noli();
}

void noli2()
{
system("TITLE Lakbay ni Pepe - Noli Me Tangere");

    design(1);
    color(11);
    cout << "                                                     Noli Me Tangere" << endl;
    design(1);

    color(7);
    cout << "                                                       Nabigasyon:" << endl;

    design(4);
    cout << endl;

    color(11);
    cout << "                          [ ";
    color(7);
    cout << "1";
    color(11);
    cout << " ] Bumalik";
    color(11);
    cout << "              [ ";
    color(7);
    cout << "2";
    color(11);
    cout << " ] Mga Tauhan";
    color(11);
    cout << "            [ ";
    color(7);
    cout << "3";
    color(11);
    cout << " ] Mga Kabanata" << endl;

    color(11);
    cout << "                          [ ";
    color(7);
    cout << "4";
    color(11);
    cout << " ] ";
    color(7);
    cout << "Mapa ni Pepe";

    color(11);
    cout << "         [ ";
    color(7);
    cout << "5";
    color(11);
    cout << " ] ";
    color(12);
    cout << "Ipagpaliban ang Paglalakbay" << endl;

    design(4);
    cout << endl << endl;

    design(3);
    cout << "\n" << endl;

    color(7);
    ifstream nol_b("Resources/Noli/Buod/nol_b1.txt");
    string str;
    while (getline(nol_b, str)) {
    cout << str << "\n";
    }

    cout << endl;
    design(3);
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
        char_noli();
        break;

    case 51:
        system("cls");
        chap_noli();
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

// Noli Me Tangere - Kabanata
void chap_noli() {
    system("TITLE Noli Me Tangere - Kabanata");

    gotoxy(0, 7);
    design(1);
    color(11);

    cout << "                                            Mga Kabanata sa Noli Me Tangere\n" << endl;
    cout << "                                                       [ 1 - 64 ]" << endl;
    design(1);
    color(11);

    cout << "                                       Pumili ng kabanata: ";
    cin >> k_num;
    system("cls");
    return chap_file_noli();
}

void chap_file_noli() {

    fstream nol_k;
    nol_k.open("Resources/Noli/Buod/nol_k_" + to_string(k_num) + ".txt", ios::in);

    fstream nol_t;
    nol_t.open("Resources/Noli/Talasalitaan/nol_t_" + to_string(k_num) + ".txt", ios::in);

    if (nol_k.is_open())
    {

        design(1);
        color(11);
        cout << "                                                       Kabanata " << k_num << " " << endl;
        cout << "                                                   [ "; color(7); cout << "Noli Me Tangere"; color(11); cout << " ]" << endl;
        
        design(1);
        color(11);


        // Navigation UI

        color(7);
        design(4);

        cout << "                                                       Nabigasyon:" << endl;

        color(11);
        cout << "                  [ ";
        color(7);
        cout << "1";
        color(11);
        cout << " ] Huling Kabanata";
        color(11);
        cout << "      [ ";
        color(7);
        cout << "2";
        color(11);
        cout << " ] Kasunod na Kabanata";
        color(11);
        cout << "      [ ";
        color(7);
        cout << "3";
        color(11);
        cout << " ] Mga Kabanata" << endl;

        color(11);
        cout << "                  [ ";
        color(7);
        cout << "4";
        color(11);
        cout << " ] ";
        color(10);
        cout << "Markahan";

        color(11);
        cout << "             [ ";
        color(7);
        cout << "5";
        color(11);
        cout << " ] ";
        color(7);
        cout << "Mapa ni Pepe";

        color(11);
        cout << "             [ ";
        color(7);
        cout << "6";
        color(11);
        cout << " ] ";
        color(12);
        cout << "Ipagpaliban ang Paglalakbay" << endl;

        design(4);

        cout << endl << endl;

        design(3);
        cout << "\n" << endl;
        color(7);
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
        design(3);
        cout << endl << endl;

        color(14);
        cout << "       Talasalitaan:" << endl;
        color(7);
        string line_t;
        while (getline(nol_t, line_t))
        {
        cout << "           " << line_t << endl;
        }
        nol_t.close();
    }

    else if (cin.fail())
    {
        cin.clear(); cin.ignore(512, '\n');
        gotoxy(0, 7);
        design(1);
        color(11);

        cout << "                                            Mga Kabanata sa Noli Me Tangere\n" << endl;
        cout << "                                                       [ 1 - 64 ]" << endl;
        design(1);
        color(11);

        color(11);
        cout << "                                       -------------------------------------------" << endl << endl;
        color(5);
        cout << "                                           ERROR: ";
        color(8);
        cout << "Maglagay lamang ng Numero" << endl;
        color(7);
        cout << "                                           Babalik sa huling pinanggalingan..." << endl << endl;
        color(11);
        cout << "                                       -------------------------------------------" << endl << endl;

        Sleep(2500);
        system("cls");
        chap_noli();
    }

    else // if user inputted 0 or
    {
        system("cls");

        gotoxy(0, 7);
        design(1);
        color(11);

        cout << "                                            Mga Kabanata sa Noli Me Tangere\n" << endl;
        cout << "                                                       [ 1 - 64 ]" << endl;
        design(1);
        color(11);

        color(11);
        cout << "                                       -------------------------------------------" << endl << endl;
        color(5);
        cout << "                                           ERROR: ";
        color(8);
        cout << "Hindi mahanap ang Kabanata." << endl;
        color(7);
        cout << "                                           Babalik sa huling pinanggalingan..." << endl << endl;
        color(11);
        cout << "                                       -------------------------------------------" << endl << endl;

        Sleep(2500);
        system("cls");
        chap_noli();
    }

    cout << endl;
    design(3);
    nav_Nol_K();

}

void nav_Nol_K() {
    int nav;

    nav = _getch();
    switch (nav) {

    case 27:
        system("cls");
        chap_noli();
        break;

    case 49: // ,
        system("cls");
        system("cls");
        k_num--;
        if (k_num >= 1) {
            chap_file_noli();
        }
        else {
            chap_noli();
        }
        break;

    case 50: // ,
        system("cls");
        k_num++;
        if (k_num <= 64)
        {
            chap_file_noli();
        }

        else {
            nav_end();
        }

        break;

    case 51:
        system("cls");
        chap_noli();
        break;
    
    case 52:
        system("cls");
        nobel = 1;
        c_auto = 1;
        bookmark_add_auto(1);
        break;

    case 53:
        system("cls");
        toc();
        break;

    case 54:
        system("cls");
        quit();
        break;

    default:
        error();
        chap_file_noli();
        break;
    }

}

// Noli Me Tangere - Tauhan 1
void char_noli() {
        system("TITLE Noli Me Tangere - Tauhan");

        design(1);
        color(11);
        cout << "                                                Kilalanin ang mga Tauhan" << endl;
        cout << "                                                mula sa \"Noli Me Tangere\"" << endl;
        design(1);

        color(7);
        cout << "                                                       Nabigasyon:" << endl;

        design(4);
        cout << endl;

        color(8);
        cout << "                                    [ ";
        cout << "1";
        cout << " ] Bumalik";
        color(11);
        cout << "              [ ";
        color(7);
        cout << "2";
        color(11);
        cout << " ] Susunod" << endl;

        color(11);
        cout << "                                    [ ";
        color(7);
        cout << "3";
        color(11);
        cout << " ] ";
        color(7);
        cout << "Mapa ni Pepe";
        color(11);
        cout << "         [ ";
        color(7);
        cout << "4";
        color(11);
        cout << " ] ";
        color(12);
        cout << "Ipagpaliban ang Paglalakbay" << endl;

        design(4);

        cout << endl << endl;

        design(3);

        cout << endl << endl;

        c_num = 1;

        fstream nol_c;
        nol_c.open("Resources/Noli/Tauhan/nol_c" + to_string(c_num) + ".txt", ios::in);

        if (nol_c.is_open()) {
            color(7);
            string line;
            while (getline(nol_c, line))
            {
                cout << "   " << line << endl;
            }
            nol_c.close();

            cout << endl << endl;

            design(3);

        }

        else if (cin.fail())
        {
            error();
            char_noli();
        }

        else
        {
            error();
            char_noli();
        }

        int nav;

        nav = _getch();
        
        switch (nav) {

        case 49:
            system("cls");
            char_noli();
            break;

        case 50: // ,
            system("cls");
            c_num++;
            char_file_noli();
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
            char_noli();
            break;
        }
    }

// Noli Me Tangere - Tauhan 2 - 3
void char_file_noli() {
    system("TITLE Noli Me Tangere - Tauhan");

    design(1);
    color(11);
    cout << "                                                Kilalanin ang mga Tauhan" << endl;
    cout << "                                                mula sa \"Noli Me Tangere\"" << endl;
    design(1);

    color(7);
    cout << "                                                       Nabigasyon:" << endl;

    design(4);
    cout << endl;
    
    color(11);
    cout << "                                    [ ";
    color(7);
    cout << "1";
    color(11);
    cout << " ] Bumalik";
    color(11);
    cout << "              [ ";
    color(7);
    cout << "2";
    color(11);
    cout << " ] Susunod" << endl;

    color(11);
    cout << "                                    [ ";
    color(7);
    cout << "3";
    color(11);
    cout << " ] ";
    color(7);
    cout << "Mapa ni Pepe";
    color(11);
    cout << "         [ ";
    color(7);
    cout << "4";
    color(11);
    cout << " ] ";
    color(12);
    cout << "Ipagpaliban ang Paglalakbay" << endl;

    design(4);

    cout << endl << endl;

    design(3);



    cout << endl << endl;
    fstream nol_c;
    nol_c.open("Resources/Noli/Tauhan/nol_c" + to_string(c_num) + ".txt", ios::in);


    if (nol_c.is_open()) {
        color(7);
        string line;
        while (getline(nol_c, line))
        {
            cout << "   " << line << endl;
        }
        nol_c.close();

        cout << endl << endl;

        design(3);
    }

    else if (cin.fail())
    {
        error();
        char_file_noli();
    }

    else
    {
        error();
        char_file_noli();
    }

    int nav;

    nav = _getch();


    switch (nav) {


    case 49: // ,
        system("cls");
        c_num--;
        if (c_num == 1) {
            return char_noli();
        }
        else {
            char_file_noli();
        }
        break;

    case 50: // ,
        system("cls");
        c_num++;
        if (c_num <= 4)
        char_file_noli();
        else {
            return char_file_noli_2();
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
        char_file_noli();
        break;
    }
}

// Noli Me Tangere - Tauhan 5
void char_file_noli_2() {
    system("TITLE Noli Me Tangere - Tauhan");

    design(1);
    color(11);
    cout << "                                                Kilalanin ang mga Tauhan" << endl;
    cout << "                                                mula sa \"Noli Me Tangere\"" << endl;
    design(1);

    color(7);
    cout << "                                                       Nabigasyon:" << endl;

    design(4);
    cout << endl;

    color(11);
    cout << "                                    [ ";
    color(7);
    cout << "1";
    color(11);
    cout << " ] Bumalik";

    color(8);
    cout << "              [ ";
    cout << "2";
    cout << " ] Susunod" << endl;

    color(11);
    cout << "                                    [ ";
    color(7);
    cout << "3";
    color(11);
    cout << " ] ";
    color(7);
    cout << "Mapa ni Pepe";
    color(11);
    cout << "         [ ";
    color(7);
    cout << "4";
    color(11);
    cout << " ] ";
    color(12);
    cout << "Ipagpaliban ang Paglalakbay" << endl;

    design(4);

    cout << endl << endl;

    design(3);


    cout << endl << endl;

    c_num = 5;
    fstream nol_c;
    nol_c.open("Resources/Noli/Tauhan/nol_c" + to_string(c_num) + ".txt", ios::in);


    if (nol_c.is_open()) {
        color(7);
        string line;
        while (getline(nol_c, line))
        {
            cout << "   " << line << endl;
        }
        nol_c.close();

        cout << endl << endl;

        design(3);
    }

    else if (cin.fail())
    {
        error();
        char_file_noli_2();
    }

    else
    {
        error();
        char_file_noli_2();
    }

    int nav;

    nav = _getch();

    switch (nav) {


    case 49: // ,
        system("cls");
        c_num--;
        if (c_num == 4) {
            return char_file_noli();
        }
        else {
            char_file_noli_2();
        }
        break;

    case 50:
        system("cls");
        char_file_noli_2();
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
        char_file_noli_2();
        break;
    }
}

// El Filibusterismo - Buod
void fili() {
    system("TITLE El Filibusterismo - Buod");
    design(1);
    color(11);
    cout << "                                                    El Filibusterismo" << endl;
    design(1);


    color(7);
    cout << "                                                       Nabigasyon:" << endl;

    design(4);
    cout << endl;

    color(11);
    cout << "                                    [ ";
    color(7);
    cout << "1";
    color(11);
    cout << " ] Bumalik";
    color(11);
    cout << "              [ ";
    color(7);
    cout << "2";
    color(11);
    cout << " ] Susunod" << endl;

    color(11);
    cout << "                                    [ ";
    color(7);
    cout << "3";
    color(11);
    cout << " ] ";
    color(7);
    cout << "Mapa ni Pepe";
    color(11);
    cout << "         [ ";
    color(7);
    cout << "4";
    color(11);
    cout << " ] ";
    color(12);
    cout << "Ipagpaliban ang Paglalakbay" << endl;

    design(4);
    cout << endl << endl;


    design(3);
    cout << "\n" << endl;

    color(7);
    ifstream nol_b("Resources/Fili/Buod/fil_b.txt");
    string str;
    while (getline(nol_b, str)) {
        cout << str << "\n";
    }

    cout << endl;

    design(3);

    nav_fili();
}

void fili2()
{
    system("TITLE El Filibusterismo - Buod");
    design(1);
    color(11);
    cout << "                                                    El Filibusterismo" << endl;
    design(1);


    color(7);
    cout << "                                                       Nabigasyon:" << endl;

    design(4);
    cout << endl;

    color(11);
    cout << "                          [ ";
    color(7);
    cout << "1";
    color(11);
    cout << " ] Bumalik";
    color(11);
    cout << "              [ ";
    color(7);
    cout << "2";
    color(11);
    cout << " ] Mga Tauhan";
    color(11);
    cout << "            [ ";
    color(7);
    cout << "3";
    color(11);
    cout << " ] Mga Kabanata" << endl;

    color(11);
    cout << "                          [ ";
    color(7);
    cout << "4";
    color(11);
    cout << " ] ";
    color(7);
    cout << "Mapa ni Pepe";

    color(11);
    cout << "         [ ";
    color(7);
    cout << "5";
    color(11);
    cout << " ] ";
    color(12);
    cout << "Ipagpaliban ang Paglalakbay" << endl;

    design(4);
    cout << endl << endl;



    design(3);
    cout << "\n" << endl;

    color(7);
    ifstream nol_b("Resources/Fili/Buod/fil_b1.txt");
    string str;
    while (getline(nol_b, str)) {
        cout << str << "\n";
    }

    cout << endl;

    design(3);

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
        char_fili();
        break;

    case 51:
        system("cls");
        chap_fili();
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

// El Filibusterismo - Kabanata
void chap_fili() {
    system("TITLE El Filibusterismo - Kabanata");
    using namespace std;

    gotoxy(0, 7);
    design(1);
    color(11);

    cout << "                                            Mga Kabanata sa El Filibusterismo\n" << endl;
    cout << "                                                       [ 1 - 39 ]" << endl;
    design(1);


    cout << "                                       Pumili ng kabanata: ";
    cin >> k_num;
    system("cls");
    chap_file_fili();
}

void chap_file_fili() {

    fstream fil_k;
    fil_k.open("Resources/Fili/Buod/fil_k_" + to_string(k_num) + ".txt", ios::in);

    fstream fil_t;
    fil_t.open("Resources/Fili/Talasalitaan/fil_t_" + to_string(k_num) + ".txt", ios::in);

    if (fil_k.is_open())
    {

        design(1);
        color(11);
        cout << "                                                       Kabanata " << k_num << " " << endl;
        cout << "                                                  [ "; color(7); cout << "El Filibusterismo"; color(11); cout << " ]" << endl;

        design(1);
        color(11);

        // Navigation

        color(7);
        cout << "                                                       Nabigasyon:" << endl;

        design(4);
        cout << endl;

        color(11);
        cout << "                  [ ";
        color(7);
        cout << "1";
        color(11);
        cout << " ] Huling Kabanata";
        color(11);
        cout << "      [ ";
        color(7);
        cout << "2";
        color(11);
        cout << " ] Kasunod na Kabanata";
        color(11);
        cout << "      [ ";
        color(7);
        cout << "3";
        color(11);
        cout << " ] Mga Kabanata" << endl;

        color(11);
        cout << "                  [ ";
        color(7);
        cout << "4";
        color(11);
        cout << " ] "; 
        color(10);
        cout << "Markahan";

        color(11);
        cout << "             [ ";
        color(7);
        cout << "5";
        color(11);
        cout << " ] ";
        color(7);
        cout << "Mapa ni Pepe";

        color(11);
        cout << "             [ ";
        color(7);
        cout << "6";
        color(11);
        cout << " ] ";
        color(12);
        cout << "Ipagpaliban ang Paglalakbay" << endl;

        design(4);

        cout << endl;

        design(3);
        cout << "\n" << endl;
        color(7);
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

        design(3);
        cout << "\n" << endl;

        color(14);
        cout << "       Talasalitaan:" << endl;
        color(7);
        string line_t;
        while (getline(fil_t, line_t))
        {
            cout << "           " << line_t << endl;
        }
        fil_t.close();
    }

    else if (cin.fail())
    {
        cin.clear(); cin.ignore(512, '\n');
        gotoxy(0, 7);
        design(1);
        color(11);

        cout << "                                            Mga Kabanata sa El Filibusterismo\n" << endl;
        cout << "                                                       [ 1 - 39 ]" << endl;
        design(1);
        color(11);

        color(11);
        cout << "                                       -------------------------------------------" << endl << endl;
        color(5);
        cout << "                                         ERROR: ";
        color(8);
        cout << "Maglagay lamang ng Numero" << endl << endl;
        color(11);
        cout << "                                       -------------------------------------------" << endl << endl;
        cout << "                                             ";
        color(7);
        system("pause");
        system("cls");
        chap_fili();
    }

    else // if user inputted 0 or
    {
        system("cls");

        gotoxy(0, 7);
        design(1);
        color(11);

        cout << "                                            Mga Kabanata sa El Filibusterismo\n" << endl;
        cout << "                                                       [ 1 - 39 ]" << endl;
        design(1);
        color(11);

        color(11);
        cout << "                                       -------------------------------------------" << endl << endl;
        color(5);
        cout << "                                         ERROR: ";
        color(8);
        cout << "Hindi mahanap ang Kabanata." << endl << endl;
        color(11);
        cout << "                                       -------------------------------------------" << endl << endl;
        cout << "                                             ";
        color(7);
        system("pause");
        system("cls");
        chap_fili();
    }
    cout << endl;
    design(3);
    nav_Fil_K();
}

void nav_Fil_K() {

    int nav;

        nav = _getch();
        switch (nav) {

        case 27:
            system("cls");
            chap_fili();
            break;

        case 49:
            system("cls");
            k_num--;
            if (k_num >= 1) {
                chap_file_fili();
            }
            else {
                chap_fili();
            }
            break;

        case 50:
            system("cls");
            k_num++;
            if (k_num <= 39)
            {
                chap_file_fili();
            }

            else {
                nav_end();
            }

            break;

        case 51:
            system("cls");
            chap_fili();
            break;

        case 52:
            system("cls");
            nobel = 2;
            c_auto = 2;
            bookmark_add_auto(2);
            break;

        case 53:
            system("cls");
            toc();
            break;

        case 54:
            system("cls");
            quit();
            break;

        default:
            error();
            chap_file_fili();
            break;
        }
}

// El Filibusterismo - Tauhan
void char_fili() {
    system("TITLE El Filibusterismo - Tauhan");

    design(1);
    color(11);
    cout << "                                                Kilalanin ang mga Tauhan" << endl;
    cout << "                                               mula sa \"El Filibusterismo\"" << endl;
    design(1);

    color(7);
    cout << "                                                       Nabigasyon:" << endl;

    design(4);
    cout << endl;

    color(8);
    cout << "                                    [ ";
    cout << "1";
    cout << " ] Bumalik";
    color(11);
    cout << "              [ ";
    color(7);
    cout << "2";
    color(11);
    cout << " ] Susunod" << endl;

    color(11);
    cout << "                                    [ ";
    color(7);
    cout << "3";
    color(11);
    cout << " ] ";
    color(7);
    cout << "Mapa ni Pepe";
    color(11);
    cout << "         [ ";
    color(7);
    cout << "4";
    color(11);
    cout << " ] ";
    color(12);
    cout << "Ipagpaliban ang Paglalakbay" << endl;

    design(4);

    cout << endl << endl;

    design(3);

    cout << endl << endl;

    c_num = 1;

    fstream fil_c;
    fil_c.open("Resources/Fili/Tauhan/fil_c" + to_string(c_num) + ".txt", ios::in);

    if (fil_c.is_open()) {
        color(7);
        string line;
        while (getline(fil_c, line))
        {
            cout << "   " << line << endl;
        }
        fil_c.close();

        cout << endl << endl;

        design(3);

    }

    else if (cin.fail())
    {
        char_fili();
    }

    else
    {
        char_fili();
    }

    int nav;

    nav = _getch();
    switch (nav) {

    case 49:
        system("cls");
        char_fili();
        break;

    case 50: // ,
        system("cls");
        c_num++;
        char_file_fili();
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
        system("cls");
        char_fili();
        break;
    }
}

// El Filibusterismo - Tauhan 2 - 4
void char_file_fili() {
    system("TITLE El Filibusterismo - Tauhan");

    design(1);
    color(11);
    cout << "                                                Kilalanin ang mga Tauhan" << endl;
    cout << "                                               mula sa \"El Filibusterismo\"" << endl;
    design(1);

    color(7);
    cout << "                                                       Nabigasyon:" << endl;

    design(4);
    cout << endl;

    color(11);
    cout << "                                    [ ";
    color(7);
    cout << "1";
    color(11);
    cout << " ] Bumalik";
    color(11);
    cout << "              [ ";
    color(7);
    cout << "2";
    color(11);
    cout << " ] Susunod" << endl;

    color(11);
    cout << "                                    [ ";
    color(7);
    cout << "3";
    color(11);
    cout << " ] ";
    color(7);
    cout << "Mapa ni Pepe";
    color(11);
    cout << "         [ ";
    color(7);
    cout << "4";
    color(11);
    cout << " ] ";
    color(12);
    cout << "Ipagpaliban ang Paglalakbay" << endl;

    design(4);

    cout << endl << endl;

    design(3);



    cout << endl << endl;
    fstream fil_c;
    fil_c.open("Resources/Fili/Tauhan/fil_c" + to_string(c_num) + ".txt", ios::in);


    if (fil_c.is_open()) {
        color(7);
        string line;
        while (getline(fil_c, line))
        {
            cout << "   " << line << endl;
        }
        fil_c.close();

        cout << endl << endl;

        design(3);
    }

    else if (cin.fail())
    {
        error();
        char_file_fili();
    }

    else
    {
        error();
        char_file_fili();
    }

    int nav;

    nav = _getch();


    switch (nav) {

    case 49: // ,
        system("cls");
        c_num--;
        if (c_num == 1) {
            return char_fili();
        }
        else {
            char_file_fili();
        }
        break;

    case 50: // ,
        system("cls");
        c_num++;
        if (c_num <= 4)
            char_file_fili();
        else {
            return char_file_fili_2();
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
        char_file_fili();
        break;
    }
}

// El Filibusterismo - Tauhan 5
void char_file_fili_2() {
    system("TITLE El Filibusterismo - Tauhan");

    design(1);
    color(11);
    cout << "                                                Kilalanin ang mga Tauhan" << endl;
    cout << "                                               mula sa \"El Filibusterismo\"" << endl;
    design(1);

    color(7);
    cout << "                                                       Nabigasyon:" << endl;

    design(4);
    cout << endl;
    color(11);
    cout << "                                    [ ";
    color(7);
    cout << "1";
    color(11);
    cout << " ] Bumalik";

    color(8);
    cout << "              [ ";
    cout << "2";
    cout << " ] Susunod" << endl;

    color(11);
    cout << "                                    [ ";
    color(7);
    cout << "3";
    color(11);
    cout << " ] ";
    color(7);
    cout << "Mapa ni Pepe";
    color(11);
    cout << "         [ ";
    color(7);
    cout << "4";
    color(11);
    cout << " ] ";
    color(12);
    cout << "Ipagpaliban ang Paglalakbay" << endl;

    design(4);

    cout << endl << endl;

    design(3);

    c_num = 5;
    cout << endl << endl;
    fstream fil_c;
    fil_c.open("Resources/Fili/Tauhan/fil_c" + to_string(c_num) + ".txt", ios::in);


    if (fil_c.is_open()) {
        color(7);
        string line;
        while (getline(fil_c, line))
        {
            cout << "   " << line << endl;
        }
        fil_c.close();

        cout << endl << endl;

        design(3);
    }

    else if (cin.fail())
    {
        error();
        char_file_fili();
    }

    else
    {
        error();
        char_file_fili();
    }

    int nav;

    nav = _getch();

    switch (nav) {


    case 49: // ,
        system("cls");
        c_num--;
        if (c_num == 4) {
            return char_file_fili();
        }
        else {
            char_file_fili_2();
        }
        break;

    case 50:
        system("cls");
        char_file_fili_2();
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
        char_file_noli_2();
        break;
    }
}

// Bookmark 

void bookmark_option() // Bookmark Menu
{
    system("TITLE Bookmark - Menu");
    gotoxy(0, 5);

    design(1);
    color(11);
    cout << "                                                       Markahan" << endl;

    design(5);

    color(11);
    cout << "                                        [ ";
    color(7);
    cout << "1";
    color(11);
    cout << " ]"; color(7); cout << " Tignan ang mga minarkahan" << endl;
    color(11);
    cout << "                                        [ ";
    color(7);
    cout << "2";
    color(11);
    cout << " ]"; color(7); cout << " Palitan ang mga marka" << endl << endl;

    color(11);
    cout << "                                        [ ";
    color(7);
    cout << "ESC";
    color(11);
    cout << " ] ";
    color(12);
    cout << "Bumalik " << endl;
    design(1);

}

void bookmark_option_select(int nobel) // FIXED
{
    if (nobel == 1)
    {
        bookmark_option();
        bm = _getch();

        switch (bm) {
        case 27:
            system("cls");
            chap_file_noli();
            break;

        case 49:
            system("cls");
            bookmark_selection();
            break;

        case 50:
            system("cls");
            bookmark_add();
            break;

        default:
            system("cls");
            cin.clear(); cin.ignore(512, '\n');
            error();
            bookmark_option();
            bookmark_option_select(nobel);
            break;
        }

    }

    else if (nobel == 2)
    {
        bookmark_option();
        bm = _getch();
        switch (bm) {
        case 27:
            system("cls");
            chap_file_fili();
            break;

        case 49:
            system("cls");
            bookmark_selection();
            break;

        case 50:
            system("cls");
            bookmark_add();
            break;


        default:
            system("cls");
            error();
            bookmark_option();
            bookmark_option_select(nobel);
            break;
        }
    }

    else 
    {
        bookmark_option();
        bm = _getch();
        switch (bm) {
        case 27:
            system("cls");
            toc();
            break;

        case 49:
            system("cls");
            bookmark_selection();
            break;

        case 50:
            system("cls");
            bookmark_add();
            break;


        default:
            system("cls");
            error();
            bookmark_option();
            bookmark_option_select(nobel);
            break;

        }

    }

}

// Bookmark: Selecting Novels
void bookmark_selection() { 
    
    system("TITLE Bookmark - Selection");

    gotoxy(0, 5);

    design(1);
    color(11);
    cout << "                                                         Nobela" << endl;

    design(5);

    color(11);
    cout << "                                        [ ";
    color(7);
    cout << "1";
    color(11);
    cout << " ] "; color(7); cout << "Noli Me Tangere" << endl;
    color(11);
    cout << "                                        [ ";
    color(7); 
    cout << "2";
    color(11);
    cout << " ] "; color(7); cout << "El Filibusterismo" << endl << endl;

    color(11);
    cout << "                                        [ "; 
    color(7); 
    cout << "ESC";
    color(11);
    cout << " ] "; 
    color(12);
    cout << "Bumalik " << endl;

    design(1);

    color(7);
    cout << "                                          Pumili ng Nobela: ";
    color(14);
    
    
    bm_menu = _getch();

        switch (bm_menu) {
        case 27:
            system("cls");
            bookmark_option_select(nobel);
            break;

        case 49:
            system("cls");
            bookmark_view_noli();
            
            break;

        case 50:
            system("cls");
            bookmark_view_fili();
            break;

        default:
            system("cls");
            error();
            bookmark_selection();
        }
}

// Bookmark: Viewing Noli Me Tangere BM-Summary
void bookmark_view_noli() {
    system("TITLE Bookmark - Noli Me Tangere");

    gotoxy(0, 5);

    design(1);
    color(11);
    cout << "                                                Marka:";
    color(14);
    cout << " Noli Me Tangere" << endl << endl;
    design(5);

    ifstream bm_noli("Resources/Bookmarks/bm_noli.txt");
    ifstream time_noli("Resources/Bookmarks/time_noli.txt");

    color(7);
    cout << "                                        Kabanata:\t|  Oras:" << endl;

    string line;
    string line2;
    while (getline(bm_noli, line) && getline(time_noli, line2)) // chapter
    {

        cout << "                                        " << line << "\t\t|  " << line2 << endl;
    }

    bm_noli.close();
    time_noli.close();

    cout << endl << endl;

    color(11);
    cout << "                                        [ ";
    color(7);
    cout << "1";
    color(11);
    cout << " ]"; color(7); cout << " Pumunta sa minarkahan" << endl << endl;

    color(11);
    cout << "                                        [ ";
    color(7);
    cout << "ESC";
    color(11);
    cout << " ] ";
    color(12);
    cout << "Bumalik " << endl;
    design(1);
    nav_bookmark(1);
}

// Bookmark: Viewing El Filibusterismo BM-Summary
void bookmark_view_fili() {
    system("TITLE Bookmark - El Filibusterismo");

    gotoxy(0, 5);

    design(1);
    color(11);
    cout << "                                               Marka:";
    color(14);
    cout << " El Filibusterismo" << endl << endl;
    design(5);

    ifstream bm_fili("Resources/Bookmarks/bm_fili.txt");
    ifstream time_fili("Resources/Bookmarks/time_fili.txt");

    color(7);
    cout << "                                        Kabanata:\t|  Oras:" << endl;

    string line;
    string line2;
    while (getline(bm_fili, line) && getline(time_fili, line2)) // chapter
    {
        cout << "                                        " << line << "\t\t|  " << line2 << endl;
    }

    bm_fili.close();
    time_fili.close();

    cout << endl << endl;

    color(11);
    cout << "                                        [ ";
    color(7);
    cout << "1";
    color(11);
    cout << " ]"; color(7); cout << " Pumunta sa minarkahan" << endl << endl;

    color(11);
    cout << "                                        [ ";
    color(7);
    cout << "ESC";
    color(11);
    cout << " ] ";
    color(12);
    cout << "Bumalik " << endl;
    design(1);
    nav_bookmark(2);
}

// GoTo Bookmark Navigation
void nav_bookmark(int bm_selectNav) {
    int bm_nav;
    bm_nav = _getch();

    if (bm_selectNav == 1) {
        string chap;
        ifstream getChap("Resources/Bookmarks/bm_noli.txt");
        switch (bm_nav) {
        case 49:
            while (getline(getChap, chap)) {
                k_num = stoi(chap);
            }
            getChap.close();
            system("cls");
            chap_file_noli();
            break;
        case 27:
            bookmark_option_select(nobel);
            break;
        default:
            system("cls");
            error();
            bookmark_selection();
        }
    }
    else if (bm_selectNav == 2) {
        string chap;
        ifstream getChap("Resources/Bookmarks/bm_fili.txt");
        switch (bm_nav) {
        case 49:
            while (getline(getChap, chap)) {
                k_num = stoi(chap);
            }
            getChap.close();
            system("cls");
            chap_file_fili();
            break;
        case 27:
            bookmark_option_select(nobel);
            break;
        default:
            system("cls");
            error();
            bookmark_selection();
        }

    }

    system("cls");
    bookmark_option_select(nobel);
}

void bookmark_add() {
    // fstream add 
    system("TITLE Bookmark - Add");

    gotoxy(0, 5);

    design(1);
    color(11);
    cout << "                                                         Nobela" << endl;

    design(5);

    color(11);
    cout << "                                        [ ";
    color(7);
    cout << "1";
    color(11);
    cout << " ] "; color(7); cout << "Noli Me Tangere" << endl;
    color(11);
    cout << "                                        [ ";
    color(7);
    cout << "2";
    color(11);
    cout << " ] "; color(7); cout << "El Filibusterismo" << endl << endl;

    color(11);
    cout << "                                        [ ";
    color(7);
    cout << "ESC";
    color(11);
    cout << " ] ";
    color(12);
    cout << "Bumalik " << endl;

    design(1);
    
    bookmark_add_chapter();
}

void bookmark_add_auto(int file) {
    if (file == 1) {
        ofstream add_chapter("Resources/Bookmarks/bm_noli.txt");
        ofstream add_time("Resources/Bookmarks/time_noli.txt");

        add_chapter << k_num << endl;

        time_t t = time(0);   // get time now /// Format: [ 24:00 12/12/2022 ]
        tm* now = localtime(&t);
        add_time << (now->tm_hour) << ':' << (now->tm_min + 1) << ' ' << (now->tm_mon + 1) << '/' << now->tm_mday << '/' << (now->tm_year + 1900) << endl;

        add_chapter.close();
        add_time.close();

        confirm_auto(c_auto);
    }
    if (file == 2) {
        ofstream add_chapter("Resources/Bookmarks/bm_fili.txt");
        ofstream add_time("Resources/Bookmarks/time_fili.txt");

        add_chapter << k_num << endl;

        time_t t = time(0);   // get time now /// Format: [ 24:00 12/12/2022 ]
        tm* now = localtime(&t);
        add_time << (now->tm_hour) << ':' << (now->tm_min + 1) << ' ' << (now->tm_mon + 1) << '/' << now->tm_mday << '/' << (now->tm_year + 1900) << endl;

        add_chapter.close();
        add_time.close();

        confirm_auto(c_auto);
    }
}


// Bookmark: Auto-Add Confirm
void confirm_auto(int c_auto) {
    system("cls");
    gotoxy(0, 5);
    design(1);
    color(10);

    cout << "                                           Nalagyan na ng marka ang kabanata." << endl << endl;
    color(7);
    cout << "                                           Babalik sa huling pinanggalingan..." << endl;
    design(1);

    Sleep(3000);
    confirm_auto_nobel(c_auto);
}

void confirm_auto_nobel(int c_auto) {
    if (c_auto == 1) {
        system("cls");
        chap_file_noli();
    }
    else if (c_auto == 2) {
        system("cls");
        chap_file_fili();
    }
}

void bookmark_add_chapter() {

    int bm_add;
    string getChapter;
    bm_add = _getch();

    switch (bm_add) {
    case 27:
        system("cls");
        bookmark_option_select(nobel);
        break;

    case 49:
        system("cls");
        gotoxy(0, 5);
        design(1);
        color(11);
        cout << "                                          Magdagdag ng Marka";

        color(14);
        cout << ": \"Noli Me Tangere\"" << endl;

        design(5);
        
        // Entering Chapter
        color(7);
        cout << "                                        Pumili ng Kabanata: ";
        color(14);
        cin >> k_num;
        if (k_num >= 1 && k_num <= 64) {
            confirm(1);
        }
        else if (cin.fail())
        {
            error();
            bookmark_add_chapter();
        }
        else
        {
            error();
            bookmark_add_chapter();
        }
        break;

    case 50:
        system("cls");
        gotoxy(0, 5);
        design(1);
        color(11);
        cout << "                                           Magdagdag ng Marka";
        color(14);
        cout << ": \"El Filibusterismo\"" << endl;

        design(5);

        // Entering Chapter
        color(7);
        cout << "                                        Pumili ng Kabanata: ";
        color(14);
        cin >> k_num;
        if (k_num >= 1 && k_num <= 39) {
            confirm(2);
        }
        else if (cin.fail())
        {
        error();
        bookmark_add_chapter();
        }
        else
        {
        error();
        bookmark_add_chapter();
        }
        
        break;
    }

}
// problem: pressing [ esc ] clears the textfile
void confirm(int confirm_nobel) {

    if (confirm_nobel == 1) {

    // Confirmation
    int confirm;

    ofstream add_chapter("Resources/Bookmarks/bm_noli.txt");
    ofstream add_time("Resources/Bookmarks/time_noli.txt");

    gotoxy(0, 5);
    design(1);
    color(11);
    cout << "                                                   Magdagdag ng Marka" << endl;
    design(5);
    color(14);
    cout << "                                       Nobela:";
    color(7);
    cout << " Noli Me Tangere" << endl;
    color(14);
    cout << "                                       Kabanata: ";
    color(7);
    cout << k_num << endl << endl;
    color(11);
    cout << "                                       [ "; color(7); cout << "1"; color(11); cout << " ]"; color(10);cout << " Magpatuloy" << endl;
    color(11);
    cout << "                                       [ "; color(7); cout << "Esc"; color(11); cout << " ] "; color(12); cout << "Bumalik" << endl;

    design(1);
    confirm = _getch();
    if (confirm == 49) {
        add_chapter << k_num << endl;

        time_t t = time(0);   // get time now /// Format: [ 24:00 12/12/2022 ]
        tm* now = localtime(&t);
        add_time << (now->tm_hour) << ':' << (now->tm_min + 1) << ' ' << (now->tm_mon + 1) << '/' << now->tm_mday << '/' << (now->tm_year + 1900) << endl;

        add_chapter.close();
        add_time.close();

        cout << "                                    ";
        system("pause");
        system("cls");
        bookmark_view_noli();
    }
    else if(confirm == 27) {
        cin.clear(); cin.ignore(512, '\n');
        system("cls");
        bookmark_option_select(nobel);
    }
    }

    else if (confirm_nobel == 2)
    {
    // Confirmation
    int confirm;

    ofstream add_chapter("Resources/Bookmarks/bm_fili.txt");
    ofstream add_time("Resources/Bookmarks/time_fili.txt");

    gotoxy(0, 5);
    design(1);
    color(11);
    cout << "                                                   Magdagdag ng Marka" << endl;
    design(5);
    color(14);
    cout << "                                       Nobela:";
    color(7);
    cout << " El Filibusterismo" << endl;
    color(14);
    cout << "                                       Kabanata: ";
    color(7);
    cout << k_num << endl << endl;
    color(11);
    cout << "                                       [ "; color(7); cout << "1"; color(11); cout << " ]"; color(10);cout << " Magpatuloy" << endl;
    color(11);
    cout << "                                       [ "; color(7); cout << "Esc"; color(11); cout << " ] "; color(12); cout << "Bumalik" << endl;

    design(1);
    confirm = _getch();
    if (confirm == 49) {

        // chapter
        add_chapter << k_num << endl;

        // time
        time_t t = time(0);   // get time now /// Format: [ 24:00 12/12/2022 ]
        tm* now = localtime(&t);
        add_time << (now->tm_hour) << ':' << (now->tm_min + 1) << ' ' << (now->tm_mon + 1) << '/' << now->tm_mday << '/' << (now->tm_year + 1900) << endl;

        add_chapter.close();
        add_time.close();

        cout << "                                  ";
        system("pause");
        system("cls");
        bookmark_view_fili();
    }
    else if (confirm == 27) {
        cin.clear(); cin.ignore(512, '\n');
        system("cls");
        bookmark_option_select(nobel);
    }
    }
}

// Time and Date        

void td() {
    time_t t = time(0);   // get time now /// Format: [ 24:00 12/12/2022 ]
    tm* now = localtime(&t);
    cout << (now->tm_hour) << ':' << (now->tm_min + 1) << ' ' << (now->tm_mon + 1) << '/' << now->tm_mday << '/' << (now->tm_year + 1900);
}

// Design:
void gotoxy(int x, int y) // System Coordinates
{
    COORD d;
    d.X = x;
    d.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), d);
}

void color(int color) // Color 
{
    SetConsoleTextAttribute(hConsole, color);
}

void design(int lineType) // Lines Design
{
    if (lineType == 1) // short
    {
        color(14);
        cout << "                                        __________________________________________" << endl;
        cout << "                                       /_____/_____/_____/_____/_____/_____/_____/" << endl << endl;
    }
    else if (lineType == 2) // long
    {
        color(14);
        cout << "       ____________________________________________________________________________________________________________" << endl;
        cout << "      /_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/" << endl << endl;
    }
    else if (lineType == 3) // chapter line
    {
        color(11);
        for (int i = 1; i <= 120; i++) {
            cout << "=";
        }
    }
    else if (lineType == 4) // navigation line
    {
        color(8);
        for (int i = 1; i <= 120; i++) {
            cout << "-";
        }
    }
    else if (lineType == 5)
    {
        color(8);
        cout << "                                        ........................................." << endl;
    }

}

// Rizal
void Face() {
    color(112);
    cout << "                                               ,,,*,/,                                                                  " << endl;
    cout << "                                              ,((*,,**/(#%%&%#(###%%%#(#%*                                              " << endl;
    cout << "                                            //(((##**/(//***(#(%%%%%%%%%%&#%&*                                          " << endl;
    cout << "                                          //*(%&&@&%,/**////((#((/(#/(%@@&&&&&&#                                        " << endl;
    cout << "                                        *(%%%&&&&&#(#/#*/#(#%(/(////(#&/*,,,*/#%#(*,                                    " << endl;
    cout << "                                       ,#&&&&&@@&&&%&&&%&%&&%%#(#&@&%*,,,,,,,,,,,,,(%#                                  " << endl;
    cout << "                                     ,(*%&@&@&@@@@&&%&@@@@@@@@@&&&#*,,,,,,.,,,,,,,,,/##                                 " << endl;
    cout << "                                    ,*%&&&&&&&@&&&&#/****,,,,,,,,,,,,,,,.,.,,,,,****/#%%                                " << endl;
    cout << "                                    /(&&&&&&&@@@@&%#***,,,,,,,,.,.............,,,,**(&&#(                               " << endl;
    cout << "                                    /&&@&@@@@@@@@&&/**,,,,,...................,,,,,,/&&#*                               " << endl;
    cout << "                                     (&@@@@&@@@&%**,,,,,,,,,,*/#%%%#*,..,,,,*/(#(//((&&                                 " << endl;
    cout << "                                      #@@@@&&@@&*,,,,,,,**,,*(#%#/*#%#/,,*/%&&#**,,//#,                                 " << endl;
    cout << "                                     *#,.*(&&&&(,,,,,,,,/&((,#@&,(&**,..../%#%&@@&%&&/                                  " << endl;
    cout << "                                    *&,/&/*,*##/,,,,,.......,,*,,,,.......,/**///((#((&                                 " << endl;
    cout << "                                    **,*(@#,,*/***,,,......................***,******/#                                 " << endl;
    cout << "                                    *,.,(./,,,////***,,,,,,,..,...,,........(,,,,,,*/(,                                 " << endl;
    cout << "                                     ***,...,**/(/**/****,,,,,,.,,*.......,,/,,,,,,/#/                                  " << endl;
    cout << "                                        ,*,.,.*///********,,,,....../##&&&&&&/,,**(%,                                   " << endl;
    cout << "                                           %&%*********,,,,,,,.....,,..,,,((*,,*(#/                                     " << endl;
    cout << "                                            &#(/*****,,,,,,,,,,(#%&%%%%%&%%%((#(##                                      " << endl;
    cout << "                                            ***#(*/****,*,,,,,,,,,,,.,....,**(#(#,                                      " << endl;
    cout << "                                            ,./*#&%#(/*****,****,***/#%&&%##((#%/                                       " << endl;
    cout << "                                       ,%@&%......,&&%%(//*,,,,,,,...,,,**//(#%,                                        " << endl;
    cout << "                                     &&&&@&&%.........,/#&&%%(/*,,,,,,***/(##*                                          " << endl;
    cout << "                                  *&&&&&@&&&&&#..........,***/%&&&&&&&&&&&&&&&&#                                        " << endl;
    cout << "                     *&&&&#**(&&&&&&&&&@&&&&&&&&#..........,,****#(/*///#&&&&&&&&&#                                     " << endl;
    cout << "                    &&%@&&&&@@@@&&&&&&&&&&&&&&&&&&%.........,,,*/(/**//(&&&&&&&&&&&&&%                                  " << endl;
    cout << "                  %&&&&&&&&&&@&&&&&&&&&&&&%%%&&&&&&&%&&#.....,,**/////%&&&&&&&&&&&&&&&&&&%,                             " << endl;
    cout << "               /&&&&&&&&&&&&&&&&&&&&&&&&&#%%%%%&&&&&&%%%&&&&@&&&&&&&&&&&&&&&&&&&&&%%%%%%&%&&&&&*                        " << endl << endl;
}

// End
void nav_end() {

    system("cls");
    gotoxy(0, 12);
    gotoxy(0, 12);
    design(1);
    color(11);

    cout << "                                                   Mahusay ";
    color(7);
    cout << "manlalakbay!" << endl;
    color(11);
    cout << "                                                Iyong natapos ang ";
    color(7);
    cout << "Kwento!" << endl;

    design(1);
    cout << endl << endl;
    color(7);
    cout << "                                   Maari kang maglakbay muli sa iba pang destinasyon:" << endl;

    design(4);
    cout << endl;

    color(11);
    cout << "                                  [ ";
    color(7);
    cout << "1";
    color(11);
    cout << " ] Noli Me Tangere";

    color(11);
    cout << "         [ ";
    color(7);
    cout << "2";
    color(11);
    cout << " ] El Filibusterismo" << endl;

    color(11);
    cout << "                                  [ ";
    color(7);
    cout << "3";
    color(11);
    cout << " ] ";
    color(7);
    cout << "Mapa ni Pepe";
    color(11);
    cout << "            [ ";
    color(7);
    cout << "4";
    color(11);
    cout << " ] ";
    color(12);
    cout << "Ipagpaliban ang Paglalakbay" << endl;

    design(4);

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
    gotoxy(0, 7);
    color(11);
    cout << "                                       -------------------------------------------" << endl << endl;
    color(5);
    cout << "                                         ERROR: ";
    color(8);
    cout << "Maglagay lamang ng tamang input." << endl << endl;
    color(11);
    cout << "                                       -------------------------------------------" << endl << endl;

    cout << "                                           Babalik sa huling pinanggalingan...";
    Sleep(1500);
    system("cls");

}

// About Us
void AboutUs() {
    system("TITLE Lakbay ni Pepe - About Us");


    gotoxy(0, 7);
    design(1);
    color(11);
    cout << "                                                     Tungkol sa Amin\n" << endl;


    cout << "                                              Group 3: \"";
    color(14);
    cout << "MGA BATA NI SIR RR";
    color(11);
    cout << "\"\n\n";

    cout << "                                     Programmers: \n";
    color(11);
    cout << "                                       - ";
    color(7);
    cout << "FUNGO, GIAN HIGINO \n";
    color(11);
    cout << "                                       - ";
    color(7);
    cout << "JULIANE, CARL JAMES \n";
    color(11);
    cout << "                                       - ";
    color(7);
    cout << "LISTANGCO, LAURENZ \n";
    color(11);
    cout << "                                       - ";
    color(7);
    cout << "LLANES, KEVIN \n";
    color(11);
    cout << "                                       - ";
    color(7);
    cout << "LONOZA, JOSHUA OLIVERA \n";
    color(11);
    cout << "                                       - ";
    color(7);
    cout << "LUGTU, BEA \n";
    color(11);
    cout << "                                       - ";
    color(7);
    cout << "MAYONADO, CHRISTIAN \n";
    color(11);
    cout << "                                       - ";
    color(7);
    cout << "MIRANDA, KARL \n";
    color(11);
    cout << "                                       - ";
    color(7);
    cout << "MONTE, MARTIN LORENCE \n\n";

    color(11);
    cout << "                                     Campus: \n";
    color(7);
    cout << "                                       University of Caloocan City - North Congress \n\n";

    color(11);
    cout << "                                     Program: \n";
    color(7);
    cout << "                                       Bachelor of Science in Computer Science (BSCS) \n\n";

    color(11);
    cout << "                                     Section: \n";
    color(7);
    cout << "                                       1st - A \n\n";

    color(11);
    cout << "                                     References: \n";
    color(7);
    cout << "                                       Noli Me Tangere (noypi.com.ph) \n";
    color(8);
    cout << "                                       https://noypi.com.ph/noli-me-tangere-buod/ \n\n";
    color(7);
    cout << "                                       El Filibusterismo (noypi.com.ph) \n";
    color(8);
    cout << "                                       https://noypi.com.ph/el-filibusterismo-buod/ \n\n";

    color(14);
    design(1);
    color(11);
    cout << "                                             ";
    color(7);
    system("pause");
    system("cls");
    toc();
}

// Exit
void quit() {

    char input;

    Logo();
    cout << "                            Sigurado ka ba na gusto mong itigil ang paglalakbay? ";
    color(7);
    cout << "[y / n]: ";
    color(11);
    cin >> input;

    cout << "" << endl << endl;
    switch (toupper(input)) {
    case 'Y':
        system("cls");
        Logo();
        design(1);
        color(7);
        cout << "                                           Salamat sa pagsama sa ";
        color(11);
        cout << "Lakbay ni Pepe!" << endl;
        color(7);
        cout << "                                                  Paalam mula sa Group 3" << endl;
        design(1);
        Sleep(2000);
        exit(0);
        break;

    case 'N':
        system("cls");
        Logo();
        design(1);
        color(7);
        cout << "                                                    Babalik sa ";
        color(11);
        cout << "Simula.." << endl;
        design(1);
        Sleep(2000);
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

/*
    Bugs:
    - Marka:
        - Visual bugs when pressing [ Esc ] Bumalik
        - Cancelling the confirmation on Add Bookmark will remove the existing bookmark

    - Time; the minutes int from 0 to 9 (for e.g the time is: 7:02), it will not show two integers (will show as 7:2)

    Program Limitation:
    - Marked page will only limited to one per novel
    - Window Resolution and Scroll Function
        - Some novel chapters exceeds the current window resolution so to semi-fix the problem, we made the resolution larger instead of using a pre-made scroll function
*/

/*
                Coding 101: These are some of the functions we had used in the program

                system("mode x, y");                            // Window Size
                system("TITLE Title Here");                     // Window Title
                system("pause");                                // Pauses the whole function, Pressing any key will unpause the program
                system("cls");                                  // Clears the screen
                SetConsoleTextAttribute(hConsole, n);           // Console Text n = {0 - 255}
                _getch();                                       // Gets Keyboard Output, returns the ASCII value of the key pressed;
                                                                   e.g: Pressing "Esc" button will returns the value of '27';
                                                                   see ASCII Table for ref.
                ifstream                                        // Opens a file, reads the file
                ofstream                                        // Opens a file, rewrites the file
                void identifier();                              // Function

                Identifiers:

                color(color#);
                    // change color#
                        values (color pallete):

                        7 = white
                        8 = gray
                        10 = lime
                        11 = blue
                        12 = red
                        14 = yellow

                design(design#);
                    // line/border designs
                (1);
                    // Short Horizontal Border Line

                (2);
                    // Long Horizontal Border Line

                (3);
                    // full line; chapter

                (4);
                    // full line; nav

                (5);
                    // short dotted lines

                ASCII value = Key:
                27 = Esc
                49 = 1
                50 = 2
                ...
                57 = 9

                // time
                int tm_sec;                                     // seconds of minutes from 0 to 61
                int tm_min;                                     // minutes of hour from 0 to 59
                int tm_hour;                                    // hours of day from 0 to 24

                // date
                int tm_mday;                                    // day of month from 1 to 31
                int tm_mon;                                     // month of year from 0 to 11
                int tm_year;                                    // year since 1900
    */