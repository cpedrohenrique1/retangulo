#ifndef TESTARETANGULO_H_
#define TESTARETANGULO_H_
#include "Retangulo.h"

class TestaRetangulo{
    private:
        Retangulo *Objeto = new Retangulo;
    public:
        TestaRetangulo();
        ~TestaRetangulo();
        void menu();
};

TestaRetangulo::TestaRetangulo(){
}

TestaRetangulo::~TestaRetangulo(){
    delete Objeto;
}

void TestaRetangulo::menu(){
    int flag;
    double entrada;
    do{
        do{
            cout << "Insira Comprimento: ";
            cin >> entrada;
        }while (Objeto->setComprimento(entrada) == false);
        do{
            cout << "Insira Largura: ";
            cin >> entrada;
        }while (Objeto->setLargura(entrada) == false);
        cout << "Area: " << Objeto->Area() << "\n";
        cout << "Perimetro: " << Objeto->Perimetro() << "\n";
        cout << "Digite 0 para encerrar o programa: ";
        cin >> flag;
    }while (flag != 0);
}

#endif