#include <iostream>

using namespace std;

int longitud(const char *cadenah){
 int i=0;
 while(cadenah[i]!='\0')
    i++;
 return i;
}

int main()
{
    //Longitud de const char:
    const char *cadena="Hola";
    const char *p;
    int i=0;
    for(p=cadena; *p!='\0'; ++p)
        i++;
    cout<<"Longitud: "<< i << endl;
    cout<<endl;
      
    //Longitud de const char:
    const char *cadenah="Hola Bueno";
    cout<<cadenah<<endl;
    cout<<"Longitud de frase por ensima es: "<<longitud(cadenah);

    //Eliminar los primeros caracteres de la cadena:
    const char *frase="Hola Adios";
    cout<<"Original: "<<frase<<endl;
    cout<<"Sin la primera palabra: "<<frase+5;
    cout<<endl;

    //Si quiere cambiar las letras de la palabra, no usa const char y puntero!! Usa const y corchetes:
    char palabra[]="Yatta";
    cout<<"Antes: "<<palabra<<endl;
    palabra[1]= 'e';
    cout<<"Despues: "<<palabra;
   

    return 0;
}
