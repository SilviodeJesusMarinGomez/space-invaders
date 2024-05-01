#include<iostream>
#include<string>
#include<ftxui/dom/elements.hpp>
#include<ftxui/screen/screen.hpp>
#include<thread>
#include<list>
#include<experimental/random>

using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
   list<Dibujo>dibujos;
   for (int i = 0; i < 20; i++)
   {
    Dibujo palabra(
    "Hola" + to_string(1),
     experimental::randint(0,100), 
     experimental::randint(0,100));
    dibujos.push_back(palabra);
   }
   
   auto Pantalla = Screen::Create(
    Dimension::Full(),
    Dimension::Full()
   );

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