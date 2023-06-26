# MacchinINO
## **Autore:** Airoldi Luca

## **Descrizione generale del progetto**:
Il progetto consiste in una macchinina telecomandata da un Wiimote (telecomando della Wii). L’obbiettivo è usare il telecomando come un vero e proprio volante che, grazie al giroscopio integrato al suo interno, si potrà usare per sterzare la macchinina in base all’inclinazione del volante. Inoltre si potrà comandare la direzione (avanti e indietro) e la velocità. Si potrà decidere tra 4 velocità “standard” (descritte sotto nella [descrizione delle velocità](#descrizione-velocità)) oppure scegliere la velocità tramite i pulsanti + e - sul Wiimote. La macchinina può essere comandata anche tramite il joystick direttamente sulla scocca (consigliata la velocità 1). Il progetto è gestito da due board, un Esp32, che si occupa di interfacciarsi con il Wiimote che poi manda all’Arduino Mega i dati del controller. L’Arduino si occupa di gestire i motori e tutti i componenti della macchina. Infatti la macchina è provvista di:

- **joystick**: usato per comandare la direzione della macchina. Inoltre se premuto viene impostata la velocità 1.
- **encoder**: serve per regolare la velocità della macchinina. Inoltre se premuto viene impostata la velocità 0.
- **giroscopio**: serve per vedere le la macchinina è nella posizione giusta, infatti se viene alzata manualmente i motori si bloccano e entra una modalità "protezione".
- **led**: in base al colore del led indica uno stato della macchinina ([descrizione colore led](#descrizione-colore-led)).
- pulsante sullo shild di Arduino: imposta la velocità 2.

<br>

- ### Descrizione velocità:
    - velocità 0: macchina ferma (folle)
    - velocità 1: macchina al minimo della velocità
    - velocità 2: macchina ad una media velocità
    - velocità 3: macchina alla massima velocità

<br>

- ### Descrizione colore led:
    - viola: fase di setup (fase iniziale) o la macchina non può muoversi perché non è parallela terreno
    - bianco: velocità 0
    - verde: velocità 1 (velocità bassa)
    - giallo: velocità 2 (velocità media)
    - rosso: velocità 3 (velocità massima)

<br>

- ### Descrizione comandi del Wiimote
    - *2*: avanti
    - *1*: indietro
    - *A*: velocità 1
    - *B*: velocità 0
    - *pad*:
        - *su*: velocità 3
        - *giù*: velocità 2
        - *destra*: la macchina gira su se stessa verso destra
        - *sinistra*: la macchina gira su se stessa verso sinistra
    - *-*: decrementa la velocità
    - *+*: incrementa la velocità

<br>

- ### Descrizione componenti sulla board:
    - *encoder*:
        - *giro in senso orario*: incrementa la velocità
        - *giro in senso antiorario*: decrementa la velocità
        - *se premuto:*: velocità 0
    - *joystick*:
        - *analogico*: decide la direzione della macchinina
        - *se premuto*: velocità 1
    - *bottone shild*: velocità 2

## Elenco dei componenti usati:
1. Arduino Mega
2. ESP32 (con breadboard dedicata)
3. Shild Arduino Uno Elegoo Smart car V4.0
4. Breadboard 30 righe
5. Encoder
6. Giroscopio
7. Joystick
8. 4x TT DC motore
9. 4x ruote per macchinina
10. Chassis della macchina
11. Powerbank (per alimentare ESP32)
12. Batteria al litio 7.4V (per alimentare Arduino Mega)
13. Cavi, viti e fascette per finire il tutto.

## [LINK REPO](https://github.com/zAiro12/SistemiEmbedded/tree/main/progetto)

## LICENZA: [WTFPL](http://www.wtfpl.net/about/)

## Data indicativa di presenzazione: Luglio 2023
