#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <fstream> 



using namespace std;

int barl = 100;

int main() {


    ifstream ifile;
    ifile.open("OPEN_ME.txt");
    if (ifile) {

        std::cout << "Program cannot be opened more than once" << std::endl;
        Sleep(2000);
        exit;
    }

    else {
        std::ofstream outfile("OPEN_ME.txt");

        outfile << "Test" << std::endl;

        outfile.close();

        std::system("CLS");

        cout << "=====================================================================================================" << std::endl;
        cout << "                                           Downloading                                            " << std::endl;
        cout << "=====================================================================================================" << std::endl;
        cout << " " << std::endl;

        system("color 0e");
        cout << "[";
        for (int i = 0; i < barl; i++) {
            Sleep(100);
            cout << "=";
        }
        cout << "]" << std::endl;
        Sleep(1000);

        std::system("CLS");

        cout << "=====================================================================================================" << std::endl;
        cout << "                                            Uploading                                                " << std::endl;
        cout << "=====================================================================================================" << std::endl;
        cout << " " << std::endl;

        system("color 0e");
        cout << "[";
        for (int i = 0; i < barl; i++) {
            Sleep(100);
            cout << "=";
        }
        cout << "]" << std::endl;
        Sleep(1000);



        std::system("CLS");
        cout << " " << std::endl;

        char myStory[] = {

              "G: You Found Me"

        };

        for (unsigned int x = 0; x < strlen(myStory); x++) {

            cout << myStory[x];
            Sleep(100);

        }
        Sleep(2000);



        //cout << "G: You Found Me";
        cout << " " << std::endl;
        cout << " " << std::endl;
        cout << "<< Press Enter to Continue >>";
        cin.ignore();
        std::system("CLS");

        cout << "" << std::endl;
        cout << "T" << std::endl;
        cout << "   h" << std::endl;
        cout << "       a" << std::endl;
        cout << "           n       Y" << std::endl;
        cout << "               k       o" << std::endl;
        cout << "                           u" << std::endl;
        Sleep(1000);
        std::system("CLS");


        char SmileyStory[] = {

              ":) :) :) :) :) :) :) :) :) :) :) :) :) :) :) :) :) :) :) :) :) :) :) :) :) :) :) :) :) :)"

        };
        for (unsigned int x = 0; x < strlen(SmileyStory); x++) {

            cout << SmileyStory[x];
            Sleep(100);

        }
    }
    

    

  

    
}