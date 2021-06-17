int main(int argc, char* argv[])
{
int sayimiz; int i; int tut,kontrol=0;
 //Builder sinir iteger degeri 2100000000 civarlarindadir
printf("Sayiyi Giriniz:");
scanf("%d",&sayimiz);
printf("\n");
if(sayimiz>=1000000000)
{
tut=sayimiz/1000000000;
sayimiz=sayimiz%1000000000;
if(tut==1)
printf("Bir");
if(tut==2)
printf("Iki");
printf(" Milyar");
printf(" ");
}
if(sayimiz>=100000000)
{
tut=sayimiz/100000000;
sayimiz=sayimiz%100000000;
if(tut==1)
printf("Yuz");
if(tut==2)
printf("Iki Yuz");
if(tut==3)
printf("Uc Yuz");
if(tut==4)
printf("Dort Yuz");
if(tut==5)
printf("Bes Yuz");
if(tut==6)
printf("Alti Yuz");
if(tut==7)
printf("Yedi Yuz");
if(tut==8)
printf("Sekiz Yuz");
if(tut==9)
printf("Dokuz Yuz");
printf(" ");
kontrol=1;
}

if(sayimiz>=10000000)
{
tut=sayimiz/10000000;
sayimiz=sayimiz%10000000;
if(tut==1)
printf("On");
if(tut==2)
printf("Yirmi");
if(tut==3)
printf("Otuz");
if(tut==4)
printf("Kirk");
if(tut==5)
printf("Elli");
if(tut==6)
printf("Altmis");
if(tut==7)
printf("Yetmis");
if(tut==8)
printf("Seksen");
if(tut==9)
printf("Doksan");
printf(" ");
kontrol=1;
}
if(sayimiz>=1000000)
{
tut=sayimiz/1000000;
sayimiz=sayimiz%1000000;
if(tut==1)
printf("Bir");
if(tut==2)
printf("Iki");
if(tut==3)
printf("Uc");
if(tut==4)
printf("Dort");
if(tut==5)
printf("Bes");
if(tut==6)
printf("Alti");
if(tut==7)
printf("Yedi");
if(tut==8)
printf("Sekiz");
if(tut==9)
printf("Dokuz");
printf(" ");
kontrol=1;
}
if(kontrol==1)
printf("Milyon ");
kontrol=0;
if(sayimiz>=100000)
{
tut=sayimiz/100000;
sayimiz=sayimiz%100000;
if(tut==1)
printf("Yuz");
if(tut==2)
printf("Iki Yuz");
if(tut==3)
printf("Uc Yuz");
if(tut==4)
printf("Dort Yuz");
if(tut==5)
printf("Bes Yuz");
if(tut==6)
printf("Alti Yuz");
if(tut==7)
printf("Yedi Yuz");
if(tut==8)
printf("Sekiz Yuz");
if(tut==9)
printf("Dokuz Yuz");
printf(" ");
kontrol=1;
}
if(sayimiz>=10000)
{
tut=sayimiz/10000;
sayimiz=sayimiz%10000;
if(tut==1)
printf("On");
if(tut==2)
printf("Yirmi");
if(tut==3)
printf("Otuz");
if(tut==4)
printf("Kirk");
if(tut==5)
printf("Elli");
if(tut==6)
printf("Altmis");
if(tut==7)
printf("Yetmis");
if(tut==8)
printf("Seksen");
if(tut==9)
printf("Doksan");
printf(" ");
kontrol=1;
}
if(sayimiz>=1000)
{
tut=sayimiz/1000;
sayimiz=sayimiz%1000;
if(tut==1)
printf("Bir");
if(tut==2)
printf("Iki");
if(tut==3)
printf("Uc");
if(tut==4)
printf("Dort");
if(tut==5)
printf("Bes");
if(tut==6)
printf("Alti");
if(tut==7)
printf("Yedi");
if(tut==8)
printf("Sekiz");
if(tut==9)
printf("Dokuz");
printf(" ");
kontrol=1;
}
if(kontrol==1)
printf("Bin ");
kontrol=0;
if(sayimiz>=100)
{
tut=sayimiz/100;
sayimiz=sayimiz%100;
if(tut==1)
printf("Yuz");
if(tut==2)
printf("Iki Yuz");
if(tut==3)
printf("Uc Yuz");
if(tut==4)
printf("Dort Yuz");
if(tut==5)
printf("Bes Yuz");
if(tut==6)
printf("Alti Yuz");
if(tut==7)
printf("Yedi Yuz");
if(tut==8)
printf("Sekiz Yuz");
if(tut==9)
printf("Dokuz Yuz");
printf(" ");
kontrol=1;
}
if(sayimiz>=10)
{
tut=sayimiz/10;
sayimiz=sayimiz%10;
if(tut==1)
printf("On");
if(tut==2)
printf("Yirmi");
if(tut==3)
printf("Otuz");
if(tut==4)
printf("Kirk");
if(tut==5)
printf("Elli");
if(tut==6)
printf("Altmis");
if(tut==7)
printf("Yetmis");
if(tut==8)
printf("Seksen");
if(tut==9)
printf("Doksan");
printf(" ");
kontrol=1;
}
if(sayimiz>=1)
{
tut=sayimiz/1;
if(tut==1)
printf("Bir");
if(tut==2)
printf("Iki");
if(tut==3)
printf("Uc");
if(tut==4)
printf("Dort");
if(tut==5)
printf("Bes");
if(tut==6)
printf("Alti");
if(tut==7)
printf("Yedi");
if(tut==8)
printf("Sekiz");
if(tut==9)
printf("Dokuz");
printf(" ");
kontrol=1;
}
printf("\n");
system("PAUSE");
        return 0;
}
