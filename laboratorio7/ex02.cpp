//Francisco Siles Martins - 2020002294

#include <iostream>
#include <string>
using namespace std;

#ifndef BASIC_H
#define BASIC_H

class Basic {
  protected:
    int id, idade;
    string nome;
  public:
    Basic(int i = 0, int ii = 0, string n = " ") : id{i}, idade{ii}, nome{n} { }
    ~Basic() { }

    friend istream& operator>>(istream&, Basic&);

    int get_id() {return id; }
    int get_idade() {return idade; }
    string get_nome() {return nome; }
};

#endif

#ifndef DEPARTMENT_H
#define DEPARTMENT_H

class Department {
  protected:
    int hr;
    string depName, cargo;
  public:
    Department(int hh = 0, string dd = " ", string cc = " ") : hr{hh}, depName{dd}, cargo{cc} { }
    ~Department() { }

    friend istream& operator>>(istream&, Department&);

    int get_horas() {return hr; }
    string get_dep() {return depName; }
    string get_cargo() {return cargo; }
};

#endif

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee : public Basic, public Department {
  public:
    Employee(int i = 0, int ii = 0, string n = " ", int h = 0, string dd = " ", string c = " ") : Basic{i, ii, n}, Department{h, dd, c} { }
    ~Employee() { }

    friend istream& operator>>(istream&, Employee&);
    void print();
};

#endif

istream& operator>>(istream& in, Employee& v){
  cout << "\n___________________________\n";
  cout << "Enter employee's basic info \n";
  cout << "\nEnter Name: ";
  in >> v.nome;
  cout << "\nEnter ID: ";
  in >> v.id;
  cout << "\nEnter Age: ";
  in >> v.idade;


  cout << "\n\n________________________________\n";
  cout << "Enter employee's department info\n";
  cout << "\nEnter Department Name: ";
  in >> v.depName;
  cout << "\nEnter assigned work: ";
  in >> v.cargo;
  cout << "\nEnter time in hours to complete work: ";
  in >> v.hr;
  return in;
}

void Employee::print(){
  cout << "\n======================\n";
  cout << "EMPLOYEE'S INFORMATION\n";
  cout << "======================\n";

  cout << "\n_________________\n";
  cout << "BASIC INFORMATION\n";
  cout << "Name: "<< get_nome();
  cout << "\nID: " << get_id();
  cout << "\nAge: " << get_idade() << "years old";

  cout << "\n______________________\n";
  cout << "DEPARTMENT INFORMATION\n";
  cout << "Department: "<< get_dep();
  cout << "\nAssigned Work: " << get_cargo();
  cout << "\nTime to complete work: " << get_horas();

}


int main() {
  Employee op;
  cin >> op;
  op.print();
  return 0;
}
