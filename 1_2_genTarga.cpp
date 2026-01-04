#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

const string parola="ggggggggggg";

void menu(){
    cout<<"--MENU--"<<endl;
    cout<<"1- sostituire 'X’ al posto dei numeri"<<endl;
    cout<<"2- invertire la targa utilizzando il metodo at()"<<endl;
    cout<<"3- cerca un numero utilizzando il metodo find()."<<endl;
    cout<<"4- uscita"<<endl;
}

int generaNumeri(){
    return rand()%10;
}

int main()
{   srand(time(NULL));
    int scelta;
    string targa;
    char prima,c,seconda,terzo,quarto,quinto,sesta,settima;

   //elemento 1
    if (parola.length() > 4) {
        c=toupper(parola[4]);
        if (c!='A' && c!='E' && c!='I' && c!='O' && c!='U')
            prima=c;
        else{
            cout<<"la quarta lettera della parola non è valida"<<endl;
            prima='Z';//la quarta lettera della parola non essendo una consonante non è idonea, perciò per far continuare il programma utlizizzo 'Z'
        }
    }
    else{
        cout<<"parola troppo corta";
        return 0;
    }
    targa.append(1, prima); //il primo parametro indica quante volte si vuole aggiungere il carattere, il secondo è il carattere da aggiungere (struttura del .append() con una variabile di tipo char)

    //elemento 2
    do{
        seconda=char(rand()%26+65);
    }while(prima==seconda || seconda==65 || seconda==69 || seconda==73 || seconda==79 || seconda==85);
    targa.append(1, seconda);

    //elemento 3
    terzo=generaNumeri();
    targa.append(1, '0' + terzo);   //converto la variabile in in un carattere visibile nel codice ASCII (0=48 --> 48+n) (struttura del .append() con una variabile di tipo int)

    //elemento 4
    quarto=generaNumeri();
    targa.append(1, '0' + quarto);

    //elemento 5
    quinto=generaNumeri();
    targa.append(1, '0' + quinto);

    //elemento 6
    sesta=char(rand()%26+65);
    targa.append(1, sesta);

    //elemento 7
    settima=char(rand()%26+65);
    targa.append(1, settima);

    cout<<"targa generata: "<<targa<<endl;

    do{
        menu();
        cin>>scelta;
        switch(scelta){
            case 1:

                break;
            case 2:

                break;
            case 3:

                break;
            case 4:
                cout<<"uscita"<<endl;
                break;
            default:
                cout<<"scelta non valida"<<endl;
                break;
        }
    }while(scelta!=4);
    return 0;
}
