#ifndef RETANGULO_H_
#define RETANGULO_H_

class Retangulo
{
private:
    double comprimento, largura; // > 0
public:
    Retangulo();
    bool setComprimento(double);
    bool setLargura(double);
    double getComprimento() const;
    double getLargura() const;
    double Perimetro() const;
    double Area() const;
};

Retangulo::Retangulo()
{
    comprimento = 1;
    largura = 1;
}

bool Retangulo::setComprimento(double aux)
{
    if (aux > 0)
    {
        comprimento = aux;
        return true;
    }
    else
    {
        return false;
    }
}

bool Retangulo::setLargura(double aux)
{
    if (aux > 0)
    {
        largura = aux;
        return true;
    }
    else
    {
        return false;
    }
}

double Retangulo::Perimetro() const
{
    return ((comprimento * 2) + (largura * 2));
}

double Retangulo::Area() const
{
    return (largura * comprimento);
}

#endif