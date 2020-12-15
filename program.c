#include <stdio.h>
#include <stdlib.h>

struct survivor{
    struct survivor *nextPointer;
    int survivorID;
    int coltQuantity;
    int shotgunQuantity;
    float coltDamage;
    float shotgunDamage;
};

struct survivor *topPointer;

int totalSurvivors = 0;
int lastSurvivorID = 1;

void addSurvivor(){
    struct survivor *addHelper = toppointer;
}

void removeSurvivor(){ 
    struct survivor *removeHelper = toppointer;
}

void survivorsList(){
    if(totalSurvivors == 0){
        printf("\n Error = The pile is empty. \n");
    }else{
        struct survivor *listHelper = topPointer;
        printf("\n Survivor ID = %d | Colt quantity = %d | Colt damage = %d | Shotgun quantity = %d | Shotgun damage = %d \n",listHelper->survivorID,listHelper->coltQuantity,listHelper->coltDamage,listHelper->shotgunQuantity,listHelper->shotgunDamage);
        nextPointer = listHelper->nextPointer;
    }
}

void updateSurvivor(){
    
}

int main(){

}
