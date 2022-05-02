#include <iostream>
#include <fstream>
using namespace std;

void draw_row(int c, int r, ofstream& f){
    int n=c-1-r/2;
    for(int i=0;i<n;i++){
        f<<" ";
    }
    for (int i=0;i<r;i++){
        f<<"*";
    }
    f<<endl;
}

void draw_row_2(int c, int r, ofstream& f){
    int n=c-1-r/2;
    for(int i=0;i<n;i++){
        f<<" ";
    }
    for (int i=0;i<r;i++){
        f<<"|";
    }
    f<<endl;
}


int main(){
    ofstream file ("z.txt");
    

    draw_row (15,1,file);
    draw_row (15,3,file);
    draw_row (15,5,file);
    draw_row (15,7,file);
    draw_row (15,3,file);
    draw_row (15,5,file);
    draw_row (15,7,file);
    draw_row (15,9,file);
    draw_row (15,5,file);
    draw_row (15,7,file);
    draw_row (15,9,file);
    draw_row (15,11,file);
    draw_row (15,13,file);
    draw_row_2(15,5,file);  
    draw_row_2(15,5,file);
    draw_row_2(15,5,file);



    


    //string r_file;
    //while (file_2 >> r_file){
        //cout << r_file << endl;
    
}

