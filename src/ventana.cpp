#include<iostream>
#include<string>
#include<ftxui/dom/elements.hpp>
#include<ftxui/screen/screen.hpp>
#include<thread>

using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
    int posicionInicialX = 10;
    int posicionInicialY = 10;

    
    string palabra = "DVD";

    while(true){
        this_thread::sleep_for(0.1s);
        auto Pantalla = Screen::Create(Dimension::Full(), Dimension::Fixed(10));
        
        

        int posicionPalabraX = 0;
        int posicionPalabraY = 0;

        for (auto &&letra : palabra)
        {
          int posicionFinalX = posicionInicialX + posicionPalabraX;
          int posicionFinalY = posicionInicialY + posicionPalabraY;
            Pantalla.PixelAt(posicionFinalX, posicionFinalY).character = letra;
            posicionPalabraX++;
    }
    Pantalla.Print();
    Pantalla.Clear();
    cout<<Pantalla.ResetPosition();

    posicionInicialX++;
    posicionInicialY++;
  }
    
    
    return 0;
}