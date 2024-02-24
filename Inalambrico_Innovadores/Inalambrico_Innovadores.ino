//INNOVADORES
//V.M.
//Facebook:  www.facebook.com/InnovadoresBolivia
//YouTube: INNOVADORES
//Cualquier consulta no duden en hacerla 


//En esta parte declaramos los pines que utilizaremos
//en nuestro caso 2 para traccion y 2 para direccion
int adelante =2; //usaremos este pin para dar la señal de ir 
int atras=3; //usaremos este pin para dar la señal de ir atras
int izquierda =4; //usaremos este pin para dar la señal torcer la direccion hacia la izquierda 
int derecha=5; //usaremos este pin para dar la señal de torcer la direccion a la derecha
char blue; //creamos una variable para guardar las letras que nos enviara a app al apretar un boton
void setup() {
       Serial.begin(9600);//fijamos la velocidad de coneccion con el bluetooth
       /*en esta parte le decimos que nuestros pines seran de salida ya que emitiran una señal que
       ira a el puente H*/
       pinMode (adelante, OUTPUT);
       pinMode (atras, OUTPUT);
       pinMode (izquierda, OUTPUT);
       pinMode (derecha, OUTPUT);
 }
void loop() {
   if(Serial.available()>0){ // preguntamos si la app envio una letra
   blue=Serial.read(); //y si envio la letra la guardamos en nuestra variable blue
    if(blue=='F'){ //en esta parte se compara si blue es igual a F,de ser asi se ejecuta la accion de abajo
          digitalWrite(adelante, HIGH); //activa este pin que seria la marcha  
          digitalWrite(atras, LOW); //desactiva este pin para que solo avance 
          digitalWrite(izquierda, LOW); //desactiva este pin para que la direccion este recta
          digitalWrite(derecha,LOW); //desactiva este pin para que la direccion este recta
  }
    if(blue=='B'){ //en esta parte se compara si blue es igual a B de ser asi se ejecuta la accion de abajo
          digitalWrite(adelante, LOW); //desactiva este pin para que solo avance atras
          digitalWrite(atras, HIGH); //activa este pin que seria la marcha hacia atras 
          digitalWrite(izquierda, LOW); //desactiva este pin para que la dieccion este recta
          digitalWrite(derecha,LOW); //desactiva este pin para que la direccion este recta
  }
    if(blue=='L'){  //en esta parte se compara si blue es igual a L de ser asi la direccion apunta hacia la izquierda
          digitalWrite(adelante, LOW); //desactiva este pin para que solo haga la accion de torcer la direccion
          digitalWrite(atras, LOW);//desactiva este pin para que solo haga la accion de torcer la direccion
          digitalWrite(izquierda, HIGH);//activa este pin para que solo haga la accion de torcer la direccion hacia la izquierda
          digitalWrite(derecha,LOW);//desactiva este pin para que solo haga la accion de torcer la izquierda
  }
    if(blue=='R'){  //en esta parte se compara si blue es igual a R de ser asi se ejecuta la accion de torcer hacia la derecha
          digitalWrite(adelante, LOW); //desactiva este pin para que solo haga la accion de torcer 
          digitalWrite(atras, LOW);//desactiva este pin para que solo haga la accion de torcer 
          digitalWrite(izquierda, LOW);//desactiva este pin para que solo haga la accion de torcer 
          digitalWrite(derecha,HIGH);//activa este pin para que solo haga la accion de torcer hacia la derecha
  }
    if(blue=='G'){  //en esta parte se compara si blue es igual a G de ser asi se ejecuta la siguiente accion
          //en la parte de abajo se combina la marcha hacia al frente y a la zquierda 
          digitalWrite(adelante, HIGH); //activa la marcha delantera
          digitalWrite(atras, LOW); //desactiva la marcha hacia atras
          digitalWrite(izquierda, HIGH); //activa la direccion en sentido izquierda
          digitalWrite(derecha,LOW); //desactiva la direccion en sentido derecha
  }
    if(blue=='I'){  //en esta parte se compara si blue es igual a I de ser asi se ejecuta la siguiente accion 
          //en la parte de abajo se combina la marcha hacia el frente y la direccion en sentido derecha 
          digitalWrite(adelante, HIGH); //activa la marcha delantera
          digitalWrite(atras, LOW); //desactiva la marcha hacia atras
          digitalWrite(izquierda, LOW); //desactiva la direccion en sentido izquierda
          digitalWrite(derecha,HIGH); //activa la direccion en sentido derecha
  }
    if(blue=='H'){  //en esta parte se compara si blue es igual a H de ser asi se ejecuta la siguiente accion
         //en la parte de abajo se combina la marcha hacia atras y la direccion en sentido izquierda
          digitalWrite(adelante, LOW); //desactiva la marcha delantera
          digitalWrite(atras, HIGH); //activa la marcha atras
          digitalWrite(izquierda, HIGH);  //activa la direccion en sentido izquierda
          digitalWrite(derecha,LOW);  //desactiva la direccion en sentido derecha
  }
    if(blue=='J'){  //en esta parte se compara si blue es igual a J de ser asi se ejecuta la siguiente accion 
         //en la parte de abajo se combina la marcha hacia atras y la direccion en sentido derecha
          digitalWrite(adelante, LOW); //desactiva la marcha delantera
          digitalWrite(atras, HIGH); //activa la marcha atras
          digitalWrite(izquierda, LOW); //desactiva la direccion en sentido izquierda
          digitalWrite(derecha,HIGH); //activa la direccion en sentido derecha
  }
     if(blue=='S'){  //en esta parte se compara si blue es igual a S de ser asi se ejecuta la siguiente accion 
          //la app envia la letra S cuando no se apreta ningun boton para que el robot se detenga y apague todas la acciones
          digitalWrite(adelante, LOW); //desactiva la marcha 
          digitalWrite(atras, LOW);//desactiva la marcha atras
          digitalWrite(izquierda, LOW); //desactiva la direccion en sentido izquierda
          digitalWrite(derecha,LOW); //desactiva la direccion en sentido derecha
     }    
  }
}
