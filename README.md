# Artificial-Intelligence

## **Project 1 : Penentuan Rute Terpendek dari Malang ke Surabaya** 


<style>
body {
  text-align: justify;
}
</style>
Project ini ditujukan untuk memenuhi tugas mata kuliah Artificial Intelligence. Project ini merupakan project untuk memecahkan masalah mencari dan menentukan rute terpendek dari kota Malang menuju kota Surabaya dengan menggunakan program dalam bahasa C. Project ini dibuat untuk menerapkan algoritma searching yaitu Breadth First Search (BFS) dan Depth First Search (DFS). Rute yang tersedia sudah dibatasi dan digambarkan oleh diagram rute perjalanan. Pada project ini saya menggunakan algoritma BFS yaitu dengan melakukan pencarian vertex tujuan secara melebar melihat vertex yang terhubung secara langsung dengan vertex yang saat ini ditempati/dikunjungi. Berbeda halnya dengan algoritma DFS yaitu dengan melakukan pencarian vertex tujuan secara langsung hingga mencapai titik vertex yang sudah tidak memiliki percabangan atau rute (buntu). Metode BFS dipilih karena pada aplikasinya dalam menentukan rute terpendek, metode ini lebih akurat dalam mencari rute terpendek. Sedangkan metode DFS, masih memungkinkan terjadinya kesalahan yaitu penemuan rute menuju vertex tujuan yang rutenya belum merupakan rute yang terpendek. Hal ini disebabkan karena metode ini mencari vertex tujuan hingga menemui vertex yang sudah tidak bercabang (buntu) terlebih dahulu baru kemudian mencari rute lain. Pada kasus tertentu ketika sudah ditemukan vertex tujuan dengan metode ini lalu proses pencarian dihentikan, maka akan timbul kemungkinan yaitu rute lain yang bisa jadi lebih pendek dibanding rute yang sudah ditemukan. Oleh sebab itulah, saya menggunakan metode BFS pada project ini. Meskipun begitu program untuk mengatasi masalah ini masih belum sempurna karena belum menampilkan rute kota A ke kota B dalam bentuk string jadi masih dalam bentuk bilangan integer. Dan kode bilangan integer ini merepresentasikan nama kota yang dapat dilihat pada file kodeKota.txt
