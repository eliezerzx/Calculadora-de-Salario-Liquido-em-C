#include <stdio.h>
#include <conio.h>

int main() 
{
    float valorHora;
    float horasTrabalhadas;
    float salarioBruto;
    float ir;
    float inss;
    float fgts;
    float totalDescontos;
    float salarioLiquido;

    printf ("-----------------------------------------------------------------");
    printf ("\n\n Digite o valor da sua hora:");
    scanf ("%f", &valorHora);
    printf ("\n-----------------------------------------------------------------");
    
    printf ("\n\n Digite a quantidade de horas trabalhadas");
    scanf ("%f", &horasTrabalhadas);
    printf ("\n-----------------------------------------------------------------");

    salarioBruto = ( valorHora * horasTrabalhadas);
    
    if ( salarioBruto <= 900 )
    {
        ir = 0;

    } else if ( salarioBruto <= 1500 )
    {
        ir = salarioBruto * 0.05;

    } else if ( salarioBruto <= 2500 )
    {
        ir = salarioBruto * 0.10;

    } else if ( salarioBruto >= 2500 )
    {
        ir = salarioBruto * 0.20;
    }
    
    //calculos
    inss = salarioBruto * 0.10;
    fgts = salarioBruto * 0.11;
    totalDescontos = ir + inss;
    salarioLiquido = salarioBruto - totalDescontos;

    printf ("\n-----------------------------------------------------------------");
    printf("\n\t - Salario Bruto : R$ %.2f", salarioBruto);
    printf ("\n-----------------------------------------------------------------");
    printf("\n\t - IR (5%%) : R$ %.2f", ir);
    printf ("\n-----------------------------------------------------------------");
    printf("\n\t - INSS (10%%) : R$ %.2f", inss);
    printf ("\n-----------------------------------------------------------------");
    printf("\n\t - FGTS (11%%) : R$ %.2f", fgts);
    printf ("\n-----------------------------------------------------------------");
    printf("\n\t - Total de descontos : R$ %.2f", totalDescontos);
    printf ("\n-----------------------------------------------------------------");
    printf("\n\t - Salario Liquido : R$ %.2f", salarioLiquido);
    printf ("\n-----------------------------------------------------------------");


    return 0;
    
}
