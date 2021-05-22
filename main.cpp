#include <iostream>
#include <string>

using namespace std;

void Troca (string *m, int num, string ant, string nov, string *nm){

  int contador = 0; //Variável para retornar números de trocas feitas

    cout << "\n";

    for(int i = 0; i < num; i++){
      if(m[i] == ant){
        nm[i] = nov;
        contador++;
      }
        cout << nm[i]; //Apresenta a nova mensagem
    }
  
    cout << "\n";

    for(int i = 0; i < num; i++){
      cout << m[i]; //Apresenta a mensagem antiga
    }
    cout<< "\n" << contador; //Apresenta numero de trocas
}


int main() {
  string texto; 
  string mensagem[500];
  string Nmensagem[500];
  string ant, nov;
  

  cout << "Digite uma mensagem de até 500 caracteres: ";
    getline(cin,texto);


  for(int i = 0; i < texto.length(); i++){
    mensagem[i] = texto[i];
    Nmensagem[i] = mensagem[i];  
  }

  cout << "Digite o caracter que deseja substituir: ";
    cin >> ant;
  cout << "Digite um novo caracter: ";
    cin >> nov;

  Troca (mensagem,texto.length(),ant,nov,Nmensagem);
  

}
