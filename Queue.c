#include <stdio.h>
#include <stdlib.h>
#define MAX 3

typedef struct{
    int data[MAX];
    int head;
    int tail;
} queue;

queue antri;

void awal(){
    antri.head = antri.tail = -1;
}

int kosong(){
    if(antri.tail==-1)
        return 1;
    else
        return 0;
}

int penuh(){
    if(antri.tail==MAX-1)
        return 1;
    else
        return 0;
}
void masuk(int data){
    if(kosong()==1){
        antri.head = antri.tail = 0;
        antri.data[antri.tail]=data;
        printf("%d masuk", antri.data[antri.tail]);
        void tampil(){
            if(kosong()==0){
            for(int i=antri.head; 1<= antri.tail; i++){
                printf("%d ", antri.data[i]);
                }
            }
            else
            printf("Antrian kosong!");
        }
    }
    else if(penuh()==0){
        antri.tail++;
        antri.data[antri.tail]=data;
        printf("%d masuk", antri.data[antri.tail]);
    }
}

void keluar(){
    int d= antri.data[antri.head];
    for(int i=antri.head; 1<= antri.tail; i++){
        antri.data[i] = antri.data[i+1];
    }
    antri.tail--;
    return d;
}

void tampil(){
    if(kosong()==0){
            for(int i=antri.head; 1<= antri.tail; i++){
                printf("%d ", antri.data[i]);
                }
        }
            else
            printf("Antrian kosong!");
    }

void hapus(){
    antri.head = antri.tail = -1;
    prinf("Data antrian berhasil dihapus!", hapus);
    scanf("%d", hapus);
}

int main(){
    printf("\n\n");
    printf("1. Masukan satu data\n");
    printf("2. keluarkan satu data\n");
    printf("3. Lihat isi antrian\n");
    printf("4. Hapus isi antrian\n");
    printf("5. Keluar\n");
    printf("Pilihan anda? ");
    scanf("%d", &pilih);

    switch(pilih){
    case 1:
        printf("data= ");
        scanf("%d", &data);
        masuk(data);
        break;

    case 2:
        printf("Data yang keluar: ", keluar());
        break;

    case 3:
        tampil();
        break;

    case 4:
        hapus();
        break;
    }
        while(pilih!=5);
}
