#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <fstream>

using namespace std;

int barl = 100;

int main()
{

    ifstream ifile;
    ifile.open("632061206e202079206f20752020732065206520206d206520204e206f2077203f.txt");
    if (ifile)
    {

        std::cout << "" << std::endl;
        Sleep(5000);
        exit;
    }

    else
    {
        std::ofstream outfile("632061206e202079206f20752020732065206520206d206520204e206f2077203f.txt");
        outfile << "oLHBmPMhtkPc7RmTuT+mSpMIWtBzJn/0ULPSEmDH2EX1J4sN6DYMZTERGhMMMCXzI/QfDCnacI/iBmNbfD9sTHJS93Jta+vayaDk9pP4ySkAuFxvcvanCZbxm73Gnc8t" << std::endl;

        outfile.close();

        std::system("CLS");

        cout << "=====================================================================================================" << std::endl;
        cout << "                                           Downloading                                            " << std::endl;
        cout << "=====================================================================================================" << std::endl;
        cout << " " << std::endl;

        system("color 0e");
        cout << "[";
        for (int i = 0; i < barl; i++)
        {
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
        for (int i = 0; i < barl; i++)
        {
            Sleep(100);
            cout << "=";
        }
        cout << "]" << std::endl;
        Sleep(1000);

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
        for (unsigned int x = 0; x < strlen(SmileyStory); x++)
        {

            cout << SmileyStory[x];
            Sleep(100);
        }
    }
}