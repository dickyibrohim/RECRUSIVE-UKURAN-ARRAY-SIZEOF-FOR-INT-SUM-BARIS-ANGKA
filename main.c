#include <stdio.h>
#include <stdlib.h>
//DICKY IBROHIM
//deklarasi fungsi
int faktorial(int angka);
void barisAngka(int awal,int akhir);
int sumTransversal(int data[],int index);
///variabel global
int ukuranArray;
int main()
{
/*  int a,b;
    printf("masukan angka : ");scanf("%d",&a);
    printf("Hasil : %d",faktorial(a));
*/
    barisAngka(-10,10);
    ///data array
    int dataArray[]={10,1,4,5};
    ///menentukan ukuran array
    ukuranArray=sizeof(dataArray)/sizeof(int)-1;
    ///sum array
    //printf("jumlah total array = %d\n",sumTransversal(dataArray,0));
    return 0;
}
int faktorial(int angka)
{
    if(angka==0)//basis
    {
        return 1;
    }
    else
    {
        return faktorial(angka-1)*angka;
    }
}
void barisAngka(int awal,int akhir)
{
    if(awal==akhir)///basis
    {

        printf(" %d ",akhir);
    }
    else
    {
        if(awal%2==0)
        printf(" %d ",awal);
        barisAngka(awal+1,akhir);
    }
}
int sumTransversal(int data[],int index)
{
    if(index==ukuranArray)
    {
        return data[ukuranArray];
    }
    else
    {
        return sumTransversal(data,index+1)+data[index];
    }
}
