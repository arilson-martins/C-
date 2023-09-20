#include <iostream>
#include "point2d.h"

using namespace std;

int main() {
    //contrutor defall
    point2d p1;
    cout<<"Cordenadas dos pontos p1 X= "<<p1.getX()<<" Y= "<<p1.getY()<<"\n"<<endl;

    //criação da classe e objeto alocando um heap de memoria
    point2d *p2=new point2d(12,12);
    cout<<"Cordenadas dos pontos p2  X= "<<p2->getX()<<" Y= "<<p2->getY()<<"\n"<<endl;

    //modificando valor do p2
    p2->setX(200);
    p2->setY(100);
    cout<<"Cordenadas dos pontos p2 modificado X= "<<p2->getX()<<" Y= "<<p2->getY()<<"\n"<<endl;

    //criando um ponto p3
    point2d p3(20,23);
    cout<<"Cordenadas dos pontos p3 X= "<<p3.getX()<<" Y= "<<p3.getY()<<"\n"<<endl;

    //criando o p4  e usando o contrutor de copia
    point2d p4(p3);
    cout<<"Cordenadas dos pontos p4 por copia do p3 X= "<<p4.getX()<<" Y= "<<p4.getY()<<"\n"<<endl;

    point2d p5(*p2);
    cout<<"Cordenadas dos pontos p5 por copia do p2 X= "<<p5.getX()<<" Y= "<<p5.getY()<<"\n"<<endl;

    // Liberando a memória alocada no heap para p2
    delete p2;

    return 0;
}
