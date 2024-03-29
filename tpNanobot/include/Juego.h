//
// Created by caropistillo
//

#ifndef JUEGO_H
#define JUEGO_H

#include <SDL2/SDL_image.h>
#include <stdio.h>
#include <iostream>

#include "FPSManager.h"
#include "Textura.h"
#include "InputManager.h"
#include "Entorno.h"

#include "Lista.h"
#include "Nanobot.h"
#include "Funciones.h"
using namespace std;


class Juego {
private:
    bool running;
    Entorno entorno;
    Lista* lista;
    Nanobot nanobot;

public:
    Juego();
    ~Juego();
    bool iniciar(const char* titulo, int xPos, int yPos, int flags);
    void correr();
    void renderizar();
    void manejarEventos();
    void limpiar();
};


#endif //JUEGO_H
