#pragma once
#include <fstream>
#include <ftxui/dom/elements.hpp>
using namespace std;
using namespace ftxui;

class Archivo
{
private:
    fstream archivo;
    Element contenido;
public:
    Archivo(string path)
    {
        archivo.open(path);
        while (!archivo.eof())
        {
            string linea;
            getline(archivo, linea);
            contenido.push_back(linea);
        }
        archivo.close();
    }
    Dibujo CrearDibujo(){
        
    }
    Element GetElement(){
        return this->contenido;
    }
    ~Archivo() {}
};