#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void diferenca(){
    int minutos;
    int horas;
    int diferenca, diferenca2, resultado;
    int cont = 0;
    printf("\nVoc� escolheu a op��o 8: Diferen�a entre dois per�odos de tempo\n");
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

    printf("\nA diferen�a de tempo � %i minutos\n", resultado);
    printf("------ OU ------");
    while (resultado>=60){
        resultado = resultado - 60;
        cont++;
    }
    printf("\nA diferen�a de tempo � %i horas e %i minutos\n", cont, resultado);
    return;
}

void conversaoHM(){
    int horas;
    printf("\nVoc� escolheu a op��o 1: Convers�o de horas em minutos\n");
    printf("\n------ BEM VINDO ------\n");

    printf("Digite a quantidade de horas: ");
    scanf("%i", &horas);

    printf("\n%i horas s�o ", horas);
    horas = horas * 60;
    printf("%i minutos\n", horas);
}

void conversaoHS(){
    int horas;
    printf("\nVoc� escolheu a op��o 2: Convers�o de horas em segundos\n");
    printf("\n------ BEM VINDO ------\n");
    
    printf("Digite a quantidade de horas: ");
    scanf("%i", &horas);

    printf("\n%i horas s�o ", horas);
    horas = horas * 360;
    printf("%i segundos\n", horas);
}

void conversaoMH(){
    int minutos, cont = 0;
    float horas;
    printf("\nVoc� escolheu a op��o 3: Convers�o de minutos em horas\n");
    printf("\n------ BEM VINDO ------\n");

    printf("Digite a quantidade de minutos: ");
    scanf("%i", &minutos);

    printf("\n%i minutos s�o ", minutos);
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
    printf("\nVoc� escolheu a op��o 4: Convers�o de minutos em segundos\n");
    printf("\n------ BEM VINDO ------\n");

    printf("Digite a quantidade de minutos: ");
    scanf("%i", &minutos);

    printf("\n%i minutos s�o ", minutos);
    minutos = minutos * 60;
    printf("%i segundos\n", minutos);
}

void conversaoSH(){
    int segundos, minutos, cont=0;
    float horas;
    printf("\nVoc� escolheu a op��o 5: Convers�o de segundos em horas\n");
    printf("\n------ BEM VINDO ------\n");

    printf("Digite a quantidade de segundos: ");
    scanf("%i", &segundos);

     printf("\n%i segundos s�o ", segundos);
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
    printf("\nVoc� escolheu a op��o 6: Convers�o de segundos em minutos\n");
    printf("\n------ BEM VINDO ------\n");

    printf("Digite a quantidade de segundos: ");
    scanf("%i", &segundos);

    printf("\n%i segundos s�o ", segundos);
    segundos = segundos / 60;
    printf("%i minutos\n", segundos);
}

void conversaoDH(){
    int dias;
    printf("\nVoc� escolheu a op��o 7: Convers�o de dias em horas\n");
    printf("\n------ BEM VINDO ------\n");

    printf("Digite a quantidade de dias: ");
    scanf("%i", &dias);

    printf("\n%i dias s�o ", dias);
    dias = dias * 24;
    printf("%i horas\n", dias);
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    printf("\nOl�! Bem vindo ao C�lculo DAHORA, seu programa mais completo de c�lculo de hora\n");
    printf("\nAqui voc� ter� v�rias op��es do que gostaria de calcular.\n");
    printf("\nDigite qualquer uma das op��es abaixo para entrar nela e realizar o c�lculo desejado!\n");
    int opcao;
    do {
        printf("\n-----MENU PRINCIPAL-----\n");
        printf("1. Convers�o de horas em minutos (Ex: 5 horas sao 300 minutos)\n");
        printf("2. Convers�o de horas em segundos (Ex: 1 hora sao 3600 segundos)\n");
        printf("3. Convers�o de minutos em horas (Ex: 300 minutos sao 5 horas)\n");
        printf("4. Convers�o de minutos em segundos (Ex: 20 minutos s�o 1200 segundos)\n");
        printf("5. Convers�o de segundos em horas (Ex: 3600 segundos � 1 horas)\n");
        printf("6. Convers�o de segundos em minutos (Ex: 300 segundos s�o 5 minutos)\n");
        printf("7. Convers�o de dias em horas\n");
        printf("8. Diferen�a entre dois per�odos de tempo\n");
        printf("9. SAIR\n");
        printf("------------------------\n");
        printf("\nEscolha a sua op��o: ");
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