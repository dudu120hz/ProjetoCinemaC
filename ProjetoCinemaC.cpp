#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int pergunta, dia, mes, filme, horario, d3, ingresso, quant_inteira, quant_meia, pagamento, cartao, codigo, numero; 
float preco_inteira, preco_meia, valor_inteira, valor_meia, valor_total;
void homem_aranha(){
	printf("\n Voc� escolheu Homem-Aranha: Sem Volta Para Casa!");
	printf("\n Que m�s voc� quer?(Dezembro=12 e Janeiro=1): ");
	scanf("%d", &mes);
	if(mes==12){
		printf("\n Voc� escolheu Dezembro!");
		printf("\n Que dia voc� quer?(digite de 16 a 31): ");
		scanf("%d", &dia);
		if(dia>=16 && dia<=31){
			printf("\n Voc� escolheu dia %d de Dezembro!", dia);
			printf("\n Os hor�rios dispon�veis s�o:");
			printf("\n 13h45(1)   14h20(2)   15h15(3)");
			printf("\n 16h05(4)   17h30(5)   18h00(6)");
			printf("\n 19h15(7)   20h35(8)   21h05(9)");
			printf("\n 22h50(10)");
			printf("\n Qual hor�rio voc� quer(digite os n�meros entre ()): ");
			scanf("%d", &horario);
			if(horario>=1 && horario<=10){
				printf("\n Voc� escolheu o hor�rio %d!", horario);
				printf("\n Voc� quer com ou sem 3D?(Com-3D=1 e Sem-3D=2): ");
				scanf("%d", &d3);
				if(d3==1){
					preco_inteira=36.00;
					preco_meia=18.00;
					printf("\n Voc� escolheu Com 3D!");
					printf("\n O ingresso de entrada-inteira fica R$%.2f", preco_inteira);
					printf("\n O ingresso de meia-entrada fica R$%.2f", preco_meia);
					printf("\n Quantos ingressos de etrada-inteira voc� quer?: ");
					scanf("%d", &quant_inteira);
					printf(" Quantos ingressos de meia-entrada voc� quer?: ");
					scanf("%d", &quant_meia);
					valor_inteira=preco_inteira*quant_inteira;
					valor_meia=preco_meia*quant_meia;
					valor_total=valor_inteira+valor_meia;
					printf("\n O valor dos ingressos de entrada-inteira ficou: R$%.2f", valor_inteira);
					printf("\n O valor dos ingressos de meia-entrada ficou: R$%.2f", valor_meia);
					printf("\n O valor total dos ingressos ficou: R$%.2f", valor_total);
					printf("\n As formas de pagamento s�o:");
					printf("\n Cart�o(1)");
					printf("\n Boleto(2)");
					printf("\n Pix(3)");
					printf("\n Qual dessas formas de pagamento voc� quer?(digite o n�mero entre () que fica na frente): ");
					scanf("%d", &pagamento);
					if(pagamento==1){
						printf("\n Voc� escolheu Cart�o!");
						printf("\n Agora digite o n�mero do cart�o: ");
						scanf("%d", &cartao);
						printf(" Agora digite o c�digo de seguran�a: ");
						scanf("%d", &codigo);
						printf("\n Pronto, tudo pago e computado no sistema!");
						printf("\n Tenha um bom filme e at� a pr�xima!");
					}else{
						if(pagamento==2){
							printf("\n Voc� escolheu Boleto!");
							printf("\n O c�digo de barras do Boleto �:");
						    printf("\n 450460632662665675710730750765835845855865870888");
						    printf("\n Digite seu n�mero de telefone (com DDD e todos os n�meros juntos): ");
						    scanf("%d", &numero);
						    printf("\n Voc� tem 5 dias �teis para efetuar o pagamento no Boleto");
						    printf("\ Se n�o pagar nesse prazo, a compra ser� totalmente cancelada");
						    printf("\n Assim que o pagamento for aprovado, vic� receber� um SMS de aviso");
						    printf("\n Por enquanto � isso, agradecemos a sua compra e visita!");
						}else{
							if(pagamento==3){
							    printf("\n Voc� escolheu Pix!");
								printf("\n A chave do Pix �:");
						        printf("\n dudu@cinema.com");
						        printf("\n Digite seu n�mero de telefone (com DDD e todos os n�meros juntos): ");
						        scanf("%d", &numero);
						        printf("\n Voc� tem 5 dias �teis para efetuar o pagamento no Boleto");
						        printf("\ Se n�o pagar nesse prazo, a compra ser� totalmente cancelada");
						        printf("\n Assim que o pagamento for aprovado, vic� receber� um SMS de aviso");
						        printf("\n Por enquanto � isso, agradecemos a sua compra e visita!");
							}else{
								printf("\n Voc� digitou errado, feche o programa e tente novamente!");
							}
						}
					}
				}else{
					if(d3==2){
						preco_inteira=30.00;
					    preco_meia=15.00;
					    printf("\n Voc� escolheu Com 3D!");
					    printf("\n O ingresso de entrada-inteira fica R$%.2f", preco_inteira);
					    printf("\n O ingresso de meia-entrada fica R$%.2f", preco_meia);
					    printf("\n Quantos ingressos de etrada-inteira voc� quer?: ");
					    scanf("%d", &quant_inteira);
					    printf(" Quantos ingressos de meia-entrada voc� quer?: ");
					    scanf("%d", &quant_meia);
					    valor_inteira=preco_inteira*quant_inteira;
					    valor_meia=preco_meia*quant_meia;
					    valor_total=valor_inteira+valor_meia;
					    printf("\n O valor dos ingressos de entrada-inteira ficou: R$%.2f", valor_inteira);
					    printf("\n O valor dos ingressos de meia-entrada ficou: R$%.2f", valor_meia);
					    printf("\n O valor total dos ingressos ficou: R$%.2f", valor_total);
					    printf("\n As formas de pagamento s�o:");
					    printf("\n Cart�o(1)");
					    printf("\n Boleto(2)");
					    printf("\n Pix(3)");
					    printf("\n Qual dessas formas de pagamento voc� quer?(digite o n�mero entre () que fica na frente): ");
					    scanf("%d", &pagamento);
					    if(pagamento==1){
						    printf("\n Voc� escolheu Cart�o!");
						    printf("\n Agora digite o n�mero do cart�o: ");
						    scanf("%d", &cartao);
						    printf(" Agora digite o c�digo de seguran�a: ");
						    scanf("%d", &codigo);
						    printf("\n Pronto, tudo pago e computado no sistema!");
						    printf("\n Tenha um bom filme e at� a pr�xima!");
					    }else{
						    if(pagamento==2){
							    printf("\n Voc� escolheu Boleto!");
							    printf("\n O c�digo de barras do Boleto �:");
						        printf("\n 450460632662665675710730750765835845855865870888");
						        printf("\n Digite seu n�mero de telefone (com DDD e todos os n�meros juntos): ");
						        scanf("%d", &numero);
						        printf("\n Voc� tem 5 dias �teis para efetuar o pagamento no Boleto");
						        printf("\ Se n�o pagar nesse prazo, a compra ser� totalmente cancelada");
						        printf("\n Assim que o pagamento for aprovado, vic� receber� um SMS de aviso");
						        printf("\n Por enquanto � isso, agradecemos a sua compra e visita!");
						    }else{
							    if(pagamento==3){
							        printf("\n Voc� escolheu Pix!");
								    printf("\n A chave do Pix �:");
						            printf("\n dudu@cinema.com");
						            printf("\n Digite seu n�mero de telefone (com DDD e todos os n�meros juntos): ");
						            scanf("%d", &numero);
						            printf("\n Voc� tem 5 dias �teis para efetuar o pagamento no Boleto");
						            printf("\ Se n�o pagar nesse prazo, a compra ser� totalmente cancelada");
						            printf("\n Assim que o pagamento for aprovado, vic� receber� um SMS de aviso");
						            printf("\n Por enquanto � isso, agradecemos a sua compra e visita!");
							    }else{
								    printf("\n Voc� digitou errado, feche o programa e tente novamente!");
							    }
						    }
					    }
					}else{
						printf("\n Voc� digitou errado, feche o programa e tente novamente!");
					}
				}
			}else{
				printf("\n Voc� digitou errado, feche o programa e tente novamente!");
			}
		}else{
			printf("\n Voc� digitou errado, feche o programa e tente novamente!");
		}
	}else{
		if(mes==1){
			printf("\n Voc� escolheu Janeiro!");
			printf("\n Que dia voc� quer?(digite de 1 a 17): ");
		    scanf("%d", &dia);
		    if(dia>=1 && dia<=17){
			    printf("\n Voc� escolheu dia %d de Janeiro!", dia);
			    printf("\n Os hor�rios dispon�veis s�o:");
			    printf("\n 13h45(1)   14h20(2)   15h15(3)");
			    printf("\n 16h05(4)   17h30(5)   18h00(6)");
			    printf("\n 19h15(7)   20h35(8)   21h05(9)");
			    printf("\n 22h50(10)");
			    printf("\n Qual hor�rio voc� quer(digite os n�meros entre ()): ");
			    scanf("%d", &horario);
			    if(horario>=1 && horario<=10){
				    printf("\n Voc� escolheu o hor�rio %d!", horario);
				    printf("\n Voc� quer com ou sem 3D?(Com-3D=1 e Sem-3D=2): ");
				    scanf("%d", &d3);
				    if(d3==1){
					    preco_inteira=36.00;
						preco_meia=18.00;
					    printf("\n Voc� escolheu Com 3D!");
					    printf("\n O ingresso de entrada-inteira fica R$%.2f", preco_inteira);
					    printf("\n O ingresso de meia-entrada fica R$%.2f", preco_meia);
					    printf("\n Quantos ingressos de etrada-inteira voc� quer?: ");
					    scanf("%d", &quant_inteira);
					    printf(" Quantos ingressos de meia-entrada voc� quer?: ");
					    scanf("%d", &quant_meia);
					    valor_inteira=preco_inteira*quant_inteira;
					    valor_meia=preco_meia*quant_meia;
					    valor_total=valor_inteira+valor_meia;
					    printf("\n O valor dos ingressos de entrada-inteira ficou: R$%.2f", valor_inteira);
					    printf("\n O valor dos ingressos de meia-entrada ficou: R$%.2f", valor_meia);
					    printf("\n O valor total dos ingressos ficou: R$%.2f", valor_total);
					    printf("\n As formas de pagamento s�o:");
					    printf("\n Cart�o(1)");
					    printf("\n Boleto(2)");
					    printf("\n Pix(3)");
					    printf("\n Qual dessas formas de pagamento voc� quer?(digite o n�mero entre () que fica na frente): ");
					    scanf("%d", &pagamento);
					    if(pagamento==1){
						    printf("\n Voc� escolheu Cart�o!");
						    printf("\n Agora digite o n�mero do cart�o: ");
						    scanf("%d", &cartao);
						    printf(" Agora digite o c�digo de seguran�a: ");
						    scanf("%d", &codigo);
						    printf("\n Pronto, tudo pago e computado no sistema!");
						    printf("\n Tenha um bom filme e at� a pr�xima!");
					    }else{
						    if(pagamento==2){
						        printf("\n Voc� escolheu Boleto!");
							    printf("\n O c�digo de barras do Boleto �:");
						        printf("\n 450460632662665675710730750765835845855865870888");
						        printf("\n Digite seu n�mero de telefone (com DDD e todos os n�meros juntos): ");
						        scanf("%d", &numero);
						        printf("\n Voc� tem 5 dias �teis para efetuar o pagamento no Boleto");
						        printf("\ Se n�o pagar nesse prazo, a compra ser� totalmente cancelada");
						        printf("\n Assim que o pagamento for aprovado, vic� receber� um SMS de aviso");
						        printf("\n Por enquanto � isso, agradecemos a sua compra e visita!");
						    }else{
							    if(pagamento==3){
							        printf("\n Voc� escolheu Pix!");
							        printf("\n A chave do Pix �:");
						            printf("\n dudu@cinema.com");
						            printf("\n Digite seu n�mero de telefone (com DDD e todos os n�meros juntos): ");
						            scanf("%d", &numero);
						            printf("\n Voc� tem 5 dias �teis para efetuar o pagamento no Boleto");
						            printf("\ Se n�o pagar nesse prazo, a compra ser� totalmente cancelada");
						            printf("\n Assim que o pagamento for aprovado, vic� receber� um SMS de aviso");
						            printf("\n Por enquanto � isso, agradecemos a sua compra e visita!");
							    }else{
								    printf("\n Voc� digitou errado, feche o programa e tente novamente!");
							    }
						    }
					    }
				    }else{
					    if(d3==2){
					        preco_inteira=30.00;
				            preco_meia=15.00;
				            printf("\n Voc� escolheu Com 3D!");
				            printf("\n O ingresso de entrada-inteira fica R$%.2f", preco_inteira);
				            printf("\n O ingresso de meia-entrada fica R$%.2f", preco_meia);
					        printf("\n Quantos ingressos de etrada-inteira voc� quer?: ");
				            scanf("%d", &quant_inteira);
				            printf(" Quantos ingressos de meia-entrada voc� quer?: ");
				            scanf("%d", &quant_meia);
			                valor_inteira=preco_inteira*quant_inteira;
				            valor_meia=preco_meia*quant_meia;
				            valor_total=valor_inteira+valor_meia;
				            printf("\n O valor dos ingressos de entrada-inteira ficou: R$%.2f", valor_inteira);
				            printf("\n O valor dos ingressos de meia-entrada ficou: R$%.2f", valor_meia);
				            printf("\n O valor total dos ingressos ficou: R$%.2f", valor_total);
					        printf("\n As formas de pagamento s�o:");
				            printf("\n Cart�o(1)");
				            printf("\n Boleto(2)");
					        printf("\n Pix(3)");
						    printf("\n Qual dessas formas de pagamento voc� quer?(digite o n�mero entre () que fica na frente): ");
				            scanf("%d", &pagamento);
				            if(pagamento==1){
					            printf("\n Voc� escolheu Cart�o!");
					            printf("\n Agora digite o n�mero do cart�o: ");
					            scanf("%d", &cartao);
						        printf(" Agora digite o c�digo de seguran�a: ");
					            scanf("%d", &codigo);
					            printf("\n Pronto, tudo pago e computado no sistema!");
					            printf("\n Tenha um bom filme e at� a pr�xima!");
					        }else{
					            if(pagamento==2){
						            printf("\n Voc� escolheu Boleto!");
						            printf("\n O c�digo de barras do Boleto �:");
					                printf("\n 450460632662665675710730750765835845855865870888");
					                printf("\n Digite seu n�mero de telefone (com DDD e todos os n�meros juntos): ");
					                scanf("%d", &numero);
						            printf("\n Voc� tem 5 dias �teis para efetuar o pagamento no Boleto");
					                printf("\ Se n�o pagar nesse prazo, a compra ser� totalmente cancelada");
					                printf("\n Assim que o pagamento for aprovado, vic� receber� um SMS de aviso");
					                printf("\n Por enquanto � isso, agradecemos a sua compra e visita!");
						        }else{
						            if(pagamento==3){
						                printf("\n Voc� escolheu Pix!");
							            printf("\n A chave do Pix �:");
					                    printf("\n dudu@cinema.com");
					                    printf("\n Digite seu n�mero de telefone (com DDD e todos os n�meros juntos): ");
					                    scanf("%d", &numero);
					                    printf("\n Voc� tem 5 dias �teis para efetuar o pagamento no Boleto");
						                printf("\ Se n�o pagar nesse prazo, a compra ser� totalmente cancelada");
						                printf("\n Assim que o pagamento for aprovado, vic� receber� um SMS de aviso");
						                printf("\n Por enquanto � isso, agradecemos a sua compra e visita!");
							        }else{
								        printf("\n Voc� digitou errado, feche o programa e tente novamente!");
							        }
						        }
					        }
					    }else{
						    printf("\n Voc� digitou errado, feche o programa e tente novamente!");
					    }
				    }
			    }else{
				    printf("\n Voc� digitou errado, feche o programa e tente novamente!");
			    }
		    }else{
			    printf("\n Voc� digitou errado, feche o programa e tente novamente!");
		    }
		}else{
			printf("\n Voc� digitou errado, feche o programa e tente novamente!");
		}
	}
}

void sem_tempo_para_morrer(){
	printf("\n Voc� escolheu 007: Sem Tempo Para Morrer!"); 
	printf("\n Que m�s voc� quer?(Setembro=9 e Outubro=10): ");
	scanf("%d", &mes);
	if(mes==9){
		printf("\n Voc� escolheu Setembro!");
		printf("\n Que dia voc� quer?(digite 30): ");
		scanf("%d", &dia);
		if(dia==30){
			printf("\n Voc� escolheu dia %d de Setembro!", dia);
			printf("\n Os hor�rios dispon�veis s�o:");
			printf("\n 13h45(1)   14h20(2)   15h15(3)");
			printf("\n 16h05(4)   17h30(5)   18h00(6)");
			printf("\n 19h15(7)   20h35(8)   21h05(9)");
			printf("\n 22h50(10)");
			printf("\n Qual hor�rio voc� quer(digite os n�meros entre ()): ");
			scanf("%d", &horario);
			if(horario>=1 && horario<=10){
				printf("\n Voc� escolheu o hor�rio %d!", horario);
				printf("\n Voc� quer com ou sem 3D?(Com-3D=1 e Sem-3D=2): ");
				scanf("%d", &d3);
				if(d3==1){
					preco_inteira=36.00;
					preco_meia=18.00;
					printf("\n Voc� escolheu Com 3D!");
					printf("\n O ingresso de entrada-inteira fica R$%.2f", preco_inteira);
					printf("\n O ingresso de meia-entrada fica R$%.2f", preco_meia);
					printf("\n Quantos ingressos de etrada-inteira voc� quer?: ");
					scanf("%d", &quant_inteira);
					printf(" Quantos ingressos de meia-entrada voc� quer?: ");
					scanf("%d", &quant_meia);
					valor_inteira=preco_inteira*quant_inteira;
					valor_meia=preco_meia*quant_meia;
					valor_total=valor_inteira+valor_meia;
					printf("\n O valor dos ingressos de entrada-inteira ficou: R$%.2f", valor_inteira);
					printf("\n O valor dos ingressos de meia-entrada ficou: R$%.2f", valor_meia);
					printf("\n O valor total dos ingressos ficou: R$%.2f", valor_total);
					printf("\n As formas de pagamento s�o:");
					printf("\n Cart�o(1)");
					printf("\n Boleto(2)");
					printf("\n Pix(3)");
					printf("\n Qual dessas formas de pagamento voc� quer?(digite o n�mero entre () que fica na frente): ");
					scanf("%d", &pagamento);
					if(pagamento==1){
						printf("\n Voc� escolheu Cart�o!");
						printf("\n Agora digite o n�mero do cart�o: ");
						scanf("%d", &cartao);
						printf(" Agora digite o c�digo de seguran�a: ");
						scanf("%d", &codigo);
						printf("\n Pronto, tudo pago e computado no sistema!");
						printf("\n Tenha um bom filme e at� a pr�xima!");
					}else{
						if(pagamento==2){
							printf("\n Voc� escolheu Boleto!");
							printf("\n O c�digo de barras do Boleto �:");
						    printf("\n 450460632662665675710730750765835845855865870888");
						    printf("\n Digite seu n�mero de telefone (com DDD e todos os n�meros juntos): ");
						    scanf("%d", &numero);
						    printf("\n Voc� tem 5 dias �teis para efetuar o pagamento no Boleto");
						    printf("\ Se n�o pagar nesse prazo, a compra ser� totalmente cancelada");
						    printf("\n Assim que o pagamento for aprovado, vic� receber� um SMS de aviso");
						    printf("\n Por enquanto � isso, agradecemos a sua compra e visita!");
						}else{
							if(pagamento==3){
							    printf("\n Voc� escolheu Pix!");
								printf("\n A chave do Pix �:");
						        printf("\n dudu@cinema.com");
						        printf("\n Digite seu n�mero de telefone (com DDD e todos os n�meros juntos): ");
						        scanf("%d", &numero);
						        printf("\n Voc� tem 5 dias �teis para efetuar o pagamento no Boleto");
						        printf("\ Se n�o pagar nesse prazo, a compra ser� totalmente cancelada");
						        printf("\n Assim que o pagamento for aprovado, vic� receber� um SMS de aviso");
						        printf("\n Por enquanto � isso, agradecemos a sua compra e visita!");
							}else{
								printf("\n Voc� digitou errado, feche o programa e tente novamente!");
							}
						}
					}
				}else{
					if(d3==2){
						preco_inteira=30.00;
					    preco_meia=15.00;
					    printf("\n Voc� escolheu Com 3D!");
					    printf("\n O ingresso de entrada-inteira fica R$%.2f", preco_inteira);
					    printf("\n O ingresso de meia-entrada fica R$%.2f", preco_meia);
					    printf("\n Quantos ingressos de etrada-inteira voc� quer?: ");
					    scanf("%d", &quant_inteira);
					    printf(" Quantos ingressos de meia-entrada voc� quer?: ");
					    scanf("%d", &quant_meia);
					    valor_inteira=preco_inteira*quant_inteira;
					    valor_meia=preco_meia*quant_meia;
					    valor_total=valor_inteira+valor_meia;
					    printf("\n O valor dos ingressos de entrada-inteira ficou: R$%.2f", valor_inteira);
					    printf("\n O valor dos ingressos de meia-entrada ficou: R$%.2f", valor_meia);
					    printf("\n O valor total dos ingressos ficou: R$%.2f", valor_total);
					    printf("\n As formas de pagamento s�o:");
					    printf("\n Cart�o(1)");
					    printf("\n Boleto(2)");
					    printf("\n Pix(3)");
					    printf("\n Qual dessas formas de pagamento voc� quer?(digite o n�mero entre () que fica na frente): ");
					    scanf("%d", &pagamento);
					    if(pagamento==1){
						    printf("\n Voc� escolheu Cart�o!");
						    printf("\n Agora digite o n�mero do cart�o: ");
						    scanf("%d", &cartao);
						    printf(" Agora digite o c�digo de seguran�a: ");
						    scanf("%d", &codigo);
						    printf("\n Pronto, tudo pago e computado no sistema!");
						    printf("\n Tenha um bom filme e at� a pr�xima!");
					    }else{
						    if(pagamento==2){
							    printf("\n Voc� escolheu Boleto!");
							    printf("\n O c�digo de barras do Boleto �:");
						        printf("\n 450460632662665675710730750765835845855865870888");
						        printf("\n Digite seu n�mero de telefone (com DDD e todos os n�meros juntos): ");
						        scanf("%d", &numero);
						        printf("\n Voc� tem 5 dias �teis para efetuar o pagamento no Boleto");
						        printf("\ Se n�o pagar nesse prazo, a compra ser� totalmente cancelada");
						        printf("\n Assim que o pagamento for aprovado, vic� receber� um SMS de aviso");
						        printf("\n Por enquanto � isso, agradecemos a sua compra e visita!");
						    }else{
							    if(pagamento==3){
							        printf("\n Voc� escolheu Pix!");
								    printf("\n A chave do Pix �:");
						            printf("\n dudu@cinema.com");
						            printf("\n Digite seu n�mero de telefone (com DDD e todos os n�meros juntos): ");
						            scanf("%d", &numero);
						            printf("\n Voc� tem 5 dias �teis para efetuar o pagamento no Boleto");
						            printf("\ Se n�o pagar nesse prazo, a compra ser� totalmente cancelada");
						            printf("\n Assim que o pagamento for aprovado, vic� receber� um SMS de aviso");
						            printf("\n Por enquanto � isso, agradecemos a sua compra e visita!");
							    }else{
								    printf("\n Voc� digitou errado, feche o programa e tente novamente!");
							    }
						    }
					    }
					}else{
						printf("\n Voc� digitou errado, feche o programa e tente novamente!");
					}
				}
			}else{
				printf("\n Voc� digitou errado, feche o programa e tente novamente!");
			}
		}else{
			printf("\n Voc� digitou errado, feche o programa e tente novamente!");
		}
	}else{
		if(mes==10){
			printf("\n Voc� escolheu Outubro!");
			printf("\n Que dia voc� quer?(digite de 1 a 31): ");
		    scanf("%d", &dia);
		    if(dia>=1 && dia<=31){
			    printf("\n Voc� escolheu dia %d de Outubro!", dia);
			    printf("\n Os hor�rios dispon�veis s�o:");
			    printf("\n 13h45(1)   14h20(2)   15h15(3)");
			    printf("\n 16h05(4)   17h30(5)   18h00(6)");
			    printf("\n 19h15(7)   20h35(8)   21h05(9)");
			    printf("\n 22h50(10)");
			    printf("\n Qual hor�rio voc� quer(digite os n�meros entre ()): ");
			    scanf("%d", &horario);
			    if(horario>=1 && horario<=10){
				    printf("\n Voc� escolheu o hor�rio %d!", horario);
				    printf("\n Voc� quer com ou sem 3D?(Com-3D=1 e Sem-3D=2): ");
				    scanf("%d", &d3);
				    if(d3==1){
					    preco_inteira=36.00;
						preco_meia=18.00;
					    printf("\n Voc� escolheu Com 3D!");
					    printf("\n O ingresso de entrada-inteira fica R$%.2f", preco_inteira);
					    printf("\n O ingresso de meia-entrada fica R$%.2f", preco_meia);
					    printf("\n Quantos ingressos de etrada-inteira voc� quer?: ");
					    scanf("%d", &quant_inteira);
					    printf(" Quantos ingressos de meia-entrada voc� quer?: ");
					    scanf("%d", &quant_meia);
					    valor_inteira=preco_inteira*quant_inteira;
					    valor_meia=preco_meia*quant_meia;
					    valor_total=valor_inteira+valor_meia;
					    printf("\n O valor dos ingressos de entrada-inteira ficou: R$%.2f", valor_inteira);
					    printf("\n O valor dos ingressos de meia-entrada ficou: R$%.2f", valor_meia);
					    printf("\n O valor total dos ingressos ficou: R$%.2f", valor_total);
					    printf("\n As formas de pagamento s�o:");
					    printf("\n Cart�o(1)");
					    printf("\n Boleto(2)");
					    printf("\n Pix(3)");
					    printf("\n Qual dessas formas de pagamento voc� quer?(digite o n�mero entre () que fica na frente): ");
					    scanf("%d", &pagamento);
					    if(pagamento==1){
						    printf("\n Voc� escolheu Cart�o!");
						    printf("\n Agora digite o n�mero do cart�o: ");
						    scanf("%d", &cartao);
						    printf(" Agora digite o c�digo de seguran�a: ");
						    scanf("%d", &codigo);
						    printf("\n Pronto, tudo pago e computado no sistema!");
						    printf("\n Tenha um bom filme e at� a pr�xima!");
					    }else{
						    if(pagamento==2){
						        printf("\n Voc� escolheu Boleto!");
							    printf("\n O c�digo de barras do Boleto �:");
						        printf("\n 450460632662665675710730750765835845855865870888");
						        printf("\n Digite seu n�mero de telefone (com DDD e todos os n�meros juntos): ");
						        scanf("%d", &numero);
						        printf("\n Voc� tem 5 dias �teis para efetuar o pagamento no Boleto");
						        printf("\ Se n�o pagar nesse prazo, a compra ser� totalmente cancelada");
						        printf("\n Assim que o pagamento for aprovado, vic� receber� um SMS de aviso");
						        printf("\n Por enquanto � isso, agradecemos a sua compra e visita!");
						    }else{
							    if(pagamento==3){
							        printf("\n Voc� escolheu Pix!");
							        printf("\n A chave do Pix �:");
						            printf("\n dudu@cinema.com");
						            printf("\n Digite seu n�mero de telefone (com DDD e todos os n�meros juntos): ");
						            scanf("%d", &numero);
						            printf("\n Voc� tem 5 dias �teis para efetuar o pagamento no Boleto");
						            printf("\ Se n�o pagar nesse prazo, a compra ser� totalmente cancelada");
						            printf("\n Assim que o pagamento for aprovado, vic� receber� um SMS de aviso");
						            printf("\n Por enquanto � isso, agradecemos a sua compra e visita!");
							    }else{
								    printf("\n Voc� digitou errado, feche o programa e tente novamente!");
							    }
						    }
					    }
				    }else{
					    if(d3==2){
					        preco_inteira=30.00;
				            preco_meia=15.00;
				            printf("\n Voc� escolheu Com 3D!");
				            printf("\n O ingresso de entrada-inteira fica R$%.2f", preco_inteira);
				            printf("\n O ingresso de meia-entrada fica R$%.2f", preco_meia);
					        printf("\n Quantos ingressos de etrada-inteira voc� quer?: ");
				            scanf("%d", &quant_inteira);
				            printf(" Quantos ingressos de meia-entrada voc� quer?: ");
				            scanf("%d", &quant_meia);
			                valor_inteira=preco_inteira*quant_inteira;
				            valor_meia=preco_meia*quant_meia;
				            valor_total=valor_inteira+valor_meia;
				            printf("\n O valor dos ingressos de entrada-inteira ficou: R$%.2f", valor_inteira);
				            printf("\n O valor dos ingressos de meia-entrada ficou: R$%.2f", valor_meia);
				            printf("\n O valor total dos ingressos ficou: R$%.2f", valor_total);
					        printf("\n As formas de pagamento s�o:");
				            printf("\n Cart�o(1)");
				            printf("\n Boleto(2)");
					        printf("\n Pix(3)");
						    printf("\n Qual dessas formas de pagamento voc� quer?(digite o n�mero entre () que fica na frente): ");
				            scanf("%d", &pagamento);
				            if(pagamento==1){
					            printf("\n Voc� escolheu Cart�o!");
					            printf("\n Agora digite o n�mero do cart�o: ");
					            scanf("%d", &cartao);
						        printf(" Agora digite o c�digo de seguran�a: ");
					            scanf("%d", &codigo);
					            printf("\n Pronto, tudo pago e computado no sistema!");
					            printf("\n Tenha um bom filme e at� a pr�xima!");
					        }else{
					            if(pagamento==2){
						            printf("\n Voc� escolheu Boleto!");
						            printf("\n O c�digo de barras do Boleto �:");
					                printf("\n 450460632662665675710730750765835845855865870888");
					                printf("\n Digite seu n�mero de telefone (com DDD e todos os n�meros juntos): ");
					                scanf("%d", &numero);
						            printf("\n Voc� tem 5 dias �teis para efetuar o pagamento no Boleto");
					                printf("\ Se n�o pagar nesse prazo, a compra ser� totalmente cancelada");
					                printf("\n Assim que o pagamento for aprovado, vic� receber� um SMS de aviso");
					                printf("\n Por enquanto � isso, agradecemos a sua compra e visita!");
						        }else{
						            if(pagamento==3){
						                printf("\n Voc� escolheu Pix!");
							            printf("\n A chave do Pix �:");
					                    printf("\n dudu@cinema.com");
					                    printf("\n Digite seu n�mero de telefone (com DDD e todos os n�meros juntos): ");
					                    scanf("%d", &numero);
					                    printf("\n Voc� tem 5 dias �teis para efetuar o pagamento no Boleto");
						                printf("\ Se n�o pagar nesse prazo, a compra ser� totalmente cancelada");
						                printf("\n Assim que o pagamento for aprovado, vic� receber� um SMS de aviso");
						                printf("\n Por enquanto � isso, agradecemos a sua compra e visita!");
							        }else{
								        printf("\n Voc� digitou errado, feche o programa e tente novamente!");
							        }
						        }
					        }
					    }else{
						    printf("\n Voc� digitou errado, feche o programa e tente novamente!");
					    }
				    }
			    }else{
				    printf("\n Voc� digitou errado, feche o programa e tente novamente!");
			    }
		    }else{
			    printf("\n Voc� digitou errado, feche o programa e tente novamente!");
		    }
		}else{
			printf("\n Voc� digitou errado, feche o programa e tente novamente!");
		}
	}
}

void venom2(){
	printf("\n Voc� escolheu Venom: Tempo de Carnificina!"); 
	printf("\n Que m�s voc� quer?(Outubro=10 e Novembro=11): ");
	scanf("%d", &mes);
	if(mes==10){
		printf("\n Voc� escolheu Outubro!");
		printf("\n Que dia voc� quer?(digite de 7 a 31): ");
		scanf("%d", &dia);
		if(dia>=7 && dia<=31){
			printf("\n Voc� escolheu dia %d de Outubro!", dia);
			printf("\n Os hor�rios dispon�veis s�o:");
			printf("\n 13h45(1)   14h20(2)   15h15(3)");
			printf("\n 16h05(4)   17h30(5)   18h00(6)");
			printf("\n 19h15(7)   20h35(8)   21h05(9)");
			printf("\n 22h50(10)");
			printf("\n Qual hor�rio voc� quer(digite os n�meros entre ()): ");
			scanf("%d", &horario);
			if(horario>=1 && horario<=10){
				printf("\n Voc� escolheu o hor�rio %d!", horario);
				printf("\n Voc� quer com ou sem 3D?(Com-3D=1 e Sem-3D=2): ");
				scanf("%d", &d3);
				if(d3==1){
					preco_inteira=36.00;
					preco_meia=18.00;
					printf("\n Voc� escolheu Com 3D!");
					printf("\n O ingresso de entrada-inteira fica R$%.2f", preco_inteira);
					printf("\n O ingresso de meia-entrada fica R$%.2f", preco_meia);
					printf("\n Quantos ingressos de etrada-inteira voc� quer?: ");
					scanf("%d", &quant_inteira);
					printf(" Quantos ingressos de meia-entrada voc� quer?: ");
					scanf("%d", &quant_meia);
					valor_inteira=preco_inteira*quant_inteira;
					valor_meia=preco_meia*quant_meia;
					valor_total=valor_inteira+valor_meia;
					printf("\n O valor dos ingressos de entrada-inteira ficou: R$%.2f", valor_inteira);
					printf("\n O valor dos ingressos de meia-entrada ficou: R$%.2f", valor_meia);
					printf("\n O valor total dos ingressos ficou: R$%.2f", valor_total);
					printf("\n As formas de pagamento s�o:");
					printf("\n Cart�o(1)");
					printf("\n Boleto(2)");
					printf("\n Pix(3)");
					printf("\n Qual dessas formas de pagamento voc� quer?(digite o n�mero entre () que fica na frente): ");
					scanf("%d", &pagamento);
					if(pagamento==1){
						printf("\n Voc� escolheu Cart�o!");
						printf("\n Agora digite o n�mero do cart�o: ");
						scanf("%d", &cartao);
						printf(" Agora digite o c�digo de seguran�a: ");
						scanf("%d", &codigo);
						printf("\n Pronto, tudo pago e computado no sistema!");
						printf("\n Tenha um bom filme e at� a pr�xima!");
					}else{
						if(pagamento==2){
							printf("\n Voc� escolheu Boleto!");
							printf("\n O c�digo de barras do Boleto �:");
						    printf("\n 450460632662665675710730750765835845855865870888");
						    printf("\n Digite seu n�mero de telefone (com DDD e todos os n�meros juntos): ");
						    scanf("%d", &numero);
						    printf("\n Voc� tem 5 dias �teis para efetuar o pagamento no Boleto");
						    printf("\ Se n�o pagar nesse prazo, a compra ser� totalmente cancelada");
						    printf("\n Assim que o pagamento for aprovado, vic� receber� um SMS de aviso");
						    printf("\n Por enquanto � isso, agradecemos a sua compra e visita!");
						}else{
							if(pagamento==3){
							    printf("\n Voc� escolheu Pix!");
								printf("\n A chave do Pix �:");
						        printf("\n dudu@cinema.com");
						        printf("\n Digite seu n�mero de telefone (com DDD e todos os n�meros juntos): ");
						        scanf("%d", &numero);
						        printf("\n Voc� tem 5 dias �teis para efetuar o pagamento no Boleto");
						        printf("\ Se n�o pagar nesse prazo, a compra ser� totalmente cancelada");
						        printf("\n Assim que o pagamento for aprovado, vic� receber� um SMS de aviso");
						        printf("\n Por enquanto � isso, agradecemos a sua compra e visita!");
							}else{
								printf("\n Voc� digitou errado, feche o programa e tente novamente!");
							}
						}
					}
				}else{
					if(d3==2){
						preco_inteira=30.00;
					    preco_meia=15.00;
					    printf("\n Voc� escolheu Com 3D!");
					    printf("\n O ingresso de entrada-inteira fica R$%.2f", preco_inteira);
					    printf("\n O ingresso de meia-entrada fica R$%.2f", preco_meia);
					    printf("\n Quantos ingressos de etrada-inteira voc� quer?: ");
					    scanf("%d", &quant_inteira);
					    printf(" Quantos ingressos de meia-entrada voc� quer?: ");
					    scanf("%d", &quant_meia);
					    valor_inteira=preco_inteira*quant_inteira;
					    valor_meia=preco_meia*quant_meia;
					    valor_total=valor_inteira+valor_meia;
					    printf("\n O valor dos ingressos de entrada-inteira ficou: R$%.2f", valor_inteira);
					    printf("\n O valor dos ingressos de meia-entrada ficou: R$%.2f", valor_meia);
					    printf("\n O valor total dos ingressos ficou: R$%.2f", valor_total);
					    printf("\n As formas de pagamento s�o:");
					    printf("\n Cart�o(1)");
					    printf("\n Boleto(2)");
					    printf("\n Pix(3)");
					    printf("\n Qual dessas formas de pagamento voc� quer?(digite o n�mero entre () que fica na frente): ");
					    scanf("%d", &pagamento);
					    if(pagamento==1){
						    printf("\n Voc� escolheu Cart�o!");
						    printf("\n Agora digite o n�mero do cart�o: ");
						    scanf("%d", &cartao);
						    printf(" Agora digite o c�digo de seguran�a: ");
						    scanf("%d", &codigo);
						    printf("\n Pronto, tudo pago e computado no sistema!");
						    printf("\n Tenha um bom filme e at� a pr�xima!");
					    }else{
						    if(pagamento==2){
							    printf("\n Voc� escolheu Boleto!");
							    printf("\n O c�digo de barras do Boleto �:");
						        printf("\n 450460632662665675710730750765835845855865870888");
						        printf("\n Digite seu n�mero de telefone (com DDD e todos os n�meros juntos): ");
						        scanf("%d", &numero);
						        printf("\n Voc� tem 5 dias �teis para efetuar o pagamento no Boleto");
						        printf("\ Se n�o pagar nesse prazo, a compra ser� totalmente cancelada");
						        printf("\n Assim que o pagamento for aprovado, vic� receber� um SMS de aviso");
						        printf("\n Por enquanto � isso, agradecemos a sua compra e visita!");
						    }else{
							    if(pagamento==3){
							        printf("\n Voc� escolheu Pix!");
								    printf("\n A chave do Pix �:");
						            printf("\n dudu@cinema.com");
						            printf("\n Digite seu n�mero de telefone (com DDD e todos os n�meros juntos): ");
						            scanf("%d", &numero);
						            printf("\n Voc� tem 5 dias �teis para efetuar o pagamento no Boleto");
						            printf("\ Se n�o pagar nesse prazo, a compra ser� totalmente cancelada");
						            printf("\n Assim que o pagamento for aprovado, vic� receber� um SMS de aviso");
						            printf("\n Por enquanto � isso, agradecemos a sua compra e visita!");
							    }else{
								    printf("\n Voc� digitou errado, feche o programa e tente novamente!");
							    }
						    }
					    }
					}else{
						printf("\n Voc� digitou errado, feche o programa e tente novamente!");
					}
				}
			}else{
				printf("\n Voc� digitou errado, feche o programa e tente novamente!");
			}
		}else{
			printf("\n Voc� digitou errado, feche o programa e tente novamente!");
		}
	}else{
		if(mes==11){
			printf("\n Voc� escolheu Novembro!");
			printf("\n Que dia voc� quer?(digite de 1 a 8): ");
		    scanf("%d", &dia);
		    if(dia>=1 && dia<=8){
			    printf("\n Voc� escolheu dia %d de Novembro!", dia);
			    printf("\n Os hor�rios dispon�veis s�o:");
			    printf("\n 13h45(1)   14h20(2)   15h15(3)");
			    printf("\n 16h05(4)   17h30(5)   18h00(6)");
			    printf("\n 19h15(7)   20h35(8)   21h05(9)");
			    printf("\n 22h50(10)");
			    printf("\n Qual hor�rio voc� quer(digite os n�meros entre ()): ");
			    scanf("%d", &horario);
			    if(horario>=1 && horario<=10){
				    printf("\n Voc� escolheu o hor�rio %d!", horario);
				    printf("\n Voc� quer com ou sem 3D?(Com-3D=1 e Sem-3D=2): ");
				    scanf("%d", &d3);
				    if(d3==1){
					    preco_inteira=36.00;
						preco_meia=18.00;
					    printf("\n Voc� escolheu Com 3D!");
					    printf("\n O ingresso de entrada-inteira fica R$%.2f", preco_inteira);
					    printf("\n O ingresso de meia-entrada fica R$%.2f", preco_meia);
					    printf("\n Quantos ingressos de etrada-inteira voc� quer?: ");
					    scanf("%d", &quant_inteira);
					    printf(" Quantos ingressos de meia-entrada voc� quer?: ");
					    scanf("%d", &quant_meia);
					    valor_inteira=preco_inteira*quant_inteira;
					    valor_meia=preco_meia*quant_meia;
					    valor_total=valor_inteira+valor_meia;
					    printf("\n O valor dos ingressos de entrada-inteira ficou: R$%.2f", valor_inteira);
					    printf("\n O valor dos ingressos de meia-entrada ficou: R$%.2f", valor_meia);
					    printf("\n O valor total dos ingressos ficou: R$%.2f", valor_total);
					    printf("\n As formas de pagamento s�o:");
					    printf("\n Cart�o(1)");
					    printf("\n Boleto(2)");
					    printf("\n Pix(3)");
					    printf("\n Qual dessas formas de pagamento voc� quer?(digite o n�mero entre () que fica na frente): ");
					    scanf("%d", &pagamento);
					    if(pagamento==1){
						    printf("\n Voc� escolheu Cart�o!");
						    printf("\n Agora digite o n�mero do cart�o: ");
						    scanf("%d", &cartao);
						    printf(" Agora digite o c�digo de seguran�a: ");
						    scanf("%d", &codigo);
						    printf("\n Pronto, tudo pago e computado no sistema!");
						    printf("\n Tenha um bom filme e at� a pr�xima!");
					    }else{
						    if(pagamento==2){
						        printf("\n Voc� escolheu Boleto!");
							    printf("\n O c�digo de barras do Boleto �:");
						        printf("\n 450460632662665675710730750765835845855865870888");
						        printf("\n Digite seu n�mero de telefone (com DDD e todos os n�meros juntos): ");
						        scanf("%d", &numero);
						        printf("\n Voc� tem 5 dias �teis para efetuar o pagamento no Boleto");
						        printf("\ Se n�o pagar nesse prazo, a compra ser� totalmente cancelada");
						        printf("\n Assim que o pagamento for aprovado, vic� receber� um SMS de aviso");
						        printf("\n Por enquanto � isso, agradecemos a sua compra e visita!");
						    }else{
							    if(pagamento==3){
							        printf("\n Voc� escolheu Pix!");
							        printf("\n A chave do Pix �:");
						            printf("\n dudu@cinema.com");
						            printf("\n Digite seu n�mero de telefone (com DDD e todos os n�meros juntos): ");
						            scanf("%d", &numero);
						            printf("\n Voc� tem 5 dias �teis para efetuar o pagamento no Boleto");
						            printf("\ Se n�o pagar nesse prazo, a compra ser� totalmente cancelada");
						            printf("\n Assim que o pagamento for aprovado, vic� receber� um SMS de aviso");
						            printf("\n Por enquanto � isso, agradecemos a sua compra e visita!");
							    }else{
								    printf("\n Voc� digitou errado, feche o programa e tente novamente!");
							    }
						    }
					    }
				    }else{
					    if(d3==2){
					        preco_inteira=30.00;
				            preco_meia=15.00;
				            printf("\n Voc� escolheu Com 3D!");
				            printf("\n O ingresso de entrada-inteira fica R$%.2f", preco_inteira);
				            printf("\n O ingresso de meia-entrada fica R$%.2f", preco_meia);
					        printf("\n Quantos ingressos de etrada-inteira voc� quer?: ");
				            scanf("%d", &quant_inteira);
				            printf(" Quantos ingressos de meia-entrada voc� quer?: ");
				            scanf("%d", &quant_meia);
			                valor_inteira=preco_inteira*quant_inteira;
				            valor_meia=preco_meia*quant_meia;
				            valor_total=valor_inteira+valor_meia;
				            printf("\n O valor dos ingressos de entrada-inteira ficou: R$%.2f", valor_inteira);
				            printf("\n O valor dos ingressos de meia-entrada ficou: R$%.2f", valor_meia);
				            printf("\n O valor total dos ingressos ficou: R$%.2f", valor_total);
					        printf("\n As formas de pagamento s�o:");
				            printf("\n Cart�o(1)");
				            printf("\n Boleto(2)");
					        printf("\n Pix(3)");
						    printf("\n Qual dessas formas de pagamento voc� quer?(digite o n�mero entre () que fica na frente): ");
				            scanf("%d", &pagamento);
				            if(pagamento==1){
					            printf("\n Voc� escolheu Cart�o!");
					            printf("\n Agora digite o n�mero do cart�o: ");
					            scanf("%d", &cartao);
						        printf(" Agora digite o c�digo de seguran�a: ");
					            scanf("%d", &codigo);
					            printf("\n Pronto, tudo pago e computado no sistema!");
					            printf("\n Tenha um bom filme e at� a pr�xima!");
					        }else{
					            if(pagamento==2){
						            printf("\n Voc� escolheu Boleto!");
						            printf("\n O c�digo de barras do Boleto �:");
					                printf("\n 450460632662665675710730750765835845855865870888");
					                printf("\n Digite seu n�mero de telefone (com DDD e todos os n�meros juntos): ");
					                scanf("%d", &numero);
						            printf("\n Voc� tem 5 dias �teis para efetuar o pagamento no Boleto");
					                printf("\ Se n�o pagar nesse prazo, a compra ser� totalmente cancelada");
					                printf("\n Assim que o pagamento for aprovado, vic� receber� um SMS de aviso");
					                printf("\n Por enquanto � isso, agradecemos a sua compra e visita!");
						        }else{
						            if(pagamento==3){
						                printf("\n Voc� escolheu Pix!");
							            printf("\n A chave do Pix �:");
					                    printf("\n dudu@cinema.com");
					                    printf("\n Digite seu n�mero de telefone (com DDD e todos os n�meros juntos): ");
					                    scanf("%d", &numero);
					                    printf("\n Voc� tem 5 dias �teis para efetuar o pagamento no Boleto");
						                printf("\ Se n�o pagar nesse prazo, a compra ser� totalmente cancelada");
						                printf("\n Assim que o pagamento for aprovado, vic� receber� um SMS de aviso");
						                printf("\n Por enquanto � isso, agradecemos a sua compra e visita!");
							        }else{
								        printf("\n Voc� digitou errado, feche o programa e tente novamente!");
							        }
						        }
					        }
					    }else{
						    printf("\n Voc� digitou errado, feche o programa e tente novamente!");
					    }
				    }
			    }else{
				    printf("\n Voc� digitou errado, feche o programa e tente novamente!");
			    }
		    }else{
			    printf("\n Voc� digitou errado, feche o programa e tente novamente!");
		    }
		}else{
			printf("\n Voc� digitou errado, feche o programa e tente novamente!");
		}
	}
}

void eternos(){
	printf("\n Voc� escolheu Eternos!");
	printf("\n Que m�s voc� quer?(Novembro=11 e Dezembro=12): ");
	scanf("%d", &mes);
	if(mes==11){
		printf("\n Voc� escolheu Novembro!");
		printf("\n Que dia voc� quer?(digite de 4 a 30): ");
		scanf("%d", &dia);
		if(dia>=4 && dia<=30){
			printf("\n Voc� escolheu dia %d de Novembro!", dia);
			printf("\n Os hor�rios dispon�veis s�o:");
			printf("\n 13h45(1)   14h20(2)   15h15(3)");
			printf("\n 16h05(4)   17h30(5)   18h00(6)");
			printf("\n 19h15(7)   20h35(8)   21h05(9)");
			printf("\n 22h50(10)");
			printf("\n Qual hor�rio voc� quer(digite os n�meros entre ()): ");
			scanf("%d", &horario);
			if(horario>=1 && horario<=10){
				printf("\n Voc� escolheu o hor�rio %d!", horario);
				printf("\n Voc� quer com ou sem 3D?(Com-3D=1 e Sem-3D=2): ");
				scanf("%d", &d3);
				if(d3==1){
					preco_inteira=36.00;
					preco_meia=18.00;
					printf("\n Voc� escolheu Com 3D!");
					printf("\n O ingresso de entrada-inteira fica R$%.2f", preco_inteira);
					printf("\n O ingresso de meia-entrada fica R$%.2f", preco_meia);
					printf("\n Quantos ingressos de etrada-inteira voc� quer?: ");
					scanf("%d", &quant_inteira);
					printf(" Quantos ingressos de meia-entrada voc� quer?: ");
					scanf("%d", &quant_meia);
					valor_inteira=preco_inteira*quant_inteira;
					valor_meia=preco_meia*quant_meia;
					valor_total=valor_inteira+valor_meia;
					printf("\n O valor dos ingressos de entrada-inteira ficou: R$%.2f", valor_inteira);
					printf("\n O valor dos ingressos de meia-entrada ficou: R$%.2f", valor_meia);
					printf("\n O valor total dos ingressos ficou: R$%.2f", valor_total);
					printf("\n As formas de pagamento s�o:");
					printf("\n Cart�o(1)");
					printf("\n Boleto(2)");
					printf("\n Pix(3)");
					printf("\n Qual dessas formas de pagamento voc� quer?(digite o n�mero entre () que fica na frente): ");
					scanf("%d", &pagamento);
					if(pagamento==1){
						printf("\n Voc� escolheu Cart�o!");
						printf("\n Agora digite o n�mero do cart�o: ");
						scanf("%d", &cartao);
						printf(" Agora digite o c�digo de seguran�a: ");
						scanf("%d", &codigo);
						printf("\n Pronto, tudo pago e computado no sistema!");
						printf("\n Tenha um bom filme e at� a pr�xima!");
					}else{
						if(pagamento==2){
							printf("\n Voc� escolheu Boleto!");
							printf("\n O c�digo de barras do Boleto �:");
						    printf("\n 450460632662665675710730750765835845855865870888");
						    printf("\n Digite seu n�mero de telefone (com DDD e todos os n�meros juntos): ");
						    scanf("%d", &numero);
						    printf("\n Voc� tem 5 dias �teis para efetuar o pagamento no Boleto");
						    printf("\ Se n�o pagar nesse prazo, a compra ser� totalmente cancelada");
						    printf("\n Assim que o pagamento for aprovado, vic� receber� um SMS de aviso");
						    printf("\n Por enquanto � isso, agradecemos a sua compra e visita!");
						}else{
							if(pagamento==3){
							    printf("\n Voc� escolheu Pix!");
								printf("\n A chave do Pix �:");
						        printf("\n dudu@cinema.com");
						        printf("\n Digite seu n�mero de telefone (com DDD e todos os n�meros juntos): ");
						        scanf("%d", &numero);
						        printf("\n Voc� tem 5 dias �teis para efetuar o pagamento no Boleto");
						        printf("\ Se n�o pagar nesse prazo, a compra ser� totalmente cancelada");
						        printf("\n Assim que o pagamento for aprovado, vic� receber� um SMS de aviso");
						        printf("\n Por enquanto � isso, agradecemos a sua compra e visita!");
							}else{
								printf("\n Voc� digitou errado, feche o programa e tente novamente!");
							}
						}
					}
				}else{
					if(d3==2){
						preco_inteira=30.00;
					    preco_meia=15.00;
					    printf("\n Voc� escolheu Com 3D!");
					    printf("\n O ingresso de entrada-inteira fica R$%.2f", preco_inteira);
					    printf("\n O ingresso de meia-entrada fica R$%.2f", preco_meia);
					    printf("\n Quantos ingressos de etrada-inteira voc� quer?: ");
					    scanf("%d", &quant_inteira);
					    printf(" Quantos ingressos de meia-entrada voc� quer?: ");
					    scanf("%d", &quant_meia);
					    valor_inteira=preco_inteira*quant_inteira;
					    valor_meia=preco_meia*quant_meia;
					    valor_total=valor_inteira+valor_meia;
					    printf("\n O valor dos ingressos de entrada-inteira ficou: R$%.2f", valor_inteira);
					    printf("\n O valor dos ingressos de meia-entrada ficou: R$%.2f", valor_meia);
					    printf("\n O valor total dos ingressos ficou: R$%.2f", valor_total);
					    printf("\n As formas de pagamento s�o:");
					    printf("\n Cart�o(1)");
					    printf("\n Boleto(2)");
					    printf("\n Pix(3)");
					    printf("\n Qual dessas formas de pagamento voc� quer?(digite o n�mero entre () que fica na frente): ");
					    scanf("%d", &pagamento);
					    if(pagamento==1){
						    printf("\n Voc� escolheu Cart�o!");
						    printf("\n Agora digite o n�mero do cart�o: ");
						    scanf("%d", &cartao);
						    printf(" Agora digite o c�digo de seguran�a: ");
						    scanf("%d", &codigo);
						    printf("\n Pronto, tudo pago e computado no sistema!");
						    printf("\n Tenha um bom filme e at� a pr�xima!");
					    }else{
						    if(pagamento==2){
							    printf("\n Voc� escolheu Boleto!");
							    printf("\n O c�digo de barras do Boleto �:");
						        printf("\n 450460632662665675710730750765835845855865870888");
						        printf("\n Digite seu n�mero de telefone (com DDD e todos os n�meros juntos): ");
						        scanf("%d", &numero);
						        printf("\n Voc� tem 5 dias �teis para efetuar o pagamento no Boleto");
						        printf("\ Se n�o pagar nesse prazo, a compra ser� totalmente cancelada");
						        printf("\n Assim que o pagamento for aprovado, vic� receber� um SMS de aviso");
						        printf("\n Por enquanto � isso, agradecemos a sua compra e visita!");
						    }else{
							    if(pagamento==3){
							        printf("\n Voc� escolheu Pix!");
								    printf("\n A chave do Pix �:");
						            printf("\n dudu@cinema.com");
						            printf("\n Digite seu n�mero de telefone (com DDD e todos os n�meros juntos): ");
						            scanf("%d", &numero);
						            printf("\n Voc� tem 5 dias �teis para efetuar o pagamento no Boleto");
						            printf("\ Se n�o pagar nesse prazo, a compra ser� totalmente cancelada");
						            printf("\n Assim que o pagamento for aprovado, vic� receber� um SMS de aviso");
						            printf("\n Por enquanto � isso, agradecemos a sua compra e visita!");
							    }else{
								    printf("\n Voc� digitou errado, feche o programa e tente novamente!");
							    }
						    }
					    }
					}else{
						printf("\n Voc� digitou errado, feche o programa e tente novamente!");
					}
				}
			}else{
				printf("\n Voc� digitou errado, feche o programa e tente novamente!");
			}
		}else{
			printf("\n Voc� digitou errado, feche o programa e tente novamente!");
		}
	}else{
		if(mes==12){
			printf("\n Voc� escolheu Dezembro!");
		    printf("\n Que dia voc� quer?(digite de 1 a 5): ");
		    scanf("%d", &dia);
		    if(dia>=1 && dia<=5){
			    printf("\n Voc� escolheu dia %d de Dezembro!", dia);
			    printf("\n Os hor�rios dispon�veis s�o:");
			    printf("\n 13h45(1)   14h20(2)   15h15(3)");
			    printf("\n 16h05(4)   17h30(5)   18h00(6)");
			    printf("\n 19h15(7)   20h35(8)   21h05(9)");
		    	printf("\n 22h50(10)");
			    printf("\n Qual hor�rio voc� quer(digite os n�meros entre ()): ");
			    scanf("%d", &horario);
			    if(horario>=1 && horario<=10){
				    printf("\n Voc� escolheu o hor�rio %d!", horario);
				    printf("\n Voc� quer com ou sem 3D?(Com-3D=1 e Sem-3D=2): ");
				    scanf("%d", &d3);
				    if(d3==1){
					    preco_inteira=36.00;
						preco_meia=18.00;
					    printf("\n Voc� escolheu Com 3D!");
					    printf("\n O ingresso de entrada-inteira fica R$%.2f", preco_inteira);
					    printf("\n O ingresso de meia-entrada fica R$%.2f", preco_meia);
					    printf("\n Quantos ingressos de etrada-inteira voc� quer?: ");
					    scanf("%d", &quant_inteira);
					    printf(" Quantos ingressos de meia-entrada voc� quer?: ");
					    scanf("%d", &quant_meia);
					    valor_inteira=preco_inteira*quant_inteira;
					    valor_meia=preco_meia*quant_meia;
					    valor_total=valor_inteira+valor_meia;
					    printf("\n O valor dos ingressos de entrada-inteira ficou: R$%.2f", valor_inteira);
					    printf("\n O valor dos ingressos de meia-entrada ficou: R$%.2f", valor_meia);
					    printf("\n O valor total dos ingressos ficou: R$%.2f", valor_total);
					    printf("\n As formas de pagamento s�o:");
					    printf("\n Cart�o(1)");
					    printf("\n Boleto(2)");
					    printf("\n Pix(3)");
					    printf("\n Qual dessas formas de pagamento voc� quer?(digite o n�mero entre () que fica na frente): ");
					    scanf("%d", &pagamento);
					    if(pagamento==1){
						    printf("\n Voc� escolheu Cart�o!");
						    printf("\n Agora digite o n�mero do cart�o: ");
						    scanf("%d", &cartao);
						    printf(" Agora digite o c�digo de seguran�a: ");
						    scanf("%d", &codigo);
						    printf("\n Pronto, tudo pago e computado no sistema!");
						    printf("\n Tenha um bom filme e at� a pr�xima!");
					    }else{
						    if(pagamento==2){
						        printf("\n Voc� escolheu Boleto!");
							    printf("\n O c�digo de barras do Boleto �:");
						        printf("\n 450460632662665675710730750765835845855865870888");
						        printf("\n Digite seu n�mero de telefone (com DDD e todos os n�meros juntos): ");
						        scanf("%d", &numero);
						        printf("\n Voc� tem 5 dias �teis para efetuar o pagamento no Boleto");
						        printf("\ Se n�o pagar nesse prazo, a compra ser� totalmente cancelada");
						        printf("\n Assim que o pagamento for aprovado, vic� receber� um SMS de aviso");
						        printf("\n Por enquanto � isso, agradecemos a sua compra e visita!");
						    }else{
							    if(pagamento==3){
							        printf("\n Voc� escolheu Pix!");
							        printf("\n A chave do Pix �:");
						            printf("\n dudu@cinema.com");
						            printf("\n Digite seu n�mero de telefone (com DDD e todos os n�meros juntos): ");
						            scanf("%d", &numero);
						            printf("\n Voc� tem 5 dias �teis para efetuar o pagamento no Boleto");
						            printf("\ Se n�o pagar nesse prazo, a compra ser� totalmente cancelada");
						            printf("\n Assim que o pagamento for aprovado, vic� receber� um SMS de aviso");
						            printf("\n Por enquanto � isso, agradecemos a sua compra e visita!");
							    }else{
								    printf("\n Voc� digitou errado, feche o programa e tente novamente!");
							    }
						    }
					    }
				    }else{
					    if(d3==2){
					        preco_inteira=30.00;
				            preco_meia=15.00;
				            printf("\n Voc� escolheu Com 3D!");
				            printf("\n O ingresso de entrada-inteira fica R$%.2f", preco_inteira);
				            printf("\n O ingresso de meia-entrada fica R$%.2f", preco_meia);
					        printf("\n Quantos ingressos de etrada-inteira voc� quer?: ");
				            scanf("%d", &quant_inteira);
				            printf(" Quantos ingressos de meia-entrada voc� quer?: ");
				            scanf("%d", &quant_meia);
			                valor_inteira=preco_inteira*quant_inteira;
				            valor_meia=preco_meia*quant_meia;
				            valor_total=valor_inteira+valor_meia;
				            printf("\n O valor dos ingressos de entrada-inteira ficou: R$%.2f", valor_inteira);
				            printf("\n O valor dos ingressos de meia-entrada ficou: R$%.2f", valor_meia);
				            printf("\n O valor total dos ingressos ficou: R$%.2f", valor_total);
					        printf("\n As formas de pagamento s�o:");
				            printf("\n Cart�o(1)");
				            printf("\n Boleto(2)");
					        printf("\n Pix(3)");
						    printf("\n Qual dessas formas de pagamento voc� quer?(digite o n�mero entre () que fica na frente): ");
				            scanf("%d", &pagamento);
				            if(pagamento==1){
					            printf("\n Voc� escolheu Cart�o!");
					            printf("\n Agora digite o n�mero do cart�o: ");
					            scanf("%d", &cartao);
						        printf(" Agora digite o c�digo de seguran�a: ");
					            scanf("%d", &codigo);
					            printf("\n Pronto, tudo pago e computado no sistema!");
					            printf("\n Tenha um bom filme e at� a pr�xima!");
					        }else{
					            if(pagamento==2){
						            printf("\n Voc� escolheu Boleto!");
						            printf("\n O c�digo de barras do Boleto �:");
					                printf("\n 450460632662665675710730750765835845855865870888");
					                printf("\n Digite seu n�mero de telefone (com DDD e todos os n�meros juntos): ");
					                scanf("%d", &numero);
						            printf("\n Voc� tem 5 dias �teis para efetuar o pagamento no Boleto");
					                printf("\ Se n�o pagar nesse prazo, a compra ser� totalmente cancelada");
					                printf("\n Assim que o pagamento for aprovado, vic� receber� um SMS de aviso");
					                printf("\n Por enquanto � isso, agradecemos a sua compra e visita!");
						        }else{
						            if(pagamento==3){
						                printf("\n Voc� escolheu Pix!");
							            printf("\n A chave do Pix �:");
					                    printf("\n dudu@cinema.com");
					                    printf("\n Digite seu n�mero de telefone (com DDD e todos os n�meros juntos): ");
					                    scanf("%d", &numero);
					                    printf("\n Voc� tem 5 dias �teis para efetuar o pagamento no Boleto");
						                printf("\ Se n�o pagar nesse prazo, a compra ser� totalmente cancelada");
						                printf("\n Assim que o pagamento for aprovado, vic� receber� um SMS de aviso");
						                printf("\n Por enquanto � isso, agradecemos a sua compra e visita!");
							        }else{
								        printf("\n Voc� digitou errado, feche o programa e tente novamente!");
							        }
						        }
					        }
					    }else{
						    printf("\n Voc� digitou errado, feche o programa e tente novamente!");
					    }
				    }
			    }else{
				    printf("\n Voc� digitou errado, feche o programa e tente novamente!");
			    }
		    }else{
			    printf("\n Voc� digitou errado, feche o programa e tente novamente!");
		    }
		}else{
			printf("\n Voc� digitou errado, feche o programa e tente novamente!");
		}
	}
}

int main(){
	setlocale(LC_ALL, "portuguese");
	printf("\n\n Bilheteria Cinema Dudu's");
	printf("\n\n Seja Bem-Vindo(a)! ");
	printf("\n\n Gostaria de comprar ingressos?(sim=1 e n�o=2): ");
	scanf("%d", &pergunta);
	switch(pergunta){
		case 1:{
			printf("\n Os filmes dispon�veis s�o: ");
			printf("\n Homem-Aranha: Sem Volta Para Casa (1),");
			printf("\n 007: Sem Tempo Para Morrer (2),");
			printf("\n Venom: Tempo de Carnificina (3),");
			printf("\n Eternos (4),");
			printf("\n\n Qual desses filmes voc� quer?(digite o n�mero entre () na frente do filme): ");
			scanf("%d", &filme);
			switch(filme){
				case 1:{
					homem_aranha();break;
				}
				case 2:{
					sem_tempo_para_morrer();break;
				}
				case 3:{
					venom2();break;
				}
				case 4:{
					eternos();break;
				}
				default:{
					printf("\n Voc� digitou errado, feche o programa e tente novamente!");break;
				}
			}
			break;
		}
		case 2:{
			printf("\n Tudo bem, agradecemos a sua visita!");break;
		}
		default:{
			printf("\n Voc� digitou errado, feche o programa e tente novamente!");break;
		}
	}
	return 0;
}
