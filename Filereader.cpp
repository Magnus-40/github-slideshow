#include <iostream>
#include <fstream>
#include <string>
using namespace std;
string myline;
string delimiter=",";

int countMenuSize(){ //returns the number of lines in the text file
    
    ifstream myfile ("applications.txt"); 
    int menuSize=0;
    if(myfile.is_open()){
        while(myfile ){
            getline(myfile,myline);
            menuSize++;
        }      
    }
    return menuSize;
}

int main(){

    int numItems =0;
    int mycounter=0;
    numItems=countMenuSize();
    if(numItems>0){
    string menu [countMenuSize()][2];

    ifstream myfile ("applications.txt"); 
    if(myfile.is_open()){
        while(myfile ){
            getline(myfile,myline);
            menu[1][mycounter] = myline.substr(0, myline.find(delimiter)); 
            menu[2][mycounter] = myline.substr(myline.find(delimiter) +1,myline.length());
            
            cout << menu[1][mycounter] << "'" << menu[2][mycounter] << "'\n";
            mycounter++;
        }
    }
    }
}