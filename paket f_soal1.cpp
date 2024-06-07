#include <stdio.h>
#include <stdlib.h>
#define MAXQUEUE 5

typedef struct{
    int count;
    int front;
    int rear;
    int item[MAXQUEUE];
} 
QUEUE;
QUEUE antrean;

void inisialisasi(QUEUE *Q){
    Q->count=0;
    Q->front=0;
    Q->rear=0;
}

int isEmpty(QUEUE *Q){
    int hasil=0;
    if (Q->count==0){
        hasil=1;
    }
    return hasil;
}

int isFull(QUEUE *Q){
    int hasil=0;
    if (Q->count==MAXQUEUE){
        hasil=1;
    }
    return hasil;
}

void insert(QUEUE *Q,int data){
	if (isFull(Q)==1){
		printf("sudah penuh");
	} else{
		if(Q->rear>=MAXQUEUE){
			Q->rear=0;
		}
		Q->item[Q->rear]=data;
		Q->rear++;
		Q->count++;
	}
}

void hapus(QUEUE *Q){
	if (isEmpty(Q)==1){
		printf("sudah kosong");
	} else{
		Q->item[Q->front]=0;
		Q->front++;
		Q->count--;
	}
}

void print(QUEUE *Q){
	for(int i;i<=MAXQUEUE;i++){
		if(Q->item[i]!=0){
		printf("%d ",Q->item[i]);
	}
	}
	printf("\n");
}

int main(){
    inisialisasi(&antrean);
    printf("masukan 108\n");
    insert(&antrean,108);
    printf("isi antrean:");
	print(&antrean);
    printf("masukan 109\n");
    insert(&antrean,109);
    printf("isi antrean:");
	print(&antrean);
    printf("masukan 110\n");
    insert(&antrean,110);
    printf("isi antrean:");
	print(&antrean);
    printf("masukan 111\n");
    insert(&antrean,111);
    printf("isi antrean:");
	print(&antrean);
	printf("menghapus 108 dari antrean\n");
    hapus(&antrean);
    printf("isi antrean:");
	print(&antrean);
    printf("masukan 112\n");
    insert(&antrean,112);
    printf("isi antrean:");
	print(&antrean);
return 0;
}









