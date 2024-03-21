#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define MAX_SIZE 10000 // Tamanho máximo dos vetores

int main() {
    FILE *file;
    int vezes; // Número de vezes que o loop será executado
    double ca[MAX_SIZE]; // Vetor para armazenar os valores de ca (quilômetros)
    int escolha[MAX_SIZE]; // Vetor para armazenar os valores de escolha (tipo de combustível)
    double cc, femiss, qc, eco; // Variáveis para cálculos
    double fconv, fcorr;
    const double tep = 41.868;
    const double tj = pow(10, -3);

    int n; // Número de elementos
    // Vetor para armazenar os quilômetros percorridos por dia
    double quilometros[MAX_SIZE]; 
    // Vetor para armazenar o tipo de combustível
    int tipo_combustivel[MAX_SIZE];

    // Solicita ao usuário o número de elementos para os vetores
    printf("Digite o numero de elementos para os vetores: ");
    scanf("%d", &n);

    // Verifica se o número de elementos é válido
    if (n <= 0 || n > MAX_SIZE) {
        printf("Numero de elementos invalido!\n");
        return 1; // Sai do programa com código de erro
    }

    // Solicita ao usuário que insira os quilômetros percorridos por dia
    printf("Digite os quilometros percorridos por dia:\n");
    for (int i = 0; i < n; i++) {
        printf("Elemento %d do vetor de quilometros: ", i + 1);
        scanf("%lf", &quilometros[i]);
    }

    // Solicita ao usuário que insira o tipo de combustível
    printf("Digite o tipo de combustivel:\n");
    for (int i = 0; i < n; i++) {
        printf("Elemento %d do vetor de tipo de combustivel (1 - Gasolina; 2 - Alcool; 3 - Diesel; 4 - GNV): ", i + 1);
        scanf("%d", &tipo_combustivel[i]);
    }

    // Solicita ao usuário o número de vezes que o loop será executado
    printf("Digite o numero de vezes que deseja executar o loop: ");
    scanf("%d", &vezes);

    file = fopen("tst3.txt", "w");

    // Loop for que executa a quantidade de vezes especificada pelo usuário
    for (int i = 0; i < vezes; i++) {
        // Atribui os valores dos vetores aos respectivos arrays ca e escolha
        ca[i] = quilometros[i];
        escolha[i] = tipo_combustivel[i];

        printf("Para a vez %d:\n", i + 1);
        printf("Quilometros percorridos por dia: %lf\n", ca[i]);
        printf("Tipo de combustivel: %d\n", escolha[i]);

        // Cálculos para emissões de CO2 com base no tipo de combustível
        switch (escolha[i]) {
            case 1: // Gasolina
                fconv = 0.77;
                fcorr = 0.95;
                cc = (ca[i]/10000 * fconv * tep * tj * fcorr);
                femiss = 18.9;
                qc = (cc * femiss);
                eco = (qc*44/12);
                break;
            case 2: // Álcool
                fconv = 0.510;
                fcorr = 0.95;
                cc = (ca[i]/10000 * fconv * tep * tj * fcorr);
                femiss = 14.8;
                qc = (cc * femiss);
                eco = (qc * 44 / 12);
                break;
            case 3: // Diesel
                fconv = 0.848;
                fcorr = 0.95;
                cc = (ca[i]/10000 * fconv * tep * tj * fcorr);
                femiss = 20.2;
                qc = (cc * femiss);
                eco = (qc * 44 / 12);
                break;
            case 4: // GNV
                fconv = 0.04;
                fcorr = 0.90;
                cc = (ca[i]/10000 * fconv * tep * tj * fcorr);
                femiss = 0.000675;
                qc = (cc * femiss);
                eco = (qc * 44 / 12);
                break;
            default:
                printf("Tipo de combustivel invalido!\n");
                continue; // Vai para a próxima iteração do loop
        }

        // Imprime os resultados e escreve no arquivo
        printf("Emissao de CO2: %lf t/CO2\n", eco);
        fprintf(file, "%lf, %lf, %lf\n", cc, qc, eco);
    }
    printf("acabou");
    fclose(file);

    return 0; // Termina o programa com sucesso
}
