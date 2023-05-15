#include <stdio.h>
#include <stdlib.h>

// Isikay Cetin 1220505031

 int BinarySearch(int dizi[],int aranan,int sol,int sag){
	
	int orta=(sol+sag)/2;
	
	if(aranan==dizi[orta])
		return 1;
			
	else if(sol >= sag)
        return 0;
	
	else if(aranan>dizi[orta]){
		return BinarySearch(dizi,aranan,orta+1,sag);
	}
	
	else
		return BinarySearch(dizi,aranan,sol,orta-1);
	
	return 0;
}

  // Dizide bubble sort algoritmasýný kullanilarak siraladik.
 void BubbleSort(int dizi[],int size){
	
	int i,j,sirala;
	
	// Diziyi küçükten büyüge siraladik.
	for(i=0;i<size;i++){
		for(j=0;j<size-(i+1);j++){
			
			if (dizi[j]>dizi[j+1])
			{
				sirala=dizi[j];
				dizi[j]=dizi[j+1];
				dizi[j+1]=sirala;
			}
		}
	}
  }
  int main(int argc, char *argv[]) {
	
	int dizi[]={4,8,3,84,47,76,9,24,68};  //Tanimlamalar yaptik.
	int sonuc,boyut,ArananSayi;
	int i;
	
	boyut=sizeof(dizi)/sizeof(dizi[0]);   // Dizinin boyutu bulunur ekrana yazdýrýlýr ve ardindan BubbleSort algoritmasi kullanýlarak dizi siralanir.
    	printf("Dizi: "); 
	       for(i=0 ;i<boyut; i++)
		    printf("%d ",dizi[i]);
	
	BubbleSort(dizi,boyut);      // Algoritmayi çaðrdik.
	
	printf("\n\nAranacak elemani giriniz: ");
	scanf("%d",&ArananSayi);
	
	sonuc= BinarySearch(dizi,ArananSayi,0,boyut-1);   // Arama islemi yapilir.
	
	if(sonuc==1)
		printf("\nAradiginiz eleman dizide var.");
		
	else
		printf("\nAradiginiz eleman dizide yok.");
	
	return 0;
}
