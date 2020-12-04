
#include <bits/stdc++.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "");

    int idade;
    double peso, altura, imc;
    char sexo, escolhaentrada, escolhacontinua;
    string nome;

    cout << "Bem vindo a calculadora de IMC da Go!Sys" << endl;
    cout << "Gostaria de saber seu indice de massa corporal(S/N)?";
    cin >> escolhaentrada;
    escolhaentrada = toupper(escolhaentrada);
    escolhacontinua = escolhaentrada;

    if(escolhaentrada == 'S'){
    system("cls");
        while(escolhacontinua == 'S'){
            cout << "Qual o seu nome? ";
            cin.ignore(INT_MAX, '\n');
            getline(cin, nome);
            cout << "Qual a sua idade? ";
            cin >> idade;
            cout << "Sexo(F/M): ";
            cin >> sexo;
            sexo = toupper(sexo);
            cout << "Qual a sua altura? ";
            cin >> altura;
            cout << "Qual o seu peso? ";
            cin >> peso;

        imc = (peso / pow(altura,2));
            cout << fixed << setprecision(2);
            cout << nome << ", " << peso << "Kg, " << altura << "m, sexo(" << sexo << ")." << endl;
        // Masculino menor de 5 anos
            if(sexo == 'M' && idade <= 5){
               if(imc < 12.9){
                 cout << "Baixo peso, procure um Nutricionista!" << endl;
                } else if(imc < 16.4){
                     cout << "Peso normal, parab�ns!" << endl;
                    } else if(imc < 17.9){
                         cout << "Sobrepeso, cuidado!" << endl;
                        } else{
                             cout << "Obesidade, procure um m�dico!" << endl;
                            }

            }
        // Masculino entre 6 e 15 anos
            if(sexo == 'M' && idade <= 15){
                if(imc < 14.9){
                 cout << "Baixo peso, procure um Nutricionista!" << endl;
                } else if(imc < 20.9){
                     cout << "Peso normal, parab�ns!" << endl;
                    } else if(imc < 25.4){
                         cout << "Sobrepeso, cuidado!" << endl;
                        } else{
                             cout << "Obesidade, procure um m�dico!" << endl;
                            }
            }
        // Masculino entre 16 e 62 anos
            if (sexo == 'M' && idade <= 62){
                if(imc < 20){
                 cout << "Baixo peso, procure um Nutricionista!" << endl;
                } else if(imc < 24.9){
                     cout << "Peso normal, parab�ns!" << endl;
                    } else if(imc < 29.9){
                         cout << "Obesidade leve, cuidado!" << endl;
                        } else if(imc < 39.9){
                             cout << "Obesidade moderada, procure um m�dico!" << endl;
                            } else {
                                cout << "Obesidade m�rbida, procure um m�dico!" << endl;
                            }
            }
        // Masculino maior de 63 anos
            if (sexo == 'M' && idade >= 63){
               if(imc < 22){
                 cout << "Baixo peso, procure um Nutricionista!" << endl;
                } else if(imc < 27){
                     cout << "Peso normal, parab�ns!" << endl;
                    } else if(imc < 37){
                         cout << "Obesidade leve, cuidado!" << endl;
                        } else if(imc < 41.9){
                             cout << "Obesidade moderada, procure um m�dico!" << endl;
                            } else {
                                cout << "Obesidade m�rbida, procure um m�dico!" << endl;
                            }
            }
        // Femenino menor de 5 anos
            if(sexo == 'F' && idade <= 5){
                if(imc < 12.9){
                 cout << "Baixo peso, procure um Nutricionista!" << endl;
                } else if(imc < 17){
                     cout << "Peso normal, parab�ns!" << endl;
                    } else if(imc < 18.7){
                         cout << "Sobrepeso, cuidado!" << endl;
                        } else{
                             cout << "Obesidade, procure um m�dico!" << endl;
                            }

            }
        // Femenino entre 6 e 15 anos
            if(sexo == 'F' && idade <= 15){
                if(imc < 14.9){
                 cout << "Baixo peso, procure um Nutricionista!" << endl;
                } else if(imc < 22.9){
                     cout << "Peso normal, parab�ns!" << endl;
                    } else if(imc < 27.5){
                         cout << "Sobrepeso, cuidado!" << endl;
                        } else {
                             cout << "Obesidade, procure um m�dico!" << endl;
                            }
            }
        // Femenino entre 16 e 62 anos
            if (sexo == 'F' && idade <= 62){
                if(imc < 19){
                 cout << "Baixo peso, procure um Nutricionista!" << endl;
                } else if(imc < 23.9){
                     cout << "Peso normal, parab�ns!" << endl;
                    } else if(imc < 28.9){
                         cout << "Obesidade leve, cuidado!" << endl;
                        } else if(imc < 38.9){
                             cout << "Obesidade moderada, procure um m�dico!" << endl;
                            } else {
                                cout << "Obesidade m�rbida, procure um m�dico!" << endl;
                            }
            }
        // Femenino maior de 63 anos
            if (sexo == 'F' && idade >= 63){
               if(imc < 22){
                 cout << "Baixo peso, procure um Nutricionista!" << endl;
                } else if(imc < 27){
                     cout << "Peso normal, parab�ns!" << endl;
                    } else if(imc < 37){
                         cout << "Obesidade leve, cuidado!" << endl;
                        } else if(imc < 41.9){
                             cout << "Obesidade moderada, procure um m�dico!" << endl;
                            } else {
                                cout << "Obesidade m�rbida, procure um m�dico!" << endl;
                            }
            }

        cout << "Deseja continua e calcular outro IMC (S/N)?";
        cin >> escolhacontinua;
        escolhacontinua = toupper(escolhacontinua);
        } // WHILE SIM

    } // IF ESCOLHA SIM

system("cls");
cout << "***************************************\n" << endl;
cout << "| Obrigado por utilizar um app Go!Sys |" << endl;
cout << "***************************************" << endl;

    return 0;
}
