#include<iostream>
#include<cstdlib>
#include<Math.h>

using namespace std;

void validacion();


class figuras{
    private:
        double base;
        double altura;
        double lado;
        double apotema;
    public:
        void setApotema(double);
        double getApotema();
        void setBase(double);
        double getBase();
        void setAltura(double);
        double getAltura();
        void setLado(double);
        double getLado();
};
void figuras:: setBase(double base){
    this->base=base;
}
double figuras:: getBase(){
    return this->base;
}
void figuras:: setAltura(double altura){
    this->altura=altura;
}
double figuras:: getAltura(){
    return this->altura;
}
void figuras::setLado(double lado){
    this->lado=lado;
}
double figuras::getLado(){
    return this->lado;
}
void figuras::setApotema(double apotema){
    this->apotema=apotema;
}
double figuras::getApotema(){
    return this->apotema;
}

class Triangulo:public figuras{
    private:
        double area;

    public:
        void CalcularArea();
        double getArea();
};


void Triangulo::CalcularArea(){
this->area=(this->getBase()*this->getAltura())/2;
}
double Triangulo::getArea(){
    return this->area;
}

class Cuadrado:public figuras{
    private:
        double area;

    public:
        void CalcularArea();
        double getArea();
};

void Cuadrado::CalcularArea(){
    this->area=pow(this->getLado(),2);
}
double Cuadrado::getArea(){
    return this->area;
}
class Rectangulo:public figuras{

    private:
        double area;
    public:
        void CalcularArea();
        double getArea();
};


void Rectangulo::CalcularArea(){
    this->area=(this->getBase()*this->getAltura());
}
double Rectangulo::getArea(){
    return this->area;
}

class Poligono:public figuras{
    private:
        double nl;
        double perimetro;
        double area;

    public:

        void setNl(double);
        double getNl();
        void CalcularPerimetro();
        double getPerimetro();
        void CalcularArea();
        double getArea();
};
void Poligono::setNl(double nl){
    this->nl=nl;
}
double Poligono::getNl(){
    return this->nl;
}
void Poligono::CalcularPerimetro(){
    this->perimetro=nl*getLado();
}
double Poligono::getPerimetro(){
    return this->perimetro;
}
    void Poligono::CalcularArea(){
    this->area=perimetro*getApotema()/2;
}
double Poligono::getArea(){
    return this->area;
}
void menu(){
int opc;
    cout<<"--------------------------------------------------------------------------------"<<endl;
    cout<<"| Menu |"<<endl;
    cout<<"--------------------------------------------------------------------------------"<<endl;
    cout<<"1) Triangulo"<<endl;
    cout<<"2) Cuadrado"<<endl;
    cout<<"3) Rectuangulo"<<endl;
    cout<<"4) Apotema"<<endl;
    cout<<"5) Salir"<<endl;
    cout<<"opcion: ";
    cin>>opc;
switch(opc)
{
case 1:{
    double base=0,altura=0;
    Triangulo t;
    system("cls");
    cout<<"--------------------------------------------------------------------------------"<<endl;
    cout<<"| Triangulo |"<<endl;
    cout<<"--------------------------------------------------------------------------------"<<endl;
    cout<<"Ingrese la Base del Triangulo: "; cin>>base;
    cout<<endl<<"Ingrese la Altura del Triangulo: "; cin>>altura;
    t.setBase(base);
    t.setAltura(altura);
    t.CalcularArea();
    cout<<endl<<"El Area del Triangulo es: "<<t.getArea();
    system("pause>>cls");
}
break;

case 2:{
    double lado=0;
    Cuadrado ob;
    system("cls");
    cout<<"--------------------------------------------------------------------------------"<<endl;
    cout<<"| Cuadrado |"<<endl;
    cout<<"--------------------------------------------------------------------------------"<<endl;
    cout<<"Ingrese El lado del cuadrado: "; cin>>lado;
    ob.setLado(lado);
    ob.CalcularArea();
    cout<<endl<<"El Area del Cuadrado es: "<<ob.getArea();
}
break;
case 3:
{
    double base=0,altura=0;
    Rectangulo ob;
    system("cls");
    cout<<"--------------------------------------------------------------------------------"<<endl;
    cout<<"| Rectangulo |"<<endl;
    cout<<"--------------------------------------------------------------------------------"<<endl;
    cout<<"Ingrese la Base del Rectangulo: "; cin>>base;
    cout<<"Ingrese la Altura del Rectangulo: "; cin>>altura;
    ob.setBase(base);
    ob.setAltura(altura);
    ob.CalcularArea();
    cout<<endl<<"El Area del Triangulo es: "<<ob.getArea();
    system("pause>>cls");
}
break;
    case 4:
    {
        {
    double nl=0,lado=0,apotema=0;
    Poligono p;
    system("cls");
    cout<<"--------------------------------------------------------------------------------"<<endl;
    cout<<"| Apotema |"<<endl;
    cout<<"--------------------------------------------------------------------------------"<<endl;
    cout<<"Ingrese el numero de lados: "; cin>>nl;
    cout<<"Ingrese la medida del lado: "; cin>>lado;
    cout<<"Cuanto mide su apotema: "; cin>>apotema;
    p.setNl(nl);
    p.setLado(lado);
    p.setApotema(apotema);
    p.CalcularPerimetro();
    p.CalcularArea();

    cout<<endl<<"El Perimetro del poligono es: "<<p.getPerimetro();
    cout<<endl<<"El Area del Triangulo es: "<<p.getArea();
    system("pause>>cls");
}
    }

    case 5: cout<<endl<<"Presione (0) para salir"<<endl;
    break;
    default: cout<<"Opcion invalida"<<endl;
}
}
int opc=0;
    int main(int argc, char** argv) {

    do{
        system("cls");
        menu();
        cout<<endl<<"Continuar 1[si] 0 [no] "<<endl;
        cin>>opc;
    }while(opc!=0);
    system("pause>>cls");
    return 0;
}

void validacion()
{
    char dato='x0';
        if(isdigit(dato))
            cout<<"Es un numero"<<endl;
        else
            cout<<"No es un numero"<<endl;
}
