import java.util.Locale;
import java.util.Scanner;


public class Main {
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int idade;
		double peso, altura, imc;
		char sexo, escolhaentrada, escolhacontinua;
		String nome;
		
		System.out.println("Bem vindo a calculadora de IMC da Go!Sys");
		System.out.println("Gostaria de saber seu indice de massa corporal(S/N)?");
		escolhaentrada = sc.next().charAt(0);
		escolhacontinua = escolhaentrada;
		
		if(escolhaentrada == 'S' || escolhaentrada == 's') {
			
			while(escolhacontinua == 'S' || escolhacontinua == 's') {
				System.out.println("Qual o seu nome? ");
				sc.nextLine();
				nome = sc.nextLine();
				System.out.println("Qual a sua idade? ");
				idade = sc.nextInt();
				System.out.println("Sexo (F/M)");
				sexo = sc.next().charAt(0);
				System.out.println("Qual a sua altura? ");
				altura = sc.nextDouble();
				System.out.println("Qual o seu peso? ");
				peso = sc.nextDouble();
				
				imc = (peso / Math.pow(altura, 2));
				
				System.out.println(nome+", "+String.format("%.2f", peso)+"kg, "+String.format("%.2f", altura)+"m, sexo("+sexo+")");
				
		        // Masculino menor de 5 anos
	            if(sexo == 'M' || sexo == 'm' && idade <= 5){
	            	if(imc < 12.9){
	                 System.out.println("Baixo peso, procure um Nutricionista!");
	                } else if(imc < 16.4){
	                     System.out.println("Peso normal, parabéns!");
	                    } else if(imc < 17.9){
	                         System.out.println("Sobrepeso, cuidado!");
	                        } else{
	                             System.out.println("Obesidade, procure um médico!");
	                              }

	            }
	        // Masculino entre 6 e 15 anos
	            if(sexo == 'M' || sexo == 'm' && idade <= 15){
	                if(imc < 14.9){
	                 System.out.println("Baixo peso, procure um Nutricionista!");
	                } else if(imc < 20.9){
	                     System.out.println("Peso normal, parabéns!");
	                    } else if(imc < 25.4){
	                         System.out.println("Sobrepeso, cuidado!");
	                        } else{
	                             System.out.println("Obesidade, procure um médico!");
	                            }
	            }
	        // Masculino entre 16 e 62 anos
	            if (sexo == 'M' || sexo == 'm' && idade <= 62){
	                if(imc < 20){
	                 System.out.println("Baixo peso, procure um Nutricionista!");
	                } else if(imc < 24.9){
	                     System.out.println("Peso normal, parabéns!");
	                    } else if(imc < 29.9){
	                         System.out.println("Obesidade leve, cuidado!");
	                        } else if(imc < 39.9){
	                             System.out.println("Obesidade moderada, procure um médico!");
	                            } else {
	                                 System.out.println("Obesidade mórbida, procure um médico!");
	                            	}
	            }
	        // Masculino maior de 63 anos
	            if (sexo == 'M' || sexo == 'm' && idade >= 63){
	               if(imc < 22){
	                 System.out.println("Baixo peso, procure um Nutricionista!");
	                } else if(imc < 27){
	                     System.out.println("Peso normal, parabéns!");
	                    } else if(imc < 37){
	                         System.out.println("Obesidade leve, cuidado!");
	                        } else if(imc < 41.9){
	                             System.out.println("Obesidade moderada, procure um médico!");
	                            } else {
	                                System.out.println("Obesidade mórbida, procure um médico!");
	                            	}
	            }
	        // Femenino menor de 5 anos
	            if(sexo == 'F' || sexo == 'f' && idade <= 5){
	            	if(imc < 12.9){
	                 System.out.println("Baixo peso, procure um Nutricionista!");
	                } else if(imc < 17){
	                     System.out.println("Peso normal, parabéns!");
	                    } else if(imc < 18.7){
	                         System.out.println("Sobrepeso, cuidado!");
	                        } else {
	                             System.out.println("Obesidade, procure um médico!");
	                            }

	            }
	        // Femenino entre 6 e 15 anos
	            if(sexo == 'F' || sexo == 'f' && idade <= 15){
	                if(imc < 14.9){
	                 System.out.println("Baixo peso, procure um Nutricionista!");
	                } else if(imc < 22.9){
	                     System.out.println("Peso normal, parabéns!");
	                    } else if(imc < 27.5){
	                         System.out.println("Sobrepeso, cuidado!");
	                        } else {
	                             System.out.println("Obesidade, procure um médico!");
	                            }
	            }
	        // Femenino entre 16 e 62 anos
	            if (sexo == 'F' || sexo == 'f' && idade <= 62){
	                if(imc < 19){
	                 System.out.println("Baixo peso, procure um Nutricionista!");
	                } else if(imc < 23.9){
	                     System.out.println("Peso normal, parabéns!");
	                    } else if(imc < 28.9){
	                         System.out.println("Obesidade leve, cuidado!");
	                        } else if(imc < 38.9){
	                             System.out.println("Obesidade moderada, procure um médico!");
	                            } else {
	                                System.out.println("Obesidade mórbida, procure um médico!");
	                            }
	            }
	        // Femenino maior de 63 anos
	            if (sexo == 'F' || sexo == 'f' && idade >= 63){
	               if(imc < 22){
	                 System.out.println("Baixo peso, procure um Nutricionista!");
	                } else if(imc < 27){
	                     System.out.println("Peso normal, parabéns!");
	                    } else if(imc < 37){
	                         System.out.println("Obesidade leve, cuidado!");
	                        } else if(imc < 41.9){
	                             System.out.println("Obesidade moderada, procure um médico!");
	                            } else {
	                                System.out.println("Obesidade mórbida, procure um médico!");
	                            }
	            }

	        System.out.println("Deseja continua e calcular outro IMC (S/N)?");
	        escolhacontinua = sc.next().charAt(0);
			}
			
		}
		System.out.println();
		System.out.println("Obrigado por utilizar um app Go!Sys");
	sc.close();	
	}

}
