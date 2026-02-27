#include <iostream>
using namespace std; 

int main(){
    int op = 0;        
    int N = 0;      
    int M = 0;          
    double soma = 0;    
    double media = 0;     
    double variancia = 0; 
    double numeros[100];  

    while (op != 3){

        cout << "\nMenu Inicial: \n";
        cout << "\n1 - Informar numeros\n";
        cout << "2 - Calcular media e variancia\n";
        cout << "3 - Sair\n";
        cout << "\nSelecione uma opcao: ";
        cin >> op;

        if (op == 1){

            while (N < 8){
                cout << "\nQuantos numeros quer informar: ";
                cin >> N;
            
                if (N < 8){
 
                    cout << "\nValor Invalido!\n";
                }
                else {
  
                    M = N;
          
                    for(int i = 0; i < N; i++){
                        cout << "\nDigite o numero " << i+1 << ": ";
                        cin >> numeros[i];
                    }
                }
            }

   
            cout << "\nNumeros informados: ";
            for(int i = 0; i < N; i++){
                cout << numeros[i] << " ";
            }
            cout << "\n";

            N = 0;
        } 
        else if (op == 2){
        
            if (M < 8){
                cout << "\nValor ainda nao colocado!\n";
            }
            else {
            
                soma = 0;
                media = 0;
                variancia = 0;

                for(int i = 0; i < M; i++){
                    soma += numeros[i];
                }

                media = soma / M;

                for (int i = 0; i < M; i++){
                    variancia += (numeros[i] - media) * (numeros[i] - media);
                }
                variancia /= M;

                cout << "\nMedia e igual a: " << media << "\n";
                cout << "\nVarianca e igual a: " << variancia << "\n";
            }
        }
        else if (op == 3){

            cout << "\nVoce saiu do programa.\n";
        }
        else {
          
            cout << "\nOpcao invalida! Tente novamente.\n";
        }
    }

    return 0;
}