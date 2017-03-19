#include <cstdlib>
#include <iostream>
#include <graphics.h>

#define UP_ARROW 72
#define LEFT_ARROW 75
#define DOWN_ARROW 80
#define RIGHT_ARROW 77


using namespace std;

int main()
{
   initwindow(1000, 300, "The Circle");
   int x1 = 1000, y1 = 100, x2= 0, y2 = 100;
    int j2=y2;
    char a;
    
              circle(x2, y2, 20);
              circle(x1, y1, 20);
    
	while(1)
	{		
		
		a=getch();
		
		if (a == 72){
              y1 = y1 - 20;
              if (y1<0 || y1 >1000){
                      if (y1<0){
                               y1=y1+20;}
                               else{y1=y1-20;
                               }
                      }
                      
              else{
              cleardevice();
              circle(x2, y2, 20);
              circle(x1, y1, 20);}
             
              }
        else if (a ==80){
               if (y1<0 || y1 >1000){
                      if (y1<0){
                               y1=y1+20;}
                               else{y1=y1-20;}
                      }
            else{
             y1 = y1 + 20;
              cleardevice();
              circle(x2, y2, 20);
              circle(x1, y1, 20);}
            
             }
        else if (a ==75){
             x1 = x1 - 20;
              if (x1<0 || x1 >1000){
                      if (x1<0){
                               x1=x1+20;}
                               else{x1=x1-20; system("cls");cout<<"PLAYER1 WINS"<<endl;}
                      }
                      else{
              cleardevice();
              circle(x2, y2, 20);
              circle(x1, y1, 20);}
             
             }
       
        else if (a ==77){
             x1 = x1 + 20;
             if (x1<0 || x1 >1000){
                      if (x1<0){
                               x1=x1+20;}
                               else{x1=x1-20;system("cls");cout<<"PLAYER1 WINS"<<endl;}
                      }
             else{         
             cleardevice();
              circle(x2, y2, 20);
              circle(x1, y1, 20);
              }
             }
 else if (a =='d'){
             x2 = x2 + 20;
              if (x2<0 || x2 >1000){
                      if (x2<0){
                               x2=x2+20;}
                               else{x2=x2-20;system("cls");cout<<"PLAYER2 WINS"<<endl;}
                      }
                      else{
              cleardevice();
              circle(x2, y2, 20);
              circle(x1, y1, 20);} }
 else if (a =='a'){
             x2 = x2 - 20;
              if (x2<0 || x2 >1000){
                      if (x2<0){
                               x2=x2+20;}
                               else{x2=x2-20;system("cls");cout<<"PLAYER2 WINS"<<endl;}
                      }
                      else{
              cleardevice();
              circle(x2, y2, 20);
              circle(x1, y1, 20);} }       
 else if (a =='w'){
             y2 = y2 - 20;
              if (x2<0 || x2 >1000){
                      if (x2<0){
                               x2=x2+20;}
                               else{x2=x2-20;system("cls");cout<<"PLAYER2 WINS"<<endl;}
                      }
                      else{
              cleardevice();
              circle(x2, y2, 20);
              circle(x1, y1, 20);} } 
 else if (a =='s'){
             y2 = y2 + 20;
              if (x2<0 || x2 >1000){
                      if (x2<0){
                               x2=x2+20;}
                               else{x2=x2-20;system("cls");cout<<"PLAYER2 WINS"<<endl;}
                      }
                      else{
              cleardevice();
              circle(x2, y2, 20);
              circle(x1, y1, 20);} }  
             //bullet1

/*else if (a =='b'){
             for(int i = x2; i <1050; i++){
                  cleardevice();
                 if (i==x1 && y1==y2){
                            circle(x1, y2, 5);
                 circle(x1, y1, 20);
                 circle(x2,y2,20); 
                 break;
                            }
                 else{
                    circle(i, y2, 5);
                 circle(x1, y1, 20);
                 circle(x2,y2,20);  
                      }   
        } } */
       
else if (a =='b'){
             for(int i = x2; i <1050; i++){
                     
                     if(y1>y2){
                               j2--;
                               if (i==x1&&j2==y1){
                                                  cleardevice();
                                                  circle(x1, y1, 5);
                                                  circle(x1, y1, 20);
                                                  circle(x2,y2,20); 
                                                  break;
                                                  }       
                               else{
                                    cleardevice();
                                    circle(i, j2, 5);
                                                  circle(x1, y1, 20);
                                                  circle(x2,y2,20); 
                                    }                     
                               }
                     else if(y1<y1){
                          j2++;
                               if (i==x1&&j2==y1){
                                                  cleardevice();
                                                  circle(x1, y1, 5);
                                                  circle(x1, y1, 20);
                                                  circle(x2,y2,20); 
                                                  break;
                                                  }       
                               else{
                                    circle(i, j2, 5);
                                    cleardevice();
                                                  circle(x1, y1, 20);
                                                  circle(x2,y2,20); 
                                    }                     
                          }
                     else{
                          j2=y1;
                               if (i==x1&&2==y1){
                                                 cleardevice();
                                                  circle(x1, y1, 5);
                                                  circle(x1, y1, 20);
                                                  circle(x2,y2,20); 
                                                  break;
                                                  }       
                               else{
                                    cleardevice();
                                    circle(i, j2, 5);
                                                  circle(x1, y1, 20);
                                                  circle(x2,y2,20); 
                                    }                     
                          }
                     
                 
                       
        } }
else if (a =='0'){
             for(int i = x1; i >-50;i--){
                  cleardevice();
                 if (i==x2 && y1==y2){
                            circle(x2, y1, 5);
                 circle(x1, y1, 20);
                 circle(x2,y2,20); 
                 break;
                            }
                 else{
                    circle(i, y1, 5);
                 circle(x1, y1, 20);
                 circle(x2,y2,20);  
                      }   
        } }
                     
	
	}
	return 0;
 
 
   
    system("PAUSE");
    return EXIT_SUCCESS;
}
