#include<iostream>
using namespace std;

class Aluno {
  public:
    Aluno(string nome);
    void addNota(int unidade, float valor);
    bool alterarNota(int unidade, float valor);
    void calculoMedia();
    void toString();
    string getNome();
    float getMedia();
    void setNome(string nome);
  private:
    string nome;
    float notas[3];
    float media=0;
};
Aluno::Aluno(string nome){
  this->nome=nome;
  notas[0]=-1;
  notas[1]=-1;
  notas[2]=-1;
}
void Aluno::addNota(int unidade,float valor){
  if (unidade>=4){
    cout<<"\nImpossivel adicionar sua nota!!\n Os alunos so possuem 3 notas!!"<<endl;}
  if(valor>100 || valor<0){
      cout<<"\nNota invalida!!Apenas notas de 0 a 100"<<endl;
  }
  else{
    notas[unidade-1]=valor;
  }
}
bool Aluno::alterarNota(int unidade, float valor){
  if (notas[unidade-1]==-1){
    cout<<"\nNão é possivel alterar a nota, NOTA AINDA NÃO FOI CADASTRADA!!"<<endl;
    return false;
  }
  if(valor>100 || valor<0){
      cout<<"\nNota invalida!!Apenas notas de 0 a 100"<<endl;
    }
  else{
    notas[unidade-1]=valor;
    return true;
  }
}
void Aluno::calculoMedia(){
  if (notas[0]!=-1 && notas[1]!=-1 && notas[2]!=-1){
    this->media=(notas[0]+notas[1]+notas[2])/3;
    if (media>=70){
      cout<<"\nAprovado!!, Média do aluno: "<<media<<endl;}
    else if (media<70 && media>=40){
      cout<<"\nApto para o Exame Final!, Nota minima que o aluno precisa tirar no exame final"<< 100-media << endl;
    }
    else{
      cout<<"\nInfelizmente o aluno foi reprovado!"<<endl;
    }
  }
  else{
    cout<<"\nNão é possivel calcular a Média, ainda há notas a cadastrar!!"<<endl;
  }
}
string Aluno::getNome(){
  return nome;
}
void Aluno::setNome(string nome){
  this->nome=nome;
}
float Aluno::getMedia(){
  return media;
}
void Aluno::toString(){
  cout<<"\nNome do Aluno: "<< getNome() <<",Nota 1: " <<  notas[0]<<",Nota 2:" << notas[1] << ",Nota 3: " <<notas[2]<<",Média:" << getMedia() <<endl;
}
