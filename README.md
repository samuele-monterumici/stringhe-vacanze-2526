# 1 Parte comune (tutti)
Scrivere un programma per la generazione casuale di una targa (es. ZT459QA).
Il primo, secondo, sesto e settimo charattere sono sempre char in formato minuscolo.
Il terzo, quarto e quinto carattere sono sempre numeri da 1 a 9.

Di seguito si riportano le regole per la generazione di ogni elemento della targa:
- **Elemento 1**: A partire da una stringa costante definita globalmente, lunga almeno 10 lettere, viene presa dalla quarta posizione della parola costante. la lettera deve essere una consonante. nel caso in cui sia una vocale gestire la casistica (prendere valore successivo, precedente, altro)

- **Elemento 2**: viene generato un numero casuale e trasformato in lettera mediante codice ascii corrispondente (maiuscolo) . Utilizzare funzione chr(num_generato).
La lettera deve essere una consonante. nel caso in cui sia una vocale gestire la casistica (prendere valore successivo, precedente o altro). Se il valore estratto corrisponde alla lettera precedente rigenerarlo.

- **Elementi 3,4,5**: numeri generati random mediante funzione apposita

- **Elementi 6,7**:viene generato un numero casuale, sempre e solo dispari. Il nnumero viene poi trasformato in lettera mediante codice ascii corrispondente (maiuscolo).  Le due lettere possono essere uguali. 


**Vincolo**: Usare il metodo di concatenazione per costruire la targa quindi no "+".


# 2 Parte specifica (2 gruppi)
I seguenti punti sono da svolgere a seconda dell’appartenenza del gruppo assegnato in classe Giovedi 18 Dicembre. In comune a tutti, la costruzione di un menù che gestisca le tre funzioni.

**Gruppo destra**
- (1) Sostituire la seconda e penultima lettera con il simbolo “%” riferito alla targa iniziale.

- (3) Prendere la prima targa originale e costruirla invertita utilizzando obbligatoriamente il metodo substring.

- (5) Cercare con il metodo find una lettera generata casualmente e dire se è presente o no.


**Gruppo sinistra**
- (2) Costruire una nuova stringa che abbia i primi 3 dati ho della parola poi due "xx" e gli ultimi dati che sono rimasti con la targa precedente,

- (4) Prendere la prima targa originale e costruirla invertita utilizzando obbligatoriamente il metodo at.

- (6) Cercare con il metodo find un numero generato casualmente e dire se è presente o no.


## Comportamento finale atteso del programma
Il programma, quando eseguito, deve inizialmente stampare la targa generata casualmente e successivamente mostrare il menu, rimanendo in attesa di una scelta da parte dell’utente. L’utente può scegliere uno tra i tre comportamenti possibili (dipendono dal gruppo) e, successivamente alla sua scelta, il programma mostra il risultato dello specifico punto scelto.
N.B. La targa generata inizialmente, non viene mai modificata dai punti specifici del menu, quindi chiamando tante volte la stessa funzione, si ha tutte le volte lo stesso risultato. 

# 3 Trasformazione in classe
Si vuole creare la classe TargaCasuale in modo da gestire in maniera più chiara e controllata tutto quello definito sopra (in un nuovo file). 

La classe ha come **stato**:
- il valore della stringa targa
  
La classe ha come **comportamenti**: 
- La generazione casuale della targa (secondo la parte comune)
- Funzione 1/2 (secondo la parte specifica, dipendente dal gruppo)
- Funzione 3/4 (secondo la parte specifica, dipendente dal gruppo)
- Funzione 5/6 (secondo la parte specifica, dipendente dal gruppo)

## Comportamento finale atteso dalla classe
Ci si attende che una nuova targa possa essere creata come `TargaCasuale t`.

```cpp
t.targa; // valore di targa
t.sostituisciPerc(); //ritorna nuova stringa con seconda e penultima lettera con il simbolo “%” (funzione 1 del gruppo di destra)
```

ecc per tutte le altre funzioni
