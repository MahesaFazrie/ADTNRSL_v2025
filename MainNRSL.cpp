/* File        : mainNRSL.cpp */
/* Deskripsi   : Driver / main program untuk ADT Non Restricted Single Linked/Linear List */
/* Dibuat oleh : Ade Chandra Nugraha*/
/* Tanggal     : 25-10-2001 */
/* Diupdate oleh : Santi Sundari, 6-4-2011, hanya tdd operasi2 dasar */
/* Diupdate oleh : WW & AM, 8-3-2025, penyesuaian area body & main untuk latihan Diploma 3 */

#include "spnrsll.h"
#include <stdio.h>

int main()
{
	/* Kamus Lokal */
		List MyList;
		infotype isi;
		address P, Prec;

	/* Program */
	CreateList (&MyList);
	
	
    InsVFirst(&MyList, 10);
    InsVFirst(&MyList, 5);
    InsVLast(&MyList, 20);
    PrintInfo(MyList);//List sudah terbentuk, digunakan untuk memanipulasi elemen
	
	

    DelVFirst(&MyList, &isi);
    PrintInfo(MyList);


    DelVLast(&MyList, &isi);
    PrintInfo(MyList);

    InsVLast(&MyList, 30);
    InsVLast(&MyList, 40);
    PrintInfo(MyList);

    DelAll(&MyList);
    PrintInfo(MyList);
	//aksi mahasiswa untuk implementasi studi kasus
	

	/* Finishing */
	
	//Pastikan List di Dealokasi setelah manipulasi elemen selesai
	
	return 0;
}

