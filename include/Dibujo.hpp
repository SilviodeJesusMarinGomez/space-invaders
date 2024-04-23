#include<fstream>
#include<ftxui/dom/elements.hpp>
using namespace std;
using namespace ftxui;

class Dibujo
{
private:
    fstream archivo;
    Element contenido;
public:
    Dibujo(string path){
        archivo.open("./assets/images/canon.txt");
         while(!archivo.eof()){
        string linea;
        getline(archivo, linea);
        lineas.emplace_back(text(linea));
    }
    }
    ~Dibujo();
};

