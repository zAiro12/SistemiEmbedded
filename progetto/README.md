# TITOLO

## Progetto Sistemi Embedded

- ### Autore

    Airoldi Luca

- ### Descrizione

<<<<<<< Updated upstream
Il progetto consist
=======
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

---

## Schema elettrico:
![schema elettrico]()
---

## Foto:
![fianco](/progetto/img/fianco.jpeg)
![sopra](/progetto/img/sopra.jpeg)
![volante](/progetto/img/volante.jpeg)
>>>>>>> Stashed changes
