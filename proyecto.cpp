#include <GL/glut.h>
#include <math.h>
void escenario(){
     //cielo
     glColor3f(0.2,0.8,0.8);
     glBegin(GL_TRIANGLE_FAN);
        glVertex2i(0,640);
        glVertex2i(800,640);
        glVertex2i(800,800);
        glVertex2i(0,800);
     glEnd();
     //parque
     glColor3f(0.5,0.7,0);
     glBegin(GL_TRIANGLE_FAN);
        glVertex2i(0,0);
        glVertex2i(0,640);
        glVertex2i(800,640);
        glVertex2i(800,0);
     glEnd();
     //nubes
     glColor3f(0.9,1 ,0.8);
     glBegin(GL_TRIANGLES);
        glVertex2i(0,660);
        glVertex2i(300,660);
        glVertex2i(0,750);
     glEnd();
     double radio = 20;
     int n = 500;
     glPointSize(18);
     double teta,incremento,x,y;
     incremento = (M_PI/n)*2;
     for(int i = 0; i<=n; i++){
             teta = i*incremento;
             y = (radio)*cos(teta)+730;
             x = (radio)*sin(teta)+8;
             glBegin(GL_POINTS);
                 glVertex2f(x,y);
             glEnd();
     }
     for(int i = 0; i<=n; i++){
             teta = i*incremento;
             y = (radio)*cos(teta)+720;
             x = (radio)*sin(teta)+55;
             glBegin(GL_POINTS);
                 glVertex2f(x,y);
             glEnd();
     }
     for(int i = 0; i<=n; i++){
             teta = i*incremento;
             y = (radio)*cos(teta)+710;
             x = (radio)*sin(teta)+100;
             glBegin(GL_POINTS);
                 glVertex2f(x,y);
             glEnd();
     }
     for(int i = 0; i<=n; i++){
             teta = i*incremento;
             y = (radio)*cos(teta)+695;
             x = (radio)*sin(teta)+150;
             glBegin(GL_POINTS);
                 glVertex2f(x,y);
             glEnd();
     }
     for(int i = 0; i<=n; i++){
             teta = i*incremento;
             y = (radio)*cos(teta)+680;
             x = (radio)*sin(teta)+200;
             glBegin(GL_POINTS);
                 glVertex2f(x,y);
             glEnd();
     }
     //edificios
     glColor3f(0.4,0.7,0.7);
     glBegin(GL_TRIANGLE_FAN);
        glVertex2i(520,640);
        glVertex2i(520,768);
        glVertex2i(580,768);
        glVertex2i(580,640);
     glEnd();
     glColor3f(0.4,0.7,0.8);
     glBegin(GL_POLYGON);
        glVertex2i(390,640);
        glVertex2i(390,750);
        glVertex2i(450,750);
        
        glVertex2i(450,780);
        glVertex2i(500,780);
        glVertex2i(500,730);
        
        glVertex2i(550,730);
        glVertex2i(550,640);
     glEnd();

     //arbusto
     glPointSize(28.0);
     glColor3f(0.5,0.7,0);
      radio = 10.0;
     for(int i = 0; i<=n; i++){
             teta = i*incremento;
             y = (radio)*cos(teta)+645;
             x = (radio+70)*sin(teta/4);
             glBegin(GL_POINTS);
                 glVertex2f(x,y);
             glEnd();
     }
     for(int i = 0; i<=n; i++){
             teta = i*incremento;
             y = (radio)*cos(teta)+645;
             x = (radio+70)*sin(teta/4)+90;
             glBegin(GL_POINTS);
                 glVertex2f(x,y);
             glEnd();
     }
     radio= 10;
     for(int i = 0; i<=n; i++){
             teta = i*incremento;
             y = (radio)*cos(teta)+645;
             x = (radio+70)*sin(teta/4)+180;
             glBegin(GL_POINTS);
                 glVertex2f(x,y);
             glEnd();
     }
     for(int i = 0; i<=n; i++){
             teta = i*incremento;
             y = (radio)*cos(teta)+645;
             x = (radio+70)*sin(teta/4)+260;
             glBegin(GL_POINTS);
                 glVertex2f(x,y);
             glEnd();
     }
     //arboles
     radio = 40.0;
     glPointSize(25.0);
     glColor3f(0.5,0.3,0.1);
      
     for(int i = 0; i<=n; i++){
             teta = i*incremento;
             x = (radio+10)*cos(teta/12)+700;
             y = (radio)*sin(teta)+550;
             glBegin(GL_POINTS);
                 glVertex2f(x,y);
             glEnd();
     }
     glBegin(GL_TRIANGLE_FAN);
         glColor3f(0.4,0.6,0);
         glVertex2i(700,600);
         glVertex2i(800,600);
         glColor3f(0.4,0.6,0.1);
         glVertex2i(800,710);
         glVertex2i(700,710); 
     glEnd();
     radio = 18.0;
     glPointSize(20.0);
     glColor3f(0.4,0.6,0);
     for(int i = 0; i<=n; i++){
             teta = i*incremento;
             x = (radio)*cos(teta)+773;
             y = (radio)*sin(teta)+610;
             glBegin(GL_POINTS);
                 glVertex2f(x,y);
             glEnd();
     }
     for(int i = 0; i<=n; i++){
             teta = i*incremento;
             x = (radio)*cos(teta)+743;
             y = (radio)*sin(teta)+615;
             glBegin(GL_POINTS);
                 glVertex2f(x,y);
             glEnd();
     }
     for(int i = 0; i<=n; i++){
             teta = i*incremento;
             x = (radio)*cos(teta)+713;
             y = (radio)*sin(teta)+605;
             glBegin(GL_POINTS);
                 glVertex2f(x,y);
             glEnd();
     }
     glColor3f(0.4,0.6,0.1);
     for(int i = 0; i<=n; i++){
             teta = i*incremento;
             x = (radio)*cos(teta)+711;
             y = (radio)*sin(teta)+668;
             glBegin(GL_POINTS);
                 glVertex2f(x,y);
             glEnd();
     }
     glColor3f(0.4,0.6,0);
     for(int i = 0; i<=n; i++){
             teta = i*incremento;
             x = (radio)*cos(teta)+718;
             y = (radio)*sin(teta)+635;
             glBegin(GL_POINTS);
                 glVertex2f(x,y);
             glEnd();
     }
     radio = 30;
     glColor3f(0.4,0.6,0.1);
     glPointSize(40);
     for(int i = 0; i<=n; i++){
             teta = i*incremento;
             x = (radio)*cos(teta)+782;
             y = (radio)*sin(teta)+690;
             glBegin(GL_POINTS);
                 glVertex2f(x,y);
             glEnd();
     }
     radio = 18.0;
     glPointSize(20.0);
     for(int i = 0; i<=n; i++){
             teta = i*incremento;
             x = (radio)*cos(teta)+706;
             y = (radio)*sin(teta)+700;
             glBegin(GL_POINTS);
                 glVertex2f(x,y);
             glEnd();
     }
     for(int i = 0; i<=n; i++){
             teta = i*incremento;
             x = (radio)*cos(teta)+746;
             y = (radio)*sin(teta)+705;
             glBegin(GL_POINTS);
                 glVertex2f(x,y);
             glEnd();
     }
     //arbol2
     radio = 10.0;
     glPointSize(15.0);
     glColor3f(0.5,0.3,0.1);
      
     for(int i = 0; i<=n; i++){
             teta = i*incremento;
             x = (radio+10)*cos(teta/12)+370;
             y = (radio)*sin(teta)+630;
             glBegin(GL_POINTS);
                 glVertex2f(x,y);
             glEnd();
     }
     glPointSize(30);
     glColor3f(0.4,0.6,0);
     for(int i = 0; i<=n; i++){
             teta = i*incremento;
             y = (radio)*cos(teta)+670;
             x = (radio)*sin(teta)+390;
             glBegin(GL_POINTS);
                 glVertex2f(x,y);
             glEnd();
     }
     //arbol 3
     radio = 10.0;
     glPointSize(15.0);
     glColor3f(0.5,0.3,0.1);
      
     for(int i = 0; i<=n; i++){
             teta = i*incremento;
             x = (radio+10)*cos(teta/12)+30;
             y = (radio)*sin(teta)+605;
             glBegin(GL_POINTS);
                 glVertex2f(x,y);
             glEnd();
     }
     glPointSize(30);
     glColor3f(0.4,0.6,0);
     for(int i = 0; i<=n; i++){
             teta = i*incremento;
             y = (radio)*cos(teta)+640;
             x = (radio)*sin(teta)+50;
             glBegin(GL_POINTS);
                 glVertex2f(x,y);
             glEnd();
     }
     glFlush();
}

void cigarro(){
     //primer rectangulo del cigarro difuminado
     glBegin(GL_POLYGON);
         glColor3f(0.9, 0.9,0.9);
         glVertex2i(650, 600);
         glColor3f(0,0,0);
         glVertex2i(650, 410);
         glColor3f(0.9, 0.9,0.9);
         glVertex2i(700, 410);
         glColor3f(0,0,0);
         glVertex2i(700, 600);
     glEnd();
     //segundo retangulo del cigarro color negro
     glBegin(GL_POLYGON);
         glColor3f(0,0,0);
         glVertex2i(700, 410);
         glVertex2i(650, 410);
         glVertex2i(650, 200);
         glVertex2i(700, 200); 
     glEnd();
     glFlush();
}

void boquillaCigarro(){
      //boquilla
     glBegin(GL_POLYGON);
         glColor3f(0.4,0.4,0.4);
         glVertex2i(695, 670 );
          glColor3f(0,0,0);
         glVertex2i(655, 670 );
         glColor3f(0.4,0.4,0.4);
         
         glVertex2i(658,665);
         glColor3f(0,0,0);
         glVertex2i(660, 660);
         glColor3f(0.4,0.4,0.4);
         glVertex2i(665, 650 );
         glColor3f(0,0,0);
         glVertex2i(665, 640);
         glColor3f(0.4,0.4,0.4);
         glVertex2i(665, 630);
         glColor3f(0,0,0);
         glVertex2i(660, 620 );
         glColor3f(0.4,0.4,0.4);
         glVertex2i(660, 610 );
         glColor3f(0,0,0);
         glVertex2i(650, 600);
         //
         
     glEnd();
     glBegin(GL_POLYGON);
         glColor3f(0.4,0.4,0.4);
         glVertex2i(650, 600);
         glColor3f(0,0,0);
         glVertex2i(700, 600 );
         glColor3f(0.4,0.4,0.4);
         
         glVertex2i(690, 610 );
         glColor3f(0,0,0);
         glVertex2i(690, 620 );
         glColor3f(0.4,0.4,0.4);
         glVertex2i(685, 630 );
         glColor3f(0,0,0);
         glVertex2i(685, 640);
         glColor3f(0.4,0.4,0.4);
         glVertex2i(685, 650 );
         glColor3f(0,0,0);
         glVertex2i(690, 660);
         glColor3f(0.4,0.4,0.4);
         glVertex2i(692,665);
         glColor3f(0,0,0);
         
         glVertex2i(695, 670);
     glEnd();
     glFlush();
}

void cejasOjosBocaCigarro(){
     glLineWidth(5);
     glBegin(GL_LINES);
        glColor3f(0.3, 0, 0);
        //ceja derecha
        glVertex2i(670, 550);
        glVertex2i(685, 555);
        //ceja izquierda
        glVertex2i(655, 550);
        glVertex2i(650, 553);
     glEnd();
     //nariz
     glBegin(GL_TRIANGLES);
        glColor3f(0,0,0);
        glVertex2i(662, 530);
        glVertex2i(640, 510);
        glColor3f(0.9,0.9,1);
        glVertex2i(662, 515);
     glEnd();
     
     //ojos
     glPointSize(5);
     glBegin(GL_POINTS);
            //primer ojo derecho
            glColor3f(0,0,0);
            glVertex2i(672,535);
            glVertex2i(675,537);
            glVertex2i(678,539);
            glVertex2i(681,537);
            glVertex2i(683,535);
            //segundo ojo izquierdo
            glVertex2i(656,535);
            glVertex2i(653,537);
            glVertex2i(651,539);
     glEnd();
     
    //arruga debajo del ojo derecho
     glLineWidth(1);
     glBegin(GL_LINES);
        glColor3f(0,0,0);
        glVertex2i(670, 526);
        glColor3f(0.9,1,1);
        glVertex2i(675, 526); 
        glColor3f(0,0,0);
        glVertex2i(680, 524);
        glVertex2i(685, 524);
     glEnd();
     //boca linea de arriba
     glPointSize(2);
     glBegin(GL_POINTS);
         glVertex2i(650, 502);
         glVertex2i(651, 502);
         glVertex2i(652, 503); 
         glVertex2i(653, 503);
         glVertex2i(654, 504);
         glVertex2i(655, 504); 
         glVertex2i(656, 505);
         glVertex2i(657, 505);
         glVertex2i(658, 506);
         glVertex2i(659, 506);
         glVertex2i(660, 506);
         glVertex2i(661, 505);
         glVertex2i(662, 505);
         glVertex2i(663, 504); 
         glVertex2i(664, 504);
         glVertex2i(665, 503);
         glVertex2i(666, 503);  
         glVertex2i(667, 502);
         glVertex2i(668, 502); 
         glVertex2i(669, 501); 
         glVertex2i(669, 500);
         
         glVertex2i(670, 499);
         glVertex2i(670, 498);
         glVertex2i(671, 497);
         //boca linea de abajo
         glVertex2i(650, 490);
         glVertex2i(651, 490);
         glVertex2i(652, 489); 
         glVertex2i(653,489);
         glVertex2i(654,488);
         glVertex2i(655,488); 
         glVertex2i(656,487);
         glVertex2i(657, 487);
         glVertex2i(658, 487);
         glVertex2i(659, 486);
         glVertex2i(660, 486);
         glVertex2i(661, 487);
         glVertex2i(662, 487);
         glVertex2i(663, 488); 
         glVertex2i(664, 488);
         glVertex2i(665, 489);
         glVertex2i(666, 489);  
         glVertex2i(667, 490);
         glVertex2i(668, 491); 
         glVertex2i(669, 492); 
         glVertex2i(669, 493);
         
         glVertex2i(670, 494);
         glVertex2i(671, 495);
         glVertex2i(672, 496);
     glEnd();
     
     glFlush();
}

void botonCigarro(){
     //lineas a lo largo del cigarro
     glLineWidth(20);
     glBegin(GL_LINES);
         glColor3f(0.7,0.4,0.2);
     //linea arriba de linea 1
         glVertex2i(650,590);
         glVertex2i(700,590); 
     //linea(1) arriba de boton
        glVertex2i(650, 400);
        glVertex2i(700, 400);
     glEnd();
     //boton del cigarro
     glColor3f(0,0,0);
      glPointSize(15.0);
      glBegin(GL_POINTS);
         glVertex2f(675,400);
      glEnd();
   glFlush();
}
//humo que genera cigarro
 void humoCigarro(){
     double radio = 10.0;
     int n = 500;
     double teta,incremento,x,y;
     incremento = 2*M_PI/n;
     
     glPointSize(12.0);
     glColor3f(0.4,0.4,0.4);
      
     for(int i = 0; i<=n; i++){
             teta = i*incremento;
             y = (radio)*cos(teta)+530;
             x =(radio)*sin(teta)+625;
             glBegin(GL_POINTS);
               glVertex2f(x,y);
             glEnd();
     } 
    for(int i = 0; i<=n; i++){
             teta = i*incremento;
             y = (radio)*cos(teta)+538;
             x =(radio)*sin(teta)+615;
             glBegin(GL_POINTS);
               glVertex2f(x,y);
             glEnd();
     } 
    for(int i = 0; i<=n; i++){
             teta = i*incremento;
             y = (radio)*cos(teta)+550;
             x =(radio)*sin(teta)+620;
             glBegin(GL_POINTS);
               glVertex2f(x,y);
             glEnd();
     } 
     for(int i = 0; i<=n; i++){
             teta = i*incremento;
             y = (radio)*cos(teta)+565;
             x =(radio)*sin(teta)+610;
             glBegin(GL_POINTS);
               glVertex2f(x,y);
             glEnd();
     } 
     for(int i = 0; i<=n; i++){
             teta = i*incremento;
             y = (radio)*cos(teta)+578;
             x =(radio)*sin(teta)+613;
             glBegin(GL_POINTS);
               glVertex2f(x,y);
             glEnd();
     } 
     glFlush();
}
//
void chicaConsumidaPorCigarro(){
     //piernas
     glLineWidth(8);
     glColor3f(1,0.9,0.7);
     glBegin(GL_LINES);
         glVertex2i(650, 496);
         glVertex2i(660, 497);
     glEnd();
     glLineWidth(11);
     glBegin(GL_LINES);
        glVertex2i(650, 496);
        glVertex2i(615, 496);
     glEnd();
     glLineWidth(1);
     glColor3f(0,0,0);
     glBegin(GL_LINES);
        glVertex2i(650, 497);
        glVertex2i(615, 497);
     glEnd();
     //short
     glLineWidth(20);
     glPolygonMode(GL_FRONT, GL_FILL);
     glFrontFace(GL_CW);
     glBegin(GL_POLYGON);
        glVertex2i(618, 487);
        glVertex2i(618, 502);
        glVertex2i(603, 502);
        glVertex2i(603, 487);
        glVertex2i(605, 484);
        
     glEnd();
     //estomago
     glColor3f(1,0.9,0.7);
     glBegin(GL_POLYGON);
        glVertex2i(603, 502);
        glVertex2i(603, 487);
        glVertex2i(573, 487);
        glVertex2i(573, 502);
     glEnd();
     //playera
     glColor3f(0.9,0.2,0);
     glBegin(GL_POLYGON);
        glVertex2i(603, 502);
        glVertex2i(603, 487);
        glVertex2i(579, 487);
        glVertex2i(579, 502);
     glEnd();
     glLineWidth(1);
     glBegin(GL_LINES);
       glVertex2i(579, 499);
       glVertex2i(573, 499);
       
       glVertex2i(579, 495);
       glVertex2i(573, 495);
     glEnd();
     //cuello
     glColor3f(1,0.9,0.7);
     
     glBegin(GL_TRIANGLE_FAN);
        glVertex2i(573, 500);
        glVertex2i(573, 490);
        glColor3f(0.4,0,0);
        glVertex2i(558, 490);
        glVertex2i(558, 500);
     glEnd();   
     //cabeza 
     glFlush();
}

void CabezaChicaConsumida(){
     double radio = 15.0;
     int n = 500;
     double teta,incremento,x,y;
     incremento = 2*M_PI/n;
     
     glPointSize(5.0);
      
     for(int i = 0; i<=n; i++){
             teta = i*incremento;
             y = (radio)*cos(teta+22)+495;
             x =( (radio+15)*sin(teta)/2)+541;
             glBegin(GL_POINTS);
               glColor3f(1,0.9,0.7);
               glVertex2f(x,y);
             glEnd();
     } 
     radio =10;
     for(int i = 0; i<=n; i++){
             teta = i*incremento;
             y = (radio)*cos(teta+22)+495;
             x =( (radio+15)*sin(teta)/2)+541;
             glBegin(GL_POINTS);
               glColor3f(1,0.9,0.7);
               glVertex2f(x,y);
             glEnd();
     }
     radio =4;
     glPointSize(8.0);
     for(int i = 0; i<=n; i++){
             teta = i*incremento;
             y = (radio)*cos(teta+22)+495;
             x =( (radio+15)*sin(teta)/2)+541;
             glBegin(GL_POINTS);
               glColor3f(1,0.9,0.7);
               glVertex2f(x,y);
             glEnd();
     }  
     //ojos
     radio = 5.0;
     glPointSize(1.0);
      
     for(int i = 0; i<=n; i++){
             teta = i*incremento;
             glColor3f(0,0,0);
             y = (radio)*cos(teta)+505;
             x = ((radio+40)*sin(teta)/8)+539;
             glBegin(GL_POINTS);
               glVertex2f(x,y);
             glEnd();
     }
     for(int i = 0; i<=n; i++){
             teta = i*incremento;
             glColor3f(0,0,0);
             y = (radio)*cos(teta)+492;
             x = ((radio+40)*sin(teta)/8)+539;
             glBegin(GL_POINTS);
               glVertex2f(x,y);
             glEnd();
     }
     //pupila
     glPointSize(2);
     glBegin(GL_POINTS);
        glVertex2i(540,505);
        glVertex2i(540,492);
     glEnd();
     //ojosrojos
     glLineWidth(2);
     glColor3f(0.8,0,0);
     glBegin(GL_LINES);
        glVertex2i(535,506);
        glVertex2i(537,504);
        
        glVertex2i(537,504);
        glVertex2i(539,505);
        
        glVertex2i(540,508);
        glVertex2i(545,504);
     glEnd();
     
     glBegin(GL_LINES);
        glVertex2i(535,493);
        glVertex2i(537,491);
        
        glVertex2i(537,491);
        glVertex2i(539,492);
        
        glVertex2i(540,495);
        glVertex2i(545,491);
     glEnd();
     //boca
     glLineWidth(2);
     glColor3f(0.7,0.7,0.2);
     glBegin(GL_LINES);
         glVertex2i(552,503);
         glVertex2i(552,494);
     glEnd();
     //nariz
     glColor3f(0.8,0,0);
     glBegin(GL_TRIANGLE_STRIP);
          glVertex2i(538,499);
          glVertex2i(544,504);
          glColor3f(0.8,0.9,0.7);
          glVertex2i(550,499);
     glEnd();
     //cabello reseco}
      glColor3f(0.7,0.6,0.3);
      glLineWidth(5);
     glBegin(GL_LINES);
        glVertex2i(533,513);
        glColor3f(0,0,0);
        glVertex2i(527,460);
        glColor3f(0.7,0.6,0.3);  
        glVertex2i(528,513);
        glColor3f(0,0,0);
        glVertex2i(534,465);
        glColor3f(0.7,0.6,0.3);
       glVertex2i(525,508);
       glColor3f(0,0,0);
       glVertex2i(527,470);
       glColor3f(0.7,0.6,0.3);
       glVertex2i(533,513);
       glColor3f(0,0,0);
       glVertex2i(520,450);
     glEnd();
     glFlush();      
}
//brazos chica consumida por el tabaco
void brazosChica(){
     glLineWidth(7);
     glColor3f(1,0.9,0.5);
     glBegin(GL_LINES);
       glVertex2i(573,504);
       glVertex2i(600,500);
       
       glVertex2i(575,490);
       glVertex2i(600,479);
     glEnd();
}

//
void camino(){
     glColor3f(1,1,0.5);
     glBegin(GL_TRIANGLE_FAN);
       glVertex2i(0,550);
       glVertex2i(-20,510);
       glVertex2i(170, 600);
       glVertex2i(240, 640);
     glEnd();
     glBegin(GL_TRIANGLE_FAN);
       glVertex2i(0, 550);
       glVertex2i(0, 510);
       glVertex2i(380, 470);
       glVertex2i(450, 500);
     glEnd();
     glBegin(GL_TRIANGLE_FAN);
        glVertex2i(340, 480);
        glVertex2i(20,360);
        glVertex2i(70,330);
        glVertex2i(450, 500);
     glEnd();
     glBegin(GL_TRIANGLE_FAN);
        glVertex2i(100, 340);
        glVertex2i(20,360);
        glVertex2i(200,200);
        glVertex2i(250,200);
     glEnd();
     glBegin(GL_TRIANGLE_FAN);
        glVertex2i(190,240);
        glVertex2i(200,200);
        glVertex2i(500,200);
        glVertex2i(500,240);
     glEnd();
//lamparas
     glColor3f(0,0,0);
     glLineWidth(10);
     glBegin(GL_LINES);
         glVertex2i(50,150);
         glVertex2i(50, 380);
     glEnd();
     glBegin(GL_TRIANGLES);
         //glVertex2i(50,376);
         glVertex2i(30,415);
         glVertex2i(50,440);
         glVertex2i(70,415);
     glEnd();
     glLineWidth(5);
     glBegin(GL_LINES);
        glVertex2i(33,415);
        glVertex2i(50, 374);
        
        glVertex2i(45,415);
        glVertex2i(50, 374);
        
        glVertex2i(55,415);
        glVertex2i(50, 374);
        
        glVertex2i(67,415);
        glVertex2i(50, 374);
     glEnd();
     //LAMPARA 2
      glColor3f(0,0,0);
     glLineWidth(10);
     glBegin(GL_LINES);
         glVertex2i(420,310);
         glVertex2i(420, 510);
     glEnd();
     
     glBegin(GL_TRIANGLES);
         //glVertex2i(50,376);
         glVertex2i(400,540);
         glVertex2i(420,565);
         glVertex2i(440,540);
     glEnd();
     glLineWidth(5);
     glBegin(GL_LINES);
        glVertex2i(403,540);
        glVertex2i(420,507);
        
        glVertex2i(410,540);
        glVertex2i(420,507);
        
        glVertex2i(430,540);
        glVertex2i(420,507);
        
        glVertex2i(437,540);
        glVertex2i(420,507);
     glEnd();
     //BANCA
     glLineWidth(6);
     glColor3f(0,0,0);
     glBegin(GL_LINE_LOOP);
         glVertex2i(130,555);
         glVertex2i(200,550);
         glVertex2i(220,570);
         glVertex2i(150,575);
         
     glEnd();
     glBegin(GL_LINES);
        glVertex2i(130,555);
        glVertex2i(130,535);
        
        glVertex2i(200,550);
        glVertex2i(200,530);
        
        glVertex2i(220,570);
        glVertex2i(220,550);
        
        glVertex2i(150,575);
        glVertex2i(150,555);
        //tablas de banca
         glVertex2i(135,563);
         glVertex2i(207,558);
         
         glVertex2i(141,570);
          glVertex2i(212,565);
     glEnd();
     glBegin(GL_LINE_STRIP);
     //recargadera de banca
        glVertex2i(150,575);
        glVertex2i(148,595);
        glVertex2i(222,595);
        glVertex2i(220,570);
     glEnd();
     
     glFlush(); 
}
//cabeza
void cabeza(){
     double radio = 30.0;
     int n = 500;
     double teta,incremento,x,y;
     incremento = 2*M_PI/n;
     
     glPointSize(2.0);
      
     for(int i = 0; i<=n; i++){
             teta = i*incremento;
             y = (radio)*cos(teta+22)+660;
             x =( (radio+15)*sin(teta)+630)/2;
             glBegin(GL_POINTS);
               glColor3f(1,0.9,0.7);
               glVertex2f(x,y);
             glEnd();
     } 
     radio = 20.0;
     glPointSize(10.0);
      
     for(int i = 0; i<=n; i++){
             teta = i*incremento;
             y = (radio+4)*cos(teta+22)+660;
             x =( (radio+15)*sin(teta)+630)/2;
             glBegin(GL_POINTS);
               glColor3f(1,0.9,0.7);
               glVertex2f(x,y);
             glEnd();
     }
     radio = 10.0;
     glPointSize(10.0);
      
     for(int i = 0; i<=n; i++){
             teta = i*incremento;
             y = (radio+4)*cos(teta+22)+660;
             x =( (radio+20)*sin(teta)+630)/2;
             glBegin(GL_POINTS);
               glColor3f(1,0.9,0.7);
               glVertex2f(x,y);
             glEnd();
     }
     glPointSize(25.0);
     glBegin(GL_POINTS);
        glVertex2i(316,660);
     glEnd();
     //cabello
     radio = 15.0, n = 500,teta= 0,x = 0.0,y = 0.0;
     incremento = 2*M_PI/n;
     
     glPointSize(10.0);
     for(int i = 0; i<=n; i++){
             teta = i*incremento;
             y = (radio)*cos(teta+23)+670;
             x = ((radio+90)*sin(teta)/8)+309;
             glBegin(GL_POINTS);
               glColor3f(0,0,0);
               glVertex2f(x,y);
             glEnd();
     }
     glColor3f(0,0,0);
     glPointSize(10);
     glBegin(GL_POINTS);
        glVertex2i(295, 670);
        glVertex2i(297, 676);
        glVertex2i(299, 682);
        glVertex2i(305, 684);
        glVertex2i(307, 686);
        glVertex2i(315, 687);
        //coleta
        glColor3f(0,0,0);
        glVertex2i(291, 682);
        glVertex2i(291, 678);
        glVertex2i(285, 678);
        glVertex2i(285, 674);
        glVertex2i(279, 674);
        glVertex2i(279, 670);
        glVertex2i(275, 670);
        glVertex2i(275, 666);
        glVertex2i(277, 660);
        glColor3f(0,0,1);
        glVertex2i(295, 683);
     glEnd();
     //cejas
     glLineWidth(5);
     glColor3f(0,0,0);
     glBegin(GL_LINES);
        glVertex2i(325,668);
        glVertex2i(335, 673);
     glEnd();
     glFlush();       
}
//
void ojosChica(){
     double radio = 5.0;
     int n = 500;
     double teta,incremento,x,y;
     incremento = 2*M_PI/n;
     
     glPointSize(1.0);
      
     for(int i = 0; i<=n; i++){
             teta = i*incremento;
             glColor3f(0,0,0);
             y = (radio)*cos(teta)+661;
             x = ((radio+20)*sin(teta)/8)+333;
             glBegin(GL_POINTS);
               glVertex2f(x,y);
             glEnd();
     }
     //pupila
     glPointSize(5.0);
     glColor3f(0,0,0);
     glBegin(GL_POINTS);
       glVertex2i(335,659);
     glEnd();
     //nariz
     glLineWidth(5);
     glColor3f(1,0.9,0.7);
     glBegin(GL_TRIANGLES);
        glVertex2i(336,663);
        glVertex2i(343, 658);
        glVertex2i(336,653);
     glEnd();
     glFlush();
}
//
void boca(){
     //labios
     glLineWidth(5);
     glColor3f(1,0.1,0);
     glBegin(GL_LINES);
       glVertex2i(330,645);
       glVertex2i(338,648);
       glVertex2i(330,645);
       glVertex2i(336,640);
     glEnd();
     //cuello
     glColor3f(1,0.9,0.7);
     glBegin(GL_TRIANGLE_FAN);
       glVertex2i(310, 640);
       glVertex2i(310, 620);
       glVertex2i(317, 620);
       glVertex2i(317, 640);
     glEnd();
     //cuerpo y playera
     glBegin(GL_POLYGON);
        glVertex2i(309,621);
        glVertex2i(303,606);
        glVertex2i(305,572);
        glVertex2i(323,572);
        glVertex2i(324,606);
        glVertex2i(320,621);
     glEnd();
     //playera
     glColor3f(0.9,0.2,0);
     glBegin(GL_POLYGON);
        glVertex2i(303,604);
        glVertex2i(305,572);
        glVertex2i(323,572);
        glVertex2i(324,610);
        glVertex2i(315,613);
     glEnd();
     
     glColor3f(0.9,0.2,0);
     glLineWidth(3);
     glBegin(GL_LINES);
        glVertex2i(315,613);
        glVertex2i(309,624);
        
        glVertex2i(322,610);
        glVertex2i(319,622);
     glEnd();
     //piernas
     glColor3f(0,0,0);
     glBegin(GL_POLYGON);
        glVertex2i(323,572);
        glVertex2i(305,572);
        glVertex2i(299,565);
        glVertex2i(299,564);
        glVertex2i(300,561);
        glVertex2i(305,560);
        
        glVertex2i(321, 547);
        glVertex2i(339, 547);
     glEnd();
     //pierna izquierda
     glBegin(GL_TRIANGLE_FAN);
        glVertex2i(323,572);
        glVertex2i(305,572);
        glVertex2i(295,547);
        glVertex2i(313,547);
     glEnd();
     //parte de la rodilla y pie derecha
     glColor3f(1,0.9,0.7);
    glBegin(GL_POLYGON);
        glVertex2i(339,547);
        glVertex2i(323,547);
        glVertex2i(330,514);
        glVertex2i(343,514);
     glEnd();
     //izquierda
     glBegin(GL_POLYGON);
        glVertex2i(310,547);
        glVertex2i(295,547);
        glVertex2i(280,516);
        glVertex2i(295,516);
     glEnd();
     
     glColor3f(0,0,0);
     //derecha
      glBegin(GL_POLYGON);
        glVertex2i(343,516);
        glVertex2i(329,514);
        glVertex2i(327,504);
        glVertex2i(352,504);
        glVertex2i(352,510);
        glVertex2i(332,513);
     glEnd();
     //zapatos
     glBegin(GL_POLYGON);
        glVertex2i(295,518);
        glVertex2i(280,516);
        glVertex2i(277,506);
        glVertex2i(303,506);
        glVertex2i(303,512);
        glVertex2i(283,515);
     glEnd();
     glFlush();
}
//

void brazos(){
     glColor3f(1,0.9,0.7);
     //brazo izquierdo
      glBegin(GL_POLYGON);
        glVertex2i(323,619);
        glVertex2i(321,614);
        glVertex2i(324,566);
        glVertex2i(330,562);
     glEnd();
     //brazo antes de codo
     glBegin(GL_POLYGON);
        glVertex2i(305,615);
        glVertex2i(304,606);
        glVertex2i(348,608);
        glVertex2i(342,615);
     glEnd();
     //despues de codo
    glBegin(GL_POLYGON);
        glVertex2i(348,608);
        glVertex2i(342,613);
        glVertex2i(342,637);
        glVertex2i(349,636);
     glEnd();
     //dedos
     glLineWidth(4);
     glBegin(GL_LINES);
        glVertex2i(342,637);
        glVertex2i(343,639);
        
        glVertex2i(344,637);
        glVertex2i(345,639);
     glEnd();
     glFlush();
}
void cigarroDeChica(){
     glLineWidth(6);
     glColor3f(0,0,0);
     glBegin(GL_LINES);
        glColor3f(0.4,0.4,0.4);
        glVertex2i(335,644);
        glVertex2i(358,632); 
        glColor3f(0,0,0);
        glVertex2i(347,637);
        glVertex2i(358,632);
     glEnd();
     //boton de cigarro
     glPointSize(3);
     glBegin(GL_POINTS);
        glVertex2i(343,639);
     glEnd();
     glFlush();
}

void humoDeCigarroDeChica(){
     double radio = 10.0;
     int n = 500;
     double teta,incremento,x,y;
     incremento = 2*M_PI/n;
     
     glPointSize(12.0);
     glColor3f(0.4,0.4,0.4);
      
     for(int i = 0; i<=n; i++){
             teta = i*incremento;
             y = (radio)*cos(teta)+670;
             x =(radio)*sin(teta)+360;
             glBegin(GL_POINTS);
               glVertex2f(x,y);
             glEnd();
     } 
     for(int i = 0; i<=n; i++){
             teta = i*incremento;
             y = (radio)*cos(teta)+685;
             x =(radio)*sin(teta)+375;
             glBegin(GL_POINTS);
               glVertex2f(x,y);
             glEnd();
     } 
     for(int i = 0; i<=n; i++){
             teta = i*incremento;
             y = (radio)*cos(teta)+672;
             x =(radio)*sin(teta)+373;
             glBegin(GL_POINTS);
               glVertex2f(x,y);
             glEnd();
     } 
     for(int i = 0; i<=n; i++){
             teta = i*incremento;
             y = (radio)*cos(teta)+690;
             x =(radio)*sin(teta)+383;
             glBegin(GL_POINTS);
               glVertex2f(x,y);
             glEnd();
     } 
     glPointSize(5);
     for(int i = 0; i<=n; i++){
             teta = i*incremento;
             y = (radio)*cos(teta)+695;
             x =(radio)*sin(teta)+385;
             glBegin(GL_POINTS);
               glVertex2f(x,y);
             glEnd();
     } 
     glFlush();
}

void frase(){
     glColor3f(0.9,0,0);
     glLineWidth(4);
     glBegin(GL_LINES);
         glVertex2i(450, 750);
         glVertex2i(450, 770);
         
         glVertex2i(435, 770);
         glVertex2i(465, 770);  
         //E1
         glVertex2i(468,760);
         glVertex2i(483,760);
     glEnd();
     glBegin(GL_LINE_STRIP);
     //E1
         glVertex2i(483,770);
         glVertex2i(468, 770);
         glVertex2i(468,750);
         glVertex2i(483,750);
     glEnd();
     //R
     glBegin(GL_LINE_LOOP);
         glVertex2i(486,770);
         glVertex2i(486,762);
         glVertex2i(501,762);
         glVertex2i(501,770);
     glEnd();
     glBegin(GL_LINE_STRIP);
        glVertex2i(486,750);
        glVertex2i(486,762);
        glVertex2i(501,750);
     glEnd();
     //M
     glBegin(GL_LINE_STRIP);
        glVertex2i(504,750);
        glVertex2i(504,770);
        glVertex2i(512,765);
        glVertex2i(520,770);
        glVertex2i(520,750);
     glEnd();
     //I
     glBegin(GL_LINES);
        glVertex2i(525,770);
        glVertex2i(525,750);
        //rayita de A
        glVertex2i(544,760);
        glVertex2i(554,760);
     glEnd();
     //N
     glBegin(GL_LINE_STRIP);
        glVertex2i(530,750);
        glVertex2i(530,770);
        glVertex2i(540,750);
        glVertex2i(540,770);
     glEnd();
     //A
     glBegin(GL_LINE_STRIP);
        glVertex2i(545,750);
        glVertex2i(552,770);
        glVertex2i(559,750);
     glEnd();
     //TU
     glBegin(GL_LINES);
        glVertex2i(575,750);
        glVertex2i(575,770);
        glVertex2i(565,770);
        glVertex2i(585,770);
     glEnd();
     glBegin(GL_LINE_STRIP);
        glVertex2i(589,770);
        glVertex2i(589,750);
        glVertex2i(599,750);
        glVertex2i(599,770);
     glEnd();
     //RELACION
     //R
     glBegin(GL_LINE_LOOP);
         glVertex2i(615,770);
         glVertex2i(615,762);
         glVertex2i(628,762);
         glVertex2i(628,770);
     glEnd();
     glBegin(GL_LINE_STRIP);
        glVertex2i(615,750);
        glVertex2i(615,762);
        glVertex2i(628,750);
     glEnd();
     //E1
     glBegin(GL_LINE_STRIP);
         glVertex2i(648,770);
         glVertex2i(633, 770);
         glVertex2i(633,750);
         glVertex2i(648,750);
     glEnd();
     glBegin(GL_LINES);
        glVertex2i(633,760);
        glVertex2i(648,760);
     glEnd();
     //L
      glBegin(GL_LINE_STRIP);
         glVertex2i(654,770);
         glVertex2i(654,750);
         glVertex2i(664,750);
     glEnd();
     //A
     glBegin(GL_LINE_STRIP);
        glVertex2i(667,750);
        glVertex2i(675,770);
        glVertex2i(682,750);
     glEnd();
     glBegin(GL_LINES);
        glVertex2i(671,760);
        glVertex2i(677,760);
     glEnd();
     //C
     glBegin(GL_LINE_STRIP);
        glVertex2i(693,770);
        glVertex2i(686,770);
        glVertex2i(686,750);
        glVertex2i(693,750);
     glEnd();
     //I
     glBegin(GL_LINES);
        glVertex2i(697,770);
        glVertex2i(697,750);
     glEnd();
     //O
     glBegin(GL_LINE_LOOP);
        glVertex2i(701,770);
        glVertex2i(701,750);
        glVertex2i(711,750);
        glVertex2i(711,770);
     glEnd();
     //N
      glBegin(GL_LINE_STRIP);
        glVertex2i(717,750);
        glVertex2i(717,770);
        glVertex2i(729,750);
        glVertex2i(729,770);
     glEnd();
     //TOXICA
     glBegin(GL_LINES);
        glVertex2i(512,710);
        glVertex2i(512,730);
        glVertex2i(499,730);
        glVertex2i(523,730);
     glEnd();
     //O
     glBegin(GL_LINE_LOOP);
        glVertex2i(528,730);
        glVertex2i(528,710);
        glVertex2i(540,710);
        glVertex2i(540,730);
     glEnd();
     //X
     glBegin(GL_LINES);
        glVertex2i(544,730);
        glVertex2i(554,710);
        glVertex2i(544,710);
        glVertex2i(554,730);
        //I
        glVertex2i(558,710);
        glVertex2i(558,730);
     glEnd();
     //C
     glBegin(GL_LINE_STRIP);
        glVertex2i(572,730);
        glVertex2i(564,730);
        glVertex2i(564,710);
        glVertex2i(572,710);
     glEnd();
     //A
     glBegin(GL_LINE_STRIP);
        glVertex2i(576,710);
        glVertex2i(584,730);
        glVertex2i(592,710);
     glEnd();
     //puntos suspensivos
     glPointSize(6);
     glBegin(GL_POINTS);
        glVertex2i(598,710);
        glVertex2i(606,710);
        glVertex2i(614,710);
     glEnd();
     //ACENTOS
     glBegin(GL_LINES);
        glVertex2i(705,773);
        glVertex2i(709,778);
        
        glVertex2i(532,735);
        glVertex2i(536,740);
        //A linea
        glVertex2i(580,720);
        glVertex2i(588,720);
        
        glVertex2i(65,180);
        glVertex2i(78,180);
     glEnd();
     
     //ANTES
     //A
     glBegin(GL_LINE_STRIP);
        glVertex2i(60,160);
        glVertex2i(70,200);
        glVertex2i(80,160);
     glEnd();
     //N
     glBegin(GL_LINE_STRIP);
        glVertex2i(84,160);
        glVertex2i(84,200);
        glVertex2i(94,160);
        glVertex2i(94,200);
     glEnd();
     //T
     glBegin(GL_LINES);
        glVertex2i(108,160);
        glVertex2i(108,200);
        glVertex2i(98,200);
        glVertex2i(118,200);
        //e
        glVertex2i(120,180);
        glVertex2i(130,180);
     glEnd();
     //E
     glBegin(GL_LINE_STRIP);
        glVertex2i(130,200);
        glVertex2i(120,200);
        glVertex2i(120,160);
        glVertex2i(130,160);
     glEnd();
     //S
     glBegin(GL_LINE_STRIP);
         glVertex2i(144,200);
         glVertex2i(134,200);
         glVertex2i(134,180);
         glVertex2i(144,180);
         glVertex2i(144,160);
         glVertex2i(134,160);
     glEnd();
     //DE
     glBegin(GL_LINE_LOOP);
        glVertex2i(166,160);
        glVertex2i(166,200);
        glVertex2i(174,180);
     glEnd();
     //E
     glBegin(GL_LINE_STRIP);
        glVertex2i(188,200);
        glVertex2i(178,200);
        glVertex2i(178,160);
        glVertex2i(188,160);
     glEnd();
     glBegin(GL_LINES);
        glVertex2i(178,180);
        glVertex2i(188,180);
        
        //q
        glVertex2i(212,165);
        glVertex2i(216,155);
     glEnd();
     //QUE
     glBegin(GL_LINE_LOOP);
        glVertex2i(208,200);
        glVertex2i(208,160);
        glVertex2i(218,160);
        glVertex2i(218,200);
     glEnd();
     //U
     glBegin(GL_LINE_STRIP);
        glVertex2i(222,200);
        glVertex2i(222,160);
        glVertex2i(232,160);
        glVertex2i(232,200);
     glEnd();
     //E
     glBegin(GL_LINE_STRIP);
        glVertex2i(248,200);
        glVertex2i(238,200);
        glVertex2i(238,160);
        glVertex2i(248,160);
     glEnd();
     glBegin(GL_LINES);
        glVertex2i(238,180);
        glVertex2i(248,180);
     glEnd();
     //TERMINES
     glBegin(GL_LINES);
        glVertex2i(266,200);
        glVertex2i(266,160);
        glVertex2i(258,200);
        glVertex2i(274,200);
     glEnd();
     //E
     glBegin(GL_LINE_STRIP);
        glVertex2i(286,200);
        glVertex2i(276,200);
        glVertex2i(276,160);
        glVertex2i(286,160);
     glEnd();
     glBegin(GL_LINES);
        glVertex2i(276,180);
        glVertex2i(286,180);
     glEnd();
     //R
     glBegin(GL_LINE_LOOP);
        glVertex2i(290,200);
        glVertex2i(290,182);
        glVertex2i(298,182);
        glVertex2i(298,200);
     glEnd();
     glBegin(GL_LINE_STRIP);
        glVertex2i(290,160);
        glVertex2i(290,182);
        glVertex2i(298,160);
     glEnd();
     //M
     glBegin(GL_LINE_STRIP);
        glVertex2i(302,160);
        glVertex2i(302,200);
        glVertex2i(308,180);
        glVertex2i(314,200);
        glVertex2i(314,160);
     glEnd();
     //I
     glBegin(GL_LINES);
        glVertex2i(320,200);
        glVertex2i(320,160);
        
        //e
        glVertex2i(343,180);
        glVertex2i(352,180);
     glEnd();
     //N
     glBegin(GL_LINE_STRIP);
        glVertex2i(326,160);
        glVertex2i(326,200);
        glVertex2i(336,160);
        glVertex2i(336,200);
     glEnd();
     //E
     glBegin(GL_LINE_STRIP);
       glVertex2i(352,200);
       glVertex2i(342,200);
       glVertex2i(342,160);
       glVertex2i(352,160);
     glEnd();
     //S
     glBegin(GL_LINE_STRIP);
       glVertex2i(364,200);
       glVertex2i(356,200);
       glVertex2i(356,180);
       glVertex2i(364,180);
       glVertex2i(364,160);
       glVertex2i(356,160);
     glEnd();
     //INTOXICANDOTE
     glBegin(GL_LINES);
        glVertex2i(384,200);
        glVertex2i(384,160);
     glEnd();
     //N
     glBegin(GL_LINE_STRIP);
        glVertex2i(390,160);
        glVertex2i(390,200);
        glVertex2i(400,160);
        glVertex2i(400,200);
     glEnd();
     //T
     glBegin(GL_LINES);
        glVertex2i(412,200);
        glVertex2i(412,160);
        glVertex2i(404,200);
        glVertex2i(420,200);
     glEnd();
     //O
     glBegin(GL_LINE_LOOP);
        glVertex2i(424,200);
        glVertex2i(424,160);
        glVertex2i(434,160);
        glVertex2i(434,200);
     glEnd();
     //X
     glBegin(GL_LINES);
        glVertex2i(438,160);
        glVertex2i(448,200);
        glVertex2i(438,200);
        glVertex2i(448,160);
     glEnd();
     //I
     glBegin(GL_LINES);
        glVertex2i(454,200);
        glVertex2i(454,160);
     glEnd();
     //C
     glBegin(GL_LINE_STRIP);
        glVertex2i(470,200);
        glVertex2i(460,200);
        glVertex2i(460,160);
        glVertex2i(470,160);
     glEnd();
     //A
     glBegin(GL_LINE_STRIP);
        glVertex2i(474,160);
        glVertex2i(482,200);
        glVertex2i(490,160);
     glEnd();
     glBegin(GL_LINES);
        glVertex2i(478,180);
        glVertex2i(486,180);
        
        //e
        glVertex2i(565,180);
        glVertex2i(575,180);
     glEnd(),
     //N
     glBegin(GL_LINE_STRIP);
        glVertex2i(496,160);
        glVertex2i(496,200);
        glVertex2i(506,160);
        glVertex2i(506,200);
     glEnd();
     //D
     glBegin(GL_LINE_LOOP);
        glVertex2i(512,200);
        glVertex2i(512,160);
        glVertex2i(522,180);
     glEnd();
     //O
     glBegin(GL_LINE_LOOP);
        glVertex2i(530,200);
        glVertex2i(530,160);
        glVertex2i(540,160);
        glVertex2i(540,200);
     glEnd();
     //T
     glBegin(GL_LINES);
        glVertex2i(553,160);
        glVertex2i(553,200);
        glVertex2i(545,200);
        glVertex2i(561,200);
     glEnd();
     //E 
     glBegin(GL_LINE_STRIP);
        glVertex2i(575,200);
        glVertex2i(565,200);
        glVertex2i(565,160);
        glVertex2i(575,160);
     glEnd();
     //TU
     glBegin(GL_LINES);
        glVertex2i(605,160);
        glVertex2i(605,200);
        glVertex2i(595,200);
        glVertex2i(615,200);
        //acento
        glVertex2i(622,205);
        glVertex2i(627,215);
     glEnd();
     glBegin(GL_LINE_STRIP);
        glVertex2i(620,200);
        glVertex2i(620,160);
        glVertex2i(630,160);
        glVertex2i(630,200);
     glEnd();
     glPointSize(8);
     glBegin(GL_POINTS);
        glVertex2i(639,160);
     glEnd();
     
     glFlush();
}

void irritacion(){
     //
      glColor3f(0,0,0);
     glBegin(GL_TRIANGLES);
        glVertex2i(450,420);
        glVertex2i(450,400);
        glVertex2i(460,410);
     glEnd();
    
     glBegin(GL_LINES);
        glVertex2i(465,420);
        glVertex2i(465,400);
        
     glEnd();
     //R
     glBegin(GL_LINE_LOOP);
        glVertex2i(473,420);
        glVertex2i(473,412);
        glVertex2i(483,412);
        glVertex2i(483,420);
     glEnd();
     glBegin(GL_LINE_STRIP);
        glVertex2i(473,400);
        glVertex2i(473,412);
        glVertex2i(483,400);
     glEnd();
     //R
     glBegin(GL_LINE_LOOP);
        glVertex2i(488,420);
        glVertex2i(488,412);
        glVertex2i(498,412);
        glVertex2i(498,420);
     glEnd();
     glBegin(GL_LINE_STRIP);
        glVertex2i(488,400);
        glVertex2i(488,418);
        glVertex2i(498,400);
     glEnd();
     //I
     glBegin(GL_LINES);
        glVertex2i(504,420);
        glVertex2i(504,400);
     glEnd();
     //T
     glBegin(GL_LINES);
        glVertex2i(510,420);
        glVertex2i(526,420);
        glVertex2i(518,420);
        glVertex2i(518,400);
        //A
        glVertex2i(528,410);
        glVertex2i(536,410);
     glEnd();
     //A
     glBegin(GL_LINE_STRIP);
         glVertex2i(524,400);
         glVertex2i(532,420);
         glVertex2i(540,400);
     glEnd();
     //C
     glBegin(GL_LINE_STRIP);
         glVertex2i(554,420);
         glVertex2i(544,420);
         glVertex2i(544,400);
         glVertex2i(554,400);
     glEnd();
     //I
     glBegin(GL_LINES);
        glVertex2i(560,420);
        glVertex2i(560,400);
        //ACENTO
        glVertex2i(571,428);
        glVertex2i(576,438);
     glEnd();
     //O
     glBegin(GL_LINE_LOOP);
        glVertex2i(568,420);
        glVertex2i(568,400);
        glVertex2i(578,400);
        glVertex2i(578,420);
     glEnd();
     // N
     glBegin(GL_LINE_STRIP);
        glVertex2i(586,400);
        glVertex2i(586,420);
        glVertex2i(596,400);
        glVertex2i(596,420);
     glEnd();
     glFlush();
}

void neumonia(){
      glBegin(GL_TRIANGLES);
        glVertex2i(450,380);
        glVertex2i(450,360);
        glVertex2i(460,370);
     glEnd();
     //N
     glBegin(GL_LINE_STRIP);
        glVertex2i(470,360);
        glVertex2i(470,380);
        glVertex2i(480,360);
        glVertex2i(480,380);
     glEnd();
     //E
     glBegin(GL_LINE_STRIP);
         glVertex2i(496,380);
         glVertex2i(486,380);
         glVertex2i(486,360);
         glVertex2i(496,360);
         
     glEnd();
     glBegin(GL_LINES);
         glVertex2i(486,370);
         glVertex2i(496,370);
     glEnd();
     //U
     glBegin(GL_LINE_STRIP);
         glVertex2i(502,380);
         glVertex2i(502,360);
         glVertex2i(512,360);
         glVertex2i(512,380);
     glEnd();
     //M}
     glBegin(GL_LINE_STRIP);
        glVertex2i(519,360);
        glVertex2i(519,380);
        glVertex2i(525,370);
        glVertex2i(531,380);
        glVertex2i(531,360);
     glEnd();
     //O
     glBegin(GL_LINE_LOOP);
        glVertex2i(536,380);
        glVertex2i(536,360);
        glVertex2i(546,360);
        glVertex2i(546,380);
     glEnd();
     //N
     glBegin(GL_LINE_STRIP);
        glVertex2i(550,360);
        glVertex2i(550,380);
        glVertex2i(560,360);
        glVertex2i(560,380);
     glEnd();
     //I
     glBegin(GL_LINES);
        glVertex2i(568,380);
        glVertex2i(568,360);
        //ACENTO
        glVertex2i(568,384);
        glVertex2i(575,391);
        //A
        glVertex2i(579,370);
        glVertex2i(589,370);
     glEnd();
     //A
     glBegin(GL_LINE_STRIP);
        glVertex2i(574,360);
        glVertex2i(584,380);
        glVertex2i(594,360);
     glEnd();
     
     glFlush();
     
}
void letrasCamino(){
     GLint x = 220;
     GLint y = 225;
     GLubyte label[]= {'C','O','N','S','E','C','U','E','N','C','I','A','S'};
     
     GLint k;
     for(k = 0; k<13; k++){
           glRasterPos2i(x,y);
           glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,label[k]); 
           x+=15;
     }
      x = 70;
      y = 515;
     GLubyte label2[]= {'C','A','U','S','A','S'};
     for(k = 0; k<6; k++){
           glRasterPos2i(x,y);
           glutBitmapCharacter(GLUT_BITMAP_9_BY_15,label2[k]); 
           x+=15;
     }
     glFlush();
}
/*void pulmon(){
     glLineWidth(8);
     glBegin(GL_LINES);
       glVertex2f(500,670);
       glVertex2f(500,640);
       glVertex2f(500,640);
       glVertex2f(480,625);
       glVertex2f(500,640);
       glVertex2f(525,625);
    glEnd();
    //pulmon d
       glPolygonMode(GL_FRONT, GL_FILL);
     glFrontFace(GL_CW);
    glBegin(GL_POLYGON);
       glVertex2f(482,625);
       glVertex2f(479,635);
       glVertex2f(475,640);
       glVertex2f(455,640);
       glVertex2f(440,630);
       glVertex2f(425,600);
       glVertex2f(425,590);
       glVertex2f(435,560);
       
       glVertex2f(445,555);
       glVertex2f(455,555);
       glVertex2f(465,560);
       glVertex2f(475,570);
       glVertex2f(455,585);
       glVertex2f(456,605);
       glVertex2f(458,615);
    glEnd();
   glBegin(GL_POLYGON);
       glVertex2f(523,625);
       glVertex2f(526,635);
       glVertex2f(530,640);
       glVertex2f(550,640);
       glVertex2f(565,630);
       glVertex2f(580,600);
       glVertex2f(580,590);
       glVertex2f(570,560);
       
       glVertex2f(560,555);
       glVertex2f(550,555);
       glVertex2f(540,560);
       glVertex2f(535,570);
       glVertex2f(550,585);
       glVertex2f(549,605);
       glVertex2f(547,615);
    glEnd();
    glFlush();
}*/
void Pinta(void){
     glClear(GL_COLOR_BUFFER_BIT);
     glClearColor(1,1,1,0);
     escenario();
     cigarro();
     boquillaCigarro();
     botonCigarro();
     cejasOjosBocaCigarro();
     humoCigarro();
     chicaConsumidaPorCigarro();
     brazosChica();
     camino();
     cabeza();
     ojosChica();
     boca();
     cigarroDeChica();
     brazos();
     humoDeCigarroDeChica();
     CabezaChicaConsumida();
     //pulmon();
     frase();
     irritacion();
     neumonia();
     letrasCamino();
     glFlush();
     
}

void inicializa(void){
    glClearColor(0.0,0.0,0.0,0.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(00.0,800.0,00.0,800.0);   
}

int main( void){
    glutInitWindowSize(900, 900);
    glutCreateWindow("HerreraPamila_Arely");
    inicializa();
    glutDisplayFunc(Pinta);
    glutMainLoop();
}
