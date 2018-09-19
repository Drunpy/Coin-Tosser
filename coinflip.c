#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Flips(int qt){
    srand(time(NULL));
    
    int cara = 0;//0 cara
    int coroa = 0;//1 coroa 
    
    for(int i = 0; i < qt; i++){
        int r = rand() % 2;
        //printf("%d\n", r); Só pra apurar caso necessário
        if (r == 0){    //cara
            cara++;
        }
        else{
            coroa++; //coroa
        }
    }
    int total = cara + coroa;
    float porcara = (float) cara / total * 100;
    float porcoroa = (float) coroa / total *100;
    printf("----------Resultado----------\n");
    printf("A moeda foi rodada %d vezes.\n", qt);
    printf("Sendo:\n%d Caras (%.2f%%)\n%d Coroas (%.2f%%)", cara, porcara, coroa, porcoroa);
    return 0;
}
int main(void){
    int coinflips = 0;
    int extraflips;

    printf("Quantas vezes deseja jogar a moeda ?\n");
    scanf("%d", &extraflips);
    int total = coinflips + extraflips;
    Flips(total);
    return 0;
}