#include <iostream>

using namespace std;

void troca (string *m, string ant, string nov, string *nm){
  int contador = 0;
  //cout <<"mensagem normal: " << m[1];
  for(int i = 0; i < 100; i++){
    if(m[i] == ant){
      nm[i] = nov;
      contador++;
    }
    cout << m[i];
  }
  cout<< "contado: " << contador;
  cout << "\n" << "mensagem normal nm:" << nm[0] << nm[1] << nm[2]<< nm[3]<< nm[4] << nm[5] << nm[6] << nm[7];
}


int main() {
  string texto;
  string mensagem[100];
  string Nmensagem[100];
  string ant, nov;
  




cout << "digite: ";
cin >> texto;

for(int i = 0; i < texto.length(); i++){
  mensagem[i] = texto[i];
  Nmensagem[i] = texto[i];
   
}
cout << "antigo: ";
cin >> ant;
cout << "novo: ";
cin >> nov;


  troca (mensagem,ant,nov,Nmensagem);
  
//cout << *mensagem << "\n" << mensagem;
 
}
