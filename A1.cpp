/* 
 * File:   main.cpp
 * Author: ESC
 *
 * Created on March 10, 2015, 8:51 PM
 */

#include <cstdlib>
#include <string.h>
#include <iostream>
#include <cstdio>
#include <sstream>
using namespace std;

/*
 * 
 */
bool checkadd(int &argc,char** argv)
{   for(int j=2;j<=argc-1;j++)
    
     {
       if(!(isdigit(argv[j][0]))&&((int)argv[j][0]!=(int)'+')&&((int)argv[j][0]!=(int)'-')){
            cout<<"Incorrect Data Type";
            return 0;
        }
     }
     for(int j=2;j<=argc-1;j++)
        for(int i=1;i<=strlen(argv[j])-1;i++)
        {{if(!(isdigit(argv[j][i]))){
            cout<<"Incorrect Data Type";
            return 0;
        }
         }}
           return 1;
}
bool checkdel (int &argc,char** argv)
{  int j,i,x;
x=(int)argv[2][0];
     i=strtol(argv[2], NULL,10); 
        if ((i>(argc-3))||(i<=0)){cout<<"Incorrect Number of Arguments"; return 0;}
        else{
            if((x!=(int)'+')&&(!(isdigit(argv[2][0]))))
            {cout<<"Incorrect Data Type"; return 0;}
         for( i=1;i<=strlen(argv[2])-1;i++)
        {
        if(!(isdigit(argv[2][i]))){
            cout<<"Incorrect Data Type";
            return 0;
        }}}
           return 1;
}
bool checkr (int &argc,char** argv)
{  int j,i,x;
if(!(isdigit(argv[2][0]))&&((int)argv[2][0]!=(int)'+')){
            cout<<"Incorrect Data Type";
            return 0;
        }
    if(!(isdigit(argv[5][0]))&&((int)argv[5][0]!=(int)'+')&&((int)argv[5][0]!=(int)'-')){
            cout<<"Incorrect Data Type";
            return 0;
        }
      if(!(isdigit(argv[5][0]))&&((int)argv[5][0]!=(int)'-')&&((int)argv[5][0]!=(int)'-')){
            cout<<"Incorrect Data Type";
            return 0;
        }
      if(!(isdigit(argv[5][0]))&&((int)argv[5][0]!=(int)'+')){
            cout<<"Incorrect Data Type";
            return 0;
        }
        for(int j=2;j<=argc-1;j++)
        for(int i=1;i<=strlen(argv[j])-1;i++)
        {{if(!(isdigit(argv[j][i]))){
            cout<<"Incorrect Data Type";
            return 0;
        }
         }}
           return 1;
}
void shuffle (char a[])
{char t; 
    for(int k=0;k<=strlen(a)-2;k+=2)
    {t=a[k]; a[k]=a[k+1];a[k+1]=t;}
    cout<<a<<endl;
    }
int main(int argc, char** argv) {
    char t[100][100];
    char *t1[100];
    int x;
     int sum=0;
    int flag;
    int r[100];
     if(argc<=1)   cout<<"Undefined Command";
    else if(!strcmp(argv[1],"print"))
    {if(argc<3) {cout<<"Incorrect Number of Arguments";}
    else{for(int i=2;i<argc;i++)
    {  if(argv[i]!=" ")  cout<<argv[i]<<" ";
    }
    }}
    else if(!strcmp(argv[1],"reverse"))
    { if(argc<4) {cout<<"Incorrect Number of Arguments";}
    else{for( int j=argc-1;j>=2;j--) { cout<<argv[j]<<" ";}} } 
    else if (!strcmp(argv[1],"shuffle"))
    { if(argc<3) cout<<"Incorrect Number of Arguments";
    else        shuffle (argv[2]);
    }
    else if (!strcmp(argv[1],"upper"))
    {if(argc<3) {cout<<"Incorrect Number of Arguments";}
    else{
     for(int j=2;j<=argc-1;j++)
     {for(int k=0;k<=strlen(argv[j])-1;k++)
     {        
          argv[j][k]=toupper(argv[j][k]) ;}} 
     
    for(int j=2;j<=argc-1;j++)
    {  cout<<argv[j]<<" ";}}
    
}
    else if (!strcmp(argv[1],"shuffleStatement"))
     {if(argc<3) {cout<<"Incorrect Number of Arguments";}
    else{
    for(int k=2;k<=argc-2;k+=2)
    {*t1=argv[k]; argv[k]=argv[k+1];argv[k+1]=*t1;}
      for(int k=2;k<=argc-1;k++)
      {cout<<argv[k]<<" ";}
    }}
     else if (!strcmp(argv[1],"delete"))
     {  if(argc<4){cout<<"Incorrect Number of Arguments";}
     else if(checkdel(argc,argv)){   
         if(strtol(argv[2], NULL,10)==0){ for(int k=3;k<=argc-1;k++)
     {cout<<argv[k]<<" ";}}
         else{
     for(int k=strtol(argv[2], NULL,10)+2;k<=argc-1;k++)
      {argv[k]=argv[k+1];}
     for(int k=3;k<=argc-1;k++)
     {cout<<argv[k]<<" ";}
         }
     }
     }
     else if (!strcmp(argv[1],"middle"))
     { if(argc<3){cout<<"Incorrect Number of Arguments";}
     else{
         if(argc%2==0)
         {int i=argc/2;
         cout<<argv[i]<<" "<<argv[i+1]<<" ";
         }
     else cout<<argv[(argc-1)/2+1];
     }}
     else if (!strcmp(argv[1],"add"))
     {if(argc<3){cout<<"Incorrect Number of Arguments";}  
     else if(checkadd(argc,argv)){
        
         for(int i=2;i<=(argc)-1;i++)
         {   
          sum=sum+strtol(argv[i],NULL,10);}  
             cout<<sum;
     }}
     else if (!strcmp(argv[1],"random"))
     {if(argc!=6) {cout<<"Incorrect Number of Arguments";}
     else if(checkr(argc,argv))
        {
         srand(strtol(argv[5], NULL,10));
    for (int c=1;c<=strtol(argv[2],NULL,10);)
   {
      x= rand() % strtol(argv[2],NULL,10)+strtol(argv[3], NULL,10); 
      if(x<=strtol(argv[4],NULL,10))    {cout << x << " "; c++;}
   }         
   
    } }  
     
      else cout<<"Undefined Command";
     return 0;
    }



