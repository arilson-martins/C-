#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{   // declaração de variaveis
    char palavra[30],letras[1],secreta[30];
    int tam,i,chances,acertos;
    bool acerto=false;


    chances=6;
    tam=0;
    i=0;
    acerto=false;
    acertos=0;


    cout<<"Digite a palavra secreta ";
    cin>>palavra;
    system("cls");


    while(palavra[i]!='\0'){
        i++;
        tam++;
    }


    for(i=0; i<30; i++){
        secreta[i]='-';
    }


    while((chances>0)&&(acertos<tam)){
        cout<<"Chances restantes: "<<chances<<endl;
        cout<<"Palavra secreta: ";

        for(i=0; i<tam; i++){
            cout<<secreta[i];
        }

        cout<<"\n\n Digite a letra: ";
        cin>>letras[0];


        for(i=0; i<tam; i++){
            if(palavra[i]==letras[0]){
                acerto=true;
                secreta[i]=palavra[i];
                acertos++;
            }
        }



        if(!acerto){
            chances--;
        }

        acerto=false;
        system("cls");
    }

    if(acertos==tam){
        cout<<"Parabens vc venceu"<<endl;

    }
    else{
        cout<<"voce perdeu"<<endl;
    }

    system("pause");

    return 0;
}
