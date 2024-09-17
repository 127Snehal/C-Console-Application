#include <stdio.h>
#include <windows.h>
#include <mmsystem.h>
#include <stdlib.h>
#include <string.h>

// Function to center-align text
void printCentered(const char* text, int consoleWidth) {
    int textLength = strlen(text);
    int padding = (consoleWidth - textLength) / 2;
    if (padding < 0) padding = 0; // Handle case where text is wider than the console

    // Print the padding spaces
    for (int i = 0; i < padding; i++) {
        printf(" ");
    }
    // Print the text
    printf("%s\n", text);
}

void setColor(int color) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}

int main() {

    // Play initial sound
   PlaySound(TEXT("starting_Radio.wav"), NULL, SND_SYNC);

    // Welcome message
    printf("\n\n\n");
    setColor(13);
    printCentered("WELCOME  TO  WARANANAGAR\n\n\n\n", 160);

    while (1) {
        int ch, chp, sch, col, hop, cli, sho, fac, hot, tra;

         // Display options
        PlaySound(TEXT("3 options _Radio.wav"), NULL, SND_SYNC);
        setColor(10);
        printCentered("1: Education Facility \t 2: Medical Facility \t 3: Visiting Places\n", 150);
        PlaySound(TEXT("starting 3 _Radio.wav"), NULL, SND_SYNC);
        setColor(15);
        printCentered("Which option do you want to select ?\n", 150);
        PlaySound(TEXT("select options _Radio.wav"), NULL, SND_SYNC);
        scanf("%d", &ch);
        getchar(); // To handle the newline character left in the input buffer

     switch (ch) {
                    case 1:
                                setColor(11);
                                printCentered("List of Education Facilities in Warananagar\n",150);
                                PlaySound(TEXT("LEF_Radio.wav"), NULL, SND_SYNC);
                                setColor(12);
                                printCentered("1. Schools \t 2. Colleges\n", 150);
                                PlaySound(TEXT("EF_Radio.wav"), NULL, SND_SYNC);
                                setColor(15);
                                printCentered("Which option do you want to select ?\n", 150);
                                PlaySound(TEXT("select options _Radio.wav"), NULL, SND_SYNC);
                                scanf("%d", &chp);
                                getchar();
                                switch (chp) {
                                            case 1:
                                                        setColor(9);
                                                        printCentered("List of Schools in Warananagar\n\n", 150);
                                                        PlaySound(TEXT("LS_Radio.wav"), NULL, SND_SYNC);
                                                        setColor(14);
                                                        printCentered("\t\t\t\t\t\t\t\t1: Shree Warana Vidhyamandir Warananagar \n \t\t\t\t\t\t\t\t2: Warana chaitanya special school \n \t\t\t\t\t\t\t\t3: Shree Warana Vidhyalay \n \t\t\t\t\t\t\t\t4: Tatyasaheb Kore English Academy\n\n", 150);
                                                        setColor(15);
                                                        printCentered("Which option do you want to select ?", 150);
                                                        PlaySound(TEXT("select options _Radio.wav"), NULL, SND_SYNC);
                                                        scanf("%d", &sch);
                                                        getchar();
                                                        PlaySound(TEXT("Info._Radio.wav"), NULL, SND_SYNC);
                                                        switch (sch) {
                                                                                case 1:
                                                                                            system("1_ShreeWaranaVidhyamandirWarananagar.pdf");
                                                                                            break;
                                                                                case 2:
                                                                                            system("2_Warana_chaitanya_special_school.pdf");
                                                                                            break;
                                                                                case 3:
                                                                                            system("3_Shree_Warana_Vidyalay_Warananagar.pdf");
                                                                                            break;
                                                                                case 4 :
                                                                                            system("4_Tatyasaheb_Kore_English_Academy.pdf");
                                                                                default:
                                                                                           setColor(4);
                                                                                            printCentered("Wrong Choice", 150);
                                                                                            PlaySound(TEXT("Wrong _Radio.wav"), NULL, SND_SYNC);
                                                                                            return 1;
                                                        }
                                                        break;
                                            case 2:
                                                            setColor(9);
                                                            printCentered("List of Colleges in Warananagar\n\n", 150);
                                                            PlaySound(TEXT("LC.wav"), NULL, SND_SYNC);
                                                            setColor(14);
                                                            printCentered("\t\t\t\t\t\t\t1:Yashawantrao Chavan ,Warana Mahavidyalaya, Warananagar . \n\t\t\t\t\t\t\t2:Tatyasaheb Kore Institute of Engineering & Technology\n\t\t\t\t\t\t\t  (An Autonomous Institute) . \n\t\t\t\t\t\t\t3:Tatyasaheb Kore B.Ed. College .\n\t\t\t\t\t\t\t4:Tatyasaheb Kore College of Pharmacy . \n\t\t\t\t\t\t\t5:Tatyasaheb Kore College of Architecture  . \n\t\t\t\t\t\t\t6:SWVSM ITI College .  \n\t\t\t\t\t\t\t7:Tatyasaheb Kore Institute of Engineering & Technology\n\t\t\t\t\t\t\t  (Polytechnic) . \n\n", 150);
                                                            setColor(15);
                                                            printCentered("Which option do you want to select ?", 150);
                                                            PlaySound(TEXT("select options _Radio.wav"), NULL, SND_SYNC);
                                                            scanf("%d", &col);
                                                            getchar();
                                                            PlaySound(TEXT("Info._Radio.wav"), NULL, SND_SYNC);
                                                            switch (col) {
                                                                                case 1:
                                                                                            system("1_ Yashawantrao_Chavan_Warana_Mahavidyalaya.pdf");
                                                                                            break;
                                                                                case 2:
                                                                                            system("2_TKIET.pdf");
                                                                                            break;
                                                                                case 3:
                                                                                            system("1_ Yashawantrao_Chavan_Warana_Mahavidyalaya.pdf");
                                                                                            break;
                                                                                case 4:
                                                                                            system("2_Tatyasaheb_Kore_Institute_of_Engineering_&_Technology.pdf");
                                                                                            break;
                                                                                case 5:
                                                                                            system("1_ Yashawantrao_Chavan_Warana_Mahavidyalaya.pdf");
                                                                                            break;
                                                                                case 6:
                                                                                            system("2_Tatyasaheb_Kore_Institute_of_Engineering_&_Technology.pdf");
                                                                                            break;
                                                                                case 7:
                                                                                            system("2_Tatyasaheb_Kore_Institute_of_Engineering_&_Technology.pdf");
                                                                                            break;
                                                                                default:
                                                                                            setColor(4);
                                                                                            printCentered("Wrong Choice", 150);
                                                                                            PlaySound(TEXT("Wrong _Radio.wav"), NULL, SND_SYNC);
                                                                                            return 1;
                                                            }
                                                            break;
                                        default:
                                                        setColor(4);
                                                        printCentered("Wrong Choice", 150);
                                                        PlaySound(TEXT("Wrong _Radio.wav"), NULL, SND_SYNC);
                                                        return 1;
                                }
                                break;
                   case 2:
                                setColor(11);
                                 printCentered("List of Medical facilities in Warananagar\n",150);
                                PlaySound(TEXT("LMF_Radio.wav"), NULL, SND_SYNC);
                                setColor(12);
                                printCentered("1:Hospitals  2.Clinics  3:Medical Shops\n", 150);
                                PlaySound(TEXT("MF_Radio.wav"), NULL, SND_SYNC);
                                setColor(15);
                                printCentered("Which option do you want to select ?", 150);
                               PlaySound(TEXT("select options _Radio.wav"), NULL, SND_SYNC);
                                scanf("%d", &chp);
                                getchar();
                               switch(chp){
                                               case 1:
                                                                 setColor(9);
                                                                 printCentered("List of Hospitals in Warananagar\n\n", 150);
                                                                 PlaySound(TEXT("LH_Radio.wav"), NULL, SND_SYNC);
                                                                 setColor(14);
                                                                 printCentered("\t\t\t\t\t1:Kore Hospital  \n\t\t\t\t\t\t\t\t2:Galaxy Hospital Ltd  \n\t\t\t\t\t\t\t\t3.Mahatma Gandhi Hospital\n\n", 150);
                                                                 setColor(15);
                                                                 printCentered("Which option do you want to select ?", 150);
                                                                 PlaySound(TEXT("select options _Radio.wav"), NULL, SND_SYNC);
                                                                 scanf("%d", &hop);
                                                                 getchar();
                                                                 PlaySound(TEXT("Info._Radio.wav"), NULL, SND_SYNC);
                                                                 switch (hop) {
                                                                                    case 1:
                                                                                                system("KoreHospital.pdf");
                                                                                                break;
                                                                                    case 2:
                                                                                                system("GALAXYHOSPITAL.pdf");
                                                                                                break;
                                                                                    case 3:
                                                                                                system("MAHATMAGANDHIHOSPITAL.pdf");
                                                                                                break;
                                                                                    default:
                                                                                                setColor(4);
                                                                                                printCentered("Wrong Choice", 150);
                                                                                                PlaySound(TEXT("Wrong _Radio.wav"), NULL, SND_SYNC);
                                                                                                return 1;
                                                                }
                                                                 break;
                                                case 2:
                                                                  setColor(9);
                                                                  printCentered("List of Clinics in Warananagar\n\n", 150);
                                                                  PlaySound(TEXT("LCli_Radio.wav"), NULL, SND_SYNC);
                                                                  setColor(14);
                                                                  printCentered("\t\t\t\t\t   1:Sushrit Clinic  \n\t\t\t\t\t\t\t\t   2:Sanjivani Clinic   \n\t\t\t\t\t\t\t\t   3:Samrath Clinic  \n\n", 150);
                                                                  setColor(15);
                                                                  printCentered("Which option do you want to select ?", 150);
                                                                  PlaySound(TEXT("select options _Radio.wav"), NULL, SND_SYNC);
                                                                  scanf("%d", &cli);
                                                                  getchar();
                                                                  PlaySound(TEXT("Info._Radio.wav"), NULL, SND_SYNC);
                                                                switch (cli) {
                                                                                case 1:
                                                                                            system("SushritClinic.pdf");
                                                                                            break;
                                                                                case 2:
                                                                                            system("SanjivaniClinic.pdf");
                                                                                            break;
                                                                                case 3:
                                                                                            system("SamarthClinic.pdf");
                                                                                            break;
                                                                                default:
                                                                                            setColor(4);
                                                                                            printCentered("Wrong Choice", 150);
                                                                                            PlaySound(TEXT("Wrong _Radio.wav"), NULL, SND_SYNC);
                                                                                            return 1;
                                                                }
                                                                break;
                                              case 3:
                                                             setColor(9);
                                                             printCentered("List of Medical shops in Warananagar\n\n", 150);
                                                             PlaySound(TEXT("LMS_Radio.wav"), NULL, SND_SYNC);
                                                             setColor(14);
                                                             printCentered("\t\t\t\t\t\t1:Sachin Medical  \n\t\t\t\t\t\t\t\t2:Kiran Medical   \n\t\t\t\t\t\t\t\t3:Samartha Medical   \n\t\t\t\t\t\t\t\t4:Soham Medical    \n\n", 150);
                                                             setColor(15);
                                                             printCentered("Which option do you want to select ?", 150);
                                                             PlaySound(TEXT("select options _Radio.wav"), NULL, SND_SYNC);
                                                             scanf("%d", &sho);
                                                             getchar();
                                                             PlaySound(TEXT("Info._Radio.wav"), NULL, SND_SYNC);
                                                                switch (sho) {
                                                                                        case 1:
                                                                                                    system("SamarthMedical.pdf");
                                                                                                    break;
                                                                                        case 2:
                                                                                                    system("KiranMedical.pdf");
                                                                                                    break;
                                                                                        case 3:
                                                                                                    system("KiranMedical.pdf");
                                                                                                    break;
                                                                                        case 4:
                                                                                                    system("SamarthMedical.pdf");
                                                                                                    break;
                                                                                        default:
                                                                                                    setColor(4);
                                                                                                    printCentered("Wrong Choice", 150);
                                                                                                    PlaySound(TEXT("Wrong _Radio.wav"), NULL, SND_SYNC);
                                                                                                    return 1;
                                                            }
                                                            break;
                                          default:setColor(4);
                                                       printCentered("Wrong Choice", 150);
                                                       PlaySound(TEXT("Wrong _Radio.wav"), NULL, SND_SYNC);
                                                       return 1;

                                    }
                               break;
               case 3:
                                setColor(11);
                                printCentered("List of  Visiting places in Warananagar\n",150);
                                PlaySound(TEXT("LVF_Radio.wav"), NULL, SND_SYNC);
                                setColor(12);
                                printCentered("1:Factories  2:Hotels  3:Travel places\n", 150);
                                PlaySound(TEXT("VP_Radio.wav "), NULL, SND_SYNC);
                                setColor(15);
                                printCentered("Which option do you want to select ?\n", 150);
                                PlaySound(TEXT("select options _Radio.wav"), NULL, SND_SYNC);
                               scanf("%d", &chp);
                              getchar();
                              switch(chp){
                             case 1:
                                            setColor(9);
                                            printCentered("List of Factories in Warananagar\n\n", 150);
                                            PlaySound(TEXT("LF_Radio.wav"), NULL, SND_SYNC);
                                            setColor(14);
                                            printCentered("\t\t\t\t\t\t\t\t1:Warana Sugar factory  \n\t\t\t\t\t\t\t\t2:Shree Warana Sarakari Dudh Sangh  \n\t\t\t\t\t\t\t\t3:Warana Food Product Pvt.Ltd  \n\t\t\t\t\t\t\t\t4:Patil Cashew Industries   \n\n", 150);
                                            setColor(15);
                                            printCentered("Which option do you want to select ?\n", 150);
                                            PlaySound(TEXT("select options _Radio.wav"), NULL, SND_SYNC);
                                            scanf("%d", &fac);
                                            getchar();
                                            PlaySound(TEXT("Info._Radio.wav"), NULL, SND_SYNC);
                                            switch (fac) {
                                                                            case 1:
                                                                                        system("WaranaSugarfactory.pdf");
                                                                                        break;
                                                                            case 2:
                                                                                        system("ShreeWaranaSarakariDudhSangh.pdf");
                                                                                        break;
                                                                            case 3:
                                                                                        system("WaranaSugarfactory.pdf");
                                                                                        break;
                                                                            case 4:
                                                                                        system("PatilCashewIndustries.pdf");
                                                                                        break;
                                                                            default:
                                                                                        setColor(4);
                                                                                        printCentered("Wrong Choice", 150);
                                                                                        PlaySound(TEXT("Wrong _Radio.wav"), NULL, SND_SYNC);
                                                                                        return 1;
                                                              }
                                            break;
                            case 2:
                                            setColor(9);
                                            printCentered("List of Hotels in Warananagar\n\n", 150);
                                            PlaySound(TEXT("LHot_Radio.wav"), NULL, SND_SYNC);
                                            setColor(14);
                                            printCentered("\t\t\t\t1:Hotel Vrindavan   \n\t\t\t\t\t\t\t\t2:Sangam Hotel   \n\t\t\t\t\t\t\t\t3:Hotel Triveni   \n\n", 150);
                                            setColor(15);
                                            printCentered("Which option do you want to select ?\n", 150);
                                            PlaySound(TEXT("select options _Radio.wav"), NULL, SND_SYNC);
                                            scanf("%d", &fac);
                                            getchar();
                                            PlaySound(TEXT("Info._Radio.wav"), NULL, SND_SYNC);
                                            switch (fac) {
                                                                        case 1:
                                                                                    system("HotelVrundavan.pdf");
                                                                                    break;
                                                                        case 2:
                                                                                    system("TriveniHotel.pdf");
                                                                                    break;
                                                                        case 3:
                                                                                    system("TriveniHotel.pdf");
                                                                                    break;
                                                                        default:
                                                                                    setColor(4);
                                                                                    printCentered("Wrong Choice", 150);
                                                                                    PlaySound(TEXT("Wrong _Radio.wav"), NULL, SND_SYNC);
                                                                                    return 1;
                                            }
                                            break;
                            case 3:
                                            setColor(9);
                                            printCentered("List of Travel places near Warananagar\n\n", 150);
                                            PlaySound(TEXT("LTra_Radio.wav"), NULL, SND_SYNC);
                                            setColor(14);
                                            printCentered("\t\t\t\t\t\t1:Shree Jotiba Devasthan & Hill view point  \n\t\t\t\t\t\t\t2:Panhala Fort  \n\t\t\t\t\t\t\t3:Chinmaya Ganadhish & Gandharv Water Park    \n\n", 150);
                                            setColor(15);
                                            printCentered("Which option do you want to select ?\n", 150);
                                            PlaySound(TEXT("select options _Radio.wav"), NULL, SND_SYNC);
                                            scanf("%d", &tra);
                                            getchar();
                                            PlaySound(TEXT("Info._Radio.wav"), NULL, SND_SYNC);
                                            switch (tra) {
                                                                        case 1:
                                                                                    system("ShreeJotibaDevasthan.pdf");
                                                                                    break;
                                                                        case 2:
                                                                                    system("ShreeJotibaDevasthan.pdf");
                                                                                    break;

                                                                        case 3:
                                                                                    system("Chinmaya_Ganadhish.pdf");
                                                                                    break;

                                                                        default:
                                                                                    setColor(4);
                                                                                    printCentered("Wrong Choice", 150);
                                                                                    PlaySound(TEXT("Wrong _Radio.wav"), NULL, SND_SYNC);
                                                                                    return 1;
                                                                }
                                            break;
                            default:
                                       setColor(4);
                                        printCentered("Wrong Choice", 150);
                                        PlaySound(TEXT("Wrong _Radio.wav"), NULL, SND_SYNC);
                                        return 1;

                        }
                             break;
        default:
                     setColor(4);
                     printCentered("Wrong Choice", 150);
                     PlaySound(TEXT("Wrong _Radio.wav"), NULL, SND_SYNC);
                     return 1;
        }
  }
    return 0;

}

