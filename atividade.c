#include <stdio.h>

int main() {
    int abc, cba, xyz, zyx, resultado;
    
    // Solicitar que o usu�rio digite um n�mero abc de 3 algarismos
    
    printf("Digite um n�mero de 3 algarismos (100 <= x <= 999): ");
    scanf("%d", &abc);
    
    // Verificar se o n�mero tem 3 algarismos
    
    if (abc < 100 || abc > 999) {
        printf("O n�mero n�o possui 3 algarismos.\n");
    } else {
    	
        // Verificar se a diferen�a entre algarismos das centenas e das unidades � maior ou igual a 2
        
        int centenas = abc / 100;
        int unidades = abc % 10;
        
        if (centenas - unidades < 2) {
            printf("A diferen�a entre as centenas e unidades n�o � maior ou igual a 2.\n");
        } else {
        	
            //Inverter a ordem dos algarismos formando o n�mero cba
            
            cba = unidades * 100 + (abc / 10) % 10 * 10 + centenas;
            
            //Somar abc e cba, obtendo o n�mero xyz
            
            xyz = abc + cba;
            
            //Inverter a ordem de xyz, obtendo zyx
            
            zyx = (xyz % 10) * 100 + ((xyz / 10) % 10) * 10 + (xyz / 100);
            
            //Somar xyz e zyx para obter o resultado
            
            resultado = xyz + zyx;
            
            //Imprimir o resultado
            
            printf("Resultado: %d\n", resultado);
        }
    }
    
    return 0;
}

