#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

const string parola="informatica";

void menu(){
    cout<<"--MENU--"<<endl;
    cout<<"1- sostituire 'X' al posto dei numeri"<<endl;
    cout<<"2- invertire la targa utilizzando il metodo at()"<<endl;
    cout<<"3- cerca un numero utilizzando il metodo find()"<<endl;
    cout<<"4- esci"<<endl;
}

int generaNumeriTarga(){
    return rand()%10;
}

string sostituisciNumeri(string targa){
    for (int i=0;i<targa.length();i++){
        if (targa[i]>='0' && targa[i]<='9'){
            targa[i]='X';
        }
    }
    return targa;
}

string invertiTarga(string targa){
    int i=0,f=targa.size()-1;
    char temp;
    while(i<f){
        temp=targa.at(i);
        targa.at(i)=targa.at(f);
        targa.at(f)=temp;
        i++;
        f--;
    }
    return targa;
}

bool presenzaNumero(string targa, int num){
    string s=to_string(num);    // converto num in stringa con il comando to_string
    int pos=targa.find(s);
    if(pos!=-1)
        return true;
    else
        return false;
}

int main()
{   srand(time(NULL));
    int scelta,num=0;
    string targa;
    char prima,c,seconda,terzo,quarto,quinto,sesta,settima;

    if (parola.length()>4) {
        c=toupper(parola[3]);
        if (c!='A' && c!='E' && c!='I' && c!='O' && c!='U')
            prima=c;
        else{
            cout<<"la quarta lettera della parola non e' valida"<<endl;
            prima='Z';//la quarta lettera della parola non essendo una consonante non è idonea, perciò per far continuare il programma utlizizzo 'Z'
        }
    }
    else{
        cout<<"parola troppo corta";
        return 0;
    }
    targa.append(1, prima); //il primo parametro indica quante volte si vuole aggiungere il carattere, il secondo è il carattere da aggiungere (struttura del .append() con una variabile di tipo char)

    do{
        seconda=char(rand()%26+65);
    }while(prima==seconda || seconda==65 || seconda==69 || seconda==73 || seconda==79 || seconda==85);
    targa.append(1, seconda);

    terzo=generaNumeriTarga();
    targa.append(1, '0' + terzo);   //converto la variabile in in un carattere visibile nel codice ASCII (0=48 --> 48+n) (struttura del .append() con una variabile di tipo int)

    quarto=generaNumeriTarga();
    targa.append(1, '0' + quarto);

    quinto=generaNumeriTarga();
    targa.append(1, '0' + quinto);

    sesta=char(rand()%26+65);
    targa.append(1, sesta);

    settima=char(rand()%26+65);
    targa.append(1, settima);

    cout<<"targa generata: "<<targa<<endl;

    do{
        menu();
        cin>>scelta;
        switch(scelta){
            case 1:
                cout<<"la targa dopo la sostituzione dei numeri con il carattere 'X' e': "<<sostituisciNumeri(targa)<<endl;
                break;
            case 2:
                cout<<"la targa invertita e': "<<invertiTarga(targa)<<endl;
                break;
            case 3:
                cout<<"inserisci il numero da cercare all'interno della targa: ";
                cin>>num;
                if(presenzaNumero(targa,num))
                    cout<<"il numero inserito e' presente nella targa"<<endl;
                else
                    cout<<"il numero inserito non e' presente nella targa"<<endl;
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
