/*
 * Felipe Derkian de Sousa Freitas - 1201424418
 * Sistemas Embarcados - máquina de estados COIN - PONTO EXTRA
 */


#include <stdio.h>

#define unlock 0
#define lock   1
#define coin   2

void bloquear();
void desbloquear();
void imprimirMensagem();
void alarme();

int estado = lock;

int main(){
    
    int coin_value = 0;

    while(1){        

        printf("Insira uma moeda - N° 2:\n>> ");
        scanf("%d", &coin_value);

        if(coin_value==coin){
            desbloquear();
            if(estado==unlock){
                imprimirMensagem();
            }
            bloquear();
        }
        else{
            alarme();
        }
        print("\n\n");
    }

    return 0;
}

void bloquear(){
    estado = lock;
}
void desbloquear(){
    estado = unlock;
}
void imprimirMensagem(){
    char * n = "Obrigado!";
    printf("%s\n", n);
}
void alarme(){
    printf("\a");    
    printf("SOANDO ALARME.....\n");
}