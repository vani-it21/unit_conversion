#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<windows.h>
#include<conio.h>
#define LL  218
#define RL 191
#define  IN_T 193
#define  V  179
#define  LBL  192
#define  T 194
#define LT 195
#define H 196
#define  PS 197
#define RBL  217
#define RT 180
void Temp();
// void Dist();
void Time();
//void currency();
void SetPosition(int X, int Y)
{
HANDLE Screen;
Screen = GetStdHandle(STD_OUTPUT_HANDLE);
COORD Position={X, Y};

SetConsoleCursorPosition(Screen, Position);
}
int main()
{
    printf("%70s","UNIT CONVERSION");
    printf("\n\n\n");
    printf("%30s\n\n","unit conversion list:");
    
    printf("%75s\n","*- - - - - - - - - - - - - - - - - - - - - - - - - -*");
    printf("%41s %s %s\n","|  1 .Temperature |","| 2. Time    |","|  3. Distance   |");
    printf("%75s\n","*- - - - - - - - - - - - - - - - - - - - - - - - - -*"); 
    printf("%41s %s %s\n","|  4.currency     |","| 5. Liquid  |","| 0.  quit       |");
     printf("%75s\n\n","*- - - - - - - - - - - - - - - - - - - - - - - - - -*"); 
     printf("%48s","Enter the conversion number in the box ");
    
while(1){
		 SetPosition(20,13);
      printf("%c---------%c\n",LL,RL);
       SetPosition(20,14);
        printf("%c         %c\n",V,V);
         SetPosition(20,15);
        printf("%c---------%c",LBL,RBL);
		int m=0;
		SetPosition(21,14);

       scanf("%d",&m);
      
      if(m ==0){
	      break;      
      }
      
     switch(m){
	case 1:Temp();break;
	case 2:Time();break;
	//case 3:Dist();break;
	//case 4:currency();break;
	default:break;	
	
     }
      
}

    
    return 0;
}
void Time(){  
	char Time_con,char_con,buff;
        float Time_hav;
        float res=0.0;
        
SetPosition(8,17);
printf("Time H-hour  M-minute S-second L-light_year 1-needed 2-value u have");
 
 SetPosition(20,18);
      printf("%c---------%c\n",LL,RL);
       SetPosition(20,19);
        printf("%c         %c\n",V,V);
         SetPosition(20,20);
        printf("%c---------%c\n",LBL,RBL);
        
        SetPosition(33,18);
      printf("%c---------%c\n",LL,RL);
       SetPosition(33,19);
        printf("%c         %c\n",V,V);
         SetPosition(33,20);
        printf("%c---------%c\n",LBL,RBL);
        
        SetPosition(46,18);
      printf("%c---------%c\n",LL,RL);
       SetPosition(46,19);
        printf("%c         %c\n",V,V);
         SetPosition(46,20);
        printf("%c---------%c\n",LBL,RBL);

       
          SetPosition(21,19);  
            scanf("%c",&buff);
           scanf("%c",&Time_con);
        
          char_con='\0';
         SetPosition(34,19);
           scanf("%c",&buff);
        scanf("%c",&char_con);
         
         SetPosition(47,19);
       scanf("%f",&Time_hav);
       
       int flag=0;float val=0;
       char v;
       switch(Time_con){
			   case 'M' :
	                if(char_con=='H'||char_con=='h') res=	Time_hav*60;
	                else if(char_con=='s'||char_con=='S')	{ flag=1;res=	 Time_hav/60;val=60;}
	                v='M';
	                break;
	            case 'm' :
	                if(char_con=='H'||char_con=='h') res=	Time_hav*60;
	                else if(char_con=='s'||char_con=='S'){ flag=1;res=	 Time_hav/60;val=60;}
	                 v='M';
	                break;
	          case 'H' :
	                if(char_con=='M'||char_con=='m') {flag=1;res=	Time_hav/60;val=3600;}
	                else if(char_con=='s'||char_con=='S')	{flag=1;res=	 Time_hav/3600;val=3600;}
	                 v='H';
	                break;
	           case 'h' :
	                if(char_con=='M'||char_con=='m') {flag=1;res=	Time_hav/60;val=60;}
	                else if(char_con=='s'||char_con=='S')	{flag=1;res=	 Time_hav/3600;val=3600;}
	                 v='H';
	                break;
	          case 'S' :
	                if(char_con=='M'||char_con=='m') res=	Time_hav*60;
	                else if(char_con=='H'||char_con=='h')	res=	 Time_hav*3600;
	                 v='S';
	                break;
	           case 's' :
	                if(char_con=='M'||char_con=='m') res=	Time_hav*60;
	                else if(char_con=='H'||char_con=='h')	res=	 Time_hav*3600;
	                v='S';
	                break;
       }
         SetPosition(33,22);
      printf("%c----------------------------%c\n",LL,RL);
       SetPosition(33,23);
        printf("%c                            %c\n",V,V);
         SetPosition(33,24);
        printf("%c----------------------------%c\n",LBL,RBL);
        SetPosition(34,23);
        if(flag==1){
        	float max=0;
		if(Time_hav<val){max=Time_hav;}
		else
        		max=val;
        		for(int i=2;i<=(int)max;i++){
        			while((int)Time_hav%i==0&&(int)val%i==0){
	                        Time_hav=(int)Time_hav/i;  
	                        val=(int)val/i;      			
        			}
        				
	        		
        		}
	printf("%d/%d %c (or)  ",(int)Time_hav,(int)val,v);        
	printf("%.2f %c",res,v);
        }else
		printf("%d %c",(int)res,v);

}

void Temp(){
	  char temp_con,char_con,buff;
        float temp_hav;
        
SetPosition(8,17);
printf("Temperature conversion Fahrenheit-F   Celsius -C Kelvin -K  Rankine-R  Reaumur -S(Re) 1-needed 2-value u have");
 
 SetPosition(20,18);
      printf("%c---------%c\n",LL,RL);
       SetPosition(20,19);
        printf("%c         %c\n",V,V);
         SetPosition(20,20);
        printf("%c---------%c\n",LBL,RBL);
        
        SetPosition(33,18);
      printf("%c---------%c\n",LL,RL);
       SetPosition(33,19);
        printf("%c         %c\n",V,V);
         SetPosition(33,20);
        printf("%c---------%c\n",LBL,RBL);
        
        SetPosition(46,18);
      printf("%c---------%c\n",LL,RL);
       SetPosition(46,19);
        printf("%c         %c\n",V,V);
         SetPosition(46,20);
        printf("%c---------%c\n",LBL,RBL);
      
         float res=0.0;
       
          SetPosition(21,19);  
            scanf("%c",&buff);
           scanf("%c",&temp_con);
        
          char_con='\0';
         SetPosition(34,19);
           scanf("%c",&buff);
        scanf("%c",&char_con);
         
         SetPosition(47,19);
       scanf("%f",&temp_hav);

     // printf("%d*%d* %f",temp_con,char_con,temp_hav);
   switch(temp_con){
	        case 'F':
	               	if(char_con=='C'||char_con=='c') res =  ((temp_hav*9)/5)+32 ;
	               	else if(char_con=='K'||char_con=='k') res=(((temp_hav-273.15)*9)/5)+32;
	               	else if(char_con=='R'||char_con=='r') res=temp_hav- 459.67;
	               	else if(char_con=='S'||char_con=='s') res=((temp_hav *5)/4) + 273.15;
                     break;
                     
			 case 'f':
	               	if(char_con=='C'||char_con=='c') res =  res =  ((temp_hav*9)/5)+32 ;
	               	else if(char_con=='K'||char_con=='k') res=(((temp_hav-273.15)*9)/5)+32;
	               	else if(char_con=='R'||char_con=='r') res=temp_hav- 459.67;
	               	else if(char_con=='S'||char_con=='s') res=((temp_hav *5)/4) + 273.15;
                     break;
                     
	         case 'C':
	                if(char_con=='K'||char_con=='k') res=temp_hav-273.15;
	               	else if(char_con=='R'||char_con=='r') res=((temp_hav- 491.67)*5)/9;
	               	else if(char_con=='S'||char_con=='s') res=(temp_hav *5)/4 ;
                  	else if(char_con=='F'||char_con=='f') res=((temp_hav -  32)  *5)/9;
                     break;
                     
              case 'c':
	                if(char_con=='K'||char_con=='k') res=temp_hav-273.15;
	               	else if(char_con=='R'||char_con=='r') res=((temp_hav- 491.67)*5)/9;
	               	else if(char_con=='S'||char_con=='s') res=(temp_hav *5)/4 ;
                  	else if(char_con=='F'||char_con=='f') res=((temp_hav -  32)  *5)/9;
                     break;
                     
                     
              case 'K':	
                    if(char_con=='R'||char_con=='r') res=(temp_hav*5)/9;
	               	else if(char_con=='S'||char_con=='s') res=((temp_hav *5)/4)+273.15 ;
                  	else if(char_con=='F'||char_con=='f') res=(((temp_hav -  32)  *5)/9)+273.15;
                   	else if(char_con=='C'||char_con=='c') res=(temp_hav +273.15);
                     break;
                     
              case 'k':	
                     if(char_con=='R'||char_con=='r') res=(temp_hav*5)/9;
	               	else if(char_con=='S'||char_con=='s') res=((temp_hav *5)/4)+273.15 ;
                  	else if(char_con=='F'||char_con=='f') res=(((temp_hav -  32)  *5)/9)+273.15;
                   	else if(char_con=='C'||char_con=='c') res=(temp_hav +273.15);
                     break;
                   	
              case  'R':
              	    if(char_con=='S'||char_con=='s') res=((temp_hav * 9)/4)+ 491.67 ;
                  	else if(char_con=='F'||char_con=='f') res=(temp_hav +459.67);
                   	else if(char_con=='C'||char_con=='c') res=((temp_hav * 9)/5 )+ 491.67;
                   	else if(char_con=='K'||char_con=='k') res=(temp_hav *9)/5;
                     break;
                     
              case  'r':
              	    if(char_con=='S'||char_con=='s') res=((temp_hav * 9)/4)+ 491.67 ;
                  	else if(char_con=='F'||char_con=='f') res=(temp_hav +459.67);
                   	else if(char_con=='C'||char_con=='c') res=((temp_hav * 9)/5 )+ 491.67;
                   	else if(char_con=='K'||char_con=='k') res=(temp_hav *9)/5;
                     break;
              	     
              case 'S':
              	    if(char_con=='F'||char_con=='f') res=((temp_hav -32)*4)/9;
                   	else if(char_con=='C'||char_con=='c') res=(temp_hav *4)/5;
                   	else if(char_con=='K'||char_con=='k') res=((temp_hav -273.15)*4)/5;
                  	else if(char_con=='R'||char_con=='r') res=((temp_hav -491.67)*4)/9;

                     break;
             case 's':
              	     if(char_con=='F'||char_con=='f') res=((temp_hav -32)*4)/9;
                   	else if(char_con=='C'||char_con=='c') res=(temp_hav *4)/5;
                   	else if(char_con=='K'||char_con=='k') res=((temp_hav -273.15)*4)/5;
                  	else if(char_con=='R'||char_con=='r') res=((temp_hav -491.67)*4)/9;

                     break;
					   
		}
		     SetPosition(33,22);
      printf("%c-----------%c\n",LL,RL);
       SetPosition(33,23);
        printf("%c           %c\n",V,V);
         SetPosition(33,24);
        printf("%c-----------%c\n",LBL,RBL);
        SetPosition(34,23);
		printf("%f",res);

}
