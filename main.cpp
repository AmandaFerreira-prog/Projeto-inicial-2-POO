#include <iostream>
#include "questao2.h"
using namespace std;

int main() {
  Aluno a1("Amanda");
  a1.alterarNota(2,100);
  a1.addNota(1,90);
  a1.addNota(2,85);
  a1.addNota(3,80);
  a1.calculoMedia();
  a1.toString();
  a1.setNome("Samuel");
  a1.toString();

  Aluno a2("Samuel");
  a2.addNota(1,108);
  a2.addNota(6,70);
  a2.addNota(2,90);
  a2.addNota(3,80);
  a2.addNota(1,100);
  a2.calculoMedia();
  a2.toString();
  a2.setNome("Amanda");
  a2.toString();

}