/*
    Nama   : Panji Pratama
    Prodi  : Teknik Informatika
    Kelas  : TI19C
    Matkul : Dasar Pemograman
    Universitas Nusa Putra
*/
#include<stdio.h>
#include<stdlib.h>

int main(void){
system("color 0b");
int hitung10,bayar10,bayarplis,hitung9,bayar9,bayarya,hitung8,bayar8,bayardong,hitung7,bayar7,bayarhey,hitung6,bayar6,bayarwoy,hitung4,bayar4,bayarsay,hitung5,bayarwe,bayar5,total6,hitung3,bayar3,bayartotal,drink,snack,totalbayar,bayar2,awal,ulang5,ulang4,ulang3,ulang2,ulang,hpiscok,hsepuluh,hjamur,htokpoki,htakoyaki,bayarcemilan,total5,bayarmakanan,bayarmilk,bayarjus,bayarcoffee,havocado,hcafelatte,hmocha,hcappucino,hcaramel,hhazelnut,hvanilla,total4,total2,htomat,hbuah,total3,milk,coffee,jus,cemilan,minuman,pilih,makanan,level,topping,hmilk,hamericano,hmerah,hbulgogi,hladahtm,hcheese,hramen,hlevel0,hlevel1,hlevel2,hlevel3,hayam,hsapi,hudang,hkarage,htelur,menu,beli,total,lanjut,bayar,kembali;
hpiscok=10000;
hsepuluh=10000;
hjamur=7000;
htokpoki=25000;
htakoyaki=16000;
havocado=20000;
hcafelatte=23000;
hmocha=27000;
hcappucino=23000;
hcaramel=30000;
hhazelnut=30000;
hvanilla=27000;
hbuah=12000;
htomat=10000;
hmilk=15000;
hamericano=25000;
hmerah=23000;
hbulgogi=25000;
hladahtm=24000;
hcheese=20000;
hramen=40000;
hlevel0=0;
hlevel1=2000;
hlevel2=4000;
hlevel3=6000;
hayam=10000;
hsapi=12000;
hudang=8000;
hkarage=8000;
htelur=7000;
makanan=0;
level=0;
topping=0;
jus=0;
coffee=0;
milk=0;
cemilan=0;
drink=0;
snack=0;

awal :
system("cls");
printf("\t\t\t\tSelamat Datang di Kedai Mie Pratama\n");
printf("\t\t\tJalan Pemuda II No.19 Kel. Tipar Kec. Citamiang\n");
printf("\t\t\t\tContact Person : 0822-6688-3583\n");
printf("\t\t\t      Instagram >>> @Kedai_Pratama\n\n");
printf(" NOTE !!! KEPADA PEMBELI HARAP MASUKAN PILIHAN SESUAI PILIHAN YANG ADA, JIKA TIDAK SESUAI PROGRAM AKAN EROR/BERHENTI\n\n");
printf("\n1.Makanan\n");
printf("2.Minuman\n");
printf("3.Cemilan\n\n");
printf("Masukan Pilihan : ");
scanf("%d",&pilih);

switch (pilih) {
case 1:

menu :
printf("\n1. Mie Kuah Merah (23K)\n");
printf("2. Mie Kuah Bulgogi (25K)\n");
printf("3. Mie Kuah Lada Hitam (24K)\n");
printf("4. Mie Kuah Cheese (20K)\n");
printf("5. Fire Ramen Jumbo (40K)\n\n");
printf("Masukan Pilihan : ");
scanf("%d",&makanan);

if (makanan==1) {
    makanan=hmerah;
}
else if (makanan==2) {
    makanan=hbulgogi;
}
else if (makanan==3) {
    makanan=hladahtm;
}
else if (makanan==4) {
    makanan=hcheese;
}
else if (makanan==5) {
    makanan=hramen;
}
else if (makanan >5) {
            printf("Tolong input sesuai pilihan\n\n");
            goto menu;
        }
if (1||2||3||4||5)
    {
    level :
    printf("\nPilih Level Pedas\n");
    printf("1. Level 0 Gratis (Tidak Pedas)\n");
    printf("2. Level 1 (2K) (Pedas)\n");
    printf("3. Level 2 (4K)(Sangat Pedas)\n");
    printf("4. Level 3 (6K)(Sangat Sangat Pedas)\n\n");
    printf("Masukan Pilihan : ");
    scanf("%d",&level);

    if (level==1) {
        level=hlevel0;
    }
    else if (level==2) {
        level=hlevel1;
    }
    else if (level==3) {
        level=hlevel2;
    }
    else if (level==4) {
        level=hlevel3;
    }
    else if (level >4) {
            printf("Tolong input sesuai pilihan\n\n");
            goto level;
        }

    topping :
    printf("\nPilih Topping\n");
    printf("1. Ayam Panggang (10K)\n");
    printf("2. Daging Sapi (12K)\n");
    printf("3. Udang (8K) \n");
    printf("4. Karage (8K) \n");
    printf("5. Telur Dadar Special (7K) \n\n");
    printf("Masukan Pilihan : ");
    scanf("%d",&topping);

    if (topping==1) {
        topping=hayam;
    }
    else if (topping==2) {
        topping=hsapi;
    }
    else if (topping==3) {
        topping=hudang;
    }
    else if (topping==4) {
        topping=hkarage;
    }
    else if (topping==5) {
        topping=htelur;
    }
    else if (topping >5) {
            printf("Tolong input sesuai pilihan\n\n");
            goto topping;
        }

    total=makanan+level+topping;
    printf("Total : %d\n\n",total);

    ulang2 :
    printf("Ingin pesan minuman?\n");
    printf("1. Ya\n");
    printf("2. Tidak\n");
    printf("Masukan Pilihan : ");
    scanf("%d",&ulang);

    if (ulang==1) {
        goto drink;
    }
    else if (ulang==2) {
        goto hitung;
    }
    else if (ulang >2) {
            printf("Tolong input sesuai pilihan\n\n");
            goto ulang2;
        }

    drink :

    printf("\n1. Jus Buah\n");
    printf("2. Coffee\n");
    printf("3. Milk\n\n");
    printf("Masukan Pilihan : ");
    scanf("%d",&drink);


    if (drink ==1) {
        jus :
        printf("\nAll Price 12K\n\n");
        printf("1. Jus Apel  \t\t 6.  Jus Tomat \n");
        printf("2. Jus Mangga \t\t 7.  Jus Strawberry \n");
        printf("3. Jus Sirsak \t\t 8.  Jus Jeruk \n");
        printf("4. Jus Alpukat \t\t 9.  Jus Nanas \n");
        printf("5. Jus Kiwi \t\t 10. Jus Anggur \n\n");

        printf("Masukan Pilihan : ");
        scanf("%d",&jus);

    if (jus==1||2||3||4||5||7||8||9||10) {
        jus=hbuah;
    }
    else if (jus >10) {
            printf("Tolong input sesuai pilihan\n\n");
            goto jus;
        }
    total2=jus;
    printf("\nTotal : %d\n\n",total2);

    ulang3:
    printf("Ingin pesan cemilan?\n");
    printf("1. Ya\n");
    printf("2. Tidak\n");
    printf("Masukan Pilihan : ");
    scanf("%d",&ulang);

    if (ulang==1) {
        goto snack;
    }
    else if (ulang==2) {
        goto hitung4;
    }
    else if (ulang >2) {
            printf("Tolong input sesuai pilihan\n\n");
            goto ulang3;
        }
    break;

    }
    if (drink==2) {
        printf("\n1. Americano (25K) \t\t 5.  Cappucino (23K)\n");
        printf("\n\t2. Avocado Coffee (20K) \t\t 6.  Caramel Latte (30K)\n");
        printf("\n3. Cafe Latte (23K) \t\t 7.  Hazelnut Latte (30K)\n");
        printf("\n\t4. Cafe Mocha Latte (27K) \t\t 8.  Vanilla Latte (27K)\n\n");
        printf("Masukan Pilihan : ");
        scanf("%d",&coffee);

        if (coffee==1) {
            coffee=hamericano;
        }
        else if (coffee==2) {
            coffee=havocado;
        }
        else if (coffee==3) {
            coffee=hcafelatte;
        }
        else if (coffee==4) {
            coffee=hmocha;
        }
        else if (coffee==5) {
            coffee=hcappucino;
        }
        else if (coffee==6) {
            coffee=hcaramel;
        }
        else if (coffee==7) {
            coffee=hhazelnut;
        }
        else if (coffee==8) {
            coffee=hvanilla;
        }

        total3=coffee;
    printf("\nTotal : %d\n\n",total3);

    printf("Ingin pesan cemilan?\n");
    printf("1. Ya\n");
    printf("2. Tidak\n");
    printf("Masukan Pilihan : ");
    scanf("%d",&ulang);

    if (ulang==1) {
        goto snack;
    }
    else if (ulang==2) {
        goto hitung6;
    }
    break;

    }
    if (drink==3) {
        printf("\nAll Price 15K\n\n");
        printf("1. Milky Strawberry\n");
        printf("2. Milky Hazelnut\n");
        printf("3. Milky Irish\n");
        printf("4. Milky Original\n");
        printf("5. Milky Vanila\n\n");
        printf("Masukan Pilihan : ");
        scanf("%d",&milk);

    if (1||2||3||4||5||6) {
        milk=hmilk;
    }
    total4=milk;
    printf("\nTotal : %d \n\n",total4);

    printf("Ingin pesan cemilan?\n");
    printf("1. Ya\n");
    printf("2. Tidak\n");
    printf("Masukan Pilihan : ");
    scanf("%d",&ulang);

    if (ulang==1) {
        goto snack;
    }
    else if (ulang==2) {
        goto hitung2;
    }
    break;

    }

    snack :
        printf("\n1. Cireng 8pcs (10K)\t\t 4. Tokpoki (25K)\n");
        printf("2. Pisang Coklat (10K)\t\t 5. Takoyaki 10pcs (16K)\n");
        printf("3. Jamur Crispy (7K)\t\t 6. Roti Bakkar (10K)\n\n");
        printf("Masukan Pilihan : ");
        scanf("%d",&cemilan);

        if (cemilan==1) {
        cemilan=hsepuluh;
     }
     else if (cemilan==2) {
        cemilan=hsepuluh;
     }
     else if (cemilan==3) {
        cemilan=hjamur;
     }
      else if (cemilan==4) {
        cemilan=htokpoki;
     }
      else if (cemilan==5) {
        cemilan=htakoyaki;
     }
      else if (cemilan==6) {
        cemilan=hsepuluh;
     }
        total5=cemilan;
    printf("\nTotal : %d \n\n",total5);

    if (drink==3){
    goto hitung3;
    }
    if (drink==1) {
        goto hitung5;
    }
    if (drink==2) {
        goto hitung7;
    }
    break;
    }
case 2 :
    minuman :

    printf("\n1. Jus Buah\n");
    printf("2. Coffee\n");
    printf("3. Milk\n\n");
    printf("Masukan Pilihan : ");
    scanf("%d",&minuman);

    if (minuman ==1) {
        printf("\nAll Price 12K\n\n");
        printf("1. Jus Apel  \t\t 6.  Jus Tomat \n");
        printf("2. Jus Mangga \t\t 7.  Jus Strawberry \n");
        printf("3. Jus Sirsak \t\t 8.  Jus Jeruk \n");
        printf("4. Jus Alpukat \t\t 9.  Jus Nanas \n");
        printf("5. Jus Kiwi \t\t 10. Jus Anggur \n\n");

        printf("Masukan Pilihan : ");
        scanf("%d",&jus);

    if (jus==1||2||3||4||5||7||8||9||10) {
        jus=hbuah;
    }
    total2=jus;
    printf("\nTotal : %d\n\n",total2);

    printf("Ingin pesan cemilan?\n");
    printf("1. Ya\n");
    printf("2. Tidak\n");
    printf("Masukan Pilihan : ");
    scanf("%d",&ulang);

    if (ulang==1) {
        goto cemil;
    }
    else if (ulang==2) {
        goto bayarjus;
    }

    bayarjus :
        printf("\nPesanan anda\n\n");
    printf("Minuman Jus : %d\n\n",total2);
    printf("Total Pembayaran : %d\n",total2);

        printf("Uang yang dibayar : ");
        scanf("%d",&bayar);
        if (bayar<total2) {
            printf("\nTolong bayar sesuai/melebihi total\n");
            goto bayarjus;
        }
        else {}
        kembali=bayar-total2;
        printf("Kembali : %d\n\n",kembali);
        printf("Terima kasih atas kunjungannya\n\n");
        printf("Apa anda ingin pesan lagi?\n");
        printf("1. Ya\n");
        printf("2. Tidak\n");
        printf("Masukan Pilihan : ");
        scanf("%d",&ulang);
        if (ulang==1) {
            goto awal;
        }
        else if (ulang==2) {
        return 0;
        }
    break;


    }
    if (minuman==2) {
        printf("\n1. Americano (25K) \t\t 5.  Cappucino (23K)\n");
        printf("\n\t2. Avocado Coffee (20K) \t\t 6.  Caramel Latte (30K)\n");
        printf("\n3. Cafe Latte (23K) \t\t 7.  Hazelnut Latte (30K)\n");
        printf("\n\t4. Cafe Mocha Latte (27K) \t\t 8.  Vanilla Latte (27K)\n\n");
        printf("Masukan Pilihan : ");
        scanf("%d",&coffee);

        if (coffee==1) {
            coffee=hamericano;
        }
        else if (coffee==2) {
            coffee=havocado;
        }
        else if (coffee==3) {
            coffee=hcafelatte;
        }
        else if (coffee==4) {
            coffee=hmocha;
        }
        else if (coffee==5) {
            coffee=hcappucino;
        }
        else if (coffee==6) {
            coffee=hcaramel;
        }
        else if (coffee==7) {
            coffee=hhazelnut;
        }
        else if (coffee==8) {
            coffee=hvanilla;
        }

        total3=coffee;
    printf("\nTotal : %d\n\n",total3);

    printf("Ingin pesan cemilan?\n");
    printf("1. Ya\n");
    printf("2. Tidak\n");
    printf("Masukan Pilihan : ");
    scanf("%d",&ulang);

    if (ulang==1) {
        goto cemil;
    }
    else if (ulang==2) {
        goto bayarcoffee;
    }

    bayarcoffee :
        printf("\nPesanan anda\n\n");
    printf("Minuman Coffee : %d\n\n",total3);
    printf("Total Pembayaran : %d\n",total3);

        printf("Uang yang dibayar : ");
        scanf("%d",&bayar);
        if (bayar<total3) {
            printf("\nTolong bayar sesuai/melebihi total\n");
            goto bayarcoffee;
        }
        else {}
        kembali=bayar-total3;
        printf("Kembali : %d\n\n",kembali);
        printf("Terima kasih atas kunjungannya\n\n");

        printf("Apa anda ingin pesan lagi?\n");
        printf("1. Ya\n");
        printf("2. Tidak\n");
        printf("Masukan Pilihan : ");
        scanf("%d",&ulang);
        if (ulang==1) {
            goto awal;
        }
        else if (ulang==2) {
        return 0;
        }
    break;

    }
    if (minuman==3) {
        printf("\nAll Price 15K\n\n");
        printf("1. Milky Strawberry\n");
        printf("2. Milky Hazelnut\n");
        printf("3. Milky Irish\n");
        printf("4. Milky Original\n");
        printf("5. Milky Vanila\n\n");
        printf("Masukan Pilihan : ");
        scanf("%d",&milk);

    if (1||2||3||4||5||6) {
        milk=hmilk;
    }
    total4=milk;
    printf("\nTotal : %d \n\n",total4);

    printf("Ingin pesan cemilan?\n");
    printf("1. Ya\n");
    printf("2. Tidak\n");
    printf("Masukan Pilihan : ");
    scanf("%d",&ulang);

    if (ulang==1) {
        goto cemil;
    }
    else if (ulang==2) {
        goto bayarmilk;
    }

    bayarmilk :
        printf("\nPesanan anda\n\n");
    printf("Minuman Milk : %d\n\n",total4);
    printf("Total Pembayaran : %d\n",total4);

        printf("Uang yang dibayar : ");
        scanf("%d",&bayar);
        if (bayar<total4) {
            printf("\nTolong bayar sesuai/melebihi total\n");
            goto bayarmilk;
        }
        else {}
        kembali=bayar-total4;
        printf("Kembali : %d\n\n",kembali);
        printf("Terima kasih atas kunjungannya\n\n");

        printf("Apa anda ingin pesan lagi?\n");
        printf("1. Ya\n");
        printf("2. Tidak\n");
        printf("Masukan Pilihan : ");
        scanf("%d",&ulang);
        if (ulang==1) {
            goto awal;
        }
        else if (ulang==2) {
        return 0;
        }

        cemil :
        printf("\n1. Cireng 8pcs (10K)\t\t 4. Tokpoki (25K)\n");
        printf("2. Pisang Coklat (10K)\t\t 5. Takoyaki 10pcs (16K)\n");
        printf("3. Jamur Crispy (7K)\t\t 6. Roti Bakkar (10K)\n\n");
        printf("Masukan Pilihan : ");
        scanf("%d",&cemilan);

     if (cemilan==1) {
        cemilan=hsepuluh;
     }
     else if (cemilan==2) {
        cemilan=hsepuluh;
     }
     else if (cemilan==3) {
        cemilan=hjamur;
     }
      else if (cemilan==4) {
        cemilan=htokpoki;
     }
      else if (cemilan==5) {
        cemilan=htakoyaki;
     }
      else if (cemilan==6) {
        cemilan=hsepuluh;
     }
        total5=cemilan;
    printf("\nTotal : %d \n\n",total5);

    if (minuman==3) {
        goto hitung8;
    }

    if (minuman==2) {
        goto hitung9;
    }

    if (minuman==1) {
        goto hitung10;
    }
    break;

    }
case 3 :
    cemilan :
        printf("\n1. Cireng 8pcs (10K)\t\t 4. Tokpoki (25K)\n");
        printf("2. Pisang Coklat (10K)\t\t 5. Takoyaki 10pcs (16K)\n");
        printf("3. Jamur Crispy (7K)\t\t 6. Roti Bakkar (10K)\n\n");
        printf("Masukan Pilihan : ");
        scanf("%d",&cemilan);

     if (cemilan==1) {
        cemilan=hsepuluh;
     }
     else if (cemilan==2) {
        cemilan=hsepuluh;
     }
     else if (cemilan==3) {
        cemilan=hjamur;
     }
      else if (cemilan==4) {
        cemilan=htokpoki;
     }
      else if (cemilan==5) {
        cemilan=htakoyaki;
     }
      else if (cemilan==6) {
        cemilan=hsepuluh;
     }
        total5=cemilan;
    printf("\nTotal : %d \n\n",total5);

    bayarcemilan :
        printf("Uang yang dibayar : ");
        scanf("%d",&bayar);
        if (bayar<total5) {
            printf("\nTolong bayar sesuai/melebihi total\n");
            goto bayarcemilan;
        }
        else {}
        kembali=bayar-total5;
        printf("Kembali : %d\n\n",kembali);
        printf("Terima kasih atas kunjungannya\n\n");

        printf("Apa anda ingin pesan lagi?\n");
        printf("1. Ya\n");
        printf("2. Tidak\n");
        printf("Masukan Pilihan : ");
        scanf("%d",&ulang);
        if (ulang==1) {
            goto awal;
        }
        else if (ulang==2) {
        return 0;
        }

}
return 0;

hitung :
    printf("\nPesanan anda\n\n");
    printf("Makanan : %d\n\n",total);

    bayarmakanan:
        printf("Uang yang dibayar : ");
        scanf("%d",&bayar);
        if (bayar<total) {
            printf("\nTolong bayar sesuai/melebihi total\n");
            goto bayarmakanan;
        }
        else {}
        kembali=bayar-total;
        printf("Kembali : %d\n\n",kembali);
        printf("Terima kasih atas kunjungannya\n\n");

        printf("Apa anda ingin pesan lagi?\n");
        printf("1. Ya\n");
        printf("2. Tidak\n");
        printf("Masukan Pilihan : ");
        scanf("%d",&ulang);
        if (ulang==1) {
            goto awal;
        }
        else if (ulang==2) {
        return 0;
        }
        return 0;

hitung2 :
    printf("\nPesanan anda\n\n");
    printf("Makanan      : %d\n",total);
    printf("Minuman Milk : %d\n\n",total4);
    totalbayar=total+total4;
    printf("Total Pembayaran : %d\n",totalbayar);

    bayar2:
        printf("Uang yang dibayar : ");
        scanf("%d",&bayar);
        if (bayar<totalbayar) {
            printf("\nTolong bayar sesuai/melebihi total\n");
            goto bayar2;
        }
        else {}
        kembali=bayar-totalbayar;
        printf("Kembali : %d\n\n",kembali);
        printf("Terima kasih atas kunjungannya\n\n");

        printf("Apa anda ingin pesan lagi?\n");
        printf("1. Ya\n");
        printf("2. Tidak\n");
        printf("Masukan Pilihan : ");
        scanf("%d",&ulang);
        if (ulang==1) {
            goto awal;
        }
        else if (ulang==2) {
        return 0;
        }
        return 0;

    hitung3 :
    printf("\nPesanan anda\n\n");
    printf("Makanan      : %d\n",total);
    printf("Minuman Milk : %d\n",total4);
    printf("Cemilan      : %d\n\n",total5);
    bayartotal=total+total4+total5;
    printf("Total Pembayaran : %d\n",bayartotal);

    bayar3:
        printf("Uang yang dibayar : ");
        scanf("%d",&bayar);
        if (bayar<bayartotal) {
            printf("\nTolong bayar sesuai/melebihi total\n");
            goto bayar3;
        }
        else {}
        kembali=bayar-bayartotal;
        printf("Kembali : %d\n\n",kembali);
        printf("Terima kasih atas kunjungannya\n\n");

        printf("Apa anda ingin pesan lagi?\n");
        printf("1. Ya\n");
        printf("2. Tidak\n");
        printf("Masukan Pilihan : ");
        scanf("%d",&ulang);
        if (ulang==1) {
            goto awal;
        }
        else if (ulang==2) {
        return 0;
        }
        return 0;

        hitung4 :
    printf("\nPesanan anda\n\n");
    printf("Makanan     : %d\n",total);
    printf("Minuman Jus : %d\n\n",total2);
    bayarsay=total+total2;
    printf("Total Pembayaran : %d\n",bayarsay);

    bayar4:
        printf("Uang yang dibayar : ");
        scanf("%d",&bayar);
        if (bayar<bayarsay) {
            printf("\nTolong bayar sesuai/melebihi total\n");
            goto bayar4;
        }
        else {}
        kembali=bayar-bayarsay;
        printf("Kembali : %d\n\n",kembali);
        printf("Terima kasih atas kunjungannya\n\n");

        printf("Apa anda ingin pesan lagi?\n");
        printf("1. Ya\n");
        printf("2. Tidak\n");
        printf("Masukan Pilihan : ");
        scanf("%d",&ulang);
        if (ulang==1) {
            goto awal;
        }
        else if (ulang==2) {
        return 0;
        }
        return 0;

         hitung5 :
    printf("\nPesanan anda\n\n");
    printf("Makanan     : %d\n",total);
    printf("Minuman Jus : %d\n",total2);
    printf("Cemilan     : %d\n\n",total5);
    bayarwe=total+total2+total5;
    printf("Total Pembayaran : %d\n",bayarwe);

    bayar5:
        printf("Uang yang dibayar : ");
        scanf("%d",&bayar);
        if (bayar<bayarwe) {
            printf("\nTolong bayar sesuai/melebihi total\n");
            goto bayar5;
        }
        else {}
        kembali=bayar-bayarwe;
        printf("Kembali : %d\n\n",kembali);
        printf("Terima kasih atas kunjungannya\n\n");

        printf("Apa anda ingin pesan lagi?\n");
        printf("1. Ya\n");
        printf("2. Tidak\n");
        printf("Masukan Pilihan : ");
        scanf("%d",&ulang);
        if (ulang==1) {
            goto awal;
        }
        else if (ulang==2) {
        return 0;
        }
        return 0;

    hitung6 :

    printf("\nPesanan anda\n\n");
    printf("Makanan        : %d\n",total);
    printf("Minuman Coffee : %d\n\n",total3);
    bayarwoy=total+total3;
    printf("Total Pembayaran : %d\n",bayarwoy);

    bayar6:
        printf("Uang yang dibayar : ");
        scanf("%d",&bayar);
        if (bayar<bayarwoy) {
            printf("\nTolong bayar sesuai/melebihi total\n");
            goto bayar6;
        }
        else {}
        kembali=bayar-bayarwoy;
        printf("Kembali : %d\n\n",kembali);
        printf("Terima kasih atas kunjungannya\n\n");

        printf("Apa anda ingin pesan lagi?\n");
        printf("1. Ya\n");
        printf("2. Tidak\n");
        printf("Masukan Pilihan : ");
        scanf("%d",&ulang);
        if (ulang==1) {
            goto awal;
        }
        else if (ulang==2) {
        return 0;
        }
        return 0;

        hitung7 :
    printf("\nPesanan anda\n\n");
    printf("Makanan        : %d\n",total);
    printf("Minuman Coffee : %d\n",total3);
    printf("Cemilan        : %d\n\n",total5);
    bayarhey=total+total3+total5;
    printf("Total Pembayaran : %d\n",bayarhey);

    bayar7:
        printf("Uang yang dibayar : ");
        scanf("%d",&bayar);
        if (bayar<bayarhey) {
            printf("\nTolong bayar sesuai/melebihi total\n");
            goto bayar7;
        }
        else {}
        kembali=bayar-bayarhey;
        printf("Kembali : %d\n\n",kembali);
        printf("Terima kasih atas kunjungannya\n\n");

        printf("Apa anda ingin pesan lagi?\n");
        printf("1. Ya\n");
        printf("2. Tidak\n");
        printf("Masukan Pilihan : ");
        scanf("%d",&ulang);
        if (ulang==1) {
            goto awal;
        }
        else if (ulang==2) {
        return 0;
        }
        return 0;

    hitung8 :
    printf("\nPesanan anda\n\n");
    printf("Minuman Milk : %d\n",total4);
    printf("Cemilan : %d\n\n",total5);
    bayardong=total4+total5;
    printf("Total Pembayaran : %d\n",bayardong);

    bayar8:
        printf("Uang yang dibayar : ");
        scanf("%d",&bayar);
        if (bayar<bayardong) {
            printf("\nTolong bayar sesuai/melebihi total\n");
            goto bayar8;
        }
        else {}
        kembali=bayar-bayardong;
        printf("Kembali : %d\n\n",kembali);
        printf("Terima kasih atas kunjungannya\n\n");

        printf("Apa anda ingin pesan lagi?\n");
        printf("1. Ya\n");
        printf("2. Tidak\n");
        printf("Masukan Pilihan : ");
        scanf("%d",&ulang);
        if (ulang==1) {
            goto awal;
        }
        else if (ulang==2) {
        return 0;
        }
        return 0;

    hitung9 :
    printf("\nPesanan anda\n\n");
    printf("Minuman Coffee : %d\n",total3);
    printf("Cemilan : %d\n\n",total5);
    bayarya=total3+total5;
    printf("Total Pembayaran : %d\n",bayarya);

    bayar9:
        printf("Uang yang dibayar : ");
        scanf("%d",&bayar);
        if (bayar<bayarya) {
            printf("\nTolong bayar sesuai/melebihi total\n");
            goto bayar9;
        }
        else {}
        kembali=bayar-bayarya;
        printf("Kembali : %d\n\n",kembali);
        printf("Terima kasih atas kunjungannya\n\n");

        printf("Apa anda ingin pesan lagi?\n");
        printf("1. Ya\n");
        printf("2. Tidak\n");
        printf("Masukan Pilihan : ");
        scanf("%d",&ulang);
        if (ulang==1) {
            goto awal;
        }
        else if (ulang==2) {
        return 0;
        }
        return 0;

    hitung10 :
    printf("\nPesanan anda\n\n");
    printf("Minuman Jus : %d\n",total2);
    printf("Cemilan : %d\n\n",total5);
    bayarplis=total2+total5;
    printf("Total Pembayaran : %d\n",bayarplis);

    bayar10:
        printf("Uang yang dibayar : ");
        scanf("%d",&bayar);
        if (bayar<bayarplis) {
            printf("\nTolong bayar sesuai/melebihi total\n");
            goto bayar10;
        }
        else {}
        kembali=bayar-bayarplis;
        printf("Kembali : %d\n\n",kembali);
        printf("Terima kasih atas kunjungannya\n\n");

        printf("Apa anda ingin pesan lagi?\n");
        printf("1. Ya\n");
        printf("2. Tidak\n");
        printf("Masukan Pilihan : ");
        scanf("%d",&ulang);
        if (ulang==1) {
            goto awal;
        }
        else if (ulang==2) {
        return 0;
        }
        return 0;
}
