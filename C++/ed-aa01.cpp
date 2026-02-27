#include <iostream>
using namespace std; 

void op1(){
    cout << "\nVoce selecionou Acao 1\n";
}

void op2(){
    cout << "\nVoce selecionou Acao 2.\n";
}

void op3(){
    cout << "\nVoce selecionou Acao 3.\n";
}

void sai(){
    cout << "\nVoce saiu do programa.\n";
}

void err(){
    cout << "\nOpcao invalida! Tente novamente.\n";
}

int main(){

   int op = -1;

   while (op != 0){ 

       cout << "\nMenu inicial:\n";
       cout << "\n1 - Acao 1\n";
       cout << "2 - Acao 2\n";
       cout << "3 - Acao 3\n";
       cout << "0 - Sair do programa\n";
       cout << "\nSelecione a Acao: ";

       cin >> op;

       if (op == 1){
           op1();
       }
       else if (op == 2){
           op2();
       }
       else if (op == 3){
           op3();
       }
       else if (op == 0){
           sai();
       }
       else {
           err();
       }
   }
    
   return 0;
}