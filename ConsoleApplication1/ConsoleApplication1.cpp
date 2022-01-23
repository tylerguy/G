#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <fstream>
#include <shellapi.h>
#include <chrono>
#include <thread>


using namespace std;

int barl = 100;

int main() {


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
    cout << " " << std::endl;
    
    char myStory[] = {

          "G: You Found Me"

    };

    for (unsigned int x = 0; x < strlen(myStory); x++) {
        
            cout << myStory[x];
            Sleep(100);
        
    }


    
    //cout << "G: You Found Me";
    cout << " " << std::endl;
    cout << " " << std::endl;
    cout << "<< Press Enter to Continue >>";
    cin.ignore();
    

    

  

    
}