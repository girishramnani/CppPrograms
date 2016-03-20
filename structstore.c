#include<stdlib.h>
#include<stdio.h>


struct record {

    int id;
    char name[20];
};

struct store {
    struct record rows[10];
} ;

FILE *opened_file;

struct store * create_store(char *filename,char mode){
     if(mode =='c'){
      opened_file = fopen(filename,"w");
      }
     else{
      opened_file = fopen(filename,"r+");
     }
      struct store *data=malloc(sizeof(struct store));
      int rc = fread(data,sizeof(struct store),1,opened_file);

    return data;
      

}
void init_store(struct store *data){

    struct record row = {.id=1,.name="girish"};
    data->rows[0] = row;

}


void write_store(struct store *data){
    
    fwrite(data,sizeof(struct store),1,opened_file);



}
int main(){
      struct store *m;
      m = create_store("girish.dat",'r');
     /* init_store(m); */
      printf("%s \n",m->rows[0].name);
      write_store(m);
}
