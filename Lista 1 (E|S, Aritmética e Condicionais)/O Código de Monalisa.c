#include <stdio.h>

int main(){
    int v1, v2, v3, d, d1, d2, caminhodireto, caminhop2, energia;

    scanf("%d %d %d %d", &v1, &v2, &v3, &d);

    d1 = d / 10;
    d2 = d % 10;

    if (d1 > d2){
        caminhodireto = v1 + v3 + d1 - d2;
        caminhop2 = v1 + v2 + v3;
    } else if (d1 < d2){
        caminhodireto = v1 + v3;
        caminhop2 = v1 + v2 + v3 + d2 - d1;
    } else {
        caminhodireto = v1 + v3 + d1 + d2;
        caminhop2 = v1 + v2 + v3 + d1 + d2;
    }

    if (caminhodireto > caminhop2){
        energia = caminhodireto;
        printf("Caminho: direto. ");
    } else {
        energia = caminhop2;
        printf("Caminho: P2. ");
    }

    if(energia > 30){
        printf("Xupenio aprova! Nível: ELITE.");
    } else if (10 <= energia && energia <= 30){
        printf("Boa caminhada! Nível: SÓLIDO.");
    } else if (0 <= energia && energia <= 9){
        printf("Passou por pouco. Nível: BÁSICO.");
    } else if(energia < 0){
        printf("Xupenio reprova. Nível: CRÍTICO.");
    }

    return 0;
}
