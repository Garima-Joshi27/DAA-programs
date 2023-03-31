#include <stdio.h>
#include <stdlib.h>

struct List{
    int C[15];
    int size;
    int length;
};

void Display(struct List list) {
    int i;
    printf("Elements are:\n");
    for (i = 0;i<list.length;i++)
       printf("%d ", list.C[i]);
    printf("\n\n");
}

void DuplicateUnsorted(struct List* list){
 
    for(int i = 0; i <= list->length - 1; i++){
  
      int count = 1;
  
      for(int j = i+1; j < list->length; j++){
         if(list->C[i] == list->C[j]){
            count++;
            list->C[j] = -1;
         }
      }
      if(count > 1 && list->C[i] != -1){
          printf("%d is appearing: %d times\n", list->C[i], count);  
      }
   }
}

int main(){
   struct List list_1 = {{8, 3, 6, 4, 6, 5, 6, 8, 2, 7}, 10, 10}; 
   Display(list_1);
   DuplicateUnsorted(&list_1);
}