#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    FILE*file;
    double cc, ca, fconv, fcorr, eco, qc, femiss;
    int escolha, vezes;
    char resp;
    
    //constantes:
    const double tep = 41.868;
    const double tj = pow(10, -3);

    //idioma
    ;

    //veiculo -  gasolina 
    printf("Uma entrada ou varias entradas? U - uma; V - varias; S - Software: \n");
    scanf("%c", &resp);
    
    if (resp == 'u' || resp == 'U'){
        
        printf("Foi aplicado o metodo Tap-Down, para isso,\n");
        printf("Digite quantos km seu carro anda por dia (10km/l): \n");
        scanf("%lf", &ca);
        ca = ca/10;     //ve quantos litros de gasolina precisa p andar o km
        ca = ca/1000;   //converte de litros para m3

        //verifica qual combustivel eh
        printf("1 - Gasolina; 2 - Alcool; 3 - diesel; 4 - GNV: \n");
        scanf("%d", &escolha);

        if (escolha == 1){
            //declaraá∆o de valores para gasolina
            fconv = 0.77;
            fcorr = 0.95; //liquido

            //Convers∆o ara unidade comum
            cc = (ca * fconv * tep * tj * fcorr);
            printf("%lf\n", cc);

            //Conteudo de carbono
            femiss = 18.9; 
            qc = (cc * femiss);
            printf("%lf\n", qc);

            //Emiss‰es de CO2
            eco = (qc*44/12);
            printf("Voce produziu: %lft/CO2\n", eco); //por algum mmotivo Ç como se na linha 31 e32 ele multiplicasse por 100
                                    //falei com o prof de quarta sobre, ele nao achou o problema tambÇm, ent∆o somente dividimos por 100
        }else if(escolha == 2){
            //declaraá∆o de valores para alcool
            fconv = 0.510;
            fcorr = 0.95; //liquido

            //Convers∆o ara unidade comum
            cc = (ca * fconv * tep * tj * fcorr);
            printf("%lf\n", cc);

            //Conteudo de carbono
            femiss = 14.8; 
            qc = (cc * femiss);
            printf("%lf\n", qc);

            //Emiss‰es de CO2
            eco = (qc*44/12); //peso do CO2 = 44 partes totais, 12 sao de c oq realmente importa p esse calc
            printf("Voce produziu: %lft/CO2\n", eco); //mais uma vez para dar o res correto dividindo por 100
        
        }else if(escolha == 3){
            //declará∆o de valores para diesel
            fconv = 0.848;
            fcorr = 0.95; //liquido

            //Convers∆o para unidade comum
            cc = (ca * fconv * tep * tj * fcorr);
            printf("%lf\n", cc);

            //Conteudo de carbono
            femiss = 20.2; 
            qc = (cc * femiss);
            printf("%lf\n", qc);

            //Emiss√µes de CO2
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

            //Emisoes de CO2
            eco = (qc*44/12); //peso do CO2 = 44 partes totais, 12 sao de c oq realmente importa p esse calc
            printf("Voce produziu: %.10lft/CO2\n", eco); //mais uma vez para dar o res correto dividindo por 100
        }else{
            printf("O valor digitado nao corresponde a nenhum combustivel");
        }
    }
    
    if (resp == 'v' || resp == 'V'){
        printf("Quantos veiculos voce quer testar? ");
        scanf("%d", &vezes);

        // Loop for que executa a quantidade de vezes especificada pelo usu√°rio
        for (int i = 0; i < vezes; i++) {
            printf("Digite quantos km seu carro anda por dia (10km/l): \n");
            scanf("%lf", &ca);
            ca = ca/10;     //ve quantos litros de gasolina precisa p andar o km
            ca = ca/1000;   //converte de litros para m3

            //verifica qual combustivel eh
            printf("1 - Gasolina; 2 - Alcool; 3 - diesel; 4 - GNV: \n");
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
                printf("Voce produziu: %lft/CO2\n", eco); //por algum mmotivo √© como se na linha 31 e32 ele multiplicasse por 100
                                        //falei com o prof de quarta sobre, ele nao achou o problema tamb√©m, ent√£o somente dividimos por 100
            }else if(escolha == 2){
                //declaraá∆oo de vari†veis para alcool
                fconv = 0.510;
                fcorr = 0.95; //liquido

                //Convers√£o ara unidade comum
                cc = (ca * fconv * tep* tj * fcorr);
                printf("%lf\n", cc);

                //Conteudo de carbono
                femiss = 14.8; 
                qc = (cc * femiss);
                printf("%lf\n", qc);

                //Emissoes de CO2
                eco = (qc*44/12); //peso do CO2 = 44 partes totais, 12 sao de c oq realmente importa p esse calc
                printf("Vocà produziu %lft/CO2\n", eco); //mais uma vez para dar o res correto dividindo por 100
            
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

                //Emiss√µes de CO2
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
                printf("O valor digitado n√£o corresponde √† nenhum combust√≠vel\n");
            }
        }    
    }

    if (resp == 's' || resp == 'S'){
        file= fopen("qualquercoisa.txt", "w");
    
        scanf("%d", &vezes);
    
        // Loop for que executa a quantidade de vezes especificada pelo usu√°rio
        for (int i = 0; i < vezes; i++) {
            scanf("%lf", &ca);
            ca = ca/10;     //ve quantos litros de gasolina precisa p andar o km
            ca = ca/1000;   //converte de litros para m3

            //verifica qual combust√≠vel eh
            //1 - Gasolina; 2 - Alcool; 3 - diesel; 4 - GNV:
            scanf("%d", &escolha);

            if (escolha == 1){
                //declara√ß√£o de vari√°veis para gasolina
                fconv = 0.77;
                fcorr = 0.95; //liquido

                //Convers√£o ara unidade comum
                cc = (ca * fconv * tep * tj * fcorr);
                printf("%lf, ", cc);

                //Conteudo de carbono
                femiss = 18.9; 
                qc = (cc * femiss);
                printf("%lf, ", qc);

                //Emiss√µes de CO2
                eco = (qc*44/12);
                printf("%lf\n", eco); //por algum mmotivo √© como se na linha 31 e32 ele multiplicasse por 100
                                        //falei com o prof de quarta sobre, ele nao achou o problema tamb√©m, ent√£o somente dividimos por 100
                fprintf(file, "%lf, ", cc);
                fprintf(file, "%lf, ", qc);
                fprintf(file, "%lf\n", eco);

            }else if(escolha == 2){
                //declara√ß√£o de vari√°veis para alcool
                fconv = 0.510;
                fcorr = 0.95; //liquido

                //Convers√£o ara unidade comum
                cc = (ca * fconv * tep * tj * fcorr);
                printf("%lf, ", cc);

                //Conteudo de carbono
                femiss = 14.8; 
                qc = (cc * femiss);
                printf("%lf, ", qc);

                //Emiss√µes de CO2
                eco = (qc*44/12); //peso do CO2 = 44 partes totais, 12 sao de c oq realmente importa p esse calc
                printf("%lf\n", eco); //mais uma vez para dar o res correto dividindo por 100
                fprintf(file, "%lf, ", cc);
                fprintf(file, "%lf, ", qc);
                fprintf(file, "%lf\n", eco);

            }else if(escolha == 3){
                //declara√ß√£o de vari√°veis para diesel
                fconv = 0.848;
                fcorr = 0.95; //liquido

                //Convers√£o ara unidade comum
                cc = (ca * fconv * tep * tj * fcorr);
                printf("%lf, ", cc);

                //Conteudo de carbono
                femiss = 20.2; 
                qc = (cc * femiss);
                printf("%lf, ", qc);

                //Emiss√µes de CO2
                eco = (qc*44/12); //peso do CO2 = 44 partes totais, 12 sao de c oq realmente importa p esse calc
                printf("%lf\n", eco); //mais uma vez para dar o res correto dividindo por 100
                fprintf(file, "%lf, ", cc);
                fprintf(file, "%lf, ", qc);
                fprintf(file, "%lf\n", eco);

            }else if(escolha ==4){
                //GNV - gas natural veicular
                fconv = 0.04;   
                fcorr = 0.90; //gasoso

                //Convers√£o ara unidade comum
                cc = (ca * fconv * tep * tj * fcorr);
                printf("%.10lf, ", cc);

                //Conteudo de carbono
                femiss = 0.000675; 
                qc = (cc * femiss);
                printf("%.10lf, ", qc);

                //Emiss√µes de CO2
                eco = (qc*44/12); //peso do CO2 = 44 partes totais, 12 sao de c oq realmente importa p esse calc
                printf("%.10lf\n", eco); //mais uma vez para dar o res correto dividindo por 100
                fprintf(file, "%.10lf, ", cc);
                fprintf(file, "%.10lf, ", qc);
                fprintf(file, "%.10lf\n", eco);
                
                
            }else{
                printf("O valor digitado n√£o corresponde √† nenhum combust√≠vel\n");
            }
        } 
        
    }
        
    //}if (resp == 'v' || resp == 'V'){      
    
    
    fclose(file);
    //33system("pause");
    return 0;
}