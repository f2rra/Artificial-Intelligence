#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Vertex Maksimal 100
#define MAX_VERTEX 100

//Membuat edge menggunakan array boolean
bool graph[MAX_VERTEX][MAX_VERTEX];

//Inisiasi awal jumlah vertex = 0
int vertex_count = 0;

//Membuat fungsi untuk menambahkan edge
void add_edge(int src, int dest) {
  graph[src][dest] = true;
  graph[dest][src] = true;
}

void bfs(int start, int end) {
  //Inisiasi awal semua vertex belum dikunjungi (False)
  bool visited[MAX_VERTEX] = {false};
  //Membuat array untuk menyimpan data jarak
  int distance[MAX_VERTEX];
  //Membuat array untuk menyimpan vertex sebelumnya
  int previous[MAX_VERTEX];
  //Membuat array queue untuk menyimpan dan mengurutkan data vertex
  int queue[MAX_VERTEX];
  //Inisiasi awal indeks front dan rear untuk queue
  int front = 0;
  int rear = 0;
  
  //Inisiasi awal semua jarak dan vertex sebelumnya bernilai -1 
  for (int i = 0; i < vertex_count; i++) {
    distance[i] = -1;
    previous[i] = -1;
  }

  //Inisiasi awal titik start
  distance[start] = 0;
  visited[start] = true;

  //Memasukkan vertex awal ke dalam queue
  queue[rear] = start;
  rear++;
  
  while (front < rear) {
    //Current sebagai Parent Vertex 
    int current = queue[front];
    front++;
 
    for (int i = 0; i < vertex_count; i++) {
      //Membaca vertex lain sebagai children vertex
      if (graph[current][i] && !visited[i]) {
        //Memasukkan nilai ke dalam children vertex yang sedang dikunjungi
        visited[i] = true;
        distance[i] = distance[current] + 1;
        previous[i] = current;
        //Memasukkan children vertex yang sedang dikunjungi ke queue
        queue[rear] = i;
        rear++;
      }
    }
  }

  printf("==Rute Terpendek dari %d ke %d==\n", start, end);
  printf("Jarak\t: %d\n", distance[end]);
  printf("Rute\t: %d", end);

  //Inisiasi awal vertex sebelumnya dengan nilai previous[end]
  int prev = previous[end];

  while (prev != -1) {
    printf(" <- %d", prev);
    //Mengganti vertex sebelumnya dengan nilai sebelumnya dari vertex sebelumnya
    prev = previous[prev];
  }
  printf("\n");
}

int main() {
  int start; int end;
  add_edge(0, 1);
  add_edge(0, 2);
  add_edge(1, 3);
  add_edge(1, 4);
  add_edge(2, 7);
  add_edge(2, 8);
  add_edge(3, 12);
  add_edge(4, 5);
  add_edge(4, 12);
  add_edge(5, 6);
  add_edge(5, 7);
  add_edge(6, 7);
  add_edge(6, 10);
  add_edge(7, 8);
  add_edge(8, 9);
  add_edge(10, 11);

  vertex_count = 13;

  printf("Masukkan Titik Awal: ");
  scanf("%d",&start);
  printf("Masukkan Titik Tujuan: ");
  scanf("%d",&end);
  bfs(start, end);

  return 0;
}
