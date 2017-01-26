/*
  Mi primer Hola Mundo en Arduino
  Enciende y apaga un Led con intervalos de 1 segundo.
*/

//Se inicializa, y se configura la salida a uno de los puertos digitales.

void setup(){
pinMode(7, OUTPUT); // Pin 7 como salida.
}

//A continuación se establece la acción a realizar.

void loop(){
digitalWrite(7, HIGH); // Configura la salida 7 en modo ON
delay(1000);            // Espera 1 segundo
digitalWrite(7, LOW);  // Configura la salida 7 en modo OFF
delay(1000);            // Espera un segundo
}

/*
IMPORTANTE:
- La salida que se inicializa, debe ser la misma que se configura.
- HIG: Enciende el LED
- LOW: Apaga el LED
- Se trabaja en mili-segundos, por lo que 1000 = 1 segundo

*/
