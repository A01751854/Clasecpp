#include <iostream>
#include <fstream>
#include <string>
#include <sstream>


using std::cout;
using std::cin;
using std::endl;
using std::ifstream;
using std::string;
using std::stringstream;

int main(){
    ifstream archivo;
    archivo.open("/workspaces/Clasecpp/archivos/inventario.csv");
    string linea;
    while(getline(archivo,linea)){
        
        cout<<linea<<endl;
        stringstream token(linea);
        string posicion1;
        getline(token,posicion1,',');
        cout<<posicion1<<endl;
    }
    

    archivo.close();
}