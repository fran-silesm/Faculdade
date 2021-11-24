//Francisco Siles Martins - 2020002294

#include <iostream>
#include <string>
using namespace std;

#ifndef ANIMAL_H
#define ANIMAL_H

class Animal{
  protected:
    string n;

  public:
    Animal(string nn = " ") : n{nn} { }
    ~Animal() { }

    virtual void carrega_detalhes();
};

#endif

#ifndef CAVALO_H
#define CAVALO_H

class Cavalo : public Animal{
  public:
    Cavalo(string nn = " ") : Animal {nn} { }
    ~Cavalo() { }

    void carrega_detalhes();
};

#endif

#ifndef BALEIA_H
#define BALEIA_H

class Baleia : public Animal{
  public:
    Baleia(string nn = " ") : Animal {nn} { }
    ~Baleia() { }

    void carrega_detalhes();
};

#endif

#ifndef GIRAFA_H
#define GIRAFA_H

class Girafa : public Animal{
  public:
    Girafa(string nn = " ") : Animal {nn} { }
    ~Girafa() { }

    void carrega_detalhes();
};

#endif

void Animal::carrega_detalhes(){
  cout << "\nDetalhes do animal:";
  cout << "\nNome: " << n;
}

void Cavalo::carrega_detalhes(){
  cout << "\nDetalhes do cavalo/egua:";
  cout << "\nUm amor de quatro patas";
  cout << "\nNome: " << n;
}

void Baleia::carrega_detalhes(){
  cout << "\nDetalhes da baleia:";
  cout << "\nParece um monstro marinho solitario mas e um doce.";
  cout << "\nNome: " << n;
}

void Girafa::carrega_detalhes(){
  cout << "\nDetalhes da girafa:";
  cout << "\nDupla poscocuda";
  cout << "\nNome: " << n;
}

int main() {
  cout << "\n**********ITAZOO******************\n";
  Animal* vet_list[6];
  vet_list[0] = new Animal("Anunciado em breve");
  vet_list[1] = new Cavalo("Adao");
  vet_list[2] = new Cavalo("Eva");
  vet_list[3] = new Baleia("Molly");
  vet_list[4] = new Girafa("Joao");
  vet_list[5] = new Girafa("Maria");

  for (auto x : vet_list){
    cout << "\n____________________________________________\n";
    x->carrega_detalhes();
    cout << "\n____________________________________________\n";
  }

  return 0;
}
