#include<iostream>
#include<string>
#include<ftxui/dom/elements.hpp>
#include<ftxui/screen/screen.hpp>
#include<thread>

using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
    
    int posicionX = 6;
    int posicionY = 4;
    string prueba = "DVD";
    while(true){
        this_thread::sleep_for(0.1s);
        auto Pantalla = Screen::Create(Dimension::Full(), Dimension::Fixed(10));
        Pantalla.PixelAt(5, 5).character = 'm';
        Render(Pantalla, border(text("Hola")));
        

      

        for (auto &&letra : prueba)
        {
            Pantalla.PixelAt(posicionX, posicionY).character = letra;
            posicionX++;
    }
    Pantalla.Print();
    cout<<Pantalla.ResetPosition();
  }
    
    
    return 0;
}