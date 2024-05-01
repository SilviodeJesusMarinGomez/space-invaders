#pragma once
#include<string>
class Dibujo
{
private:
    int posicionX;
    int posicionY;
    string palabra;

public:
    Dibujo(){
        this->posicionX = 0;
        this->posicionY = 0;
    }
    Dibujo
    void Dibujar(ftxui::Screen Pantalla){
        int posicionPalabraX = 0;
        int posicionPalabraY = 0;

        for (auto &&letra : palabra)
        {
          int posicionFinalX = posicionInicialX + posicionPalabraX;
          int posicionFinalY = posicionInicialY + posicionPalabraY;
            Pantalla.PixelAt(posicionFinalX, posicionFinalY).character = letra;
            posicionPalabraX++;
    }
    }
    ~Dibujo();
};

Dibujo::Dibujo(/* args */)
{
}

Dibujo::~Dibujo()
{
}
