#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Assigment Operator > penugasan
    // menggunakan suatu nilai ke dalam variabel

    /*
    int a,b;
    a = 10;
    b = 20;
    printf("Isi variabel a adalah %d \n", a);
    printf("Isi variabel b adalah %d \n", b);
    */



    //Multiple Assigment
    // digunakan jika memiliki banyak variabel namun memiliki nilai yang sama

    /*
    int x,y,z;
    x = y = z = 10;
    printf("Nilai x,y,z itu sama yaitu %d \n", x);
    printf("Nilai x,y,z itu sama yaitu %d \n", y);
    printf("Nilai x,y,z itu sama yaitu %d \n", z);
    */



    //Compound Assigment
    // digunakan untuk menyederhanakan tulisan operator gabungan (operator assigment + operator lain)
    // +=, -=, *=, /=, %=, &=, |=, ^=, <<=, >>=,
    // a+=b, a-=b, a/=b, a%=b, a%=b, a|=b, a^=b, a<<=b, a>>=b
    // a=a+b, a=a-b, a=a*b, a=a/b, ...

    /*
    int a, b, c, d, e, f, g, h;
    a = b = 10;
    a += 10;
    d = a + b;
    e = a - b;
    f = a / b;
    printf("nilai dari a+=10 = %d \n", a);
    printf("nilai dari a+=b = %d \n", d);
    printf("nilai dari a-=b = %d \n", e);
    printf("nilai dari a/=b = %d \n", f);
    */


    // Operator Aritmatika -> -, +, *, /, %, --, ++,
    /*
    int x,y;
    x = 10;
    y = 20;

    printf("%d * %d = %d \n", x, y, x*y);
    printf("%d + %d = %d \n", x, y, x+y);
    printf("%d - %d = %d \n", x, y, x-y);
    printf("%d / %d = %f \n", x, y, (float)x/y);
    printf("%d mod %d = %d \n", x, y, x%y);
    */

    /*
    int x;
    // Input data dari user
    printf("Inputkan nilai x = ");
    scanf("%d", &x);

    // melakukan perhitungan
    x+=10;
    printf("Hasil x + 10 = %d \n", x);
    */


    // Increment dan Decrement
    // Increment diformulasikan dengan "++" -> menambah variabel sebanyak 1 angka
    // Decrement diinformasikan dengan "--" -> mengurangi variabel sebanyak 1 angka
    /*
    int x,y;
    x = 10;
    y = 11;
    x++;
    y--;

    printf("Tampilkan 1 nilai pada variabel pada x jadi x = %d \n", x);
    printf("Kurangkan 1 nilai pada variabel pada y jadi y = %d \n", y);
    */

    // Operator Logika
    //&& --> AND, ||--> OR, ! --> Not
    // Dalam bahasa C, operator logika bisa diproses dengan integer dimana 1 itu True, 0 itu False

    /*
    int x;
    x = 0 && 1;
    printf("Nilai x akan bernilai %d yang menandakan False \n", x);
    x = 1 && 1;
    printf("Nilai x akan bernilai %d yang menandakan True \n", x);
    x = 1 || 0;
    printf("Nilai x akan bernilai %d yang menandakan True \n", x);
    x = !0;
    printf("Nilai x akan bernilai %d yang menandakan True \n", x);
    */

    // Operator Relational
    // ==, !=, >, <, >=, <=

    /*
    int x;
    x = 5 == 5;
    printf("Jawaban %d menandakan True \n", x);
    x = 5 != 5;
    printf("Jawaban %d menandakan False \n", x);
    x = 5 > 4;
    printf("Jawaban %d menandakan True \n", x);
    x = 5 < 4;
    printf("Jawaban %d menandakan False \n", x);
    x = 5 >= 5;
    printf("Jawaban %d menandakan True \n", x);
    */




}
