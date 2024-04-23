#include <iostream>
#include <string>
#include <thread>
#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <ftxui/screen/string.hpp>
#include <ftxui/screen/terminal.hpp>
#include <fstream>
#include <Dibujo.hpp>

using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
    fstream archivo;

    archivo.open("./assets/images/canon.txt");
    Elements lineas;
    
    //string canon;
    while(!archivo.eof()){
       string linea;
       getline(archivo, linea);
       lineas.emplace_back(text(linea));
    }
    //archivo >> canon;
    Element canon = vbox(lineas);
    archivo.close();

    archivo.open("./assets/images/alien.txt");
    string alien;
    while(!archivo.eof()){
       
    }
    //archivo >> alien;
    archivo.close();

    int fotograma = 0;
    while(true)
    {
        fotograma++;
        Element personaje = spinner(21, fotograma) | bold | color(Color::Yellow1) | bgcolor(Color::Green1);
        Element tanque = canon | bold | color(Color::Green) | bgcolor(Color::Blue);
        Element lienzo = hbox({personaje , tanque });

        
        Screen pantalla = Screen::Create(
            Dimension::Full(),
            Dimension::Fit(lienzo));

        

        Render(pantalla, lienzo);
        pantalla.Print();
        cout<<pantalla.ResetPosition();

        this_thread::sleep_for(0.1s);
    }

    return 0;
}