#include <bits/stdc++.h>
#include <windows.h>


using namespace std;

 long long f,s,j,i,n,a,b,x,c,win;
    long long r[25],w[25],t[26]={0},v[25]={0,1,2,5,10,25,50,100,150,200,500,750,1000,5000,10000,15000,20000,25000,30000,50000,75000,100000,300000,500000,1000000};
  bool fin={false};

long long moyenne()
 {
     long long m={0};
     for (int k=1;k<25;k++)
        m+=w[k];
     return (m/24-j);
 }

void gotoxy(int x, int y)
{
  COORD coord;
  coord.X = x;
  coord.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void aff_f(long long f)
{
        for(i=1;i<25;i++)
           if (w[i]==f)
             w[i]=0;
    for(i=1;i<25;i++)
 {
       if (i<=12)
       { gotoxy(30,5+i);
           if (w[i]!=0)
              cout<<"["<<w[i]<<" DT]";
           else
              cout<<"[-]";
       }
       else
       {
         gotoxy(68,i-7);
         if (w[i]!=0)
             cout<<"["<<w[i]<<" DT]" ;
           else
             cout<<"[-]";
       }

  }
    gotoxy(48,20);
    cout<<"[ "<<f<<" ]";
}

void aff_w()
{
    for (i=1;i<=24;i++)
     {
         gotoxy(5,1+i);
         if (r[i]>0)
         cout<<r[i];
         else if (r[i]==-1)
            cout<<"X";
         else
         {
             cout<<" * ";
             r[i]=0;
         }
     }
}

bool rech(int s)
 { bool test=false;
     for(int k=1;k<25;k++)
      if (r[k]==s)
       test=true;
     return test;

 }

int main()
{

    srand ( time(NULL) );
    for(i=0;i<25;i++)
        w[i]=v[i];

    i=1;
    while(i<25)
    {
        x=rand()%24+1;
       if (v[x]!=0)
       {
           t[i]=v[x];
           v[x]=0;
           i++;
       }
    }
     for(i=1;i<=24;i++)
        r[i]=i;
    cout<<"a5tar sandou9ek [1..24]"<<endl;
     do
        cin>>a;
     while(a>24 || a<1);
      r[a]=-1;



 for(j=1;j<27;j++)
 { if(!fin){
     string ch="";
     if (j%5==0)
      {
          gotoxy(40,20);
          srand ( time(NULL) );
          if(((rand()%3+1)%2==1) || (j==26))
          {
             cout<<"Bankeji ye9tara7 3lik : "<<(moyenne()/100)*100<<" DT";
             gotoxy(50,21);
             cout<<"[YES/NO]";
              gotoxy(53,22);

             cin>>ch;
             if (ch=="YES" || ch=="yes" || ch=="y" || ch=="Y" || ch=="oui")
               {
                   fin=true;
                    win=moyenne();
                    if (moyenne()>100)
                        win=(moyenne()/100)*100;
                    break;
               }
            else
                continue;
          }
        else
            {
               cout<<"Bankeji ye9tara7 3lik taghyir l sandou9 ";
               gotoxy(50,21);
             cout<<"[YES/NO]";
             gotoxy(53,22);

               cin>>ch;
             if (ch=="YES" || ch=="yes" || ch=="y" || ch=="Y" || ch=="oui")
             {
                gotoxy(40,23);
                 cout<<"badal b sandou9 numero : _";
                 cin>>n;
                 long long z;
                 r[a]=a;
                 r[n]=-1;
                 z=t[a];
                 t[a]=t[n];
                 t[n]=z;

             }
            }


      }

    system("CLS");
    aff_w();
    aff_f(f);
    gotoxy(5,27);
     cout<<endl<<"a5tar sandoun9 : _";
     do
        cin>>s;
     while(!rech(s) || s==0);
     r[s]=0;
     f=t[s];
     system("CLS");
    aff_w();
    aff_f(f);
    win=t[a];
 }

 }
                gotoxy(43,24);

cout<<"RBA7T m3ANA : "<<win<<" DT"<<endl<<endl<<endl<<endl;
}
