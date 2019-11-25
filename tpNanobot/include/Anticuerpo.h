#ifndef ANTICUERPO_H
#define ANTICUERPO_H

#include "Organismos.h"

#include <time.h>
#include <stdlib.h>

class Anticuerpo: public Organismos{
    public:

        // PRE: Debe recibir una coordenada que este dentro de la matriz.
        // POS: Iniciliazara la posicion del objeto.
        Anticuerpo(float x, float , id_elementos id);
        Anticuerpo();

        virtual ~Anticuerpo();

        // PRE: --------------------------------.
        // POS: Mostrara por pantalla los atributos del elemento.
        void mostrar();

        // PRE: ------------------------------------.
        // POS: Moverá el anticuerpo aleatoriamente por todo el tejido.
        //void mover();



    private:

};

#endif // ANTICUERPO_H
