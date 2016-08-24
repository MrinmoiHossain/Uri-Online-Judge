#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
   int h1,m1,h2,m2;
   int h,m,hf;
   cin >> h1 >> m1 >> h2 >> m2;

   if(h1 == h2){
      if(m1>m2)
      {
         h=(24-h1)+h2;
      }
      else
      {
         h=h2-h1;
      }
   }
   else if(h1>h2)
   {
      h=(24-h1)+h2;
   }
   else if(h1<h2)
   {
      h=h2-h1;
   }
   if(m1>m2)
      {
         m=60-(m1-m2);
      }
   else
      {
         m=m2-m1;
      }
   hf=((h*60)+m)/60;
   m=((h*60)+m)%60;
   cout<<"O JOGO DUROU "<<(hf-1)<<" HORA(S) E "<<m<<" MINUTO(S)"<<endl;
   return 0;
}
