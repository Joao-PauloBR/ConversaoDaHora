#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void diferenca(){
    int minutos;
    int horas;
    int diferenca, diferenca2, resultado;
    int cont = 0;
    printf("\nVocê escolheu a opção 8: Diferença entre dois períodos de tempo\n");
    printf("\n------ BEM VINDO ------\n");

    printf("Digite a quantidade de horas: ");
    scanf("%i", &horas);

    printf("\nDigite a quantidade de minutos: ");
    scanf("%i", &minutos);

    diferenca = horas * 60 + minutos;

    printf("\nDigite a quantidade de horas: ");
    scanf("%i", &horas);

    printf("\nDigite a quantidade de minutos: ");
    scanf("%i", &minutos);

    diferenca2 = horas * 60 + minutos;
    resultado = diferenca2 - diferenca;

    printf("\nA diferença de tempo é %i minutos\n", resultado);
    printf("------ OU ------");
    while (resultado>=60){
        resultado = resultado - 60;
        cont++;
    }
    printf("\nA diferença de tempo é %i horas e %i minutos\n", cont, resultado);
    return;
}

void conversaoHM(){
    int horas;
    printf("\nVocê escolheu a opção 1: Conversão de horas em minutos\n");
    printf("\n------ BEM VINDO ------\n");

    printf("Digite a quantidade de horas: ");
    scanf("%i", &horas);

    printf("\n%i horas são ", horas);
    horas = horas * 60;
    printf("%i minutos\n", horas);
}

void conversaoHS(){
    int horas;
    printf("\nVocê escolheu a opção 2: Conversão de horas em segundos\n");
    printf("\n------ BEM VINDO ------\n");
    
    printf("Digite a quantidade de horas: ");
    scanf("%i", &horas);

    printf("\n%i horas são ", horas);
    horas = horas * 360;
    printf("%i segundos\n", horas);
}

void conversaoMH(){
    int minutos, cont = 0;
    float horas;
    printf("\nVocê escolheu a opção 3: Conversão de minutos em horas\n");
    printf("\n------ BEM VINDO ------\n");

    printf("Digite a quantidade de minutos: ");
    scanf("%i", &minutos);

    printf("\n%i minutos são ", minutos);
    horas = minutos / 60;
    printf("%.2f horas\n", horas);
    printf("\n------ OU ------\n");
    while (horas >= 1)
    {
        horas = horas - 1;
        cont++;
    }
    minutos = horas * 60;
    printf("\n%i horas e %i minutos\n",cont, minutos);
}

void conversaoMS(){
    int minutos;
    printf("\nVocê escolheu a opção 4: Conversão de minutos em segundos\n");
    printf("\n------ BEM VINDO ------\n");

    printf("Digite a quantidade de minutos: ");
    scanf("%i", &minutos);

    printf("\n%i minutos são ", minutos);
    minutos = minutos * 60;
    printf("%i segundos\n", minutos);
}

void conversaoSH(){
    int segundos, minutos, cont=0;
    float horas;
    printf("\nVocê escolheu a opção 5: Conversão de segundos em horas\n");
    printf("\n------ BEM VINDO ------\n");

    printf("Digite a quantidade de segundos: ");
    scanf("%i", &segundos);

     printf("\n%i segundos são ", segundos);
    horas = segundos / 360;
    printf("%.2f horas\n", horas);
    printf("\n------ OU ------\n");
    while (horas >= 1)
    {
        horas = horas - 1;
        cont++;
    }
    minutos = horas * 60;
    printf("\n%i horas e %i minutos\n", cont, minutos);
}

void conversaoSM(){
    int segundos;
    printf("\nVocê escolheu a opção 6: Conversão de segundos em minutos\n");
    printf("\n------ BEM VINDO ------\n");

    printf("Digite a quantidade de segundos: ");
    scanf("%i", &segundos);

    printf("\n%i segundos são ", segundos);
    segundos = segundos / 60;
    printf("%i minutos\n", segundos);
}

void conversaoDH(){
    int dias;
    printf("\nVocê escolheu a opção 7: Conversão de dias em horas\n");
    printf("\n------ BEM VINDO ------\n");

    printf("Digite a quantidade de dias: ");
    scanf("%i", &dias);

    printf("\n%i dias são ", dias);
    dias = dias * 24;
    printf("%i horas\n", dias);
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    printf("\nOlá! Bem vindo ao Cálculo DAHORA, seu programa mais completo de cálculo de hora\n");
    printf("\nAqui você terá várias opções do que gostaria de calcular.\n");
    printf("\nDigite qualquer uma das opções abaixo para entrar nela e realizar o cálculo desejado!\n");
    int opcao;
    do {
        printf("\n-----MENU PRINCIPAL-----\n");
        printf("1. Conversão de horas em minutos (Ex: 5 horas sao 300 minutos)\n");
        printf("2. Conversão de horas em segundos (Ex: 1 hora sao 3600 segundos)\n");
        printf("3. Conversão de minutos em horas (Ex: 300 minutos sao 5 horas)\n");
        printf("4. Conversão de minutos em segundos (Ex: 20 minutos são 1200 segundos)\n");
        printf("5. Conversão de segundos em horas (Ex: 3600 segundos é 1 horas)\n");
        printf("6. Conversão de segundos em minutos (Ex: 300 segundos são 5 minutos)\n");
        printf("7. Conversão de dias em horas\n");
        printf("8. Diferença entre dois períodos de tempo\n");
        printf("9. SAIR\n");
        printf("------------------------\n");
        printf("\nEscolha a sua opção: ");
        scanf("%i", &opcao);
        switch (opcao){
        case 1:
            conversaoHM();
            break;
        case 2:
            conversaoHS();
            break;
        case 3:
            conversaoMH();
            break;
        case 4:
            conversaoMS();
            break;
        case 5:
            conversaoSH();
            break;
        case 6:
            conversaoSM();
            break;
        case 7:
            conversaoDH();
            break;
        case 8:
            diferenca();
            break;
        
        default:
            break;
        }
    } while (opcao != 9);
}