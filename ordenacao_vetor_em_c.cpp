#include <iostream>


using namespace std;

int list[5];

int main(){

// inputa valores
    cout << "Entre com um valor intenrio: ";
    for(int c = 0; c < 5; c++){
        list:
        cin >> list[c];
        if(list[c]){
            if(c <= 2) {
                cout << "digite o proximo numero: ";
            }else{
                if(c == 3){
                cout << "Digite o ultimo valor: ";
                }

            }
        }
    }
    for(int c = 0;c < 5; c++){
        cout << list[c] << "\n";
    }

    //ordena campos de forma decrescente
    for(int f = 0; f < 5; f++){
        for(int j = 0; j < 5; j++) {
            if (list[f] > list[j]) {
                int aux;

                aux = list[f];
                list[f] = list[j];
                list[j] = aux;
            }
        }
    }
    cout << "lista decrescente" << "\n";
    for(int i = 0;i<5;i++){
        cout << list[i] << "\n";
    }
    cout << "Lista crescente" << "\n";
    for(int i = 4; i >= 0; i-- ){
        cout << list[i] << "\n";
    }

};
