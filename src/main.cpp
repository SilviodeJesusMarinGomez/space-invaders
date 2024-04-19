#include <iostream>
#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <string>
#include<thread>
using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{

    

    int fotograma = 0;

    while(true){
        fotograma ++;
       Element lienzo = hbox({
        spinner(21,fotograma) | bold | color(Color::Yellow)
    });

    Screen pantalla = Screen::Create(
        Dimension::Full(),
        Dimension::Fit(lienzo)
    );

    Render(pantalla,lienzo);
    pantalla.Print();
    pantalla.ResetPosition();
    this_thread::sleep_for(0.1s);
  
    }
   
}