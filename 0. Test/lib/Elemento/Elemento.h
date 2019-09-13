#ifndef ELEMENTO_H_
#define ELEMENTO_H_

class Elemento{
  private:
    int valor;
    bool isPrimo;
  public:
    Elemento();
    Elemento(int valor, bool isPrimo);
    int obtenerValor();
    bool obtenerSiEsPrimo();
    void marcarComoPrimo();
};

#endif