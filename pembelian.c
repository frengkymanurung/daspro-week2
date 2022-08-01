#include <stdio.h>
#include <stdlib.h>

int main()
{
int pulpen,x,pensil,y,buku,z,uang_pak_albert,jumlah_pembelian,sisa_uang;

pulpen=2000;
x=15;
pensil=1000;
y=50;
buku=5000;
z=12;
uang_pak_albert=170000;

jumlah_pembelian=pulpen*x+pensil*y+buku*z;

printf("harga barang yang di beli = %d\n",jumlah_pembelian);

sisa_uang=uang_pak_albert-jumlah_pembelian;

printf("sisa uang pak albert = %d",sisa_uang);
}
