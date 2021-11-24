//Francisco Siles Martins - 2020002294
 #ifndef PILHA_H
 #define PILHA_H

class Pilha {
  private:
    int *dados;
    int h;
    int tam;

    void aloca_memoria();

  public:
    Pilha(); //construtor
    Pilha(int); //inicializador
    ~Pilha(); //destrutor

    //funcoes membro
    bool empty(); //verifica se esta vazia
    void insere(int); //insere elementos na pilha
    int topo(); //retorna o topo da pilha
    int remove(); //remove elementos na pilha
};

 #endif
