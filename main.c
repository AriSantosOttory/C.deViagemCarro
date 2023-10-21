#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura que armazenará o nome do carro e o custo da viagem
struct ResultadoViagem {
    char nomeCarro[15];
    float custoViagem;
};

struct ResultadoViagem calcularConsumo(float consumo, float distancia, float gasolina, char nomeCarro[15])
{
    struct ResultadoViagem resultado;
    resultado.custoViagem = consumo * (distancia / 100) * gasolina;
    strcpy(resultado.nomeCarro, nomeCarro); // Copia o nome do carro para a estrutura
    return resultado;
}

int main()
{
    char carros[5][15]; // 5 carros
    float consumos[5];
    float distancia;
    float custo;
    float gasolina;
    int numero;
    int i;

    // informar os carros e o custo
    strcpy(carros[0], "seat");
    consumos[0] = 7.0;
    strcpy(carros[1], "toyota");
    consumos[1] = 5.5;
    strcpy(carros[2], "bmw");
    consumos[2] = 11.0;
    strcpy(carros[3], "mercedes");
    consumos[3] = 10.0;
    strcpy(carros[4], "porche");
    consumos[4] = 17.0;

    printf("Calcular o custo da viagem Gaia->Faro \n\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d %s\n", i, carros[i]);
    }
    printf("Digite o numero do seu carro: ");
    scanf("%d", &numero);

    printf("Digite a distancia em KM: ");
    scanf("%f", &distancia);

    printf("Digite o custo por litro da gasolina: ");
    scanf("%f", &gasolina);
    // vamos chamar a função para calcular
    struct ResultadoViagem resultado = calcularConsumo(consumos[numero], distancia, gasolina, carros[numero]);
    printf("Carro: %s\nCusto da viagem: %0.2f", resultado.nomeCarro, resultado.custoViagem);

    return 0;
}
/*Como desejamos copiar o conteúdo de uma string para outra string, ele recebe dois parâmetros,
a string de destino e a string de origem.*/

