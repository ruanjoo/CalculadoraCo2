#include <stdio.h>
#include <math.h>

int main() {
    double cc, ca, fconv, fcorr, eco, qc, femiss;
    int escolha, vezes;
    char resp;
    
    //constantes:
    const double tep = 41.868;
    const double tj = pow(10, -3);
    
    //veiculo -  gasolina 
    printf("Uma entrada ou varias entradas? U - uma; V - varias; S - Software: \n");
    scanf("%c", &resp);
    
    if (resp == 'u' || resp == 'U'){
        
        printf("Digite quantos km seu carro anda por dia (10km/l): \n");
        scanf("%lf", &ca);
        ca = ca/10;     //ve quantos litros de gasolina precisa p andar o km
        ca = ca/1000;   //converte de litros para m3

        //verifica qual combustivel eh
        printf("1 - Gasolina; 2 - Alcool; 3 - Diesel; 4 - GNV: \n");
        scanf("%d", &escolha);

        if (escolha == 1){
            //declaração de valores para gasolina
            fconv = 0.77;
            fcorr = 0.95; //liquido

            //Conversão para unidade comum
            cc = (ca * fconv * tep * tj * fcorr);
            printf("%lf\n", cc);

            //Conteúdo de carbono
            femiss = 18.9; 
            qc = (cc * femiss);
            printf("%lf\n", qc);

            //Emissões de CO2
            eco = (qc*44/12); //peso do CO2 = 44 partes totais, 12 sao de c oq realmente importa p esse calc
            printf("Voce produziu: %lft/CO2\n", eco);

        }else if(escolha == 2){
            //declaração de valores para alcool
            fconv = 0.510;
            fcorr = 0.95; //liquido

            //Convers�o ara unidade comum
            cc = (ca * fconv * tep * tj * fcorr);
            printf("%lf\n", cc);

            //Conteudo de carbono
            femiss = 14.8; 
            qc = (cc * femiss);
            printf("%lf\n", qc);

            //Emissões de CO2
            eco = (qc*44/12); //peso do CO2 = 44 partes totais, 12 sao de c oq realmente importa p esse calc
            printf("Voce produziu: %lft/CO2\n", eco); 
        
        }else if(escolha == 3){
            //declar��o de valores para diesel
            fconv = 0.848;
            fcorr = 0.95; //liquido

            //Convers�o para unidade comum
            cc = (ca * fconv * tep * tj * fcorr);
            printf("%lf\n", cc);

            //Conteudo de carbono
            femiss = 20.2; 
            qc = (cc * femiss);
            printf("%lf\n", qc);

            //Emissões de CO2
            eco = (qc*44/12); //peso do CO2 = 44 partes totais, 12 sao de c oq realmente importa p esse calc
            printf("Voce produziu: %lft/CO2\n", eco); 

        }else if(escolha ==4){
            //GNV - gas natural veicular
            fconv = 0.04;   
            fcorr = 0.90; //gasoso

            //Conversao para unidade comum
            cc = (ca * fconv * tep * tj * fcorr);
            printf("%.10lf\n", cc);

            //Conteudo de carbono
            femiss = 0.000675; 
            qc = (cc * femiss);
            printf("%.10lf\n", qc);

            //Emisoes de CO2
            eco = (qc*44/12); //peso do CO2 = 44 partes totais, 12 sao de c oq realmente importa p esse calc
            printf("Voce produziu: %.10lft/CO2\n", eco); 
        }else{
            printf("O valor digitado nao corresponde a nenhum combustivel");
        }
    }
    
    if (resp == 'v' || resp == 'V'){
        printf("Quantos veiculos voce quer testar? ");
        scanf("%d", &vezes);

        // Loop for que executa a quantidade de vezes especificada pelo usuário
        for (int i = 0; i < vezes; i++) {
            printf("Digite quantos km seu carro anda por dia (10km/l): \n");
            scanf("%lf", &ca);
            ca = ca/10;     //ve quantos litros de gasolina precisa p andar o km
            ca = ca/1000;   //converte de litros para m3

            //verifica qual combustivel eh
            printf("1 - Gasolina; 2 - Alcool; 3 - Diesel; 4 - GNV: \n");
            scanf("%d", &escolha);

            if (escolha == 1){
                //declaracao de valores para gasolina
                fconv = 0.77;
                fcorr = 0.95; //liquido

                //Conversao para unidade comum
                cc = (ca * fconv * tep * tj * fcorr);
                printf("%lf\n", cc);

                //Conteudo de carbono
                femiss = 18.9; 
                qc = (cc * femiss);
                printf("%lf\n", qc);

                //Emissoe de CO2
                eco = (qc*44/12);
                printf("Voce produziu: %lft/CO2\n", eco); //por algum mmotivo é como se na linha 31 e32 ele multiplicasse por 100
                                        //falei com o prof de quarta sobre, ele nao achou o problema também, então somente dividimos por 100
            }else if(escolha == 2){
                //declara��oo de vari�veis para alcool
                fconv = 0.510;
                fcorr = 0.95; //liquido

                //Conversão ara unidade comum
                cc = (ca * fconv * tep* tj * fcorr);
                printf("%lf\n", cc);

                //Conteudo de carbono
                femiss = 14.8; 
                qc = (cc * femiss);
                printf("%lf\n", qc);

                //Emissoes de CO2
                eco = (qc*44/12); //peso do CO2 = 44 partes totais, 12 sao de c oq realmente importa p esse calc
                printf("Voc� produziu %lft/CO2\n", eco); //mais uma vez para dar o res correto dividindo por 100
            
            }else if(escolha == 3){
                //declaracao de valores para diesel
                fconv = 0.848;
                fcorr = 0.95; //liquido

                //Conversao para unidade comum
                cc = (ca * fconv * tep * tj * fcorr);
                printf("%lf\n", cc);

                //Conteudo de carbono
                femiss = 20.2; 
                qc = (cc * femiss);
                //printf("%lf\n", qc);

                //Emissões de CO2
                eco = (qc*44/12); //peso do CO2 = 44 partes totais, 12 sao de c oq realmente importa p esse calc
                printf("Voce produziu: %lft/CO2\n", eco); //mais uma vez para dar o res correto dividindo por 100
            }else if(escolha ==4){
                //GNV - gas natural veicular
                fconv = 0.04;   
                fcorr = 0.90; //gasoso

                //Conversao para unidade comum
                cc = (ca * fconv * tep * tj * fcorr);
                printf("%.10lf\n", cc);

                //Conteudo de carbono
                femiss = 0.000675; 
                qc = (cc * femiss);
                printf("%.10lf\n", qc);

                //Emissoes de CO2
                eco = (qc*44/12); //peso do CO2 = 44 partes totais, 12 sao de c oq realmente importa p esse calc
                printf("Voce produziu: %.10lft/CO2\n", eco); //mais uma vez para dar o res correto dividindo por 100
            }else{
                printf("O valor digitado não corresponde à nenhum combustível\n");
            }
        }    
    }

    if (resp == 's' || resp == 'S'){
        #define MAX_SIZE 10000
        FILE *file;
        int vezess; // Número de vezes que o loop será executado
        double cas[MAX_SIZE]; // Vetor para armazenar os valores de ca (quilômetros)
        int escolha[MAX_SIZE]; // Vetor para armazenar os valores de escolha (tipo de combustível)

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
        scanf("%d", &vezess);

        file = fopen("carros_dados.txt", "w");
        fprintf(file, "Km, tipo_Comb, Conv. Un. Comum, Cont. Carbono, Emiss. CO2\n");

        // Loop for que executa a quantidade de vezes especificada pelo usuário
        for (int i = 0; i < vezess; i++) {
            // Atribui os valores dos vetores aos respectivos arrays ca e escolha
            cas[i] = quilometros[i];
            escolha[i] = tipo_combustivel[i];

            printf("Para a vez %d:\n", i + 1);
            printf("Quilometros percorridos por dia: %lf\n", cas[i]);
            printf("Tipo de combustivel: %d\n", escolha[i]);

            // Cálculos para emissões de CO2 com base no tipo de combustível
            switch (escolha[i]) {
                case 1: // Gasolina
                    fconv = 0.77;
                    fcorr = 0.95;
                    cc = (cas[i]/10000 * fconv * tep * tj * fcorr);
                    femiss = 18.9;
                    qc = (cc * femiss);
                    eco = (qc*44/12);
                    break;
                case 2: // Álcool
                    fconv = 0.510;
                    fcorr = 0.95;
                    cc = (cas[i]/10000 * fconv * tep * tj * fcorr);
                    femiss = 14.8;
                    qc = (cc * femiss);
                    eco = (qc * 44 / 12);
                    break;
                case 3: // Diesel
                    fconv = 0.848;
                    fcorr = 0.95;
                    cc = (cas[i]/10000 * fconv * tep * tj * fcorr);
                    femiss = 20.2;
                    qc = (cc * femiss);
                    eco = (qc * 44 / 12);
                    break;
                case 4: // GNV
                    fconv = 0.04;
                    fcorr = 0.90;
                    cc = (cas[i]/10000 * fconv * tep * tj * fcorr);
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
            fprintf(file, "%lf, %d, %lf, %lf, %lf\n", quilometros[i], tipo_combustivel[i], cc, qc, eco);
        }
        printf("acabou");
        fclose(file);

    }

    return 0;
}