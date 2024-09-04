/*Escreva um programa que verifique, em uma string, a existência da letra ‘a’,
 seja maiúscula ou minúscula, além de informar a quantidade de vezes em que ela ocorre. */

import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        try (Scanner scanner = new Scanner(System.in)) {
            System.out.println("Digite uma palavra qualquer: ");
            String palavra = scanner.next().toLowerCase();
            char[] letras = palavra.toCharArray();

            int letraA = 0; int limite = (palavra.length()) -1;

            for (int i = 0; i <= limite ; i++) {
                if (letras[i] == 'a') {
                    letraA = letraA + 1 ;
                }
            }
            
            System.out.println("O numero de letras A na palavra são " + letraA);
        }
    }
}
