#include<GL/glut.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<time.h>
#define PI 3.1415926535897932384626433832795
GLint viewWidth = 500, viewHeight = 500; // in pixels
GLint logWidth = 1000, logHeight = 1000;   // logical units
int centerX = logWidth/2, centerY = logHeight/2;
int mouseX=centerX, mouseY=centerY;
bool out=true;
bool invisible=false;
bool inside=false;
float r=0.65,g=0.25,b=0.4;
bool clearString=true;
bool openelevator1=false;
bool openelevator2=false;
bool openelevator3=false;
bool openelevator4=false;
char dispStr[100]="Hello";
char s[9]="NEW GAME";
char s1[5]="QUIT";
char s2[11]="DIFFICULTY";
char  gameover[10]="GAME OVER";
char gamefinished[15]="GAME SUCCEEDED";
char counter[6]="/  7";
char keyASstr[2]={0,0};
GLint deltay=0,deltax=0;
float color1=255; float color2=0; float color3 =0;
float color4=255; float color5=0; float color6 =0;
float color7=255;  float color8=0; float color9 =0;
int dd=50;
int leg=0;
int MOVING=0;
bool newgame_btn=true;
int open=0;
int open2=0;
int open3=0;
int open4=0;
bool elevator1color=true;
int bb=0;
int deltalegs=0;
int deltabody=0;
int deltahands=0;
int deltahead=0;
int deltacirclehead=0;
int deltarad=0;
int leg1;
int bb1=1;
bool closing=false;
bool insideelevator=false;
bool insideelevator2=false;
bool insideelevator3=false;
bool insideelevator4=false;
int DeltaY=0;
int floornumber=1;
bool youcanenter=false;
bool closed=true;
bool colorcircle=true;
bool colorcircle2=false;
bool colorcircle3=false;
bool colorcircle4=false;
int MOVING1=0;
int MOVING2=0;
int leg11=0;
int leg12=0;
int dd1=0;
int eye=0;
int eye2=0;
bool P=true;
bool P2=true;
int eye1=0;
int dd2=0;
int leg22=0;
int leg3=0;
int dd3=0;
int eye3=0;
bool P3=true;
int MOVING3=0;
int Ln=0;
int Ln1=0;
int Ln2=0;
char count='0';
int Testx1=0;
int Testx2=0;
int Testy1=0;
int Testxp1=0;
int Testyp1=0;
int x11=0;
int x22=0;
bool game=true;
int Testypperson3=0;
int Testypperson2=0;
int person3x=0;
int person2x=0;
bool hide=false;
bool A=true;
bool B=true;
int count1=0;
int count2=0;
int count3=0;
int count4=0;
int count5=0;
int count6=0;
int count7=0;
bool C=true;
bool D=true;
bool E=true;
bool F=true;
bool G=true;

void Timer(int value) {
	glutTimerFunc(55, Timer, 0);
    glutPostRedisplay();
}
void counting()
{
    if(count=='0')
     count='1';
    else if(count=='1')
     count='2';
    else if(count=='2')
     count='3';
    else if(count=='3')
     count='4';
   else  if(count=='4')
     count='5';
  else  if(count=='5')
     count='6';
     else  if(count=='6')
     count='7';
}
void SpecialKeyboard(int key, int x, int y)
{
if(key==GLUT_KEY_LEFT)
{
if(bb1==1)
{
    eye=-7;
   MOVING=MOVING-10;
    dd=0;
    leg=-25;
}
}

else if(key==GLUT_KEY_RIGHT)
{
    if(bb1==1)
    {
        eye=7;
       MOVING=MOVING+10;
    dd=125;
    leg=25;
    }


}
else if(key==GLUT_KEY_UP &&(leg1>320&&leg1<361))
{
  hide=true;
}
else if(key==GLUT_KEY_UP &&(leg1>57&&leg1<173))
{
    if(floornumber==1)
    bb=1;
    else if(floornumber==2)
        openelevator2=true;
     else if(floornumber==3)
             openelevator3=true;
              else if(floornumber==4)
             openelevator4=true;

 if(youcanenter==true && floornumber==1 &&open>=50&&(leg1>68 &&leg1<153))
{
    bb=0;
    deltalegs=25.75;
    deltabody=10;
    dd=50;
    deltahead=8;
    deltacirclehead=10;
    deltarad=2;
    bb1=0;
    insideelevator=true;
    invisible=true;
    out=false;
}
else if(youcanenter==true && floornumber==2 &&open2>=50&&(leg1>68 &&leg1<153))
{
    bb=0;
    deltalegs=25.75;
    deltabody=10;
    dd=50;
    deltahead=8;
    deltacirclehead=10;
    deltarad=2;
    bb1=0;
     insideelevator=true;
    insideelevator2=true;
    openelevator2=false;
    invisible=true;
    out=false;
}
else if(youcanenter==true && floornumber==3 &&open3>=50&&(leg1>68 &&leg1<153))
{
    bb=0;
    deltalegs=25.75;
    deltabody=10;
    dd=50;
    deltahead=8;
    deltacirclehead=10;
    deltarad=2;
    bb1=0;
    insideelevator=true;
    insideelevator3=true;
    openelevator3=false;
    invisible=true;
    out=false;
}
else if(youcanenter==true && floornumber==4 &&open4>=50&&(leg1>68 &&leg1<153))
{
    bb=0;
    deltalegs=25.75;
    deltabody=10;
    dd=50;
    deltahead=8;
    deltacirclehead=10;
    deltarad=2;
    bb1=0;
     insideelevator=true;
    insideelevator4=true;
    openelevator4=false;
    invisible=true;
    out=false;
}
}
if(key==GLUT_KEY_DOWN)
    hide=false;
 if(key==GLUT_KEY_DOWN  &&closed==false)

{
      deltalegs=0;
    deltabody=0;
    dd=0;
    deltahead=0;
    deltacirclehead=0;
    deltarad=0;
    bb1=1;
    openelevator1=false;
    openelevator2=false;
     openelevator3=false;
     openelevator4=false;
     insideelevator=false;
    out=true;
    invisible=false;

    bb=0;
}
 if (P)
MOVING1=MOVING1-7;
    else MOVING1=MOVING1+7;
     if (P2)
MOVING2=MOVING2-7;
    else MOVING2=MOVING2+7;
     if (P3)
MOVING3=MOVING3-7;
    else MOVING3=MOVING3+7;
glutPostRedisplay();
}
void Keyboard(unsigned char key, int x, int y)
{
     if (P)
MOVING1=MOVING1-7;
    else MOVING1=MOVING1+7;
     if (P2)
MOVING2=MOVING2-7;
    else MOVING2=MOVING2+7;
     if (P3)
MOVING3=MOVING3-7;
    else MOVING3=MOVING3+7;

      if(key==49 && insideelevator==true &&open2==false &&open3==false &&open4==false)
    {
 colorcircle2=false;
  colorcircle3=false;
   colorcircle4=false;
        if(floornumber==2 )
              /* Sleep(1000);
               else if(floornumber==3)
                      Sleep(1500);
                      else if(floornumber==4)
                      {
                          Sleep(2000);
                      }
                    */
                      colorcircle=true;
         openelevator1=true;
        // invisible=false;
       insideelevator=true;
       bb=1;
        floornumber=1;

    }
     else if(key==50 && insideelevator==true &&open==false &&open3==false &&open4==false)
    {
colorcircle=false;
  colorcircle3=false;
   colorcircle4=false;
              /* if(floornumber==3||floornumber==1)
                Sleep(1000);
               else if(floornumber==4)
                      Sleep(1500);
*/
          colorcircle2=true;
         // delaytime=50;
         openelevator2=true;
        // invisible=false;
        insideelevator2=true;
        floornumber=2;

    }
 else   if(key==51 && insideelevator==true &&open2==false &&open==false &&open4==false)
    {
        colorcircle2=false;
  colorcircle=false;
   colorcircle4=false;
     /*   if(floornumber==4 ||floornumber==2)
                Sleep(1000);
               else if(floornumber==1)
                      Sleep(1500);
                      */
                       colorcircle3=true;
         openelevator3=true;
        // invisible=false;
        insideelevator3=true;
        floornumber=3;
    }
   else if(key==52 && insideelevator==true &&open2==false &&open3==false &&open==false)
    {
        colorcircle2=false;
  colorcircle3=false;
   colorcircle=false;
          /*     if(floornumber==3)
                Sleep(1000);
               else if(floornumber==2)
                      Sleep(1500);
                      else if(floornumber==1)
                        Sleep(2000);
*/
            colorcircle4=true;
         // if(floornumber==1)
         openelevator4=true;
        // invisible=false;
        insideelevator4=true;
        floornumber=4;
    }
    if(key==127)
        game=true;
    glutPostRedisplay();
}


void drawsquare(int x1,int x2,int y1,int y2,float r,float g,float b)
{

    glColor3f(r,g,b);
glBegin(GL_POLYGON);
glVertex2f(x1,y1);
glVertex2f(x1,y2);
glVertex2f(x2,y2);
glVertex2f(x2,y1);
glEnd();

}
void blackframing(int x1,int x2,int y1,int y2)
{

    glColor3f(0,0,0);
glBegin(GL_LINES);
glVertex2i(x1,y1);
glVertex2i(x1,y2);

glVertex2i(x2,y1);
glVertex2i(x2,y2);

glVertex2i(x1,y2);
glVertex2i(x2,y2);

glVertex2i(x1,y1);
glVertex2i(x2,y1);
glEnd();


}
void drawHalfFilledCircle(GLfloat x, GLfloat y, GLfloat radius,float xx,float yy,float zz){
	int i;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 1.0f * PI;
 glColor3f( xx, yy, zz);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}

void drawFilledCircle(GLfloat x, GLfloat y, GLfloat radius,float xx,float yy,float zz){
	int i;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;
 glColor3f( xx, yy, zz);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}

void init()
{
	glClearColor(1,0,0,0); // COLOR BACKGROUD
	glMatrixMode( GL_PROJECTION);
	gluOrtho2D( 0.0, logWidth, 0.0, logHeight);

}

void drawHollowCircle(GLfloat x, GLfloat y, GLfloat radius){
	int i;
	int lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * (22/7);
glColor3f(0,0,0);
	glBegin(GL_LINE_LOOP);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();
}

void drawcharacter()
{
    //Head
drawFilledCircle(115+eye+MOVING,170+DeltaY,3,0,0,0);
//drawFilledCircle(530,200,30,0,0,0);
drawHollowCircle(115+MOVING,165-deltacirclehead+DeltaY,17-deltarad);
glBegin(GL_LINES);
glVertex2i(115+MOVING,130+DeltaY);
glVertex2i(115+MOVING,148-deltahead+DeltaY);
glEnd();

    //body
    drawsquare(100+MOVING,130+MOVING,75+DeltaY,130-deltabody+DeltaY,0,0,0);
    //Legs
    leg1=115+MOVING;

    glBegin(GL_LINES);
glVertex2i(115+MOVING,130+DeltaY);
glVertex2i(115+MOVING,20+deltalegs+DeltaY);
glEnd();

// moving leg
   glBegin(GL_LINES);
glVertex2i(115+MOVING,85+DeltaY);
glVertex2i(115+leg+MOVING,20+deltalegs+DeltaY);
glEnd();

//hands

 glBegin(GL_LINES);
glVertex2i(115+MOVING,115+DeltaY);
glVertex2i(60+dd+MOVING,115+DeltaY);
glEnd();

Testy1=20+deltalegs+DeltaY;
Testx1=100+MOVING;
Testx2=130+MOVING;
}

void drawPerson1()
{
 if (abs(MOVING1)>400) P=!P;
   if (P)
   {dd1=125;
       MOVING1=MOVING1+7;
      leg12=-25;
      eye1=7;
       }
       else
        {     dd1=0;
              leg12=25;
            MOVING1=MOVING1-7;
            eye1=-7;
        }


       //Head
drawFilledCircle(450+eye1+MOVING1,170,3,0,0,0);
//drawFilledCircle(530,200,30,0,0,0);
drawHollowCircle(450+MOVING1,165,17);
glBegin(GL_LINES);
glVertex2i(450+MOVING1,130);
glVertex2i(450+MOVING1,148);
glEnd();

    //body
    drawsquare(435+MOVING1,465+MOVING1,75,130,1,0,0);
    //Legs
    //leg11=515+MOVING1;

    glBegin(GL_LINES);
glVertex2i(450+MOVING1,130);
glVertex2i(450+MOVING1,20);
glEnd();

// moving leg
   glBegin(GL_LINES);
glVertex2i(450+MOVING1,85);
glVertex2i(450+leg12+MOVING1,20);
glEnd();

//hands

 glBegin(GL_LINES);
glVertex2i(450+MOVING1,115);
glVertex2i(395+dd1+MOVING1,115);
glEnd();
Testyp1=20;
Testxp1=395+dd1+MOVING1;
}
void drawPerson2()
{

 if (abs(MOVING2)>250) P2=!P2;
   if (P2)
   {dd2=125;
       MOVING2=MOVING2+7;
      leg22=-25;
      eye2=7;
       }
       else
        {     dd2=0;
              leg22=25;
            MOVING2=MOVING2-7;
            eye2=-7;
        }


       //Head
drawFilledCircle(300+eye2+MOVING2,378,3,0,0,0);
//drawFilledCircle(530,200,30,0,0,0);
drawHollowCircle(300+MOVING2,376,17);
glBegin(GL_LINES);
glVertex2i(300+MOVING2,341);
glVertex2i(300+MOVING2,359);
glEnd();

    //body
    drawsquare(275+MOVING2,325+MOVING2,286,341,0,0,1);

    //Legs
    glBegin(GL_LINES);
glVertex2i(300+MOVING2,341);
glVertex2i(300+MOVING2,231);
glEnd();

// moving leg
   glBegin(GL_LINES);
glVertex2i(300+MOVING2,296);
glVertex2i(300+leg22+MOVING2,231);
glEnd();

//hands

 glBegin(GL_LINES);
glVertex2i(300+MOVING2,326);
glVertex2i(245+dd2+MOVING2,326);

Testypperson2=231;
person2x=(245+dd2+MOVING2);
glEnd();
}

void drawPerson3()
{

 if (abs(MOVING3)>250) P3=!P3;
   if (P3)
   {dd3=125;
       MOVING3=MOVING3+7;
      leg3=-25;
      eye3=7;
       }
       else
        {     dd3=0;
              leg3=25;
            MOVING3=MOVING3-7;
            eye3=-7;
        }
       //Head
drawFilledCircle(150+eye3+MOVING3,800,3,0,0,0);
drawHalfFilledCircle(150+MOVING3,810,7,0,0,0);
drawHalfFilledCircle(145+MOVING3,810,7,0,0,0);
drawHalfFilledCircle(155+MOVING3,810,7,0,0,0);
//drawFilledCircle(530,200,30,0,0,0);
drawHollowCircle(150+MOVING3,798,17);
glBegin(GL_LINES);
glVertex2i(150+MOVING3,763);
glVertex2i(150+MOVING3,781);
glEnd();
    //body
   drawsquare(140+MOVING3,165+MOVING3,708,763,255,255,255);
       drawsquare(150+MOVING3,155+MOVING3,728,763,0,0,0);

    //Legs
    glBegin(GL_LINES);
glVertex2i(150+MOVING3,763);
glVertex2i(150+MOVING3,653);
glEnd();
// moving leg
   glBegin(GL_LINES);
glVertex2i(150+MOVING3,718);
glVertex2i(150+leg3+MOVING3,653);
glEnd();
//hands
 glBegin(GL_LINES);
glVertex2i(150+MOVING3,748);
glVertex2i(95+dd3+MOVING3,748);

Testypperson3=653;
person3x=(95+dd3+MOVING3);
glEnd();
}

void myDisplay()
{
if(newgame_btn)
{

drawsquare(centerX-190,centerX+190,centerY+290,centerY+219,color1,color2,color3);
glColor3f(0.0,0.0,0.0);
int n=strlen(s);
glRasterPos2i(centerX-150,centerY+235);
for(int i=0;i<n;i++)
{
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,s[i]);
}

drawsquare(centerX-190,centerX+190,centerY-290,centerY-210,color4,color5,color6);

glColor3f(0.0,0.0,0.0);
 n=strlen(s1);
glRasterPos2i(centerX-70,centerY-265);
for(int i=0;i<n;i++)
{
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,s1[i]);
}
deltay=250;

drawsquare(centerX-190+deltax,centerX+190+deltax,centerY-290+deltay,centerY-210+deltay,color7,color8,color9);

glColor3f(0.0,0.0,0.0);
 n=strlen(s2);
glRasterPos2i(centerX-140+deltax,centerY-265+deltay);
for(int i=0;i<n;i++)
{


    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,s2[i]);
}
}
else
{


   drawsquare(0,1000,0,1000,0.96863,0.956863,0.404); // Yellow Screen

glColor3f(0,0,0);
glBegin(GL_LINES);
glVertex2i(0,45.25);
glVertex2i(1000,45.25);
glEnd();

drawsquare(0,1000,0,5,0.33,0.545,0.0745); // Green Line down


drawsquare(0,1000,5,44,0.5529,0.67451,0.8549); // First floor color

drawsquare(0,1000,210,256,0.5529,0.67451,0.8549); // Second floor color

drawsquare(0,1000,420,466,0.5529,0.67451,0.8549); // Third floor color

drawsquare(0,1000,630,676,0.5529,0.67451,0.8549); // Fourth floor color


glColor3f(0,0,0);
glBegin(GL_LINES);                 // Second Floor blackline
glVertex2i(0,256);
glVertex2i(1000,256);
glEnd();

glColor3f(0,0,0);
glBegin(GL_LINES);                 // Third Floor blackline
glVertex2i(0,466);
glVertex2i(1000,466);
glEnd();

glColor3f(0,0,0);
glBegin(GL_LINES);                 // Fourth Floor blackline
glVertex2i(0,676);
glVertex2i(1000,676);
glEnd();




drawsquare(300,470,70,30,0.2627,1,0);           //office 1 mate
drawsquare(300,470,281,241,0.2627,1,0);           //office 2 mate

drawsquare(182,52,45.25,205,0.33,0.545,0.0745); // Elevator 1 Frame

drawsquare(57.75,173.25,45.25,200.25,0.523,0.545,0.7412); // Elevator 1

drawsquare(182,200,45.25,208,0.263,1,1/255); //ELEVATOR 1 right green

drawsquare(200,188,110,130,0.523,0.545,0.7412); //ELEVATOR 1 White button
drawFilledCircle(194.0,120.0,5,255,255,255);


drawsquare(200,188,170,190,0.25,0.412,0.1765); //ELEVATOR 1 Black  Screen
if(colorcircle==true)
drawFilledCircle(194.0,180.0,5,1,0,0);
else
drawFilledCircle(194.0,180.0,5,0,0,0);

glColor3f(0,0,0);
glBegin(GL_LINES);                         //ELEVATOR 1 midpoint line
glVertex2i(115,46);
glVertex2i(115,200.25);
glEnd();
if(bb==1&&floornumber==1)
{
   if(open<50)
    open=open+3;                            //Elevator 1 Movement (opening
    DeltaY=0;
    youcanenter=true;
    closed=false;
}
    else if(floornumber==1)
{
if(insideelevator==true||out==true)
{
      if(open>0)
	 open=open-3;
	 closed=true;
}
 }                                     //Elevator 1 Movement (Closing)
drawsquare(115+open,117-open,45.25,200.25,0.51765,0.353,0.565);  //Elevator 1 Movement (opening

drawsquare(182,52,256.25,416,0.33,0.545,0.0745); // Elevator 2 Frame

drawsquare(57.75,173.25,256.25,410,0.523,0.545,0.7412); // Elevator 2

drawsquare(182,200,256.25,422,0.263,1,1/255); //ELEVATOR 2 right green

drawsquare(200,188,321,344,0.523,0.545,0.7412); //ELEVATOR 2 White button
drawFilledCircle(194.0,332,5,255,255,255);


drawsquare(200,188,381,404,0.25,0.412,0.1765); //ELEVATOR 2 Black  Screen
if(colorcircle2==true)
    drawFilledCircle(194.0,392.0,5,1,0,0);
    else
drawFilledCircle(194.0,392.0,5,0,0,0);

glColor3f(0,0,0);
glBegin(GL_LINES);                         //ELEVATOR 2 midpoint line
glVertex2i(115,410);
glVertex2i(115,256.25);
glEnd();

  //Elevator 2 Movement (opening)
if( openelevator2==true&&floornumber==2 &&insideelevator2==true)
{
   if(open2<50)
    open2=open2+3;
    youcanenter=true;
    DeltaY=211;
    closed=false;
}

 //Elevator 2 Movement (Closing)
 //  insideelevator==true
else
if( floornumber==2)
{
    if(insideelevator2==true ||out==true)

{
      if(open2>0)
	 open2=open2-3;
	 closed=true;
}
}


drawsquare(115+open2,117-open2,256.25,416,0.51765,0.353,0.565);  //Elevator 2 Movement




drawsquare(182,52,467.25,627,0.33,0.545,0.0745); // Elevator 3 Frame

drawsquare(57.75,173.25,467.25,621,0.523,0.545,0.7412); // Elevator 3

drawsquare(182,200,467.25,633,0.263,1,1/255); //ELEVATOR 3 right green

drawsquare(200,188,532,555,0.523,0.545,0.7412); //ELEVATOR 3 White button
drawFilledCircle(194.0,543,5,255,255,255);

drawsquare(200,188,592,615,0.25,0.412,0.1765); //ELEVATOR 3 Black  Screen
if(colorcircle3==true)
drawFilledCircle(194.0,603,5,1,0,0);
else
drawFilledCircle(194.0,603,5,0,0,0);

glColor3f(0,0,0);
glBegin(GL_LINES);                         //ELEVATOR 3 midpoint line
glVertex2i(115,620);
glVertex2i(115,466);
glEnd();
// Elevator 3 Movement (Opening)
if( openelevator3==true&&floornumber==3 &&insideelevator3==true)
{
   if(open3<50)
    open3=open3+3;
    youcanenter=true;
    DeltaY=422;
    closed=false;
}

 //Elevator 3 Movement (Closing)
 //  insideelevator==true
else
if( floornumber==3)
{
    if(insideelevator3==true||out==true)

{
      if(open3>0)
	 open3=open3-3;
	 closed=true;
}
}

drawsquare(115+open3,117-open3,467.25,621,0.51765,0.353,0.565);  //Elevator 3 Movement

drawsquare(182,52,676,832,0.33,0.545,0.0745); // Elevator 4 Frame

drawsquare(57.75,173.25,676,826,0.523,0.545,0.7412); // Elevator 4

drawsquare(182,200,676,838,0.263,1,1/255); //ELEVATOR 4 right green

drawsquare(200,188,737,760,0.523,0.545,0.7412); //ELEVATOR 4 White button
drawFilledCircle(194.0,748,5,255,255,255);


drawsquare(200,188,797,820,0.25,0.412,0.1765); //ELEVATOR 4 Black  Screen
if(colorcircle4==true)
drawFilledCircle(194.0,808,5,1,0,0);
else drawFilledCircle(194.0,808,5,0,0,0);

glColor3f(0,0,0);
glBegin(GL_LINES);                         //ELEVATOR 4 midpoint line
glVertex2i(115,830);
glVertex2i(115,676);
glEnd();

if( openelevator4==true&&floornumber==4 &&insideelevator4==true)
{
   if(open4<50)
    open4=open4+3;
    youcanenter=true;
    DeltaY=633;
    closed=false;
}

 //Elevator 2 Movement (Closing)
 //  insideelevator==true
else
if( floornumber==4)
{
    if(insideelevator4==true ||out==true)
{
      if(open4>0)
	 open4=open4-3;
	 closed=true;
}
}
drawsquare(115+open4,117-open4,676,826,0.51765,0.353,0.565);  //Elevator 4 Movement



drawsquare(0,1000,210,216,0.33,0.545,0.0745);  // Green line 1

drawsquare(0,1000,421,427,0.33,0.545,0.0745);  // Green Line 2

drawsquare(0,1000,630,636,0.33,0.545,0.0745);  // Green line 3

drawsquare(0,1000,841,847,0.33,0.545,0.0745);  // Green Line 4

drawsquare(0,1000,1052,1058,0.33,0.545,0.0745);  // Green line 5

drawsquare(470,360,80,195,0.33,0.545,0.0745); //office 1 background Green frame

drawsquare(450,370,80,180,0.523,0.545,0.7412);  //office 1 background Blue

drawsquare(300,360,30,180,0.33,0.545,0.0745);   // Office 1 FRAME

drawsquare(310,350,40,170,0.523,0.545,0.7412);   // Office 1

blackframing(466,360,70,195.5);    // green
blackframing(460,370,80,180);     //  blue

drawsquare(360,450,55,105,0.62,0.486,0.298);     // Office 1 brown disk

drawsquare(360,450,95,105,0.4157,0.322,0.0863);   // Office 1 brown disk

     glColor3f(0.33,0.545,0.0745);
glBegin(GL_POLYGON);
glVertex2f(470,40);              // Office 1 right frame
glVertex2f(470,195);
glVertex2f(450,185);
glVertex2f(450,30);
glEnd();

glColor3f(0,0,0);
glBegin(GL_LINES);                  //office 1 right frame blackframe
glVertex2i(470,40);
glVertex2i(470,195);

glVertex2i(450,185);
glVertex2i(450,30);

glVertex2i(470,40);
glVertex2i(450,30);

glVertex2i(470,195);
glVertex2i(450,185);
glEnd();

     glColor3f(0.523,0.545,0.7412);
glBegin(GL_POLYGON);
glVertex2f(465,43);              // Office 1 right
glVertex2f(465,190);
glVertex2f(453,180);
glVertex2f(453,35);
glEnd();



   glColor3f(0.33,0.545,0.0745);
glBegin(GL_POLYGON);
glVertex2f(300,182);              // Office 1 left small
glVertex2f(380,197.14);
glVertex2f(380,182);
glVertex2f(300,182);
glEnd();

    glColor3f(0,0,0);
glBegin(GL_LINES);
glVertex2i(300,182);
glVertex2i(365,195);
glEnd();


blackframing(310,350,40,170); // office 1 blue blackframing

blackframing(300,360,30,180); // office 1 green blackframing

blackframing(360,450,55,95);   // office 1 brown blackframing

blackframing(360,450,95,105);     // office 1 brown blackframing
 //OFFICE 2
 drawsquare(470,360,291,406,0.33,0.545,0.0745); //office 2 background Green frame

drawsquare(450,370,291,391,0.523,0.545,0.7412);  //office 2 background Blue

drawsquare(300,360,241,391,0.33,0.545,0.0745);   // Office 2 FRAME

drawsquare(310,350,251,381,0.523,0.545,0.7412);   // Office 2

blackframing(466,360,281,406.5);    // green
blackframing(460,370,291,391);     //  blue

drawsquare(360,450,266,316,0.62,0.486,0.298);     // Office 2 brown disk

drawsquare(360,450,306,316,0.4157,0.322,0.0863);   // Office 2 brown disk

     glColor3f(0.33,0.545,0.0745);
glBegin(GL_POLYGON);
glVertex2f(470,251);              // Office 2 right frame
glVertex2f(470,406);
glVertex2f(450,396);
glVertex2f(450,241);
glEnd();

glColor3f(0,0,0);
glBegin(GL_LINES);                  //office 2 right frame blackframe
glVertex2i(470,251);
glVertex2i(470,406);

glVertex2i(450,396);
glVertex2i(450,241);

glVertex2i(470,251);
glVertex2i(450,241);

glVertex2i(470,406);
glVertex2i(450,396);
glEnd();

     glColor3f(0.523,0.545,0.7412);
glBegin(GL_POLYGON);
glVertex2f(465,254);              // Office 2 right
glVertex2f(465,401);
glVertex2f(453,391);
glVertex2f(453,246);
glEnd();



   glColor3f(0.33,0.545,0.0745);
glBegin(GL_POLYGON);
glVertex2f(300,393);              // Office 2 left small
glVertex2f(380,408.14);
glVertex2f(380,393);
glVertex2f(300,393);
glEnd();

    glColor3f(0,0,0);
glBegin(GL_LINES);
glVertex2i(300,393);
glVertex2i(365,406);
glEnd();


blackframing(310,350,251,381); // office 2 blue blackframing

blackframing(300,360,241,391); // office 2 green blackframing

blackframing(360,450,266,306);   // office 2 brown blackframing

blackframing(360,450,306,316);     // office 2 brown blackframing

drawsquare(800,710,256.25,416,0.33,0.545,0.0745); // 2nd Floor Door frame
drawsquare(790,720,256.25,410,0.523,0.545,0.7412); // 2nd Floor Door
drawsquare(778,760,325,329,0.33,0.545,0.0745);
drawFilledCircle(780,325,5,0,0,0);
blackframing(800,710,256.25,416);
blackframing(790,720,256.25,410);
blackframing(778,760,325,329);
//drawHollowCircle(780,325,5);
drawsquare(800,710,678.25,838,0.33,0.545,0.0745); // 4th Floor Door frame
drawsquare(790,720,678.25,832,0.523,0.545,0.7412); // 4th Floor Door
drawsquare(778,760,747,751,0.33,0.545,0.0745);
drawFilledCircle(780,747,5,0,0,0);
blackframing(800,710,678.25,838);
blackframing(790,720,678.25,832);
blackframing(778,760,747,751);

drawPerson1();
drawPerson2();
drawPerson3();
if(F==true)
drawHalfFilledCircle(900,665,20,0.012,0.1412,0.1412);
if(E==true)
drawHalfFilledCircle(950,454,20,0.012,0.1412,0.1412);
if(C==true)
drawHalfFilledCircle(700,243,20,0.012,0.1412,0.1412);
if(B==true)
drawHalfFilledCircle(980,32,20,0.012,0.1412,0.1412);
if(D==true)
drawHalfFilledCircle(300,454,20,0.012,0.1412,0.1412);
if(G==true)
drawHalfFilledCircle(50,665,20,0.012,0.1412,0.1412);
if(A==true)
drawHalfFilledCircle(700,32,20,0.012,0.1412,0.1412);

if(invisible==false &&hide==false)
drawcharacter();
if(hide==true)
{
    if(floornumber==1)
    drawHalfFilledCircle(335,180,15,0,0,0);
    else if(floornumber==2)
         drawHalfFilledCircle(335,391,15,0,0,0);
}


else if(open2>30 ||open3>30 ||open4>30 ||open>30)
    drawcharacter();

        Ln=strlen(counter);
 glRasterPos2d(910,950);
for(int i=0;i<Ln;i++)
{
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,counter[i]);
}
glRasterPos2d(860,950);
if(leg1>720 &&leg1<740 && A==true &&floornumber==1)
{
    counting();
     A=false;
}
else if(leg1>960 &&leg1<1000 && B==true &&floornumber==1)
{
    counting();
     B=false;
}
else if(leg1>720 &&leg1<740 && C==true &&floornumber==2)
{
    counting();
     C=false;
}
else if(leg1>280 &&leg1<320 && D==true &&floornumber==3)
{
    counting();
     D=false;
}
else if(leg1>930 &&leg1<970 && E==true &&floornumber==3)
{
    counting();
     E=false;
}
else if(leg1>880 &&leg1<920 && F==true &&floornumber==4)
{
    counting();
     F=false;
}
else if(leg1>30 &&leg1<70 && G==true &&floornumber==4)
{
    counting();
     G=false;
}
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,count);
    glRasterPos2d(200,700);
    Ln2=strlen(gamefinished);
if(count=='7')
{
    drawsquare(0,1000,0,1000,255,255,255);
for(int i=0;i<Ln2;i++)
{

    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,gamefinished[i]);
}

}
if(hide==false)
{
if(Testyp1==Testy1 &&Testxp1>=Testx1 &&Testxp1<=Testx2)
                 game=false;
    else if(Testypperson2==Testy1 &&person2x>=Testx1 &&person2x<=Testx2)
       game=false;
       else if(Testypperson3==Testy1 && person3x>=Testx1 &&person3x<=Testx2)
                 game=false;
}
Ln1=strlen(gameover);
 glRasterPos2d(500,950);
 if(game==false)
 {
     drawsquare(0,1000,0,1000,255,255,255);
for(int i=0;i<Ln1;i++)
{
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,gameover[i]);
}
 }

 x11=100+MOVING;
    x22=130+MOVING;
    if(x22==-20)
    {
        MOVING=900;
    }
    else if(x11>1000)
    {
        MOVING=-120;
    }

}
glutSwapBuffers();
glFlush();
}

int xactolog(int x)
{
    return x*1.0*logWidth/viewWidth;
}
int yactolog(int y)
{

    return logHeight-(y*1.0*logHeight/viewHeight);
}

void passive(int x,int y)
{
int X=xactolog(x);
int Y=yactolog(y);
if(newgame_btn)
 {if((X>centerX-200)&&(X<centerX+200)&&(Y>centerY+200)&&(Y<centerY+300))
           {
               color2=255;
               color3=255;


           }

      else if((X>centerX-200)&&(X<centerX+200)&&(Y<centerY-200)&&(Y>centerY-300))
           {
             color5=255;
               color6=255;
           }

                 else if((X>centerX-200)&&(X<centerX+200)&&(Y<centerY-210+deltay)&&(Y>centerY-290+deltay))
           {
             color8=255;
               color9=255;


           }

           else
 {

     color2=0;
     color3=0;
 color5=0;
color6=0;
color8=0;
               color9=0;
 }
glutPostRedisplay();
}}
void click(int btn,int state,int x,int y)
{
int X,Y;
     X=xactolog(x);
   Y=yactolog(y);
   if(newgame_btn)
   {

       if(btn==GLUT_LEFT_BUTTON &&state==GLUT_DOWN)
       {
            if((X>centerX-200)&&(X<centerX+200)&&(Y>centerY+200)&&(Y<centerY+300))
           {
               newgame_btn=false;
           }
            else if((X>centerX-200)&&(X<centerX+200)&&(Y<centerY-200)&&(Y>centerY-300))
           {

               exit(0);
           }
       }
   }
    glutPostRedisplay();
}




int main( int argc, char ** argv)
{
	glutInit( &argc, argv);
	glutInitDisplayMode( GLUT_DOUBLE| GLUT_RGB);
	glutInitWindowPosition( 100, 100);
	glutInitWindowSize( viewWidth, viewHeight);
	glutCreateWindow( "Game");
	init();
	glutPassiveMotionFunc(passive);
	glutDisplayFunc( myDisplay);
	glutSpecialFunc(SpecialKeyboard);
	glutKeyboardFunc(Keyboard);
	glutMouseFunc(click);
     Timer(0);
	glutMainLoop();

	glutPostRedisplay();
}

