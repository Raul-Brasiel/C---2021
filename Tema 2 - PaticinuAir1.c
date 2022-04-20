#include<stdio.h>
#include<stdlib.h>

int main()
{
	int destino, finalidade, regiao, continente, preferencia, cidade;

	printf("Qual sua preferencia de destino:\n1- Nacional\n2- Internacional\n");
	scanf("%d",&destino);
	//Para quando o usuario decidir se seu destino será nacional ou internacional.
	switch (destino)
	{
		case 1: 
			printf("Destino escolhido: nacional\n");
			printf("\nQual a finalidade de sua viagem:\n1- Negocios\n2- Lazer\n");
			scanf("%d",&finalidade);
			//Para quando o usu�rio decidir se sua finalidade será negócios ou lazer. O destino será nacional
			switch (finalidade)
			{
				case 1: 
					printf("Finalidade de viagem escolhida: Negocios\n\n");
					printf("Escolha sua regiao de preferencia: \n1- Norte\n2- Nordeste\n3- Centro-oeste\n4- Sudeste\n5- Sul\n");
					scanf("%d",&regiao);
					//O usuario escolheu a finalidade neg�cios. Logo, de acordo com a regi�o escolhida mostrar� alguns destinos para o usu�rio.
					switch (regiao)
					{
						case 1: 
							printf("Regiao escolhida: Norte");
							printf("\n\nAqui esta alguns destinos recomendados. Escolha 1 para mais informacoes:\n1= Capanema - Para\n2= Manaus - Amazonas\n3= Porto Velho - Rondonia\n4= Rio Branco - Acre\n5= Paraiso do Tocantins - Tocantins\n");
							scanf("%d",&cidade);
							//O usuario escolheu a regi�o norte. Logo, escolher� seu destino e mostrar� as informa��es do mesmo (Cada case � uma cidade)
							switch (cidade)
							{
								case 1:
									printf("\nAqui esta algumas informacoes da cidade escolhida.");
									printf("\nCidade: Capanema");
									printf("\nPrincipais atracoes: Ilha do Sol, Museu Magarancho.");
									printf("\nPrincipais acomodacoes: \nHotel Tito's - Diaria a partir de R$260,00 \nGoldoni Hotel - Diaria a partir de R$180,00");
									printf("\nValor da passagem: R$110,00");
									printf("\nPopulacao: Media de 67 150 habitantes.");
								break;
								case 2:
									printf("\nAqui esta algumas informacoes da cidade escolhida.");
									printf("\nCidade: Manaus");
									printf("\nPrincipais atracoes: Teatro Amazonas, Encontro das Aguas, Museu da Amazonia (MUSA) Praia da Ponta Negra, Manauara Shopping.");
									printf("\nPrincipais acomodacoes: \nHoliday Inn Manaus, an IHG Hotel - Diaria a partir de R$185,00 \nComfort Hotel Manaus - Diaria a partir de R$175,00 \nHotel Casa Dos Frades - Diaria a partir de R$151,00");
									printf("\nValor da passagem: R$1.430,00");
									printf("\nPopulacao: Media de 2,22 milh�es de habitantes.");
								break;
								case 3:
									printf("\nAqui esta algumas informacoes da cidade escolhida.");
									printf("\nCidade: Porto Velho");
									printf("\nPrincipais atracoes: Complexo da Estrada de Ferro Madeira-Mamore.");
									printf("\nPrincipais acomodacoes:\nHotel Nativo - Diaria a partir de R$140,00 \nFlamboyant Suite Hotel - Diaria a partir de R$160,00 \nSlaviero Essential Porto Velho - Diaria a partir de R$227,00");
									printf("\nValor da passagem: R$2.649,00");
									printf("\nPopulacao: Media de 539 354 habitantes.");
								break;
								case 4:
									printf("\nAqui esta algumas informacoes da cidade escolhida.");
									printf("\nCidade: Rio Branco");
									printf("\nPrincipais atracoes: Praca Placido de Castro de Rio Branco.");
									printf("\nPrincipais acomodacoes: \nIbis Rio Branco - Diaria a partir de R$167,00 \nPousada bairro bosque - Diaria a partir de R$68,00");
									printf("\nValor da passagem: R$3.728,00");
									printf("\nPopulacao: Media de 407 319 habitantes.");
								break;
								case 5:
									printf("\nAqui esta algumas informacoes da cidade escolhida.");
									printf("\nCidade: Paraiso do Tocantins");
									printf("\nPrincipais atracoes: Museu Municipal Joao Batista de Brito e Lagoa Do Japones.");
									printf("\nPrincipais acomodacoes: \nTangara Hotel - Diaria a partir de R$138,00 \nEntre Rios Hotel - Diaria a partir de R$140,00");
									printf("\nValor da passagem: R$1.360,00");
									printf("\nPopulacao: Media de 50 602 habitantes.");
								break;
								default:
									printf("Cidade invalida.");
							}
						break;
						case 2: 
							printf("Regiao escolhida: Nordeste");
							printf("\n\nAqui esta alguns destinos recomendados. Escolha 1 para mais informacoes:\n1= Cairu - Bahia\n2= Pipa - Rio Grande do Norte\n3= Salvador - Bahia\n4= Barreirinhas - Maranhao\n5= Natal - Rio Grande do Norte\n");
							scanf("%d",&cidade);
							//O usuario escolheu a regi�o nordeste. Logo, escolher� seu destino e mostrar� as informa��es do mesmo. (Cada case � uma cidade)
							switch (cidade)
							{
								case 1:
									printf("\nAqui esta algumas informacoes da cidade escolhida.");
									printf("\nCidade: Cairu");
									printf("\nPrincipais atracoes: Piramides de Gize e Piramide de Saqqara.");
									printf("\nPrincipais acomodacoes: \nRecanto das amendoeiras - Diaria a partir de R$153,00 \nApartamento para reveillon - Diaria a partir de R$630,00");
									printf("\nValor da passagem: R$1.076,00");
									printf("\nPopulacao: Media de 18 176 habitantes.");
								break;
								case 2:
									printf("\nAqui esta algumas informacoes da cidade escolhida.");
									printf("\nCidade: Pipa");
									printf("\nPrincipais atracoes: Praia do Curral, Praia do Madeiro e Praia das Minas.");
									printf("\nPrincipais acomodacoes: \nCasa na pipa - Diaria a partir de R$370,00 \nLagoa Eco Village - Diaria a partir de R$205,00");
									printf("\nValor da passagem: R$471,00");
									printf("\nPopulacao: Media de 13 609 habitantes.");
								break;
								case 3:
									printf("\nAqui esta algumas informacoes da cidade escolhida.");
									printf("\nCidade: Salvador");
									printf("\nPrincipais atracoes: Pelourinho, Farol da Barra, Elevador Lacerda, Mercado Modelo e Lagoa de Abaete.");
									printf("\nPrincipais acomodacoes: \nRede Andrade Express - Diaria a partir de R$122,00 \nMercure Salvador Pituba - Diaria a partir de R$221,00 \nVilla Domenico - Diaria a partir de R$208,00");
									printf("\nValor da passagem: R$1.076,00");
									printf("\nPopulacao: Media de 2,9 milhoes habitantes.");
								break;
								case 4:
									printf("\nAqui esta algumas informacoes da cidade escolhida.");
									printf("\nCidade: Barreirinhas");
									printf("\nPrincipais atracoes: Rio Grande e a Cachoeira do Redondo.");
									printf("\nPrincipais acomodacoes: Hotel Rio Preguicas - Diaria a partir de R$245,00 \nPOUSADA TEIXEIRA - Diaria a partir de R$200,00 \nPousada D'Areia - Diaria a partir de R$194,00");
									printf("\nValor da passagem: R$623,00");
									printf("\nPopulacao: Media de 156 975 habitantes.");
								break;
								case 5:
									printf("\nAqui esta algumas informacoes da cidade escolhida.");
									printf("\nCidade: Natal");
									printf("\nPrincipais atracoes: Praia de Ponta Negra, Parrachos de Maracajau e Manoa Park.");
									printf("\nPrincipais acomodacoes: \nToulouse Motel (Adult Only) - Diaria a partir de R$150,00 \nMarsallis Praia Mar - Diaria a partir de R$130,00 \nApart Hotel Litoral Sul - Diaria a partir de R$144,00");
									printf("\nValor da passagem: R$385,00");
									printf("\nPopulacao: Media de 890 mil habitantes.");
								break;
								default:
									printf("Cidade invalida.");
							}
						break;
						case 3: 
							printf("Regiao escolhida: Centro-oeste");
							printf("\n\nAqui esta alguns destinos recomendados. Escolha 1 para mais informacoes:\n1= Brasilia - Distrito Federal\n2= Campo Grande - Mato Grosso do Sul\n3= Goiania - Goias\n4= Cuiaba - Mato Grosso\n5= Corumba - Mato Grosso do Sul\n");
							scanf("%d",&cidade);
							//O usuario escolheu a regi�o Centro-oeste. Logo, escolher� seu destino e mostrar� as informa��es do mesmo. (Cada case � uma cidade)
							switch (cidade)
							{
								case 1:
									printf("\nAqui esta algumas informacoes da cidade escolhida.");
									printf("\nCidade: Brasilia");
									printf("\nPrincipais atracoes: Congresso Nacional, Palacio do Planalto, Supremo Tribunal Federal, Palacio Itamaraty, Palacio Itamaraty, Palacio da Alvorada, Palacio da Justi�a, Biblioteca Nacional, Ponte J.K.");
									printf("\nPrincipais acomodacoes: \nRoyal Tulip Brasilia Alvorada - Diaria a partir de R$554,00 \nB Hotel Brasilia - Diaria a partir de R$534,00 \nHostelplan - Diaria a partir de R$114,00");
									printf("\nValor da passagem: R$774,00");
									printf("\nPopulacao: Media de 3,05 milhoes de habitantes.");
								break;
								case 2:
									printf("\nAqui esta algumas informacoes da cidade escolhida.");
									printf("\nCidade: Campo Grande");
									printf("\nPrincipais atracoes: Parque das Nacoes Indigenas, Museu de Cultura Dom Bosco, Parque dos Poderes, Santuario Nossa Senhora do Perpetuo Socorro, Morada dos Bais.");
									printf("\nPrincipais acomodacoes: \nBrumado Hotel - Diaria a partir de R$171,00 \nHotel Mohave - Diaria a partir de R$224,00 \nHotel Galli - Diaria a partir de R$114,00");
									printf("\nValor da passagem: R$663,00");
									printf("\nPopulacao: Media de 906 092 habitantes.");
								break;
								case 3:
									printf("\nAqui esta algumas informacoes da cidade escolhida.");
									printf("\nCidade: Goiania");
									printf("\nPrincipais atracoes: Parque Flamboyant, Parque Vaca Brava, Feira da Lua, Bosque dos Buritis, Parque Areiao.");
									printf("\nPrincipais acomodacoes: \nHotel Santos Dumont - Diaria a partir de R$235,00 \nPlaza Inn Breeze Aeroporto - Diaria a partir de R$210,00 \nGolden Lis Hotel Boutique - Diaria a partir de R$460,00");
									printf("\nValor da passagem:R$670");
									printf("\nPopulacao: Media de 1,536 milhoes de habitantes.");
								break;
								case 4:
									printf("\nAqui esta algumas informacoes da cidade escolhida.");
									printf("\nCidade: Cuiaba");
									printf("\nPrincipais atracoes: Parque Mae Bonifacia, Parque das Aguas Seo Fiote, Parque Tia Nair, Cachoeirinha e Cachoeira dos Namorados, Sesc Casa do Artesao.");
									printf("\nPrincipais acomodacoes: \nHotel D'Luca - Diaria a partir de R$233,00 \nHotel Deville Prime Cuiaba - Diaria a partir de R$321,00 \nHotel Amadeu's - Diaria a partir de R$180,00");
									printf("\nValor da passagem: R$882,00");
									printf("\nPopulacao: Media de 1,041 milhoes de habitantes");
								break;
								case 5:
									printf("\nAqui esta algumas informacoes da cidade escolhida.");
									printf("\nCidade: Corumba");
									printf("\nPrincipais atracoes: Estrada Parque do Pantanal, Cristo Rei do Pantanal, Museu de Historia do Pantanal, Forte Coimbra, Casario do Porto.");
									printf("\nPrincipais acomodacoes: \nHotel Gold Fish - Diaria a partir de R$280,00 \nNacional Palace Hotel - Diaria a partir de R$357,00 \nSanta Monica Palace Hotel - Diaria a partir de R$360,00");
									printf("\nValor da passagem: R$350");
									printf("\nPopulacao: Media de 112 058 habitantes");
								break;
								default:
									printf("Cidade invalida.");
							}
						break;
						case 4: 
							printf("Regiao escolhida: Sudeste");
							printf("\n\nAqui esta alguns destinos recomendados. Escolha 1 para mais informacoes:\n1= Vitoria - Espirito Santo\n2= Sao Caetano do Sul - Sao Paulo\n3= Sao Paulo - Sao Paulo\n4= Barueri - Sao Paulo\n5= Niteroi - Rio de Janeiro\n");
							scanf("%d",&cidade);
							//O usuario escolheu a regi�o sudeste. Logo, escolher� seu destino e mostrar� as informa��es do mesmo. (Cada case � uma cidade)
							switch (cidade)
							{
								case 1:
									printf("\nAqui esta algumas informacoes da cidade escolhida.");
									printf("\nCidade: Vitoria");
									printf("\nPrincipais atracoes: Convento da Penha, Morro do Moreno, Praia de Camburi, Museu Vale, Parque Pedra da Cebola.");
									printf("\nPrincipais acomodacoes: \nSheraton Vitoria Hotel - Diaria a partir de R$330,00 \nComfort Suites Vitoria - Diaria a partir de R$218,00 \nGolden Tulip Porto Vitoria - Diaria a partir de R$473,00");
									printf("\nValor da passagem: R$400,00");
									printf("\nPopulacao: Media de 365 855 habitantes");
								break;
								case 2:
									printf("\nAqui esta algumas informacoes da cidade escolhida.");
									printf("\nCidade: Sao Caetano do Sul");
									printf("\nPrincipais atracoes: Parque Municipal Eng Salvador Arena, Espaco Verde Chico Mendes, Praca dos Meninos, Bosque do Povo, Museu Historico Municipal, Parque Antonio Pezzolo Chacara Pignatari.");
									printf("\nPrincipais acomodacoes: \nMercure Sao Caetano do Sul - Diaria a partir de R$195,00 \nQuality Hotel Sao Caetano - Diaria a partir de R$239,00 \nComfort Hotel Sao Caetano - Diaria a partir de R$209,00");
									printf("\nValor da passagem: R$252,00");
									printf("\nPopulacao: Media de 161 957 habitantes");
								break;
								case 3:
									printf("\nAqui esta algumas informacoes da cidade escolhida.");
									printf("\nCidade: Sao Paulo");
									printf("\nPrincipais atracoes: Museu de Arte de Sao Paulo Assis, Parque Ibirapuera, Avenida Paulista, Pinacoteca de Sao Paulo, Mercado Municipal de Sao Paulo, Catedral Metropolitana de Sao Paulo.");
									printf("\nPrincipais acomodacoes: \nIbis Sao Paulo Paulista - Diaria a partir de R$219,00 \nMelia Paulista - Diaria a partir de R$323,00 \nMaksoud Plaza Distributed by Accorhotels - Diaria a partir de R$460,00");
									printf("\nValor da passagem: R$319,00");
									printf("\nPopulacao: Media de 12,33 milhoes de habitantes");
								break;
								case 4:
									printf("\nAqui esta algumas informacoes da cidade escolhida.");
									printf("\nCidade: Barueri");
									printf("\nPrincipais atracoes: Parque Municipal Dom Jose, Museu Municipal de Barueri, Museu da Biblia, Praca das Bandeiras, Parque Ecologico - Ilha do Tambore, Parque Estadual Gabriel Chucre.");
									printf("\nPrincipais acomodacoes: \nBlue Tree Premium Alphaville - Diaria a partir de R$269,00 \nAdagio Alphaville - Diaria a partir de R$270,00 \nQuality Suites Alphaville - Diaria a partir de R$249,00");
									printf("\nValor da passagem: R$319,00");
									printf("\nPopulacao: Media de 276 982 habitantes");
								break;
								case 5:
									printf("\nAqui esta algumas informacoes da cidade escolhida.");
									printf("\nCidade: Niteroi");
									printf("\nPrincipais atracoes: Museu de Arte Conteporanea de Niteroi, Praia Vermelha, Ponte Rio-Niteroi, Praia de Icarai, Praia de Botafogo, Praia de Itacoatiara.");
									printf("\nPrincipais acomodacoes: \nH Niteroi Hotel - Diaria a partir de R$331,00 \nQuality Hotel Niteroi - Diaria a partir de R$300,00");
									printf("\nValor da passagem: R$461,00");
									printf("\nPopulacao: Media de 515 317 habitantes");
								break;
								default:
									printf("Cidade invalida.");
							}
						break;
						case 5:
							printf("Regiao escolhida: Sul");
							printf("\n\nAqui esta alguns destinos recomendados. Escolha 1 para mais informacoes:\n1= Porto Alegre - Rio Grande do Sul\n2= Curitiba - Parana\n3= Joinville - Santa Catarina\n4= Florianopolis - Santa Catarina\n5= Londrina - Parana\n");
							scanf("%d",&cidade);
							//O usuario escolheu a regi�o sul. Logo, escolher� seu destino e mostrar� as informa��es do mesmo. (Cada case � uma cidade)
							switch (cidade)
							{
								case 1:
									printf("\nAqui esta algumas informacoes da cidade escolhida.");
									printf("\nCidade: Porto Alegre");
									printf("\nPrincipais atracoes: Lago Guaiba, Casa de Cultura Mario Quintana, Parque Farroupilha, Mercado Publico de Porto Alegre, Museu de Ciencias e Tecnologia da PUCRS, Parque Moinhos de Vento, Jardim Botanico.");
									printf("\nPrincipais acomodacoes: \nHotel Deville Prime Porto Alegre - Diaria a partir de R$288,00 \nHotel Laghetto Stilo Higienopolis - Diaria a partir de R$248,00 \nIntercity Porto Alegre Cidade Baixa - Diaria a partir de R$185,00");
									printf("\nValor da passagem: R$775,00");
									printf("\nPopulacao: Media de 4,4 milhoes de habitantes");
								break;
								case 2:
									printf("\nAqui esta algumas informacoes da cidade escolhida.");
									printf("\nCidade: Curitiba");
									printf("\nPrincipais atracoes: Centro Historico de Curitiba, Jardim Botanico de Curitiba, Opera de Arame, Parque Barigu, Memorial Ucraniano.");
									printf("\nPrincipais acomodacoes: \nGaribaldi Hostel e Cafe - Diaria a partir de R$110,00 \nNovotel Curitiba Batel - Diaria a partir de R$263,00 \nNH Curitiba The Five - Diaria a partir de R$318,00");
									printf("\nValor da passagem: R$405,00");
									printf("\nPopulacao: Media de 1,948 milhoes de habitantes");
								break;
								case 3:
									printf("\nAqui esta algumas informacoes da cidade escolhida.");
									printf("\nCidade: Joinville");
									printf("\nPrincipais atracoes: Mirante da Morro da Boa Vista, Estrada Bonita, Agricola da Ilha, Parque Zoobotanico, Gutbrau.");
									printf("\nPrincipais acomodacoes: \nPousada Emilly - Diaria a partir de R$280,00 \nHotel Germania - Diaria a partir de R$149,00 \nHotel Tannenhof - Diaria a partir de R$147,00");
									printf("\nValor da passagem: R$622,00");
									printf("\nPopulacao: Media de 597 658 habitantes");
								break;
								case 4:
									printf("\nAqui esta algumas informacoes da cidade escolhida.");
									printf("\nCidade:Florianopolis- Santa Catarina");
									printf("\nPrincipais atracoes:Ponte Hercilio Luz.\nMercado Central.\nPra�a XV e Catedral Metropolitana.\nPraia da Joaquina,\nCampeche.");
									printf("\nPrincipais acomodacoes: \nFaial Prime Suites - Diaria a partir de R$219,00 \nPorto da Ilha Hotel - Diaria a partir de R$192,00 \nWK Design Hotel Florianopolis - Diaria a partir de R$491,00");
									printf("\nValor da passagem: R$671,00");
									printf("\nPopulacao: Media de 508 826 habitantes");
								break;
								case 5:
									printf("\nAqui esta algumas informacoes da cidade escolhida.");
									printf("\nCidade: Londrina");
									printf("\nPrincipais atracoes: Lago Igapo, Santuario de Gra�as Schoenstatt, Jardim Botanico de Londrina, Teatro Marista, Museu Historico de Londrina Padre Carlos Weiss.");
									printf("\nPrincipais acomodacoes: \nGolden Blue Hotel - Diaria a partir de R$222,00 \nBristol Londrina Residence Hotel - Diaria a partir de R$148,00 \nBlue Tree Premium Londrina - Diaria a partir de R$239,00");
									printf("\nValor da passagem: R$493,00");
									printf("\nPopulacao: Media de 575 377 habitantes");
								break;
								default:
									printf("Cidade invalida.");
							}
							break;
						default:
							printf("Regiao invalida.");
					}
				break;
				case 2: 
					printf("Finalidade de destino escolhido: Lazer\n");
					printf("\nEscolha sua regiao de preferencia: \n1- Norte\n2- Nordeste\n3- Centro-oeste\n4- Sudeste\n5- Sul\n");
					scanf("%d",&regiao);
					//O usuario escolheu a finalidade lazer. Logo, de acordo com a regi�o escolhida ir� escolher a preferencia turistica. 
					switch (regiao)
					{
						case 1: 
							printf("Regiao escolhida: Norte\n");
							printf("\nQual sua preferencia turistica:\n1- Praia\n2- Montanha\n3- Neve\n4- Gastronomia\n");
							scanf("%d",&preferencia);
							//O usuario escolheu a regi�o norte. Logo, escolher� sua preferencia turistica.
							switch (preferencia)
							{
								case 1: 
									printf("Preferencia turistica escolhida: Praia");
									printf("\n\nAqui esta alguns destinos recomendados. Escolha 1 para mais informacoes: \n1= Belem - Para\n2= Salvaterra - Para\n");
									scanf("%d",&cidade);
									//O usuario escolheu praia. Logo mostrar� as informa��es do destino escolhido. (Cada case � uma cidade)
									switch (cidade)
									{
										case 1:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Belem");
											printf("\nPrincipais atracoes: Praia Maruda, Estacao das Docas, Mangal das Garcas, Museu Paraense Emilio Goeldi, Teatro da Paz, Basilica de Nossa Senhora de Nazare.");
											printf("\nPrincipais acomodacoes: \nRadisson Hotel Belem - Diaria a partir de R$270,00 \nStada Hangar - Diaria a partir de R$182,00 \nHotel Grao Para - Diaria a partir de R$109,00");
											printf("\nValor da passagem: R$1.599,00");
											printf("\nPopulacao: Media de 2,08 milhoes de habitantes");
										break;
										case 2:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Salvaterra");
											printf("\nPrincipais atracoes: Centro Historico, Museu de Arte Moderna, Porto da Barra e Farol da Barra, Praia do Buracao, Praia do Flamengo, Praia do Forte.");
											printf("\nPrincipais acomodacoes: \nPousada O Canto do Frances - Diaria a partir de R$216,00 \nPousada Aruana - Diaria a partir de R$200,00 \nHotel Marajo - Diaria a partir de R$199,00");
											printf("\nValor da passagem: R$1.648,00 ");
											printf("\nPopulacao: Media de 24 075 habitantes");
										break;
										default:
											printf("Cidade invalida.");
									}
								break;
								case 2: 
									printf("Preferencia turistica escolhida: Montanha");
									printf("\n\nAqui esta alguns destinos recomendados. Escolha 1 para mais informacoes:\n1= Uiramuta - Roraima\n2= Rio Negro - Amazonas\n3= Serra do Navio - Amapa\n4= Barcelos - Amazonas\n5= Santarem - Para\n");
									scanf("%d",&cidade);
									//O usuario escolheu montanha. Logo, mostrar� as informa��es do destino escolhido. (Cada case � uma cidade)
									switch (cidade)
									{
										case 1:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Uiramuta");
											printf("\nPrincipais atracoes: Monte Roraima, Serra de Pacaraima, La Ventana, Maverick, Abismo da Guiana e Vale dos Cristais");
											printf("\nPrincipais acomodacoes: \nUiramutam Palace Hotel - Diaria a partir de R$245,00 \nIbis Styles - Diaria a partir de R$312,00 \nHotel Euzebio�s - Diaria a partir de R$250,00");
											printf("\nValor da passagem: R$130,00");
											printf("\nPopulacao: Media de 450 479 habitantes");
										break;
										case 2:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Sao Gabriel da Cachoeira");
											printf("\nPrincipais atracoes: Parque Nacional do Pico da Neblina, Praia de Sao Gabriel da Cahoeira, Morro dos Seis Lagos Biological Reserve e Puinawai National Reserve");
											printf("\nPrincipais acomodacoes: Pousada Pico da Neblina, Hotel Pousada Roraima e Pousada Benjamim");
											printf("\nValor da passagem: R$483,00");
											printf("\nPopulacao: Media de 46 303 habitantes");
										break;
										case 3:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Serra do Navio");
											printf("\nPrincipais atracoes: Trilhas ecologicas, passeio fluvial e Parque Nacional Montanhas do Tumucumaque");
											printf("\nPrincipais acomodacoes: Pousada Santa Barbara Restaurante Dom Acacio");
											printf("\nValor da passagem: R$904,00");
											printf("\nPopulacao: Media de 5 488 habitantes");
										break;
										case 4:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Barcelos");
											printf("\nPrincipais atracoes: Serra do Araca, Parque Nacional do Jau, Cachoeira do El Dorado e Reserva Extrativista Rio Unini.");
											printf("\nPrincipais acomodacoes: Hotel Amazonita, Hotel cidade, Hotel Rio Negro.");
											printf("\nValor da passagem: R$515,00");
											printf("\nPopulacao: Media de 27 638 habitantes");
										break;
										case 5:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Santarem");
											printf("\nPrincipais atracoes: Serra da Piraoca, Orla de Santarem, Centro Cultural Joao Fona, Praia do Maracana, Museu Dica Frazao, Catedral Metropolitana Nossa Senhora da Concei�ao.");
											printf("\nPrincipais acomodacoes: \nHotel Mirante da Ilha - Diaria a partir de R$277,00 \nPalace Santarem - Diaria a partir de R$176,00 \nPor do Sol Hotel - Diaria a partir de R$143,00");
											printf("\nValor da passagem: R$1.555,00");
											printf("\nPopulacao: Media de 306 480 habitantes");
										break;
										default:
											printf("Cidade invalida.");
									}
								break;
								case 3: 
									printf("Regiao escolhida nao possui neve");
								break;
								case 4: 
									printf("Preferencia turistica escolhida: Gastronomia");
									printf("\n\nAqui esta alguns destinos recomendados. Escolha 1 para mais informacoes:\n1= Belem - Para\n2= Parintins - Amazonas\n3= Xapuri - Acre\n4= Cacoal - Rondonia\n5= Palmas - Tocantins\n");
									scanf("%d",&cidade);
									//O usuario escolheu gastronomia. Logo, mostrar� as informa��es do destino escolhido. (Cada case � uma cidade)
									switch (cidade)
									{
										case 1:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Belem");
											printf("\nPrincipais atracoes: Museu Paranaense Emilio Goeldi, Estacao das Docas, Parque Zoobotanico Mangal das Garcas, Forte de Presepio, Brasilica Santuario de Nossa Senhora de Nazare, Bosque Rodrigues Alves.");
											printf("\nPrincipais acomodacoes: Radisson Hotel Belem - Diaria a partir de R$317,00 \nHotel Go Inn Belem - Diaria a partir de R$111,00 \nIbis Styles Bel�m Batista Campos - Diaria a partir de R$185,00");
											printf("\nValor da passagem: R$725,00");
											printf("\nPopulacao: Media de 2,08 milhoes de habitantes.");
										break;
										case 2:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Paintins");
											printf("\nPrincipais atracoes: Catedral de Nossa Senhora do Carmo, Praca de comunas, Balneario Cantagalo, orla do Rio Amazonas, Passeio de triciclo, Mercado Municipal de Parintins e Lagoa da Francesa.");
											printf("\nPrincipais acomodacoes: \nPousada Nina - Diaria a partir de R$105,00 \nAmazon River Resort Hotel - Diaria a partir de R$148,00");
											printf("\nValor da passagem: R$1.040,00");
											printf("\nPopulacao: Media de 115 363 de habitantes");
										break;
										case 3:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Xapuri");
											printf("\nPrincipais atracoes: Casa de Chico Mendes, Seringal Cachoeira, Fundacao Chico Mendes, Casa Blanca, Igreja Sao Sebastiao, praias do Inferno e Zaire, cachoeira dos padres.");
											printf("\nPrincipais acomodacoes: \nUm Hotel - Diaria a partir de R$132,00 \nDorado Hotel - Diaria a partir de R$210,00");
											printf("\nValor da passagem: R$959,00");
											printf("\nPopulacao: Media de 19 596 de habitantes.");
										break;
										case 4:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Cacoal");
											printf("\nPrincipais atracoes: Cacoal Selva Park, Museu da Imagem e do Som, Museu do Indio, cachoeira do Protazio, festival gastronomico regional, lagoa azul.");
											printf("\nPrincipais acomodacoes: \nCatuai Hotel - Diaria a partir de R$199,00 \nEder Hotel - Diaria a partir de R$115,00 \nHotel Br 364 - Diaria a partir de R$180,00");
											printf("\nValor da passagem: R$1.103,00");
											printf("\nPopulacao: Media de 85 893 habitantes.");
										break;
										case 5:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Palmas");
											printf("\nPrincipais atracoes: Praca dos Girassois, praia Graciosa, parque Cesamar, Palacio Araguaia, Ilha Canela Beach, praia do Prata.");
											printf("\nPrincipais acomodacoes: \nZii Hotel Palmas - Diaria a partir de R$207,00 \nVictoria Plaza - Diaria a partir de R$170,00 \nHotel Premium Hplus Palmas - Diaria a partir de R$226,00");
											printf("\nValor da passagem: R$903,00");
											printf("\nPopulacao: Media de 306 296 de habitantes");
										break;
										default:
											printf("Cidade invalida.");
									}
								break;
								default:
									printf("Preferencia turistica invalida.");
							
							}
						break;
						case 2: 
							printf("Regiao escolhida: Nordeste\n");
							printf("\nQual sua preferencia turistica:\n1- Praia\n2- Montanha\n3- Neve\n4- Gastronomia\n");
							scanf("%d",&preferencia);
							//O usuario escolheu a regi�o nordeste. Logo, escolher� sua preferencia turistica.
							switch (preferencia)
							{
								case 1: 
									printf("Preferencia turistica escolhida: Praia");
									printf("\n\nAqui esta alguns destinos recomendados. Escolha 1 para mais informacoes:\n1= Itacare - Bahia\n2= Ipojuca - Pernambuco\n3= Tibau do Sul - Rio Grande do Norte\n4= Beberibe - Ceara\n5= Maceio - Alagoas\n");
									scanf("%d",&cidade);
									//O usuario escolheu praia. Logo, mostrar� as informa��es do destino escolhido. (Cada case � uma cidade)
									switch (cidade)
									{
										case 1:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Itacare");
											printf("\nPrincipais atracoes: Praia da Coroinha, Praia da Concha, Trilha da Prainha, Ponto do Xareu.");
											printf("\nPrincipais acomodacoes: \nPousada Bambu - Diaria a partir de R$209,00 \nPousada Burundanga - Diaria a partir de R$315,00 \nPousada Pedra Torta - Diaria a partir de R$301,00");
											printf("\nValor da passagem: R$1.875,00");
											printf("\nPopulacao: Media de 28 684 habitantes.");
										break;
										case 2:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Ipojuca");
											printf("\nPrincipais atracoes: Porto de Galinhas, Praia de Muro Alto, Piscinas Naturais de Porto de Galinhas, Praia de Cupe, Pontal de Maracaipe.");
											printf("\nPrincipais acomodacoes: \nCasa em Porto de Galinhas/Toquinho - Diaria a partir de R$2.200,00 \nPorto de Galinhas, Muo Alto Condom�nio Clube - Diaria a partir de R$240,00");
											printf("\nValor da passagem:R$1.157,00");
											printf("\nPopulacao: Media de 97 669 habitantes.");
										break;
										case 3:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Tibau do Sul");
											printf("\nPrincipais atracoes: Praia do Madeiro, Lagoa de Guarairas, Vilarejo de Pipa, Praias de Pipa.");
											printf("\nPrincipais acomodacoes: \nSun Bay Pipa Hoteis - Diaria a partir de R$264,00 \nBosque da Praia, ePipa Hoteis - Diaria a partir de R$275,00 \nHotel da Pipa - Diaria a partir de R$434,00");
											printf("\nValor da passagem: R$1.345,00");
											printf("\nPopulacao: Media de 14 440 habitantes.");
										break;
										case 4:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Beberibe");
											printf("\nPrincipais atracoes: Pousada Mar Aberto, Pousada Mestre Pedro, Mediterraneo Praia Hotel");
											printf("\nPrincipais acomodacoes: \nPousada Mar Aberto - Diaria a partir de R$397,00 \nPousada Mestre Pedro - Diaria a partir de R$130,00 \nMediterraneo Praia Hotel - Diaria a partir de R$135,00");
											printf("\nValor da passagem: R$493,00");
											printf("\nPopulacao: Media de 53 949 habitantes.");
										break;
										case 5:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Maceio");
											printf("\nPrincipais atracoes: Praia de Ipioca, Praia de Pajucara, Praia de Ponta Verde, Piscinas Naturais de Pajucara, Praia do Carro Quebrado.");
											printf("\nPrincipais acomodacoes: \nSoft Inn Maceio Ponta Verde - Diaria a partir de R$190,00 \nMaceio Atlantic Suites - Diaria a partir de R$265,00 \nCais da Praia Hotel - Diaria a partir de R$218,00");
											printf("\nValor da passagem: R$813,00");
											printf("\nPopulacao: Media de 1 025 habitantes.");
										break;
										default:
											printf("Cidade invalida.");
									}
								break;
								case 2: 
									printf("Preferencia turistica escolhida: Montanha");
									printf("\n\nAqui esta alguns destinos recomendados. Escolha 1 para mais informacoes:\n1= Guaratinga - Bahia\n2= Andarai - Bahia\n3= Quixada - Ceara\n4= Guaramiranga - Ceara\n5= Garanhuns - Pernambuco\n");
									scanf("%d",&cidade);
									//O usuario escolheu montanha. Logo, mostrar� as informa��es do destino escolhido. (Cada case � uma cidade)
									switch (cidade)
									{
										case 1:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Guaratinga");
											printf("\nPrincipais atracoes: Pedra do Ceu, Santuario Frei Galvao, Catedral Santo Antonio, Museu Frei Galvao e Arquivo Memoria de Guaratingueta, Casa de Frei Galvao, Buriti Shopping Guara.");
											printf("\nPrincipais acomodacoes: \nHotel Imperial - Diaria a partir de R$150,00 \nHotel Porto Napolis - Diaria a partir de R$198,00  \nHotel Oceania - Diaria a partir de R$248,00");
											printf("\nValor da passagem: R$503,00");
											printf("\nPopulacao: Media de 20 843 habitantes");
										break;
										case 2:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Andarai");
											printf("\nPrincipais atracoes: Morrao, vale do Paty, Cachoeira do Ramalho, Toca do Morcego, A prainha de Andarai, Cidade historica de Andarai, Monumentos historicos e Pousadas.");
											printf("\nPrincipais acomodacoes: \nDon'anna Hostel - Diaria a partir de R$133,00 \nPousada Pedras De Igatu - Diaria a partir de R$304,00  \nArt Hotel Cristal - Diaria a partir de R$176,00");
											printf("\nValor da passagem: R$130,00 ");
											printf("\nPopulacao: Media de 13 153 habitantes");
										break;
										case 3:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Quixada");
											printf("\nPrincipais atracoes: Pedra da Galinha Choca");
											printf("\nPrincipais acomodacoes: \nMonolitos - Diaria a partir de R$114,00 \nOYO Hotel Belas Artes - Diaria a partir de R$100,00 \nDantas Pousada - Diaria a partir de R$38,00");
											printf("\nValor da passagem: R$797,00");
											printf("\nPopulacao: Media de 88 321 habitantes");
										break;
										case 4:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Guaramiranga");
											printf("\nPrincipais atracoes: Pico Alto ");
											printf("\nPrincipais acomodacoes: Hotel Vale das Novens - Diaria a partir de R$410,00 \nPousada dos Capuchinhos - Diaria a partir de R$236,00 \nPousada de Serra Tutuca - Diaria a partir de R$248,00");
											printf("\nValor da passagem: R$592,00 ");
											printf("\nPopulacao: Media de 5 132 habitantes");
										break;
										case 5:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Garanhuns");
											printf("\nPrincipais atracoes: Sundown Park, Relogio das Flores, Parque Ruber Van Der Linden, Parque Euclides Dourado, Cristo do Magano, Santuario Mariano de Schoenstatt.");
											printf("\nPrincipais acomodacoes: \nTavares Correia - Diaria a partir de R$286,00 \nHotel Kamei - Diaria a partir de R$95,00 \nRodriges Hotel - Diaria a partir de R$136,00 reais diaria");
											printf("\nValor da passagem: R$758,00 ");
											printf("\nPopulacao: Media de 140 577 habitantes");
										break;
										default:
											printf("Cidade invalida.");
									}
								break;
								case 3: 
									printf("Regiao escolhida nao possui neve");
								break;
								case 4: 
									printf("Preferencia turistica escolhida: Gastronomia");
									printf("\n\nAqui esta alguns destinos recomendados. Escolha 1 para mais informacoes:\n1= Salvador - Bahia\n2= Massagueira - Alagoas\n3= Gravata - Pernambuco\n4= Nossa Senhora da Gloria - Sergipe\n5= Teresina - Piaui\n");
									scanf("%d",&cidade);
									//O usuario escolheu gastronomia. Logo, mostrar� as informa��es do destino escolhido. (Cada case � uma cidade)
									switch (cidade)
									{
										case 1:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Salvador");
											printf("\nPrincipais atracoes: Elevador Lacerda, praia do Porto da Barra, Farol da Barra, Basilica do Senhor do Bonfim, Igreja e Convento de Sao Francisco, Mercado Modelo.");
											printf("\nPrincipais acomodacoes: \nIntercity Salvador - Diaria a partir de R$219,00 \nFasano Salvador - Diaria a partir de R$1.531,00 \nHotel Deville Prime Salvador - Diaria a partir de R$299,00");
											printf("\nValor da passagem: R$683,00");
											printf("\nPopulacao: Media de 2,886 milhoes de habitantes.");
										break;
										case 2:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Massagueira");
											printf("\nPrincipais atracoes: Igreja Matriz de Nossa Senhora da Conceicao, prainha Barra Nova, casa de Marechal Deodoro, Balneario do Broma,  Igreja Santa Maria Madalena, Museu de Arte Sacra Dom Ranulpho da Silva Farias.");
											printf("\nPrincipais acomodacoes: \nHotel Ponta Verde Praia do Frances - Diaria a partir de R$385,00 \nLa Dolce Vita Flat e Pousada - Diaria a partir de R$281,00 \nPousada panorama - Diaria a partir de R$224,00");
											printf("\nValor da passagem: R$858,00");
											printf("\nPopulacao: Media de 10mil habitantes.");
										break;
										case 3:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Gravata");
											printf("\nPrincipais atracoes: Ponte Ferrea Cascavel, Mosteiro da Escuta do Senhor, Reserva Ecologica Serra do Continente, mercado Publico de Gravata, Museu Memorial de Gravata, cachoeira da palmeira.");
											printf("\nPrincipais acomodacoes: \nHotel Fazenda Monte Castelo - Diaria a partir de R$314,00 \nVilla Hipica - Diaria a partir de R$485,00 \nHotel Tres Palmeiras - Diaria a partir de R$122,00");
											printf("\nValor da passagem: R$844,00");
											printf("\nPopulacao: Media de 84 700 de habitantes.");
										break;
										case 4:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Nossa Senhora da Gloria");
											printf("\nPrincipais atracoes: Portico da cidade, Praca da Igreja Nova, praca lagoa bonita.");
											printf("\nPrincipais acomodacoes: \nAvelan Plaza - Diaria a partir de R$90,00 \nHotel Barreto - Diaria a partir de R$90,00");
											printf("\nValor da passagem: R$961,00 ");
											printf("\nPopulacao: Media de 37 324 de habitantes.");
										break;
										case 5:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Teresina");
											printf("\nPrincipais atracoes: Parque Zoobotanico Teresina, Parque Ambiental Encontro do Rios, Paroquia de Sao Benedito, Museu do Piaui, Complexo Turistico Ponte Estaiada, Parque Potycabana.");
											printf("\nPrincipais acomodacoes: \nOYO Real Palace Hotel - Diaria a partir de R$122,00 \nMetropolitan Hotel - Diaria a partir de R$300,00 \nHotel Vila Leste - Diaria a partir de R$150,00");
											printf("\nValor da passagem: R$1.019,00");
											printf("\nPopulacao: Media de 868 075 de habitantes");
										break;
										default:
											printf("Cidade invalida.");
									}
								break;
								default:
									printf("Preferencia turistica invalida.");
							}
						break;
						case 3: 
							printf("Regiao escolhida: Centro-oeste\n");
							printf("\nQual sua preferencia turistica:\n1- Praia\n2- Montanha\n3- Neve\n4- Gastronomia\n");
							scanf("%d",&preferencia);
							//O usuario escolheu a regi�o centro-oeste. Logo, escolher� sua preferencia turistica.
							switch (preferencia)
							{
								case 1: 
									printf("Regiao escolhida nao possui praia");
								break;
								case 2: 
									printf("Preferencia turistica escolhida: Montanha");
									printf("\n\nAqui esta alguns destinos recomendados. Escolha 1 para mais informacoes:\n1= Chapada dos Guimaraes - Mato Grosso\n2= Alto Paraiso de Goias - Goias\n");
									scanf("%d",&cidade);
									//O usuario escolheu montanha. Logo, mostrar� as informa��es do destino escolhido. (Cada case � uma cidade)
									switch (cidade)
									{
										case 1:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Chapada dos Guimaraes");
											printf("\nPrincipais atracoes: Mirante Morro dos Ventos, Estancia Fenix, Cachoeira do Marimbondo, Cachoeira da Geladeira, Mirante Alto do Ceu e Canions do Jamaca.");
											printf("\nPrincipais acomodacoes: \nTurismo - Diaria a partir de R$180,00 \nCasa da Quineira - Diaria a partir de R$619,00 \nVento Sul Pousada - Diaria a partir de R$377,00");
											printf("\nValor da passagem: R$858,00 ");
											printf("\nPopulacao: Media de 19 453 habitantes");
										break;
										case 2:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Alto Paraiso de Goias");
											printf("\nPrincipais atracoes: Chapada dos Veadeiros, Loquinhas, Cachoeira dos Cristais, Mirante da Catarata dos Couros, Cachoeira de Sao Bento.");
											printf("\nPrincipais acomodacoes: \nVila Toa - Diaria a partir de R$807,00 \nPousada Camelot Inn - Diaria a partir de R$344,00 \nVila Gaia - Diaria a partir de R$225,00");
											printf("\nValor da passagem: R$774,00");
											printf("\nPopulacao: Media de 7 688 habitantes");
										break;
										default:
											printf("Cidade invalida.");
									}
								break;
								case 3: 
									printf("Regiao escolhida nao possui neve");
								break;
								case 4: 
									printf("Preferencia turistica escolhida: Gastronomia");
									printf("\n\nAqui esta alguns destinos recomendados. Escolha 1 para mais informacoes:\n1= Goiania - Goias\n2= Pirenopolis - Goias\n3= Cuiaba - Mato Grosso\n4= Campo Grande - Mato Grosso do Sul\n5= Miranda - Mato Grosso do Sul\n");
									scanf("%d",&cidade);
									//O usuario escolheu gastronomia. Logo, mostrar� as informa��es do destino escolhido. (Cada case � uma cidade)
									switch (cidade)
									{
										case 1:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Goiania");
											printf("\nPrincipais atracoes: Mutirama, Parque Vaca Brava, Parque Zoologico de Goiania, Bosque dos Buritis, Santuario Basilica do Divino Pai Eterno, Centro Cultural Oscar Niemeyer.");
											printf("\nPrincipais acomodacoes: \nCastro's Park Hotel - Diaria a partir de R$256,00 \nHoliday Inn Goiania - Diaria a partir de R$178,00 \nK Hotel - Diaria a partir de R$306,00");
											printf("\nValor da passagem: R$729,00");
											printf("\nPopulacao: Media de 6,523 milhoes de habitantes.");
										break;
										case 2:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Pirenopolis");
											printf("\nPrincipais atracoes: Cachoeira do Abade, Santuario de Vida Silvestre Vagafogo, Fazenda Babilonia, caminho de Cora Coralina, cachoeira Santa Maria, cachoeira Usina Velha.");
											printf("\nPrincipais acomodacoes: \nPousada Flores Do Cerrado - Diaria a partir de R$314,00 \nPousada Flores do Carmo - Diaria a partir de R$371,00 \nPousada Tajupa - Diaria a partir de R$358,00");
											printf("\nValor da passagem: R$565,00");
											printf("\nPopulacao: Media de 25 064 de habitantes.");
										break;
										case 3:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Cuiaba");
											printf("\nPrincipais atracoes: Parque Mae Bonifacia, Parque Tia Nair, Museu de Arte Sacra de Mato Grosso, Centro Geodesico da America do Sul, Parque das Aguas, Museu do Morro da caixa d'agua Velha.");
											printf("\nPrincipais acomodacoes: \nDelmond Hotel - Diaria a partir de R$193,00 \nHoliday Inn Cuiaba - Diaria a partir de R$194,00 \nHotel Gran Odara - Diaria a partir de R$299,00");
											printf("\nValor da passagem: R$858,00");
											printf("\nPopulacao: Media de 618 124 de habitantes.");
										break;
										case 4:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Campo Grande");
											printf("\nPrincipais atracoes: Parque das Na�oes Indigenas, Museu das culturas Dom Bosco, Sesc Morada dos Bais, Pantanal Discovery tour to Pantanal and Bonito, Lago do Amor, Vitinho Park.");
											printf("\nPrincipais acomodacoes: \nHotel Deville Prime Campo Grande - Diaria a partir de 281 \nFit Transamerica Campo Grande - Diaria a partir de R$168,00 \nNovotel Campo Grande Hotel - Diaria a partir de R$188,00");
											printf("\nValor da passagem: R$482,00");
											printf("\nPopulacao: Media de 796 252 de habitantes.");
										break;
										case 5:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Miranda");
											printf("\nPrincipais atracoes: Projeto Salobra Ecologia e Turismo, Parque Estadual do Pantanal do Rio Negro, Fazenda San Francisco, Paroquia Nossa Senhora do Carmo.");
											printf("\nPrincipais acomodacoes: \nAguas Do Pantanal - Diaria a partir de R$233,00 \nQuerencia - Diaria a partir de 160,00 \nPousada Capitao Leno - Diaria a partir de R$129,00");
											printf("\nValor da passagem: R$425,00");
											printf("\nPopulacao: Media de 28 220 de habitantes.");
										break;
										default:
											printf("Cidade invalida.");
									}
								break;
								default:
									printf("Preferencia turistica invalida");
							}
						break;
						case 4: 
							printf("Regiao escolhida: Sudeste\n");
							printf("\nQual sua preferencia turistica:\n1- Praia\n2- Montanha\n3- Neve\n4- Gastronomia\n");
							scanf("%d",&preferencia);
							//O usuario escolheu a regi�o sudeste. Logo, escolher� sua preferencia turistica.
							switch (preferencia)
							{
								case 1: 
									printf("Preferencia turistica escolhida: Praia");
									printf("\n\nAqui esta alguns destinos recomendados. Escolha 1 para mais informacoes:\n1= Guarapari - Espirito Santo\n2= Ilhabela - Sao Paulo\n3= Arraial do Cabo - Rio de Janeiro\n4= Rio de Janeiro - Rio de Janeiro\n5= Cabo Frio - Rio de Janeiro\n");
									scanf("%d",&cidade);
									//O usuario escolheu praia. Logo, mostrar� as informa��es do destino escolhido. (Cada case � uma cidade)
									switch (cidade)
									{
										case 1:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Guarapari");
											printf("\nPrincipais atracoes: Praia Setiba, Praia Bacutia, Praia do Morro, Praia dos Padres, Tres Praias, Praia Castanheiras, Praia Peracanga, Parque Aquatico Acquamania,etc.");
											printf("\nPrincipais acomodacoes: \nHotel Diamantina - Diaria a partir de R$173,00 \nPousada E Restaurante Solar Meaipe - Diaria a partir de R$840,00 \nPousada Pedra Do Elefante - Diaria a partir de R$483,00");
											printf("\nValor da passagem: R$1.385,00");
											printf("\nPopulacao: Media de 126 701 habitantes.");
										break;
										case 2:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Ilhabela");
											printf("\nPrincipais atracoes: Praia do Bonete, Baia de Castelhanos, Praia do Curral, Praia De Jabaquara, Praia do Juliao");
											printf("\nPrincipais acomodacoes: \nVELINN Caravela Pousada Ilhabela - Diaria a partir de R$161,00 \nPousada Vila das Velas - Diaria a partir de R$458,00 \nSiriuba Reserve - Diaria a partir de R$765,00");
											printf("\nValor da passagem: R$796,00");
											printf("\nPopulacao: Media de 35 591 habitantes.");
										break;
										case 3:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Arraial do Cabo");
											printf("\nPrincipais atracoes: Pontal do Atalaia, Praia do Farol, Praia do Forno, Praia Grande e Prainha, Mergulho.");
											printf("\nPrincipais acomodacoes: \nPousada Mirai - Diaria a partir de R$279,00 \nOcean Suites - Diaria a partir de R$280,00 \nMar Azul Suites - Diaria a partir de R$130,00");
											printf("\nValor da passagem: R$833,00");
											printf("\nPopulacao: Media de 30 593 habitantes.");
										break;
										case 4:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Rio de janeiro");
											printf("\nPrincipais atracoes: Cristo Redentor, Pao de Acucar, Jardim Botanico, Estadio do Maracana, Museu do Amanha");
											printf("\nPrincipais acomodacoes: \nHostel Republica Rio de Janeiro - Diaria a partir de R$58,00 \nMonza Hotel - Diaria a partir de R$261,00 \nRamada Encore by Wyndham Rio de Janeiro Ribalta - Diaria a partir de R$227,00");
											printf("\nValor da passagem: R$1.241,00");
											printf("\nPopulacao: Media de 6.748 milhoes de habitantes.");
										break;
										case 5:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Cabo Frio");
											printf("\nPrincipais atracoes: Praia do Forte, Praia das Conchas, Praia do Pero, Bairro da Passagem, Praia das Dunas.");
											printf("\nPrincipais acomodacoes: \nPousada Bon Vivant - Diaria a partir de R$150,00 \nFlamingo Beach Pousada - Diaria a partir de R$320,00 \nPousada Kopenhagen Beach - Diaria a partir de R$158,00");
											printf("\nValor da passagem: R$662,00"); 
											printf("\nPopulacao: Media de 230.378 habitantes.");
										break;
										default:
											printf("Cidade invalida.");
									}
								break;
								case 2: 
									printf("Preferencia turistica escolhida: Montanha");
									printf("\n\nAqui esta alguns destinos recomendados. Escolha 1 para mais informacoes:\n1= Friburgo - Rio de Janeiro\n2= Sao Jose do Divino - Minas Gerais\n3= Ilha da Trindade - Espirito Santo\n4= Teresopolis - Rio de Janeiro\n5= Domingos Martins - Espirito Santo\n");
									scanf("%d",&cidade);
									//O usuario escolheu montanha. Logo, mostrar� as informa��es do destino escolhido. (Cada case � uma cidade)
									switch (cidade)
									{
										case 1:
										
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Friburgo");
											printf("\nPrincipais atracoes: Serra do mar, Igreja de Santo Antonio, Teatro Municipal e o famoso Teleferico de Friburgo.");
											printf("\nPrincipais acomodacoes:n\nHotel Montanus - Diaria a partir de R$211,00 \nHotel Mount Everest - Diaria a partir de R$371,00 \nHotel Shangrila Nova Friburgo - Diaria a partir de R$250,00");
											printf("\nValor da passagem: R$532,00");
											printf("\nPopulacao: Media de 190 084 habitantes");
										break;
										case 2:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: S�o Jos� do Divino");
											printf("\nPrincipais atracoes: Pedra Riscada, Parque Estadual da Serra do Mar, Rafting no Rio Paraibuna, Trilha das Sete Cachoeiras, Luau Caipira, Ofcina de Artesanato, Centro Historico, Casa Dr. Oswaldo Cruz.");
											printf("\nPrincipais acomodacoes: \nHotel Capital das Pedras - Diaria a partir de R$227,00 \nHotel Comfort Styles - Diaria a partir de R$171,00 \nBeira Rio Hotel - Diaria a partir de R$139,00");
											printf("\nValor da passagem: R$277,00");
											printf("\nPopulacao: Media de 3 860 habitantes");
										break;
										case 3:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Ilha da Trindade");
											printf("\nPrincipais atracoes: Pico desejado, Cachoeira do Toboga e Cachoeira da Pedra Branca.");
											printf("\nPrincipais acomodacoes: \nRadisson Hotel Trindade - Diaria a partir de R$663,00 \nHotel Airport Suites - Diaria a partir de R$305,00 \nRunway Hotel - Diaria a partir de R$632,00");
											printf("\nValor da passagem: R$552,00");
											printf("\nPopulacao: Media de 36 habitantes");
										break;
										case 4:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Teresopolis");
											printf("\nPrincipais atracoes: Dedo de Deus, Palacio Teresa Cristina, o Palacete Granado, o Castelo Montebello Medieval, a Colina dos Mirantes, a Matriz de Santa Teresa e a Granja Comary");
											printf("\nPrincipais acomodacoes: \nOYO Hotel Recanto Do Alto - Diaria a partir de R$110,00 \nIntercity Teresopolis - Diaria a partir de R$230,00 \nApartamento 2 quartos novo - Diaria a partir de R$385,00");
											printf("\nValor da passagem: R$130,00 ");
											printf("\nPopulacao: Media de 163 746 habitantes");
										break;
										case 5:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Domingos Martins");
											printf("\nPrincipais atracoes: Pedra Azul, Rota do Lagarto, Praca Arthur Gerhardt, Sitio Heranca Agroturismo, Delicias Caseiras");
											printf("\nPrincipais acomodacoes: \nPousada Gagno - Diaria a partir de R$362,00 \nIbis Vit�ria Camburi - Diaria a partir de R$162,00 \nPousada Casa Donadello - Diaria a partir de R$286,00 ");	
											printf("\nValor da passagem: R$473,00");
											printf("\nPopulacao: Media de 33 711 habitantes");
										break;
										default:
											printf("Cidade invalida.");
									}
								break;
								case 3: 
									printf("Regiao escolhida nao possui neve");
								break;
								case 4: 
									printf("Preferencia turistica escolhida: Gastronomia");
									printf("\n\nAqui esta alguns destinos recomendados. Escolha 1 para mais informacoes:\n1= Bauru - Sao Paulo\n2= Teresopolis - Rio de Janeiro\n3= Rio de Janeiro - Rio de Janeiro\n4= Tiradentes - Minas Gerais\n5= Serra - Espirito Santo\n");
									scanf("%d",&cidade);
									//O usuario escolheu gastronomia. Logo, mostrar� as informa��es do destino escolhido. (Cada case � uma cidade)
									switch (cidade)
									{
										case 1:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Bauru");
											printf("\nPrincipais atracoes: Museu Ferroviario Regional de Bauru, Parque Zoologico Municipal de Bauru, Jardim Botanico Municipal de Bauru, Parque Vitoria Regia, Novo Thermas de Piratininga, Igreja Tenrikyo Dendotyo.");
											printf("\nPrincipais acomodacoes: \nBlue Tree Towers Bauru - Diaria a partir de R$167,00 \nComfort Hotel Bauru - Diaria a partir de R$175,00 \nIntercity Bauru - Diaria a partir de R$169,00");
											printf("\nValor da passagem: R$246,00");
											printf("\nPopulacao: Media de 379 297 de habitantes.");
										break;
										case 2:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Teresopolis");
											printf("\nPrincipais atracoes: Parque Nacional da Serra dos Orgaos, Parnaso - Fritz, Travessia Petropolis, Pedra da Tartaruga, Parc Magique, Parque Natural Municipal Montanhas de Teresopolis, cachoeira dos Frades, casa suica, feirinha do Alto.");
											printf("\nPrincipais acomodacoes: \nHotel Intercity Teresopolis - Diaria a partir de R$175,00 \nAthos Hotel - Diaria a partir de R$190,00 \nPousada Matitatere - Diaria a partir de R$262,00");
											printf("\nValor da passagem: R$231,00");
											printf("\nPopulacao: Media de 184 240 de habitantes.");
										break;
										case 3:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Rio de Janeiro");
											printf("\nPrincipais atracoes: Cristo Redentor, Pao de Acucar, Praia de Copacabana, Praia Ipanema, Maracana, Parque Nacional da Tijuca, Museu do Amanha, Escadaria Selaron.");
											printf("\nPrincipais acomodacoes: \nPortoBay Rio de Janeiro - Diaria a partir de R$485,00 \nHotel Hilton Rio de Janeiro Copacabana - Diaria a partir de R$459,00 \nBelmond Copacabana Palace - Diaria a partir de R$1.765,00");
											printf("\nValor da passagem: R$278,00");
											printf("\nPopulacao: Media de 6,748 milhoes de habitantes.");
										break;
										case 4:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Tiradentes");
											printf("\nPrincipais atracoes: Igreja Matriz de Santo Ant�nio, Moitara Arte Indigena, Museu de Sant'Ana, Largo das Forras, Chafariz de Sao Jose, Museu da Literatura.");
											printf("\nPrincipais acomodacoes: \nPousada Pequena Tiradentes - Diaria a partir de R$974,00 \nSolar da Ponte - Diaria a partir de R$982,00 \nPousada d'Oleo de Guignard - Diaria a partir de R$374,00");
											printf("\nValor da passagem: R$63,74");
											printf("\nPopulacao: Media de 10 960 de habitantes.");
										break;
										case 5:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Serra");
											printf("\nPrincipais atracoes: Praia de Camburi, Praia de Manguinhos, Parque Botanico Vale, Igreja do Reis Magos, Praia de Jacaraipe, Centro Ecologico Projeto Caiman.");
											printf("\nPrincipais acomodacoes: \nHotel Jardins - Diaria a partir de R$156,00 \nGo Inn Serra - Diaria a partir de R$179,00 \nHotel Serra Grande - Diaria a partir de R$166,00");
											printf("\nValor da passagem: R$295,00");
											printf("\nPopulacao: Media de 527 240 de habitantes.");
										break;
										default:
											printf("Cidade invalida.");
									}
								break;
								default:
									printf("Preferencia turistica invalida");
							}
						break;
						case 5:
							printf("Regiao escolhida: Sul\n");
							printf("\nQual sua preferencia turistica:\n1- Praia\n2- Montanha\n3- Neve\n4- Gastronomia\n");
							scanf("%d",&preferencia);
							//O usuario escolheu a regi�o sul. Logo, escolher� sua preferencia turistica.
							switch (preferencia)
							{
								case 1: 
									printf("Preferencia turistica escolhida: Praia");
									printf("\n\nAqui esta alguns destinos recomendados. Escolha 1 para mais informacoes:\n1= Balneario Camboriu - Santa Catarina\n2= Capao da Canoa - Rio Grande do Sul\n3= Florianopolis - Santa Catarina\n4= Itapema - Santa Catarina\n5= Tramandai - Rio Grande do Sul\n");
									scanf("%d",&cidade);
									//O usuario escolheu praia. Logo, mostrar� as informa��es do destino escolhido. (Cada case � uma cidade)
									switch (cidade)
									{
										case 1:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Balneario Camboriu");
											printf("\nPrincipais atracoes: Parque tematico Beto Carrero World, Praia do Estaleirinho, Praia Brava, Praia dos Amores, Praia do Buraco.");
											printf("\nPrincipais acomodacoes: \nHotel Palmas Executivo - Diaria a partir de R$159,00 \nHotel das Americas - Diaria a partir de R$132,00 \nHotel Marimar The Place - Diaria a partir de R$307,00");
											printf("\nValor da passagem: R$1.197,00");
											printf("\nPopulacao: Media de 145 796 habitantes.");
										break;
										case 2:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Capao da Canoa");
											printf("\nPrincipais atracoes: Praia da Atlantica, Acqua Lokos, Marina Park, Praia Capao da Canoa, Pra�a Flavio Boianovski, Praia Xangri-la.");
											printf("\nPrincipais acomodacoes: \nEd Gustavo - Diaria a partir de R$140,00 \nResidencial Primo - Diaria a partir de R$210,00 \nApartamento Beira Mar - Diaria a partir de R$230,00");
											printf("\nValor da passagem: R$587,00");
											printf("\nPopulacao: Media de 54 051 habitantes.");
										break;
										case 3:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Florianopolis");
											printf("\nPrincipais atracoes: Santo Antonio de Lisboa, Lagoinha do Leste, Ilha do Campeche, Praia da Joaquina, Praia de Canasvieiras.");
											printf("\nPrincipais acomodacoes: \nPousada Santa Ana - Diaria a partir de R$116,00 \nPousada Ilha Faceira - Diaria a partir de R$341,00 \nPousada Tulipane - Diaria a partir de R$229,00");
											printf("\nValor da passagem: R$3.684,00");
											printf("\nPopulacao: Media de 508 826 habitantes.");
										break;
										case 4:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Itapema");
											printf("\nPrincipais atracoes: Praias de Itapema, Praia Grossa");
											printf("\nPrincipais acomodacoes: \nSolis Praia Hotel Itapema - Diaria a partir de R$416,00 \nHotel Residencial Itapema - Diaria a partir de R$113,00 \nPousada Vovo Valdir - Diaria a partir de R$110,00");
											printf("\nValor da passagem: R$671,00");
											printf("\nPopulacao: Media de 67 338 habitantes.");
										break;
										case 5:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Tramandai");
											printf("\nPrincipais atracoes: Praia das Cabras, Trilha do Horto.");
											printf("\nPrincipais acomodacoes: \nHotel Centenario - Diaria a partir de R$134,00 \nHotel Mares do Sul - Diaria a partir de R$189,00 \nAquarius Apartamentos - Diaria a partir de R$140,00");
											printf("\nValor da passagem: R$587,00");
											printf("\nPopulacao: Media de 52 632 habitantes.");
										break;
										default:
											printf("Cidade invalida.");
									}
								break;
								case 2: 
									printf("Preferencia turistica escolhida: Montanha");
									printf("\n\nAqui esta alguns destinos recomendados. Escolha 1 para mais informacoes:\n1= Ibitiraquire - Parana\n2= Bom Jardim da Serra - Santa Catarina\n3= Palhoca - Santa Catarina\n4= Bom Retiro - Santa Catarina\n5= Sao Joaquim - Santa Catarina\n");
									scanf("%d",&cidade); 
									//O usuario escolheu montanha. Logo, mostrar� as informa��es do destino escolhido. (Cada case � uma cidade)
									switch (cidade)
									{
										case 1:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Antonina");
											printf("\nPrincipais atracoes: Pico Parana, Serra do Ibitiraquire, Rodovia da Graciosa, Rio Nhundiaquara, Baia de Antonina, Praca Coronel Macedo, Ruinas do Armazem Macedo.");
											printf("\nPrincipais acomodacoes: \nPousada das Laranjeiras - Diaria a partir de R$238,00 \nPousada do Oasis - Diaria a partir de R$476,00 \nCamboa Capela - Diaria a partir de R$140,00");
											printf("\nValor da passagem: R$375,00");
											printf("\nPopulacao: Media de 18 949 habitantes");
										break;
										case 2:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Bom Jardim da Serra");
											printf("\nPrincipais atracoes: Canion das Laranjeiras, Canion do Funil, Mirante da Serra do Rio do Rastro, Cascata da Barrinha, Mirante Canion da Ronda, Parque Nacional de Sao Joaquim.");
											printf("\nPrincipais acomodacoes: \nRecanto Lampiao - Diaria a partir de R$538,00 \nRio do Rastro Eco Resort - Diaria a partir de R$2.222,00 \nHotel Fazenda Boutique Terra do Gelo - Diaria a partir de R$562,00");
											printf("\nValor da passagem: R$587,00");
											printf("\nPopulacao: Media de 4 743 habitantes ");
										break;
										case 3:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Palhoca");
											printf("\nPrincipais atracoes: Morro do Cambirela, Praia da Pinheira, Parque Estadual da Serra do Tabuleiro, Vale da Utopia, Praia do Sonho, Praia do Maco.");
											printf("\nPrincipais acomodacoes: \nFirenze Business e Hotel - Diaria a partir de R$199,00 \nPousada Capricornio - Diaria a partir de R$160,00 \nMoradas Dona Dalcema - Diaria a partir de R$301,00");
											printf("\nValor da passagem: R$657,00");
											printf("\nPopulacao: Media de 175 272 habitantes");
										break;
										case 4:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Bom Retiro");
											printf("\nPrincipais atracoes: Morro da Boa Vista, Vinicola Thera, Morro do Costao do Frade, Cachoeira do Barbaqua.");
											printf("\nPrincipais acomodacoes: \nPousada Trinca Ferro - Diaria a partir de R$1.309,00 \nSaulo Hotel - Diaria a partir de R$82,00 \nPousada Rural Cascata do Avencal - Diaria a partir de R$250,00");
											printf("\nValor da passagem: R$657,00");
											printf("\nPopulacao: Media de 8 942 habitantes ");
										break;
										case 5:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Sao Joaquim");
											printf("\nPrincipais atracoes: Pedra Furada, Rio do Rastro, Vinicola Leone di Venezia, Villa Francioni, Villaggio Bassetti, Vinicola D'alture.");
											printf("\nPrincipais acomodacoes: \nIncomol Park Hotel - Diaria a partir de R$189,00 \nPousada Agua Santa - Diaria a partir de R$381,00 \nPousada Boa Vista - Diaria a partir de R$75,00");
											printf("\nValor da passagem: R$592,00");
											printf("\nPopulacao: Media de 27 139 habitantes");
										break;
										default:
											printf("Cidade invalida.");
									}
								break;
								case 3: 
									printf("Preferencia turistica escolhida: Neve");
									printf("\n\nAqui esta alguns destinos recomendados. Escolha 1 para mais informacoes:\n1= Sao Joaquim - Santa Catarina\n2= Urupema - Santa Catarina\n3= Urubici - Santa Catarina\n4= Bom Jardim da Serra - Santa Catarina\n5= Gramado - Rio Grande do Sul\n");
									scanf("%d",&cidade);
									//O usuario escolheu neve. Logo, mostrar� as informa��es do destino escolhido. (Cada case � uma cidade)
									switch (cidade)
									{
										case 1:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Sao Joaquim");
											printf("\nPrincipais atracoes: Villa Francioni, Vinhedos do Monte Agudo, Vinicola Leone di Venezia, Snow Valley, Igreja Matriz de Sao Joaquim.");
											printf("\nPrincipais acomodacoes: \nApartamento Santa Ana - Diaria a partir de R$528,00 \nPousada Agua Santa - Diaria a partir de R$381,00 \nPousada Boa Vista - Diaria a partir de R$150,00");
											printf("\nValor da passagem: R$263,00");
											printf("\nPopulacao: Media de 27 139 habitantes.");
										break;
										case 2:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Urupema");
											printf("\nPrincipais atracoes: Morro das Antenas, Caroline Gentilin, Cascata que congela Fiero, Praca Municipal Manoel Pinto de Arruda, Rodrigo von Muhlen, Igreja Matriz de Santana e Tostao Abrantes.");
											printf("\nPrincipais acomodacoes: \nCHALES VALE DAS ARAUCARIAS - Diaria a partir de R$250,00 \nCasa de Campo Passo do Tatu - Diaria a partir de R$200,00");
											printf("\nValor da passagem: R$158,00");
											printf("\nPopulacao: Media de 2 459 habitantes.");
										break;
										case 3:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Urubici");
											printf("\nPrincipais atracoes: Mirante Urubici, Caverna Rio dos Bugres, Vale dos Sonhos, Rancho da Montanha Urubici e Inscricoes Rupestres.");
											printf("\nPrincipais acomodacoes: \nPousada Central - Diaria a partir de R$200,00 \nVale da Geada - Diaria a partir de R$220,00 \nPousada Figueredo - Diaria a partir de R$250,00");
											printf("\nValor da passagem: R$333,00");
											printf("\nPopulacao: Media de 11 273 habitantes.");
										break;
										case 4:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Bom Jardim da Serra");
											printf("\nPrincipais atracoes: Mirante da Serra do Rio do Rastro, Canion das Laranjeiras, Cascata da Barrinha, Parque Eolico de Bom Jardim da Serra, Igreja de Nossa Senhora do Perpetuo Socorro.");
											printf("\nPrincipais acomodacoes: \nRio do Rastro Eco Resort - Diaria a partir de R$ 1.944,00 \nPousada Charme da Serra - Diaria a partir de R$260,00 \nFazenda Santa Rita Turismo Rural - Diaria a partir de R$359,45");
											printf("\nValor da passagem: R$597,00");
											printf("\nPopulacao: Media de 4 772  habitantes.");
										break;
										case 5:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Gramado");
											printf("\nPrincipais atracoes: Rua Coberta, Igreja Matriz Sao Pedro, Lago Negro, Mirante Vale do Quilombo e Rua Torta.");
											printf("\nPrincipais acomodacoes: \nHotel Sky Gramado - Diaria a partir de R$287,50 \nSky Palace Hotel - Diaria a partir de R$218,50 \nSky Premium Hotel Gramado - Diaria a partir de R$310,50");
											printf("\nValor da passagem: R$1.017");
											printf("\nPopulacao: Media de 36 555 habitantes.");
										break;
										default:
											printf("Cidade invalida.");
									}
								break;
								case 4: 
									printf("Preferencia turistica escolhida: Gastronomia");
									printf("\n\nAqui esta alguns destinos recomendados. Escolha 1 para mais informacoes:\n1= Guaraquecaba - Parana\n2= Toledo - Parana\n3= Florianopolis - Santa Catarina\n4= Gramado - Rio Grande do Sul\n5= Cacapava do Sul - Rio Grande do Sul\n");
									scanf("%d",&cidade);
									//O usuario escolheu gastronomia. Logo, mostrar� as informa��es do destino escolhido. (Cada case � uma cidade)
									switch (cidade)
									{
										case 1:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Guraquecaba");
											printf("\nPrincipais atracoes: Reserva Natural Salto Morato, Ilha do Superagui, Parque Nacional do Superagui, Praia deserta, Atlantic Florest Biosphere Reserve, reserva ecologica do Sebui, serra do Tromomo.");
											printf("\nPrincipais acomodacoes: \nPousada Serena Superagui - Diaria a partir de R$226,00 \nPousada Paraiso - Diaria a partir de R$114,00 \nPousada do Bigua - Diaria a partir de R$126,00");
											printf("\nValor da passagem: R$477,00");
											printf("\nPopulacao: Media de 7 594 de habitantes.");
										break;
										case 2:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Toledo");
											printf("\nPrincipais atracoes: Lago municipal de Toledo, Museu Historico Willy Barth, Parque Ecologico Diva Paim Barth, Parque Tematico das Aguas, Vinicola Dezem, Parque do Povo.");
											printf("\nPrincipais acomodacoes: \nHotel Maestro Executive - Diaria a partir de R$161,00 \nNayru Hotel - Diaria a partir de R$138,00 \nVila Verde Hotel - Diaria a partir de R$140,00");
											printf("\nValor da passagem: R$421,00");
											printf("\nPopulacao: Media de 142 645 de habitantes.");
										break;
										case 3:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Florianopolis");
											printf("\nPrincipais atracoes: Praia Mole, Ilha do Campeche, Praia da Joaquina,  ponte Hercilio Luz, praia brava, praia galheta.");
											printf("\nPrincipais acomodacoes: \nMajestic Palace Hotel - Diaria a partir de R$300,00 \nHotel Porto da Ilha - Diaria a partir de R$193,00 \nII Campanario Villaggio Resort - Diaria a partir de R$400,00");
											printf("\nValor da passagem: R$657,00");
											printf("\nPopulacao: Media de 508 826 de habitantes.");
										break;
										case 4:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Gramado");
											printf("\nPrincipais atracoes: Cascata do Caracol, Mini Mundo, Mundo a Vapor, Dreamland Museu de Cera, GramadoZoo, Parque Terra Magica Florybal.");
											printf("\nPrincipais acomodacoes: \nHotel Recanto da Serra R$848,00 \nAlpestre - Diaria a partir de R$578,00 \nMaster Premium Gramado - Diaria a partir de R$651,00");
											printf("\nValor da passagem: R$700,00");
											printf("\nPopulacao: Media de 36 555 de habitantes.");
										break;
										case 5:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Cacapava do Sul");
											printf("\nPrincipais atracoes: Minas do Camaqua, Cascata do Salso, Forte Dom Pedro II, Museu Lanceiros do Sul, Guaritas, Bar do Gole, Emporio Prosperato, Espaco Mercado Cultural.");
											printf("\nPrincipais acomodacoes: \nCyro Palace Hotel - Diaria a partir de R$177,00 \nPousada Vila do Segredo - Diaria a partir de R$399,00 \nResidencial Terracota - Diaria a partir de R$143,43");
											printf("\nValor da passagem: R$676,00");
											printf("\nPopulacao: Media de 33 548 de habitantes");
										break;
										default:
											printf("Cidade invalida.");
									}
								break;
								default:
									printf("Preferencia turistica invalida");
							}
						break;
						default:
							printf("Regiao invalida");
					}
				break;
				default:
					printf("Finalidade de viagem invalida");
			}
			break;
		case 2: 
			printf("Destino escolhido: internacional\n");
			printf("\nQual a finalidade de sua viagem:\n1- Negocios\n2- Lazer\n");
			scanf("%d",&finalidade);
			//Para quando o usu�rio decidir se sua finalidade ser� neg�cios ou lazer. O destino ser� internacional.
			switch (finalidade)
			{
				case 1: 
					printf("Finalidade de viagem escolhida: Negocios");
					printf("\n\nEscolha seu continente de preferencia: \n1- America\n2- Europa\n3- Asia\n4- Africa\n5- Oceania\n");
					scanf("%d",&continente);
					//O usuario escolheu a finalidade neg�cios. Logo, de acordo com o continente escolhido mostrar� alguns destinos para o usu�rio.
					switch (continente)
					{
						case 1:
							printf("Continente escolhido: America");
							printf("\n\nAqui esta alguns destinos recomendados. Escolha 1 para mais informacoes:\n1= Nova Iorque - EUA\n2= Los Angeles - EUA\n3= Chicago - EUA\n4= Cidade do Mexico - Mexico\n5= San Frascisco - EUA\n");
							scanf("%d",&cidade);
							//O usuario ir� escolher seu destino, ent�o mostrar� as informa��es do mesmo. (Cada case � uma cidade)
							switch (cidade)
							{
								case 1:
									printf("\nAqui esta algumas informacoes da cidade escolhida.");
									printf("\nCidade: Nova Iorque");
									printf("\nPrincipais atracoes: Central Park, Metropolitan Museum of Art, The Museum of Modern Art, Estatua da Liberdade, Empire State Building e Times Square.");
									printf("\nPrincipais acomodacoes: \nInterContinental New York Times Square - Diaria a partir de R$1310,00 \nHoliday Inn Manhattan-Financial District - Diaria a partir de R$595,00 \nHotel Riu Plaza New York Times square - Diaria a partir de R$845,00");
									printf("\nValor da passagem: R$3.573,00");
									printf("\nPopulacao: Media de 8,419 milhoes de habitantes");
								break;
								case 2:
									printf("\nAqui esta algumas informacoes da cidade escolhida.");
									printf("\nCidade: Los Angeles");
									printf("\nPrincipais atracoes: Disneyland, Getty Center, Museu de Arte do Codade de Los Angeles, Universal Studios Hollywood, Santa Monica Pier e Observatorio Griffith.");
									printf("\nPrincipais acomodacoes: \nInterContinental Los Angeles Downtown - Diaria a partir de R$1205,00 \nHotel Indigo Los Angeles Downtown - Diaria a partir de R$908,00 \nOmni Los Angeles Hotel at California plaza - Diaria a partir de R$1037,00");
									printf("\nValor da passagem: R$3.214,00");
									printf("\nPopulacao: Media de 3,967 milhoes de habitantes");
								break;
								case 3:
									printf("\nAqui esta algumas informacoes da cidade escolhida.");
									printf("\nCidade: Chicago");
									printf("\nPrincipais atracoes: Art Institute of Chicago, Museu Field de Historia Natural, Cais Naval, Millennium Park, Aquario de Shedd e Museum of Science and Industry.");
									printf("\nPrincipais acomodacoes: \nHyatt Chicago Magnificent Mile - Diaria a partir de R$964,00 \nLoews Hotel Chicago - Diaria a partir de R$1047,00 \nThe Loop Chicago - Diaria a partir de R$697,00");
									printf("\nValor da passagem: R$7.484,00");
									printf("\nPopulacao: Media de 2,71 milhoes de habitantes");
								break;
								case 4:
									printf("\nAqui esta algumas informacoes da cidade escolhida.");
									printf("\nCidade: Cidade do Mexico");
									printf("\nPrincipais atracoes: Museu Nacional de Antropologia, Museu Frida Kahlo, Palacio de Bellas Artes, Templo Mayor, Chapultepec e Catedral Metropolitana da Cidade do Mexico.");
									printf("\nPrincipais acomodacoes: \nHoliday Inn Express Mexico Santa Fe - Diaria a partir de R$261,00 \nHoliday Inn Express Mexico, Toreo - Diaria a partir de R$229,00 \nHoliday Inn Hotel & Suites Mexico Zona Rosa - Diaria a partir de R$251,00");
									printf("\nValor da passagem: R$5.814,00");
									printf("\nPopulacao: Media de 675 218 habitantes");
								break;
								case 5:
									printf("\nAqui esta algumas informacoes da cidade escolhida.");
									printf("\nCidade: San Francisco");
									printf("\nPrincipais atracoes: Ponte Golden Gate, Prisao federal de Alcatraz, Golden Gate Park, Museu de Arte Moderna de Sao Francisco, California Academy of Sciences e Exploratorium.");
									printf("\nPrincipais acomodacoes: \nInterContinental San Francisco - Diaria a partir de R$1060,00 \nHoliday Inn Express & Suites Orlando - Diaria a partir de R$944,00 \nHI San Francisco Downtown - Diaria a partir de R$394,00");
									printf("\nValor da passagem: R$3.005,00");
									printf("\nPopulacao: Media de 874 961 habitantes");
								break;
								default:
									printf("Cidade invalida.");
							}
						break;
						case 2:
							printf("Continente escolhido: Europa");
							printf("\n\nAqui esta alguns destinos recomendados. Escolha 1 para mais informacoes:\n1= Berlim - Alemanha\n2= Moscou - Russia\n3= Madri - Espanha\n4= Paris - Franca\n5= Londres - Inglaterra\n");
							scanf("%d",&cidade);
							//O usuario ir� escolher seu destino, ent�o mostrar� as informa��es do mesmo. (Cada case � uma cidade)
							switch (cidade)
							{
								case 1:
									printf("\nAqui esta algumas informacoes da cidade escolhida.");
									printf("\nCidade: Berlim");
									printf("\nPrincipais atracoes: Torre de TV, Kaiser-Wilhelm-Gedachtniskirche Memorial Church, Ponte Oberbaumbrucke, Niemeyer no bairro de Hansaviertel, BecoHaus Schwarzenberg, Berghain.");
									printf("\nPrincipais acomodacoes: \nH2 Hotel Berlin-Alexanderplatz - Diaria a partir de R$500,00 \nAdlon - Diaria a partir de R$1.600,00 \nBerlin Das Stue - Diaria a partir de R$1.500,00");
									printf("\nValor da passagem: R$3.900,00");
									printf("\nPopulacao: Media de 3,6 milhoes de habitantes.");
								break;
								case 2:
									printf("\nAqui esta algumas informacoes da cidade escolhida.");
									printf("\nCidade: Moscou");
									printf("\nPrincipais atracoes: A Praca Vermelha, Catedral de Sao Basilio, Kremlin de Moscou, Mausoleu de Lenin, Museu Historico do Estado.");
									printf("\nPrincipais acomodacoes: \nHotel Leningrado - Diaria a partir de R$319,00 \nNovotel Moscow City - Diaria a partir de R$344,00");
									printf("\nValor da passagem: R$5900,00");
									printf("\nPopulacao: 12 milhoes de habitantes.");
								break;
								case 3:
									printf("\nAqui esta algumas informacoes da cidade escolhida.");
									printf("\nCidade: Madri");
									printf("\nPrincipais atracoes: Puerta del Sol, Plaza Mayor, Parque El Retiro, Puerta del Alcala, Museus.");
									printf("\nPrincipais acomodacoes: \nFrancisco I - Diaria a partir de R$411,00 \nHotel Regina - Diaria a partir de R$468,00 \nSanto Domingo - Diaria a partir de R$419,00");
									printf("\nValor da passagem: R$3199,00");
									printf("\nPopulacao: Media de 3,3 milhoes habitantes.");
								break;
								case 4:
									printf("\nAqui esta algumas informacoes da cidade escolhida.");
									printf("\nCidade: Paris");
									printf("\nPrincipais atracoes: Champs-Elysees, Torre Eiffel, Jardim de Luxemburgo, Cemiterio do Pere-Lachais.");
									printf("\nPrincipais acomodacoes: \nAvenir Hotel Paris - Diaria a partir de R$600,00 \nIbis Budget Paris Porte De Montmartre - Diaria a partir de R$500,00 \nMary's Hotel Paris - Diaria a partir de R$310,00");
									printf("\nValor da passagem: R$3100,00");
									printf("\nPopulacao: Media de 2,2 milhoes de habitantes.");
								break;
								case 5:
									printf("\nAqui esta algumas informacoes da cidade escolhida.");
									printf("\nCidade: Londres");
									printf("\nPrincipais atracoes: Big Ben, London Eye, Castelo de Windsor, Observatorio Real de Greenwich.");
									printf("\nPrincipais acomodacoes: \nLondon Hause - Diaria a partir de R$39,00 \nSmart Hyde Park - Diaria a partir de R$159,00 \nIbis Styles - Diaria a partir de R$308,00");
									printf("\nValor da passagem: R$3300,00");
									printf("\nPopulacao: Media de 9 milhoes habitantes.");
								break;
								default:
									printf("Cidade invalida.");
							}
						break;
						case 3:
							printf("Continente escolhido: Asia");
							printf("\n\nAqui esta alguns destinos recomendados. Escolha 1 para mais informacoes:\n1= Hong Kong - China\n2= Toquio - Japao\n3= Chiang Mai - Tailandia\n4= Seul - Coreia do Sul\n5= Mumbai - India\n");
							scanf("%d",&cidade);
							//O usuario ir� escolher seu destino, ent�o mostrar� as informa��es do mesmo. (Cada case � uma cidade)
							switch (cidade)
							{
								case 1:
									printf("\nAqui esta algumas informacoes da cidade escolhida.");
									printf("\nCidade: Hong Kong");
									printf("\nPrincipais atracoes: Grande Buda ou Tian Tan Buddha, Victoria Peak, Star Ferry,Lantau island e Happy Valley Racecourse");
									printf("\nPrincipais acomodacoes: \nThe Kowloon Hotel - Diaria a partir de R$236,00 \nThe Hari Hong Kong - Diaria a partir de R$579,00 \nK11 ARTUS - Diaria a partir de R$2.602,00");
									printf("\nValor da passagem: R$3.227,00");
									printf("\nPopulacao: Media de 7,95 milhoes de habitantes");
								break;
								case 2:
									printf("\nAqui esta algumas informacoes da cidade escolhida.");
									printf("\nCidade: Toquio");
									printf("\nPrincipais atracoes: Parque Ueno, Tokyo Dome, Museu Nacional de Toquio.");
									printf("\nPrincipais acomodacoes: \nCondominium Shibuya GOTEN - Diaria a partir de R$1.066,00 \nAkari Ueno Iriya - Diaria a partir de R$502,00 \nHotel Nihonbashi Saibo - Diaria a partir de R$266,00");
									printf("\nValor da passagem: R$2.392,00");
									printf("\nPopulacao: Media de 9,262 milhoes habitantes");
								break;
								case 3:
									printf("\nAqui esta algumas informacoes da cidade escolhida.");
									printf("\nCidade: Chiang Mai");
									printf("\nPrincipais atracoes: Templos de Chiang Mai, Almsgiving e conversa com monges, Mercados de Chiang Mai e Luta de Muay Tha");
									printf("\nPrincipais acomodacoes: \nFlora Creek Chiang Mai - Diaria a partir de R$429,00 \nChantra Khiri Chalet - Diaria a partir de R$1.163,00 \nWiang Chang Klan - Diaria a partir de R$476,00");
									printf("\nValor da passagem: R$7.312");
									printf("\nPopulacao: Media de 1,6 milhoes de habitantes");
								break;
								case 4:
									printf("\nAqui esta algumas informacoes da cidade escolhida.");
									printf("\nCidade: Seul");
									printf("\nPrincipais atracoes: Aldeia Hanok de Bukchon, Changdeokgung, Myeongdong");
									printf("\nPrincipais acomodacoes: \nHotel 8 Hours - Diaria a partir de R$186,00 \nCoups Hotel - Diaria a partir de R$215,00 \nIbis Styles Ambassador Seoul Myeong-dong - Diaria a partir de R$214,00");
									printf("\nValor da passagem: R$1.902,00");
									printf("\nPopulacao: Media de 9,734 milhoes de habitantes");
								break;
								case 5:
									printf("\nAqui esta algumas informacoes da cidade escolhida.");
									printf("\nCidade: Mumbai");
									printf("\nPrincipais atracoes: Marine Drive, Bandra-Worli Sea Link, Gateway of India, Kanheri Caves, Global Vipassana Pagoda.");
									printf("\nPrincipais acomodacoes: \nHotel Bawa Regency - Diaria a partir de R$176,00 \nHotel Bawa International - Diaria a partir de R$176,00 \nTreebo Trend Olive Nest - Diaria a partir de R$125,00");
									printf("\nValor da passagem: R$3.111,00");
									printf("\nPopulacao: Media de 12,4 milhoes de habitantes");
								break;
								default:
									printf("Cidade invalida.");
							}
						break;
						case 4:
							printf("Continente escolhido: Africa");
							printf("\n\nAqui esta alguns destinos recomendados. Escolha 1 para mais informacoes:\n1= Lagos - Nigeria\n2= Kinshasa - Republica Democratica do Congo\n3= Luanda - Angola\n4= Addis Abada - Etiopia\n5= Cidade do Cabo - Africa do Sul\n");
							scanf("%d",&cidade);
							//O usuario ir� escolher seu destino, ent�o mostrar� as informa��es do mesmo. (Cada case � uma cidade)
							switch (cidade)
							{
								case 1:
									printf("\nAqui esta algumas informacoes da cidade escolhida.");
									printf("\nCidade: Lagos");
									printf("\nPrincipais atracoes: Lekki Conservation Centre, Dreamworld Africana, Vivid Exclusive Art Gallery.");
									printf("\nPrincipais acomodacoes: \nLagos Continente Hotel - Diaria a partir de R$198,00 \nEko Hotel & Suites - Diaria a partir de R$167,00 \nThe George Hotel - Diaria a partir de R$380,00");
									printf("\nValor da passagem: R$7.500,00");
									printf("\nPopulacao: Media de 23 milhoes de habitantes.");
								break;
								case 2:
									printf("\nAqui esta algumas informacoes da cidade escolhida.");
									printf("\nCidade: Kinshasa");
									printf("\nPrincipais atracoes: Congo River, Parc de la Vall�e de la Nsele, Serpents du Congo.");
									printf("\nPrincipais acomodacoes: \nHotel Royal - Diaria a partir de $110,00 \nHotel Selton - Diaria a partir de R$138,00 \nBeatrice Hotel - Diaria a partir de R$124,00");
									printf("\nValor da passagem: R$13.000,00");
									printf("\nPopulacao: Media de 17,07 milhoes de habitantes");
								break;
								case 3:
									printf("\nAqui esta algumas informacoes da cidade escolhida.");
									printf("\nCidade: Luanda");
									printf("\nPrincipais atracoes: Miradouro da Lua, Ilha do Mussulo, Sangano Beach, Mausoleum of Agostinho Neto.");
									printf("\nPrincipais acomodacoes: \nEpic Sana - Diaria a partir de R$390,00 \nHotel Tropico - Diaria a partir de R$381,00 \nHotel Baia - Diaria a partir de R$336,00");
									printf("\nValor da passagem: R$7.617,00");
									printf("\nPopulacao: Media de 2,572 milhoes habitantes");
								break;
								case 4:
									printf("\nAqui esta algumas informacoes da cidade escolhida.");
									printf("\nCidade: Addis Abada");
									printf("\nPrincipais atracoes: Addis Mercato, Mount Entoto, National Museum of Ethiopia, Red Terror Martyrs Memorial Museum, Holy Trinity Cathedral");
									printf("\nPrincipais acomodacoes: \nHotel Lobeia - Diaria a partir de R$189,00 \nGolden Tulip - Diaria a partir de R$494,00 \nSapphire Addis - Diaria a partir de R$331,00");
									printf("\nValor da passagem: R$9.350,00");
									printf("\nPopulacao: Media de 3 milhoes de habitantes.");
								break;
								case 5:
									printf("\nAqui esta algumas informacoes da cidade escolhida.");
									printf("\nCidade: Cidade do Cabo");
									printf("\nPrincipais atracoes: Table Mountain, Lions Head, Camps Bay, Woodstock, Bo-Kaap.");
									printf("\nPrincipais acomodacoes: \nPresident Hotel - Diaria a partir de R$288,00 \nRadisson Blu - Diaria a partir de R$556,00");
									printf("\nValor da passagem: $3.600,00");
									printf("\nPopulacao: Media de 4 milhoes de habitantes");
								break;
								default:
									printf("Cidade invalida.");
							}
						break;
						case 5:
							printf("Continente escolhido: Oceania");
							printf("\n\nAqui esta alguns destinos recomendados. Escolha 1 para mais informacoes:\n1= Cairns - Australia\n2= Queenstown - Nova Zelandia\n3= Viti Levu - Fiji\n4= Motu Lahi - Tonga\n5= Melbourne - Australia\n");
							scanf("%d",&cidade);
							//O usuario ir� escolher seu destino, ent�o mostrar� as informa��es do mesmo. (Cada case � uma cidade)
							switch (cidade)
							{
								case 1:
									printf("\nAqui esta algumas informacoes da cidade escolhida.");
									printf("\nCidade: Cairns");
									printf("\nPrincipais atracoes: Cairns Esplanade Lagoon, Cairns Botanic Gardens, Cairns Aquarium, Esplanade Boardwalk, Kuranda Scenic Railway.");
									printf("\nPrincipais acomodacoes: \nIbis Styles Cairns - Diaria a partir de R$539,00 \nCairns Queens Court - Diaria a partir de R$390,00 \nComfort Inn Cairns City - Diaria a partir de R$498,00");
									printf("\nValor da passagem: R$9.253,00");
									printf("\nPopulacao: Media de 150 920 habitantes");
								break;
								case 2:
									printf("\nAqui esta algumas informacoes da cidade escolhida.");
									printf("\nCidade: Queenstown");
									printf("\nPrincipais atracoes: Queenstown Hill, Lake Wakatipu, Kiwi Birdlife Park, Queenstown Gardens, Ben Lomond Track.");
									printf("\nPrincipais acomodacoes: \nQueens Casino and Hotel - Diaria a partir de R$480,00 \nMadeira Bed - Diaria a partir de R$240,00 \nKomani Resorts - Diaria a partir de R$425,00");
									printf("\nValor da passagem: R$6.816,00");
									printf("\nPopulacao: Media de 20 mil habitantes");
								break;
								case 3:
									printf("\nAqui esta algumas informacoes da cidade escolhida.");
									printf("\nCidade: Viti Levu");
									printf("\nPrincipais atracoes: Port Denarau Marina, Garden of the Sleeping Giant, Fiji Airways Premier Lounge, Big Bula Water Park.");
									printf("\nPrincipais acomodacoes: \nRamada Suites By Wyndham Wailoaloa Beach Fiji - Diaria a partir de R$106,00 \nWellesley Resort Fiji - Diaria a partir de R$596,00 \nGrand Pacific Hotel - Diaria a partir de R$988,00");
									printf("\nValor da passagem: R$11.019,00");
									printf("\nPopulacao: Media de 600 mil habitantes");
								break;
								case 4:
									printf("\nAqui esta algumas informacoes da cidade escolhida.");
									printf("\nCidade: Motu Lahi");
									printf("\nPrincipais atracoes: Matira Beach, Mount Otemanu, Bora Bora Lagoonarium, Bora Bora Turtle Centre.");
									printf("\nPrincipais acomodacoes: \nLe Fare Bleu - Diaria a partir de R$501,00 \nHotel Kia Ora Resort & Spa - Diaria a partir de R$2.515,00 \nLe Coconut Lodge - Diaria a partir de R$3.657,00");
									printf("\nValor da passagem: R$2.469,00");
								break;
								case 5:
									printf("\nAqui esta algumas informacoes da cidade escolhida.");
									printf("\nCidade: Melbourne");
									printf("\nPrincipais atracoes: Jardim Botanico Real de Melbourne, Melbourne Cricket Ground (MCG) Galeria Nacional de Victoria, ArtVo, Eureka Skydeck 88.");
									printf("\nPrincipais acomodacoes: \nBest Western Melbourne City - Diaria a partir de R$314,00 \nJasper Boutique Hotel - Diaria a partir de R$316,00 \nOaks Melbourne Southbank Suites - Diaria a partir de R$508,00");
									printf("\nValor da passagem: R$6.318,00 ");
									printf("\nPopulacao: Media de 3,995 milhoes de habitantes");
								break;
								default:
									printf("Cidade invalida.");
							}
						break;
						default:
							printf("Continente invalido");
					}
				break;
				case 2: 
					printf("Finalidade de destino escolhido: Lazer");
					printf("\n\nEscolha seu continente de preferencia: \n1- America\n2- Europa\n3- Asia\n4- Africa\n5- Oceania\n");
					scanf("%d",&continente);
					//O usuario escolheu a finalidade lazer. Logo, de acordo com o continente escolhido ir� escolher a preferencia turistica.
					switch (continente)
					{
						case 1:
							printf("Continente escolhido: America");
							printf("\n\nQual sua preferencia turistica:\n1- Praia\n2- Montanha\n3- Neve\n4- Gastronomia\n");
							scanf("%d",&preferencia);
							//O usuario escolheu o continente Am�rica. Logo, escolher� sua preferencia turistica.
							switch (preferencia)
							{
								case 1: 
									printf("Preferencia turistica escolhida: Praia");
									printf("\n\nAqui esta alguns destinos recomendados. Escolha 1 para mais informacoes:\n1= Oregon - Estados Unidos\n2= Cancun - Mexico\n3= Negril - Jamaica\n4= Cabo Polonio - Uruguai\n5= Mar del Plata - Argentina\n");
									scanf("%d",&cidade);
									//O usuario escolheu praia. Logo, mostrar� as informa��es do destino escolhido. (Cada case � uma cidade)
									switch (cidade)
									{
										case 1:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Oregon");
											printf("\nPrincipais atracoes: Haystack Rock, Devils Punchbowl State Natural Area, Seaside Beach, Cannon Beach, Nye Beach");
											printf("\nPrincipais acomodacoes: \nOYO Waves Hotel Newport OR, NYE Beach - Diaria a partir de R$1.228,00 \nCoast River Inn by OYO Seaside - Diaria a partir de R$1.061,00 \nThe Hotel Zags Portland - Diaria a partir de R$905,00");
											printf("\nValor da passagem: R$4.189,00");
											printf("\nPopulacao: Media de 4 218 habitantes.");
										break;
										case 2:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Cancun");
											printf("\nPrincipais atracoes: Playa Delfines, Playa Tortugas, Playa Langosta, Praia Punta Cancun, Playa Chac Mool.");
											printf("\nPrincipais acomodacoes: \nEco-hotel El Rey del Caribe - Diaria a partir de R$758,00 \nExtended Suites Cancun Cumbres - Diaria a partir de R$366,00 \nHotel Batab - Diaria a partir de R$247,00");
											printf("\nValor da passagem: R$4.669,00");
											printf("\nPopulacao: Media de 888 797 habitantes.");
										break;
										case 3:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Negril");
											printf("\nPrincipais atracoes: Seven Mile Beach, Bloody Bay, Half Moon Beach, Long Bay, Beach Park, Seven Mile Beach");
											printf("\nPrincipais acomodacoes: \nThe Westender Inn - Diaria a partir de R$516,00 \nAzul Beach Resort NegrilGourmet All Inclusive by Karisma - Diaria a partir de R$2.456,00 \nTravellers Beach Resort - Diaria a partir de R$434,00");
											printf("\nValor da passagem: R$7.755,00 ");
											printf("\nPopulacao: Media de 6,9 mil habitantes.");
										break;
										case 4:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Cabo Polonio");
											printf("\nPrincipais atracoes: La Paloma, La Pedrera, Punta del Diablo,Andar Pelo Pueblo Historico, Caminhar por seu centrinho, hostels, bares e lojinhas");
											printf("\nPrincipais acomodacoes: \nViejo Lobo - Diaria a partir de R$45,00 \nPuertas al Cabo - Diaria a partir de R$185,00 \nLobo Hostel Bar - Diaria a partir de R$42,00");
											printf("\nValor da passagem: R$8.016,00");
											printf("\nPopulacao: Media de 286 314 habitantes.");
										break;
										case 5:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Mar del plata");
											printf("\nPrincipais atracoes: Playa Varese, Punta Mogotes, Playa Grande, Playas de Chapadmalal, La Perla, Playa Escondida.");
											printf("\nPrincipais acomodacoes: \nHotel Traful - Diaria a partir de R$146,00 \nPrince Hotel - Diaria a partir de R$140,00 \nCabanas Sol de Abril Bosque Peralta Ramos - Diaria a partir de R$310,00");
											printf("\nValor da passagem: R$2.276,00");
											printf("\nPopulacao: Media de 616 142 habitantes");
										break;
										default:
											printf("Cidade invalida.");
									}
								break;
								case 2: 
									printf("Preferencia turistica escolhida: Montanha");
									printf("\n\nAqui esta alguns destinos recomendados. Escolha 1 para mais informacoes:\n1= El Chalten - Argentina\n2= Machu Picchu - Peru\n3= Huaraz - Peru\n4= La Paz - Bolivia\n5= Merida - Venezuela\n");
									scanf("%d",&cidade);
									//O usuario escolheu montanha. Logo, mostrar� as informa��es do destino escolhido. (Cada case � uma cidade)
									switch (cidade)
									{
										case 1:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: El Chalten");
											printf("\nPrincipais atracoes: Fitz Roy, Cerro Torre.");
											printf("\nPrincipais acomodacoes: \nRancho Grande - Diaria a partir de R$152,00 \nAndino Aparts - El Chalten - Diaria a partir de R$217,00 \nPosada y Cabanas El Barranco - Diaria a partir de R$278,00 ");
											printf("\nValor da passagem: R$3.160,00");
											printf("\nPopulacao: Media de 1 627 habitantes.");
										break;
										case 2:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Machu Picchu");
											printf("\nPrincipais atracoes: Machu Picchu, Mandor, Huayna Picchu, Mariposario de Machupicchu, Hot Springs.");
											printf("\nPrincipais acomodacoes: \nHatun Inti Boutique Machupicchu - Diaria a partir de R$502,00 \nHotel La Cabana MachuPicchu - Diaria a partir de R$400,00 \nHotel Retama Machupicchu - Diaria a partir de R$280,00");
											printf("\nValor da passagem: R$1.506,00");
											printf("\nPopulacao: Media de 1000 pessoas.");
										break;
										case 3:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Huaraz");
											printf("\nPrincipais atracoes: Monte Huascaran, Iglesia Del Senor De La Soledad, Regional Museum of Ancash, Inkaland Treks, Rataquenua.");
											printf("\nPrincipais acomodacoes: \nChurup Boutique Huaraz - Diaria a partir de R$180,00 \nSanta Cruz - Diaria a partir de R$206,00 \nHotel Morales - Diaria a partir de R$313,00");
											printf("\nValor da passagem: R$3.244,00");
											printf("\nPopulacao: Media de 118 836 habitantes.");
										break;
										case 4:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: La Paz");
											printf("\nPrincipais atracoes: Illimani, The Witches Market, Valle de la Luna, Praca Murillo, Igreja e Convento de Sao Francisco.");
											printf("\nPrincipais acomodacoes: \nHotel Suites Camino Real - Diaria a partir de R$495,00 \nHotel Sagarnaga - Diaria a partir de R$124,00 \nStannum Boutique Hotel & Spa - Diaria a partir de R$524,00");
											printf("\nValor da passagem: R$4.747,00");
											printf("\nPopulacao: Media de 766 468 habitantes.");
										break;
										case 5:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Merida");
											printf("\nPrincipais atracoes: Pico Bolivar, Chorros de Milla Zoo, Mukumbari Merida Cable Car System, Cathedral of Merida, Jardim Botanico de Merida, Museo de Arte Moderno.");
											printf("\nPrincipais acomodacoes: \nCasas Vacacionales La Cima - Diaria a partir de R$125,00");
											printf("\nValor da passagem: R$3.524,00 ");
											printf("\nPopulacao: Media de 248 410 habitantes");
										break;
										default:
											printf("Cidade invalida.");
									}
								break;
								case 3: 
									printf("Preferencia turistica escolhida: Neve");
									printf("\n\nAqui esta alguns destinos recomendados. Escolha 1 para mais informacoes:\n1= Toronto - Canada\n2= Ottawa - Canada\n3= Montreal - Canada\n4= Quebec - Canada\n5= Winnipeg - Canada\n");
									scanf("%d",&cidade);
									//O usuario escolheu neve. Logo, mostrar� as informa��es do destino escolhido. (Cada case � uma cidade)
									switch (cidade)
									{
										case 1:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Toronto");
											printf("\nPrincipais atracoes: CN Tower, Union Station (Estacao Central), Nathan Phillips Square (Prefeitura de Toronto), Cervejaria Steam Whistle.");
											printf("\nPrincipais acomodacoes: \nFairmont Royal York Gold Experience - Diaria a partir de R$2.589,00 \nThe Hazelton Hotel - Diaria a partir de R$3.801,00 \nThe Ritz-Carlton - Diaria a partir de R$2.488,00");
											printf("\nValor da passagem: R$5.113,00");
											printf("\nPopulacao: Media de 2,731 milhoes de habitantes.");
										break;
										case 2:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Ottawa");
											printf("\nPrincipais atracoes: Parliament Hill (Colina do Parlamento), Rideau Canal, National Gallery of Canada (Galeria Nacional do Canada), Maman (�Aranha de Ottawa�), Peace Tower (Torre da Paz).");
											printf("\nPrincipais acomodacoes: \nFairfield Inn & Suites by Marriott Ottawa Airport - Diaria a partir de R$377,00 \nHomewood Suites By Hilton Ottawa Airport - Diaria a partir de R$621,00 \nHomewood Suites By Hilton Ottawa Kanata - Diaria a partir de R$666,00");
											printf("\nValor da passagem: R$5836.00");
											printf("\nPopulacao: Media de 934 243 habitantes.");
										break;
										case 3:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Montreal");
											printf("\nPrincipais atracoes: Rue Saint Paul Ouest,Catedral de Notre Dame e Place d'Armes, Place Jacques Cartier, Old Port, Marche Bonsecours.");
											printf("\nPrincipais acomodacoes: \nThe Ritz-Carlton, Montreal - Diaria a partir de R$3.306,00 \nBed and Breakfast du Village, BBV - Diaria a partir de R$651,00 \nAlexandre Logan - Diaria a partir de R$1.870,00");
											printf("\nValor da passagem: R$7.690,00");
											printf("\nPopulacao: Media de 4,221 milhoes de habitantes.");
										break;
										case 4:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Quebec");
											printf("\nPrincipais atracoes: Notre-Dame de Quebec Basilica-Cathedral, Musee de l'Amerique francophone, Museum of Civilization, Le Grand Marche, Grande Allee.");
											printf("\nPrincipais acomodacoes: \nN Hotel Quebec - Diaria a partir de R$488,00 \nHotel Ambassadeur Quebec - Diaria a partir de R$581,00 \nHotel Manoir Morgan - Diaria a partir de R$781,00");
											printf("\nValor da passagem: R$6.486,00");
											printf("\nPopulacao: Media de 542 298 habitantes.");
										break;
										case 5:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Winnipeg");
											printf("\nPrincipais atracoes: Canadian Museum for Human Rights, Assiniboine Park Zoo, Assiniboine Park, The Forks Market, Manitoba Museum.");
											printf("\nPrincipais acomodacoes: \nForks - Diaria a partir de R$785,00 \nHumphry Inn & Suites - Diaria a partir de R$548,00 \nFort Garry Hotel - Diaria a partir de R$604,00");
											printf("\nValor da passagem: R$3.331,00");
											printf("\nPopulacao: Media de 705 224 habitantes.");
										break;
										default:
											printf("Cidade invalida.");
									}
								break;
								case 4: 
									printf("Preferencia turistica escolhida: Gastronomia");
									printf("\n\nAqui esta alguns destinos recomendados. Escolha 1 para mais informacoes:\n1= Cidade do Mexico - Mexico\n2= Montevideu - Uruguai\n3= Mendoza - Argentina\n4= Havana - Cuba\n5= Vancouver - Canada\n");
									scanf("%d",&cidade);
									//O usuario escolheu gastronomia. Logo, mostrar� as informa��es do destino escolhido. (Cada case � uma cidade)
									switch (cidade)
									{
										case 1:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Cidade do Mexico");
											printf("\nPrincipais atracoes: Museu Nacional de Antropologia, Museu Frida Kahlo, Palacio de Bellas Artes, Templo Mayor, Chapultepec e Catedral Metropolitana da Cidade do Mexico.");
											printf("\nPrincipais acomodacoes: \nHoliday Inn Express Mexico Santa Fe - Diaria a partir de R$261,00 \nHoliday Inn Express Mexico, Toreo - Diaria a partir de R$229,00 \nHoliday Inn Hotel & Su�tes Mexico Zona Rosa - Diaria a partir de R$251,00");
											printf("\nValor da passagem: R$5.814,00");
											printf("\nPopulacao: Media de 8,855 milhoes de habitantes.");
										break;
										case 2:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Motevideu");
											printf("\nPrincipais atracoes: Palacio Salvo, Pra�a Independencia, Museu Nacional de Artes Visuais, Teatro Solis, Mercado del Puerto e Bodega Bouza.");
											printf("\nPrincipais acomodacoes: \nAlma Historica Boutique Hotel - Diaria a partir de R$684,00 \nHyatt Centric Montevideo - Diaria a partir de R$473,00 \nBIT Design Hotel - Diaria a partir de R$261,00");
											printf("\nValor da passagem: R$2.589,00");
											printf("\nPopulacao: Media de 1,381 milhao de habitantes.");
										break;
										case 3:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Mendoza");
											printf("\nPrincipais atracoes: Parque General San Martin, Plaza Independencia, Cerro de la Gloria, Museo del Area Fundacional, Jardin Zoologico de Mendoza e Caminos del Vino.");
											printf("\nPrincipais acomodacoes: \nAuberge Du Vin, A tribute Portfolio Hotel - Diaria a partir de R$836,00 \nEntre Cielos - Diaria a partir de R$1.526,00 \nSheraton Mendoza - Diaria a partir de R$420,00");
											printf("\nValor da passagem: R$1.621,00");
											printf("\nPopulacao: Media de 1,886 milhoes de habitantes.");
										break;
										case 4:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Havana");
											printf("\nPrincipais atracoes: Malecon, Capitolio Havana, Museu da Revolucao, Castillo del Morro, La Bodeguita del Medio e Catedral de Havana.");
											printf("\nPrincipais acomodacoes: \nLa Rosa de Ortega - Diaria a partir de R$484,00 \nIberostar Parque Central - Diaria a partir de R$692,00 \nBoutique Casa 1932 - Diaria a partir de R$375,00");
											printf("\nValor da passagem: R$1.416,00");
											printf("\nPopulacao: Media de 2,13 milhoes de habitantes.");
										break;
										case 5:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Vancouver");
											printf("\nPrincipais atracoes: Parque de Stanley, Ponte Suspensa de Capilano, Granville Island, Vancouver Aquarium, Montanha Grouse e Galeria de Arte de Vancouver.");
											printf("\nPrincipais acomodacoes: \nBlue Coal Harbour Vancouver Hotel - Diaria a partir de R$851,00 \nResidence Inn by Marriott Vancouver Downtown - Diaria a partir de R$805,00 \nThe Fairmont Waterfront - Diaria a partir de R$1.481,00");
											printf("\nValor da passagem: R$5.311,00");
											printf("\nPopulacao: Media de 675 218 habitantes");
										break;
										default:
											printf("Cidade invalida.");
									}
								break;
								default:
									printf("Preferencia turistica invalida");
							}
						break;
						case 2:
							printf("Continente escolhido: Europa");
							printf("\n\nQual sua preferencia turistica:\n1- Praia\n2- Montanha\n3- Neve\n4- Gastronomia\n");
							scanf("%d",&preferencia);
							//O usuario escolheu o continente Europa. Logo, escolher� sua preferencia turistica.
							switch (preferencia)
							{
								case 1: 
									printf("Preferencia turistica escolhida: Praia");
									printf("\n\nAqui esta alguns destinos recomendados. Escolha 1 para mais informacoes:\n1= Sicilia - Italia\n2= Dorset - Inglaterra\n3= Algarve - Portugal\n4= Formentera - Espanha\n5= Key Biscayne - Franca\n");
									scanf("%d",&cidade);
									//O usuario escolheu praia. Logo, mostrar� as informa��es do destino escolhido. (Cada case � uma cidade)
									switch (cidade)
									{
										case 1:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Sicilia");
											printf("\nPrincipais atracoes: Cala Tonnarella, Palazzo Conte Federic, Mount Etna, Isole dello Stagnone, Sicilia, Ortigia, Ancient Theatre of Taormina.");
											printf("\nPrincipais acomodacoes: \nAddauro Resort - Diaria a partir de R$1.002,00 \nHotel Borgo Pantano - Diaria a partir de R$1.931,00 \nDoric Boutique Hotel - Diaria a partir de R$941,00");
											printf("\nValor da passagem: R$1.416,00");
											printf("\nPopulacao: Media de 5 milhoes de habitantes.");
										break;
										case 2:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Dorset");
											printf("\nPrincipais atracoes: Durdle Door Beach, Bournemouth, Weymouth e a ilha de Portland, Dorchester, Lyme Regis.");
											printf("\nPrincipais acomodacoes: \nCrown Hotel - Diaria a partir de R$872,00 \nHoliday Inn Express Poole, an IHG Hotel - Diaria a partir de R$1.599,00 \nHaven Hotel - Diaria a partir de R$763,00");
											printf("\nValor da passagem: R$2.218,00");
											printf("\nPopulacao: Media de 426 516 habitantes.");
										break;
										case 3:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Algarve");
											printf("\nPrincipais atracoes: Praia de Albandeira, Praia Sao Rafael, Ponta da Piedade, Percurso dos Sete Vales Suspensos, Krazy World Zoo");
											printf("\nPrincipais acomodacoes: \nAlte Hotel - Diaria a partir de R$366,00 \nAlgarve Race Resort Hotel - Diaria a partir de R$971,00 \nHotel Sao Sebastiao de Boliqueime - Diaria a partir de R$551,00");
											printf("\nValor da passagem: R$4.703,00");
											printf("\nPopulacao: Media de 438 864 habitantes");
										break;
										case 4:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Formentera");
											printf("\nPrincipais atracoes: Playa de Migjorn, Praias de Formentera, Farol de la Mola, Parque Natural de Ses Salines, Farol Cap de Barbaria.");
											printf("\nPrincipais acomodacoes: \nRiu La Mola - Diaria a partir de R$1.712,00 \nHotel Club Sunway Punta Prima - Diaria a partir de R$1.340,00 \nHostal Pepe - Diaria a partir de R$939,00");
											printf("\nValor da passagem: R$2.514,00");
											printf("\nPopulacao: Media de 12 216 habitantes.");
										break;
										case 5:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Key Biscayne");
											printf("\nPrincipais atracoes: Ile de Re, Bill Baggs Cape Florida State Park, Cape Florida Lighthouse, Crandon Beach, Crandon Park Tennis Center");
											printf("\nPrincipais acomodacoes: \nThe Ritz-Carlton Key Biscayne - Diaria a partir de R$5.044,00 \nCoral Reef At Key Biscayne - Diaria a partir de R$2.646,00 \nSuites At Coral Reef Resort - Diaria a partir de R$2.787,00");
											printf("\nValor da passagem: R$2.535,00");
											printf("\nPopulacao: Media de 12 682 habitantes.");
										break;
										default:
											printf("Cidade invalida.");
									}
								break;
								case 2: 
									printf("Preferencia turistica escolhida: Montanha");
									printf("\n\nAqui esta alguns destinos recomendados. Escolha 1 para mais informacoes:\n1= Santander - Espanha\n2= Epinal - Franca\n3= Samokov - Bulgaria\n4= Bohinj - Eslovenia\n5= Garmisch Partenkirchen - Alemanha\n");
									scanf("%d",&cidade);
									//O usuario escolheu montanha. Logo, mostrar� as informa��es do destino escolhido. (Cada case � uma cidade)
									switch (cidade)
									{
										case 1:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Santander");
											printf("\nPrincipais atracoes: Montanhas Cantabrias, Centro de Santander, Puertochico, Castilla-Hermida.");
											printf("\nPrincipais acomodacoes: \nSilken Rio Santander - Diaria a partir de R$773,00 \nSilken Coliseum - Diaria a partir de R$809,00 \nSantemar - Diaria a partir de R$766,00");
											printf("\nValor da passagem: R$2.469,00");
											printf("\nPopulacao: Media de 300 mil habitantes.");
										break;
										case 2:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Epinal");
											printf("\nPrincipais atracoes: Monte Vosges, Musee de I'image, Departmental Museum of Ancient Art and Contempory, Parc du chateau, Spinaparc, planetarium D'epinal.");
											printf("\nPrincipais acomodacoes: \nArtrium Golbey Epinal - Diaria a partir de R$405,00 \nKyriad Epinal Centre - Diaria a partir de R$501,00 \nBest Western Plus Lafayette Hotel & Spa - Diaria a partir de R$639,00");
											printf("\nValor da passagem: R$2.792,00");
											printf("\nPopulacao: Media de 31 938 habitantes.");
										break;
										case 3:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Samokov");
											printf("\nPrincipais atracoes: Musala, Malyovitsa, Historical Museum, Samokov Convent, Bayrakli Mosque, Great Fountain.");
											printf("\nPrincipais acomodacoes: \nHotel Sonata - Diaria a partir de R$142,00 \nKokoshkovata Kashta - Diaria a partir de R$349,00 \nZodiac - Diaria a partir de R$142,00");
											printf("\nValor da passagem: R$5.750,00");
											printf("\nPopulacao: Media de 35 871 habitantes.");
										break;
										case 4:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Bohinj");
											printf("\nPrincipais atracoes: Monte Triglav, Cachoeira Savica, Lago Bohinj, estacao de ski vogel, teleferico, Mirante Rudnica, Igreja Sao Joao Batista.");
											printf("\nPrincipais acomodacoes: \nBohinj ECO Hotel  - Diaria a partir de R$808,00 \nHotel Jezero - Diaria a partir de R$678,00 \nGasperin - Diaria a partir de R$452,00");
											printf("\nValor da passagem: R$6.665,00");
											printf("\nPopulacao: Media de 5 263 habitantes.");
										break;
										case 5:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Garmisch Partenkirchen");
											printf("\nPrincipais atracoes: Montanha Zugspitze, Palacio de Linderhof, Lago Eibsee, Partnachklamm, Abadia de Ettal, Alpspitze.");
											printf("\nPrincipais acomodacoes: \nMercure Hotel Garmisch Partenkirchen - Diaria a partir de R$746,00 \nHostel der Athleten - Diaria a partir de R$453,00 \nWerdenfelserei - Diaria a partir de R$1967,00");
											printf("\nValor da passagem: R$4.081,00");
											printf("\nPopulacao: Media de 26 178 habitantes.");
										break;
										default:
											printf("Cidade invalida.");
									}
								break;
								case 3: 
									printf("Preferencia turistica escolhida: Neve");
									printf("\n\nAqui esta alguns destinos recomendados. Escolha 1 para mais informacoes:\n1= Kiruna - Suecia\n2= Are Are Minicipality - Suecia\n3= Abisko - Suecia\n4= Kalmar - Suecia\n5= Salen - Suecia\n");
									scanf("%d",&cidade);
									//O usuario escolheu neve. Logo, mostrar� as informa��es do destino escolhido. (Cada case � uma cidade)
									switch (cidade)
									{
										case 1:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Kiruna");
											printf("\nPrincipais atracoes: Kiruna Kyrka, LKAB's Visitor Centre, Treriksroset, Esrange Space Center, Midnattssolstigen.");
											printf("\nPrincipais acomodacoes: \nBest Western Hotel Arctic Eden - Diaria a partir de R$780,00 \nCamp Ripan - Diaria a partir de R$838,00 \nHotel Bishops Arms Kiruna - Diaria a partir de R$792,00");
											printf("\nValor da passagem:R$6.685,00");
											printf("\nPopulacao: Media de 22 906 habitantes.");
										break;
										case 2:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Are Are Municipality");
											printf("\nPrincipais atracoes: Teleferico de Are, Are Golfklubb, Undersakers Charcuterie Factory, Estacao de esqui Trillevallen, Lago Nulltjarnarna.");
											printf("\nPrincipais acomodacoes: \nBuustamons FjAllgArd - Diaria a partir de R$839,00 \nHotel Aregarden - Diaria a partir de R$ 1.013,00 \nHotell Granen - Diaria a partir de R$625,00");
											printf("\nValor da passagem: R$3.500,00");
											printf("\nPopulacao: Media de 3 200 Habitantes.");
										break;
										case 3:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Abisko");
											printf("\nPrincipais atracoes: BAbisko National Park, Tornetrask, Aurora Sky Station, Lights of Vikings, LapplandMedia & PhotoAdventures.");
											printf("\nPrincipais acomodacoes: \nHotel Fjallet - Diaria a partir de R$899,00 \nHotell Riksgransen - Diaria a partir de R$977,00 \nEnter Hotell Bjerkvik - Diaria a partir de R$707,00");
											printf("\nValor da passagem: R$7.140,00");
											printf("\nPopulacao: Media de 135 habitantes.");
										break;
										case 4:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Kalmar");
											printf("\nPrincipais atracoes: Kalmar Castle, Kalmar County Museum, Olandsbron, Kalmar Cathedral, Skalby 4H-gard.");
											printf("\nPrincipais acomodacoes: \nClarion Collection Hotel Packhuset - Diaria a partir de R$1.080,00 \nBest Western Plus Kalmarsund Hotell - Diaria a partir de R$650,00 \nFirst Hotel Witt - Diaria a partir de R$639,00");
											printf("\nValor da passagem: R$5.904,00");
											printf("\nPopulacao: Media de 235 000 habitantes.");
										break;
										case 5:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Salen");
											printf("\nPrincipais atracoes: The House of the Seven Gables, Peabody Essex Museum, Old Burying Point Cemetery, Salem Witch Trials Memorial, Salem Ferry.");
											printf("\nPrincipais acomodacoes: \nHilton Garden Inn Boston Logan Airport - Diaria a partir de R$871,00 \nSalem Waterfront Hotel & Suites - Diaria a partir de R$1.110,00 \nHawthorne Hotel - Diaria a partir de R$471,00");
											printf("\nValor da passagem: R$5.106,00");
											printf("\nPopulacao: Media de 43 252 habitantes.");
										break;
										default:
											printf("Cidade invalida.");
									}
								break;
								case 4: 
									printf("Preferencia turistica escolhida: Gastronomia");
									printf("\n\nAqui esta alguns destinos recomendados. Escolha 1 para mais informacoes:\n1= Paris - Franca\n2= Florenca - Italia\n3= Galway - Irlanda\n4= Dusseldorf - Alemanha\n5= Lisboa - Portugal\n");
									scanf("%d",&cidade);
									//O usuario escolheu gastronomia. Logo, mostrar� as informa��es do destino escolhido. (Cada case � uma cidade)
									switch (cidade)
									{
										case 1:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Paris");
											printf("\nPrincipais atracoes: Torre Eiffel, Museu do Louvre, Catedral de Notre-Dame de Paris (Atualmente fechada devido ao incendio em 2019), Arco do Triunfo, Museu de Orsay e Centro Georges Pompidou.");
											printf("\nPrincipais acomodacoes: \nRayz Eiffel - Diaria a partir de R$1.220,00 \nEden Lodge Paris - Diaria a partir de R$1.267,00 \nResidence Charles Floquet - Diaria a partir de R$2.243,00");
											printf("\nValor da passagem: R$2.880,00");
											printf("\nPopulacao: Media de 2,161 milhoes de habitantes.");
										break;
										case 2:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Florenca");
											printf("\nPrincipais atracoes: Galleria degli Uffizi, Santa Maria del Fiore, Ponte Vecchio, Palazzo Vecchio, Basilica Santa Cruz, Palacio Pitti.");
											printf("\nPrincipais acomodacoes: \nC-Hotels Joy - Diaria a partir de R$363,00 \nVilla I Barronci - Diaria a partir de R$1.450,00 \nLe Ter Orchidee Florence - Diaria a partir de R$312,00");
											printf("\nValor da passagem: R$2.103,00");
											printf("\nPopulacao: Media de 382 258 habitantes.");
										break;
										case 3:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Galway");
											printf("\nPrincipais atracoes: Museu da Cidade Galway, Galway Cathedral, Arco espanhol, Eyre Square, Galway Atlantaquaria, Castelo Menlo");
											printf("\nPrincipais acomodacoes: \nThe Twelve Hotel - Diaria a partir de R$3.490,00 \nRaheen Woods - Diaria a partir de R$865,00 \nKinlay Eyre Square - Diaria a partir de R$464,00");
											printf("\nValor da passagem: R$4.704,00");
											printf("\nPopulacao: Media de 79 934 habitantes.");
										break;
										case 4:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Dusseldorf");
											printf("\nPrincipais atracoes: Rheinturm, Museu Kunstpalast, Konigsallee, Schloss Benrath, Kunsthalle, Dusseldorf, Aquazoo Lobbecke, Museum Dusseldorf.");
											printf("\nPrincipais acomodacoes: \nLandhotel am Zaut - Diaria a partir de R$471,00 \nMoxy Duesseldorf South - Diaria a partir de R$414,00 \nHyatt Regency Dusseldorf - Diaria a partir de R$1.388,00");
											printf("\nValor da passagem: R$3.972,00");
											printf("\nPopulacao: Media de 619 294 habitantes.");
										break;
										case 5:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Lisboa");
											printf("\nPrincipais atracoes: Torre de Belem, Castelo de S. Jorge, Mosteiro dos Jeronimos, Praca do Comercio, Elevador de Santa Justa, Padrao dos Descobrimentos.");
											printf("\nPrincipais acomodacoes: \nHotel Dom Pedro Lisboa - Diaria a partir de R$601,00 \nSheraton Lisboa Hotel & Spa - Diaria a partir de R$796,00 \nJupiter Lisboa - Diaria a partir de R$647,00");
											printf("\nValor da passagem: R$2.778,00");
											printf("\nPopulacao: Media de 504 718 habitantes.");
										break;
										default:
											printf("Cidade invalida.");
									}
								break;
								default:
									printf("Preferencia turistica invalida");
							}
						break;
						case 3:
							printf("Continente escolhido: Asia");
							printf("\n\nQual sua preferencia turistica:\n1- Praia\n2- Montanha\n3- Neve\n4- Gastronomia\n");
							scanf("%d",&preferencia);
							//O usuario escolheu o continente �sia. Logo, escolher� sua preferencia turistica.
							switch (preferencia)
							{
								case 1: 
									printf("Preferencia turistica escolhida: Praia");
									printf("\n\nAqui esta alguns destinos recomendados. Escolha 1 para mais informacoes:\n1= Palawan - Filipinas\n2= Agonda - India\n3= Ngapali - Birmania\n4= Nusa Penida - Bali\n5= Miyakojima - Japao\n");
									scanf("%d",&cidade);
									//O usuario escolheu praia. Logo, mostrar� as informa��es do destino escolhido. (Cada case � uma cidade)
									switch (cidade)
									{
										case 1:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Palawan");
											printf("\nPrincipais atracoes: Nacpan Beach, Puerto Princesa Underground River, Big Lagoon, Small Lagoon, Cayangan Lake.");
											printf("\nPrincipais acomodacoes: \nSea Cocoon Hotel - Diaria a partir de R$323,00 \nAstoria Palawan - Diaria a partir de R$438,00 \nNacpan Beach Glamping - Diaria a partir de R$1,203,00");
											printf("\nValor da passagem: R$22.249,00");
											printf("\nPopulacao: Media de 849 469 habitantes.");											
										break;
										case 2:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Agonda");
											printf("\nPrincipais atracoes: Praia de Agonda, Galgibaga Beach, Animal Shelter Agonda,Rock Formations, Chapoli Dam.");
											printf("\nPrincipais acomodacoes: \nLuxuosa Sala Privada na Praia de Agonda - Diaria a partir de R$116,00 \nBlue Lagoon Sea Front cottages - Diaria a partir de R$439,00 \nPalolem Dream Guesthouse - Diaria a partir de R$247,00");
											printf("\nValor da passagem: R$2.688,00");
											printf("\nPopulacao: Media de 3 801 habitantes.");										
										break;
										case 3:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Ngapali");
											printf("\nPrincipais atracoes: Ngapali beach, Ngapali Elephants Sanctuary, Linthar English School, Kanthaya Beach, Talalnal Elephant Camp, Oriental Ballooning Ngapal.");
											printf("\nPrincipais acomodacoes: \nYoma Cherry Lodge - Diaria a partir de R$228,00 \nVirgin Beach Hotel - Diaria a partir de R$385,00 \nAureum Palace Spa & Resort - Diaria a partir de R$273,00");
											printf("\nValor da passagem: R$22.822,00");
											printf("\nPopulacao: Media de 181 mil habitantes");											
										break;
										case 4:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Nusa Penida");
											printf("\nPrincipais atracoes: Kelingkinga Beach,Nusa Penida Island, Atuh Beach, Diamond Beach, Pasih Uug Beach, Crystal Bay.");
											printf("\nPrincipais acomodacoes: \nAkusara Jungle Resort And Spa - Diaria a partir de R$432,00 \nPradana Beach Inn Luxury - Diaria a partir de R$491,00 \nOcean Terrace Suite And Spa Luxury - Diaria a partir de R$982,00");
											printf("\nValor da passagem: R$14.246,00");
											printf("\nPopulacao: Media de 45 178 habitantes.");											
										break;
										case 5:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Miyakojima");
											printf("\nPrincipais atracoes: Yonaha Maehama, Irabu Ohashi, Shimojishima Island, Aragusuku Beach, Ikema Ohashi Bridge.");
											printf("\nPrincipais acomodacoes: \nVilla Vorla - Diaria a partir de 5.347,00 \nMr.KINJO Miyakojima Painagama Resort - Diaria a partir de 1.432,00 \nHOTEL Fit in Miyakojima - Diaria a partir de 1.128,00");
											printf("\nValor da passagem: R$4.930,00");
											printf("\nPopulacao: Media de 54 910 habitantes.");
										break;
										default:
											printf("Cidade invalida.");
									}
								break;
								case 2: 
									printf("Preferencia turistica escolhida: Montanha");
									printf("\n\nAqui esta alguns destinos recomendados. Escolha 1 para mais informacoes:\n1= Namche Bazaar - Nepal\n2= Huayin - Republica Popular da China\n3= Kota Kinabalu - Malasia\n4= Fujiyoshida - Japao\n5= Darjeeling - India\n");
									scanf("%d",&cidade);
									//O usuario escolheu montanha. Logo, mostrar� as informa��es do destino escolhido. (Cada case � uma cidade)
									switch (cidade)
									{
										case 1:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Namche Bazaar");
											printf("\nPrincipais atracoes: Monte Everest, Sherpa Culture Museum, Sagarmatha National Park Museum, Sagarmatha Pollution Control Committee, Tenzing Norgay Memorial.");
											printf("\nPrincipais acomodacoes: \nNamche - Diaria a partir de R$131,00 \nThanka Inn Gokyo - Diaria a partir de R$115,00 \nPanorama Lodge - Diaria a partir de R$208,00");
											printf("\nValor da passagem: R$5.652,00 ");
											printf("\nPopulacao: Media de 1 647 habitantes");
										break;
										case 2:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Huayin");
											printf("\nPrincipais atracoes: Mount Hua, Xiyuemiao (Southwest Gate), Huashan Visitor Center, Huashan Scenic Area, Yaozi Fanshen, Wuyun Peak.");
											printf("\nPrincipais acomodacoes: \nHuashan Ziyuan Hotel - Diaria a partir de R$158,00 \nHuashan Hua Xin Internacional - Diaria a partir de R$898,00");
											printf("\nValor da passagem: R$4.025,00");
											printf("\nPopulacao: Media de 263 352 habitantes");
										break;
										case 3:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Kota Kinabalu");
											printf("\nPrincipais atracoes: Monte Kinabalu, Tunku Abdul Rahman Park, Manukan Island, Mari Mari Cultural Village, Masjid Bandaraya Kota Kinabalu.");
											printf("\nPrincipais acomodacoes: \nSangri-La Rasa Ria Resort - Diaria a partir de R$429,00 \nHilton Kota Kinabalu - Diaria a partir de R$249,00 \nSangri-Las's Tanjung Aru Resort - Diaria a partir de R$465,00");
											printf("\nValor da passagem: R$10.118,00");
											printf("\nPopulacao: Media de 244 700 habitantes");
										break;
										case 4:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Fujiyoshida");
											printf("\nPrincipais atracoes: Monte Fuji, Fuji-Q Highland, Pagode Chureito, Oshino Hakkai, Takabisha, Arakurayama Sengen Park.");
											printf("\nPrincipais acomodacoes: \nResort Inn Fuyo - Diaria a partir de R$256,00 \nHotel Route Inn Court Fujiyoshida - Diaria a partir de R$604,00 \nAsahi - Diaria a partir de R$990,00");
											printf("\nValor da passagem: R$11.600,00");
											printf("\nPopulacao: Media de 48 782 habitantes");
										break;
										case 5:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Darjeeling");
											printf("\nPrincipais atracoes: Montanha Kanchenjunga, Himalayan Mountaineering Institute, Padmaja Naidu Himalayan Zoological Park, Yiga Choeling Monastery, Peace Pagoda, Darjeeling Rangeet Valley Passenger Ropeway.");
											printf("\nPrincipais acomodacoes: \nayfair Darjeeling - Diaria a partir de R$465,00 \nHotel Viceroy - Diaria a partir de R$378,00");
											printf("\nValor da passagem: R$27.300,00");
											printf("\nPopulacao: Media de 120 414 habitantes");
										break;
										default:
											printf("Cidade invalida.");
									}
								break;
								case 3: 
									printf("Preferencia turistica escolhida: Neve");
									printf("\n\nAqui esta alguns destinos recomendados. Escolha 1 para mais informacoes:\n1= Ko Samui - Tailandia\n2= Cebu - Filipinas\n3= Da Nang - Vietna\n4= Harbin - Republica Popular da China\n5= Pyeongchang - Coreia do Sul\n");
									scanf("%d",&cidade);
									//O usuario escolheu neve. Logo, mostrar� as informa��es do destino escolhido. (Cada case � uma cidade)
									switch (cidade)
									{
										case 1:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Ko SAMUI");
											printf("\nPrincipais atracoes: Lamai Beach, Secret Buddha Garden, Paradise Park Farm, Chaweng Beach, Samui Elephant Sanctuary.");
											printf("\nPrincipais acomodacoes: \nAl's Hut Resort - Diaria a partir de R$670,00 \nThe Lodge - Diaria a partir de R$504,00 \nBaan Bophut Beach Hotel - Diaria a partir de R$236,00");
											printf("\nValor da passagem: R$27.187,00");
											printf("\nPopulacao: Media de 67 265 habitantes.");
										break;
										case 2:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Cebu");
											printf("\nPrincipais atracoes: Ayala Center Cebu, Simala Shrine, Basilica do Santo Menino, Lapu Lapu Statue, Caohagan Island.");
											printf("\nPrincipais acomodacoes: \nSolea Mactan Resort - Diaria a partir de R$376,00 \nCordova Reef Village Resort - Diaria a partir de R$256,00 \nCebu Plaza Hotel - Diaria a partir de R$313,00");
											printf("\nValor da passagem: R$30.178,00");
											printf("\nPopulacao: Media de 964 169 habitantes.");
										break;
										case 3:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Da Nang");
											printf("\nPrincipais atracoes: The Marble Mountains, Ba Na Hills, Dragon Bridge, Lady Buddha, My Khe Beach.");
											printf("\nPrincipais acomodacoes: \nVinpearl Luxury Da Nang - Diaria a partir de R$752,00 \nMelia Danang Beach Resort - Diaria a partir de R$524,00 \nVinpearl Resort & Spa Da Nang - Diaria a partir de R$4.401,00");
											printf("\nValor da passagem: $30.878,00");
											printf("\nPopulacao: Media de 1,125 milhoes de habitantes");
										break;
										case 4:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Harbin");
											printf("\nPrincipais atracoes: Harbin Ice e Snow Amusement World, Unit 731 Museum, Zhongyang Pedestrian Street, Sun Island (Tai Yang Dao), Volga Manor.");
											printf("\nPrincipais acomodacoes: \nKangaroo New Net Hotel - Diaria a partir de R$700,00 \nShangri-La Songbei - Diaria a partir de R$662,00 \nHarbin e Moon Bay TV City Hote - Diaria a partir de R$1.000,00");
											printf("\nValor da passagem: R$36.664,00");
											printf("\nPopulacao: Media de 10,635 milhoes de habitantes.");
										break;
										case 5:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Pyeongchang");
											printf("\nPrincipais atracoes: Woljeongsa Temple, Odaesan National Park, Parques nacionais, Phoenix Snow Park, Pyeongchang Trout Festival, Eventos culturais, Daegwanryeong Yangtte Ranch e Ranchos.");
											printf("\nPrincipais acomodacoes: \nPyeongchang Ramada Hotel & Suite by Wyndham - Diaria a partir de R$416,00 \nYongpyong Resort e Phoenix Pyeongchang Hotel - Diaria a partir de R$438,00");
											printf("\nValor da passagem: R$10.000,00");
											printf("\nPopulacao: Media de 25,894 milhoes de habitantes");
										break;
										default:
											printf("Cidade invalida.");
									}
								break;
								case 4: 
									printf("Preferencia turistica escolhida: Gastronomia");
									printf("\n\nAqui esta alguns destinos recomendados. Escolha 1 para mais informacoes:\n1= Toquio - Japao\n2= Bangkok - Tailandia\n3= Kuala Lumpur - Malasia\n4= Bombaim/Mumbai - India\n5= Pequim - China\n");
									scanf("%d",&cidade);
									//O usuario escolheu gastronomia. Logo, mostrar� as informa��es do destino escolhido. (Cada case � uma cidade)
									switch (cidade) 
									{
										case 1:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Toquio");
											printf("\nPrincipais atracoes: Templo de Asakusa, Tokyo Skytree, Santuario Meiji, Shinjuku Gyoen, Torre de Toquio, Tokyo DisneySea.");
											printf("\nPrincipais acomodacoes: \nInterContinental Tokyo Bay - Diaria a partir de R$886,00 \nInterContinental, ANA Tokyo - Diaria a partir de R$1.242,00 \nThe Ritz-Carlton, Tokyo - Diaria a partir de R$2435,00");
											printf("\nValor da passagem: R$5.601,00");
											printf("\nPopulacao: Media de 13,96 milhoes de habitantes.");
										break;
										case 2:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Bangkok");
											printf("\nPrincipais atracoes: The Grand Palace, Wat Pho, Wat Arun, Mercado de Chatuchak, Wat Phra Kaew, Khaosan Road.");
											printf("\nPrincipais acomodacoes: \nAvani Riverside Bangkok - Diaria a partir de R$349,00 \nMandarin Oriental Bangkok - Diaria a partir de R$1.615,00 \nHotel Centara Grand at Centralword - Diaria a partir de R$307,00");
											printf("\nValor da passagem: R$7.264,00");
											printf("\nPopulacao: Media de 10,944 milhoes de habitantes.");
										break;
										case 3:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Kuala Lumpur");
											printf("\nPrincipais atracoes: Petronas Twin Towers, Batu Caves, Torre de Kuala Lumpur, Sunway Lagoon, Central Market, Merdeka Square.");
											printf("\nPrincipais acomodacoes: \nGrand Hyatt Kuala Lumpur - Diaria a partir de R$502,00 \nLanson Place Bukit Ceylon - Diaria a partir de R$462,00 \nThe Westin Kuala Lumpur - Diaria a partir de R$439,00");
											printf("\nValor da passagem: R$8.600,00");
											printf("\nPopulacao: Media de 1,808 milhao de habitantes.");
										break;
										case 4:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Bombaim/Mumbai");
											printf("\nPrincipais atracoes: Estacao Chhatrapati Shivaji, Gateway Of India Mumbai, Grutas de Elefanta, Marine Drive, Chhatrapati Shivaji Maharaj Vastu Sangrahalaya, Shri Siddhi Vinayak Ganapati Mandir.");
											printf("\nPrincipais acomodacoes: \nThe Taj Mahal Palace - Diaria a partir de $881,00 \nJW Marriott Mumbai Sahar - Diaria a partir de R$388,00 \nTaj Mahal Tower - Diaria a partir de R$462,00");
											printf("\nValor da passagem: R$7.830,00");
											printf("\nPopulacao: Media de 12,48 milhoes de habitantes.");
										break;
										case 5:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Pequim");
											printf("\nPrincipais atracoes: Muralha da China, Cidade Proibida, Templo do Ceu, Yiheyuan, Praca da Paz Celestial, Parque Beihai, Lama Temple.");
											printf("\nPrincipais acomodacoes: \nInterContinental Beijing Sanlit - Diaria a partir de R$1.461,00 \nHoliday Inn Express Beijing Dongzhimen - Diaria a partir de R$476,00 \nRegent Beijing - Diaria a partir de R$1.096,00");
											printf("\nValor da passagem: R$9.063,00 ");
											printf("\nPopulacao: Media de 21,54 milhoes de habitantes.");
										break;
										default:
											printf("Cidade invalida.");
									}
								break;
								default:
									printf("Preferencia turistica invalida");
							}
						break;
						case 4:
							printf("Continente escolhido: Africa");
							printf("\n\nQual sua preferencia turistica:\n1- Praia\n2- Montanha\n3- Neve\n4- Gastronomia\n");
							scanf("%d",&preferencia);
							//O usuario escolheu o continente �frica. Logo, escolher� sua preferencia turistica.
							switch (preferencia)
							{
								case 1: 
									printf("Preferencia turistica escolhida: Praia");
									printf("\n\nAqui esta alguns destinos recomendados. Escolha 1 para mais informacoes:\n1= Nungwi - Tanzania\n2= La Digue - Ilhas Seychelles\n3= Belle Mare - Mauricio\n4= Cidade do Cabo - Africa do Sul\n5= Diani Beach - Quenia\n");
									scanf("%d",&cidade);
									//O usuario escolheu praia. Logo, mostrar� as informa��es do destino escolhido. (Cada case � uma cidade)
									switch (cidade)
									{
										case 1:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Nungwi");
											printf("\nPrincipais atracoes: Nungwi Beach, Mnarani Marine Turtles Conservation Pond, Zanzibar Kilosas Conservation, Nungwi Natural Aquarium, Tazari Caves.");
											printf("\nPrincipais acomodacoes: \nAmaan Beach Bungalows - Diaria a partir de 773,00 \nNungwi House - Diaria a partir de 894,00 \nGreen's Nungwi - Diaria a partir de 507,00");
											printf("\nValor da passagem: R$2.282,00");
											printf("\nPopulacao: Media de 5 563 habitantes.");
										break;
										case 2:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: La Digue");
											printf("\nPrincipais atracoes: Praia Anse Coco, Anse Source D'Argent, Grand Anse, Coco Island, Spiagge di Anse Marron.");
											printf("\nPrincipais acomodacoes: \nPatatran Hotel - Diaria a partir de R$1.364,00 \nLe Repaire Boutique Hotel - Diaria a partir de R$1.790,00 \nAnse Severe Beach Villas - Diaria a partir de R$1.108,00");
											printf("\nValor da passagem: R$2.356,00");
											printf("\nPopulacao: Media de 2 800 habitantes.");
										break;
										case 3:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Belle Mare");
											printf("\nPrincipais atracoes: Belle Mare Beach, Arts 28 Art Gallery, Splash N Fun Leisure Park, Vicky Mauritius Tour, Aquaventure.");
											printf("\nPrincipais acomodacoes: \nEden Villa - Diaria a partir de R$936,00 \nAzure Villa - Diaria a partir de R$2.074,00 \nHorisun - Diaria a partir de R$1.785,00");
											printf("\nValor da passagem: R$899,00");
											printf("\nPopulacao: Media de 139 mil habitantes.");
										break;
										case 4:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Cidade do Cabo Central");
											printf("\nPrincipais atracoes: Clifton Beaches, Table Mountain, Victoria & Alfred Waterfront, Centro da Cidade do Cabo.");
											printf("\nPrincipais acomodacoes: \nVip Cape Lodge - Diaria a partir de R$183,00 \nSignal Hill Lodge - Diaria a partir de R$151,00 \nHead South Lodge - Diaria a partir de R$531,00");
											printf("\nValor da passagem: R$849,00");
											printf("\nPopulacao: Media de 433 688 habitantes.");
										break;
										case 5:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Diani Beach");
											printf("\nPrincipais atracoes: Diani Beach, Colobus Conservation, Kaya Kinondo Sacred Forest, Diani Beach Art Gallery, ocean bliss spa, Bora Bora Wildlife Park.");
											printf("\nPrincipais acomodacoes: \nBaobab Beach Resort & Spa - Diaria a partir de R$1.083,00 \nSouthern Palms Beach Resort - Diaria a partir de R$886,00 \nSunset Vill Boutique Resort - Diaria a partir de R$624,00");
											printf("\nValor da passagem: R$13.845,00");
											printf("\nPopulacao: Media de 100 000 habitantes.");
										break;
										default:
											printf("Cidade invalida.");
									}
								break;
								case 2: 
									printf("Preferencia turistica escolhida: Montanha");
									printf("\n\nAqui esta alguns destinos recomendados. Escolha 1 para mais informacoes:\n1= Marrakech - Marrocos\n2= Nairobi - Quenia\n3= Bundibugyo - Uganda\n4= Winterton - Africa do Sul\n5= Arusha - Tanzania\n");
									scanf("%d",&cidade);
									//O usuario escolheu montanha. Logo, mostrar� as informa��es do destino escolhido. (Cada case � uma cidade)
									switch (cidade)
									{
										case 1:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Marrakech");
											printf("\nPrincipais atracoes: Atlas, pra�a Jemaa el-Fna, A Medina de Marrakech, Koutoubia Mosque.");
											printf("\nPrincipais acomodacoes: \nRiad Kasbah & Spa - Diaria a partir de R$263,00 \nVilla Amira et Spa - Diaria a partir de R$264,00 \nRiad Les Terrasses de Jemaa El Fna & Spa - Diaria a partir de R$444,00");
											printf("\nValor da passagem: R$1.504,00");
											printf("\nPopulacao: Media de 928 900 habitantes.");
										break;
										case 2:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Nairobi");
											printf("\nPrincipais atracoes: Monte Quenia, Parque Nacional de Nairobi, Karen Blixen Museum, Bomas of Kenya, Kenya Museum Society, The Maasai Market.");
											printf("\nPrincipais acomodacoes: \nThe Sarova Stanley - Diaria a partir de R$475,00 \nHotel The Heron Portico - Diaria a partir de R$341,00 \nCrowne Plaza Nairobi - Diaria a partir de R$528,00");
											printf("\nValor da passagem: R$12.137,00");
											printf("\nPopulacao: Media de 4,397 milhoes de habitantes.");
										break;
										case 3:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Bundibugyo");
											printf("\nPrincipais atracoes: Rwenzori National Park.");
											printf("\nPrincipais acomodacoes: \nRaja Excelsior Hotel - Diaria a partir de R$219,00 \nReinah Tourist Hotel - Diaria a partir de R$289,00 \nNyaika Hotel - Diaria a partir de R$550,00");
											printf("\nValor da passagem: R$6.317,00");
											printf("\nPopulacao: Media de 18 823 habitantes.");
										break;
										case 4:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Winterton");
											printf("\nPrincipais atracoes: Cathedral peak, Winterton Museum.");
											printf("\nPrincipais acomodacoes: \nHotel Cathedral Peak - Diaria a partir de R$558,00 \nCayley Mountain Resort - Diaria a partir de R$836,00 \nDrakensberg Sun - Diaria a partir de R$816,00");
											printf("\nValor da passagem: R$2.008,00");
											printf("\nPopulacao: Media de 276 habitantes");
										break;
										case 5:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Arusha");
											printf("\nPrincipais atracoes: Arusha National Park, Cachoeira Materuni, fontes termais Chemka, Parque Nacional Tarangire.");
											printf("\nPrincipais acomodacoes: \nMount Meru - Diaria a partir de R$841,00 \nPlanet Lodge - Diaria a partir de R$484,00 \nKibo Palace - Diaria a partir de R$880,00");
											printf("\nValor da passagem: R$6.339,00");
											printf("\nPopulacao: Media de 416 442 habitantes");
										break;
										default:
											printf("Cidade invalida.");
									}
								break;
								case 3: 
									printf("Preferencia turistica escolhida: Neve");
									printf("\n\nAqui esta alguns destinos recomendados. Escolha 1 para mais informacoes:\n1= Taza - Marrocos\n2= Ain Sefra - Argelia\n3= Marrakesh - Marrocos\n4= Jabal al-Akhdar - Oma\n5= Al Bayda - Libia\n");
									scanf("%d",&cidade);
									//O usuario escolheu neve. Logo, mostrar� as informa��es do destino escolhido. (Cada case � uma cidade)
									switch (cidade)
									{
										case 1:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade:Taza");
											printf("\nPrincipais atracoes:Tezekka National  Park\nFriouto Chaves");
											printf("\nPrincipais acomodacoes:Hotel-Cafe-Restaurant Pyramides. R$ 441\nHotel-Cafe de la Gare. R$220\nHotel-Restaurant Boujida. R$500");
											printf("\nValor da passagem:Entre R$3000 at� R$ 20000");
											printf("\nPopulacao:137 778 habitantes.");
										break;
										case 2:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Ain Sefra");
											printf("\nPrincipais atracoes: TEDA Fun Valley, Best Shore Trips Ain Sokhna, Paragliding Egypt, paragliding Egypt, Sky Safari Egypt.");
											printf("\nPrincipais acomodacoes: \nMekther Hotel - Diaria a partir de R$500,00 \nSud Hotel - Diaria a partir de R$450,00 \nHotel Mekhter - Diaria a partir de R$500,00");
											printf("\nValor da passagem: R$1.500,00");
											printf("\nPopulacao: Media de 54 229 habitantes.");
										break;
										case 3:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Marrakesh");
											printf("\nPrincipais atracoes: Bab Agnaou, Praca Jemaa-El-Fna, Tumulos saadianos, Bairro Mellah, Parque Lalla Hasna.");
											printf("\nPrincipais acomodacoes: \nSofitel Marrakech Lounge & Spa - Diaria a partir de R$1.011,00 \nLa Mamounia - Diaria a partir de R$2.410,00 \nRoyal Mansour - Diaria a partir de R$7.690,00");
											printf("\nValor da passagem: R$8.657,00");
											printf("\nPopulacao: Media de 1,323 milhoes de habitantes.");
										break;
										case 4:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Jabal al-Akhdar");
											printf("\nPrincipais atracoes: Anantara Spa at Anantara Al Jabal Al Akhdar Resort, Teepee, Ridge Adventure, Jabal Akhdar Tours, Hajarhiking.");
											printf("\nPrincipais acomodacoes: \nJabal Akhdar Hotel - Diaria a partir de R$1.500,00");
											printf("\nValor da passagem: R$4.000,00");
											printf("\nPopulacao: Media de 209 978 habitantes.");
										break;
										case 5:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Al Bayda");
											printf("\nPrincipais atracoes: Cyrene e Darnah");
											printf("\nPrincipais acomodacoes: \nMarhaba Hotel - Diaria a partir de R$560,00 \nPearl Tourist Hotel - Diaria a partir de R$320,00");
											printf("\nValor da passagem: R$5.000,00");
											printf("\nPopulacao: Media de 29 853 habitantes.");
										break;
										default:
											printf("Cidade invalida.");
									}
								break;
								case 4: 
									printf("Preferencia turistica escolhida: Gastronomia");
									printf("\n\nAqui esta alguns destinos recomendados. Escolha 1 para mais informacoes:\n1= Cidade do Cabo - Africa do Sul\n2= Cairo - Egito\n3= Johannesburg - Africa do Sul\n4= Casablanca - Marrocos\n5= Kigali - Ruanda\n");
									scanf("%d",&cidade);
									//O usuario escolheu gastronomia. Logo, mostrar� as informa��es do destino escolhido. (Cada case � uma cidade)
									switch (cidade)
									{
										case 1:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Cidade do Cabo ");
											printf("\nPrincipais atracoes: Maclear's Beacon, Kirstenbosch National Botanical Garden, Ilha Robben, Victoria & Alfred Waterfront, Boulders Beach e Cabo da Boa Esperanca");
											printf("\nPrincipais acomodacoes: \nAt Boulders Boutique Villas - Diaria a partir de R$840,00 \nOne&Only Cape Town - Diaria a partir de R$4.167,00 \nThe Table Bay Hotel - Diaria a partir de R$868,00");
											printf("\nValor da passagem:R $7.333,00");
											printf("\nPopulacao: Media de 433 688 habitantes.");
										break;
										case 2:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Cairo");
											printf("\nPrincipais atracoes: Museu Egipcio, Piramides de Gize, Khan el Khalili, Piramide de Djoser, Salah Al-Din Al-Ayoubi Castle, Mesquita de Muhammad Ali.");
											printf("\nPrincipais acomodacoes: \nThe St. Regis Cairo - Diaria a partir de R$1.315,00 \nFour Seasons Hotel Cairo - Diaria a partir de R$1.466,00 \nCairo Marriott hotel & Omar Khayyam Casino - Diaria a partir de R$847,00");
											printf("\nValor da passagem: R$5.739,00");
											printf("\nPopulacao: Media de 9,54 milhoes de habitantes.");
										break;
										case 3:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Johannesburg");
											printf("\nPrincipais atracoes: Museu do Apartheid, Gold Reef City Theme Park, Constituicao Hill, Mandela's House, Sitios com fosseis de hominideos de Sterkfontein, Johannesburg Zoo.");
											printf("\nPrincipais acomodacoes: \nAfrican Pride Melrose Arch - Diaria a partir de R$656,00 \nFour Seasons Hotel The Westcliff - Diaria a partir de R$1.601,00 \nPablo House - Diaria a partir de R$444,00");
											printf("\nValor da passagem: R$13.896,00");
											printf("\nPopulacao: Media de 957 441 habitantes.");
										break;
										case 4:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Casablanca");
											printf("\nPrincipais atracoes: Mesquita de Hacane II, Cathedrale du Sacre Coeur, Museum of Maroccan Judaism, Parc de la Ligue Arabe, Muhammad V Square, Musee de la Fondation Abderrahman slaoui.");
											printf("\nPrincipais acomodacoes: \nFour Seasons Casablanca - Diaria a partir de R$1.704,00 \nSofitel Casablanca Tour Blanche - Diaria a partir de R$838,00 \nMosquee & Sea View Casablanca - Diaria a partir de R$494,00");
											printf("\nValor da passagem: R$6.775,00");
											printf("\nPopulacao: Media de 3,36 milhoes de habitantes.");
										break;
										case 5:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Kigali");
											printf("\nPrincipais atracoes: Kigali Genocide Memorial, Inema Arts Centre, Kimironko Market, Kandt House Museum, Rwanda Art Museum, Belgian Peacekeepers Memorial.");
											printf("\nPrincipais acomodacoes: \nHeaven Restaurant & Boutique - Diaria a partir de R$301,00 \nKigali Marriott Hotel - Diaria a partir de R$678,00 \nUbumwe Grande - Diaria a partir de R$609,00");
											printf("\nValor da passagem: R$4.989,00");
											printf("\nPopulacao: Media de 859 332 habitantes.");
										break;
										default:
											printf("Cidade invalida.");
									}
								break;
								default:
									printf("Preferencia turistica invalida");
							}
						break;
						case 5:
							printf("Continente escolhido: Oceania");
							printf("\n\nQual sua preferencia turistica:\n1- Praia\n2- Montanha\n3- Neve\n4- Gastronomia\n");
							scanf("%d",&preferencia);
							//O usuario escolheu o continente Oce�nia. Logo, escolher� sua preferencia turistica.
							switch (preferencia)
							{
								case 1: 
									printf("Preferencia turistica escolhida: Praia");
									printf("\n\nAqui esta alguns destinos recomendados. Escolha 1 para mais informacoes:\n1= Airlie Beach - Australia\n2= Viti Levu - Fiji\n3= Auckland - Nova Zelandia\n4= Sydney - Australia\n5= Perth - Australia\n");
									scanf("%d",&cidade);
									//O usuario escolheu praia. Logo, mostrar� as informa��es do destino escolhido. (Cada case � uma cidade)
									switch (cidade)
									{
										case 1:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Airlie Beach");
											printf("\nPrincipais atracoes: Airlie Beach Lagoon, Heart Reef, Bicentennial Walkway, Whitsunday Great Walk, Coral Sea Marina.");
											printf("\nPrincipais acomodacoes: \nFreedom Shore - Diaria a partir de R$1.056,00 \nAirlie Beach YHA - Diaria a partir de R$299,00 \nInterContinental Hayman Island Resort, an IHG Hotel - Diaria a partir de R$5.110,00");
											printf("\nValor da passagem: R$3.681,00");
											printf("\nPopulacao: Media de 2 800 habitantes.");
										break;
										case 2:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Viti Levu");
											printf("\nPrincipais atracoes: Natadola Beach, Sabeto Hot Springs and Mud Pool, Port Denarau Marina, Garden of the Sleeping Giant.");
											printf("\nPrincipais acomodacoes: \nWellesley Resort Fiji - Diaria a partir de R$596,00 \nDe Vos, The Private Residence - Diaria a partir de R$1.000,00 \nRamada Suites By Wyndham Wailoaloa Beach Fiji - Diaria a partir de R$926,00");
											printf("\nValor da passagem: R$147,34");
											printf("\nPopulacao: Media de 600 mil habitantes.");
										break;
										case 3:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Auckland");
											printf("\nPrincipais atracoes: Orewa Beach, Piha Beach, Rangitoto Island, Waiheke Island, Food & Wine, Matakana, Great Barrier Island.");
											printf("\nPrincipais acomodacoes: \nPullman Auckland Hotel & Apartments - Diaria a partir de R$1.348,00 \nAuckland by Langham Hospitality Group - Diaria a partir de R$1.604,00 \nThe Grand By Skycity - Diaria a partir de R$1.674,00");
											printf("\nValor da passagem: R$5.113,00");
											printf("\nPopulacao: Media de 1 657 habitantes.");
										break;
										case 4:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Sydney");
											printf("\nPrincipais atracoes: Bondi Beach, Manly Beach, A Baia de Sydney, Darling Harbour, Sydney Harbour Bridge, Sydney Opera House.");
											printf("\nPrincipais acomodacoes: \nAvoca Randwick by Sydney Lodges - Diaria a partir de R$1.263,00 \nHoliday Inn Darling Harbour an IHG Hotel - Diaria a partir de R$2.154,00 \nCrowne Plaza Sydney Coogee Beach an IHG Hotel - Diaria a partir de R$2.103,00");
											printf("\nValor da passagem: R$4.538,00");
											printf("\nPopulacao: Media de 5,312 milhoes de habitantes.");
										break;
										case 5:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Perth");
											printf("\nPrincipais atracoes: C.Y O'Connor Beach, Kings Park and Botanic Gardena, Swan River, The Perth Mint, The Bell Tower, State War Memorial, Elizabeth Quay, Lotterywest Federation Walkway, Art Gallery of Western Australia, Scitech, St.Mary's Cathedral, Hyde Park de Perth.");
											printf("\nPrincipais acomodacoes: \nPan Pacific Perth - Diaria a partir de R$2.018,00 \nHay Street Traveller's Inn - Diaria a partir de R$235,00 \nHostel G Perth - Diaria a partir de R$377,00");
											printf("\nValor da passagem: R$457,65");
											printf("\nPopulacao: Media de 1,985 milhao de habitantes");
										break;
										default:
											printf("Cidade invalida.");
									}
								break;
								case 2: 
									printf("Preferencia turistica escolhida: Montanha");
									printf("\n\nAqui esta alguns destinos recomendados. Escolha 1 para mais informacoes:\n1= Thredbo - Australia\n2= Honiara - Ilhas Salomao\n3= Ohakune - Nova Zelandia\n4= New Plymouth - Nova Zelandia\n5= Lae - Papua-Nova Guine\n");
									scanf("%d",&cidade);
									//O usuario escolheu montanha. Logo, mostrar� as informa��es do destino escolhido. (Cada case � uma cidade)
									switch (cidade)
									{
										case 1:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Thredbo");
											printf("\nPrincipais atracoes: Parque Nacional Kosciuszko, Thredbo Valley Track, Thredbo Alpine Village, Cascades Trail.");
											printf("\nPrincipais acomodacoes: \nHotel Rydges Thredbo Alpine - Diaria a partir de R$1506,00");
											printf("\nValor da passagem: R$4.421,00");
											printf("\nPopulacao: Media de 477 habitantes");
										break;
										case 2:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Honiara");
											printf("\nPrincipais atracoes: Monte Popomanaseu, Horiana Central Market, Guadalcanal Memorial, Japanese War Memorial, S.I. Visitors Bureau, Solomon Scouts & Coastwatchers Monument.");
											printf("\nPrincipais acomodacoes: \nHotel Heritage Park - Diaria a partir de R$1.544,00 \nCoral Sea Resort & Casino - Diaria a partir de R$1.001,00 \nSolomon Kitano Mendana - Diaria a partir de R$681,00");
											printf("\nValor da passagem: R$4.589,00");
											printf("\nPopulacao: Media de 84 520 habitantes");
										break;
										case 3:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Ohakune");
											printf("\nPrincipais atracoes: Monte Ruapehu, Ohakune Old Coach Road, Ohakune Carrot Adventure Park, Hapuawhenua Viaduct, Ohakune Railway Museum.");
											printf("\nPrincipais acomodacoes: \nHotel Powderhorn Chateau - Diaria a partir de R$821,00 \nSnowhaven Accommodation - Diaria a partir de R$861,00 \nLKNZ Lodge - Diaria a partir de R$407,00");
											printf("\nValor da passagem: R$4.401,00");
											printf("\nPopulacao: Media de 1 150 habitantes");
										break;
										case 4:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: New Plymouth");
											printf("\nPrincipais atracoes: Monte Egmont, Govett-Brewster Art Gallery/Len Lye Centre, New Plymouth Coastal Walkway, Puke Ariki, Pukekura Park, Te Rewa Rewa Bridge.");
											printf("\nPrincipais acomodacoes: \nThe Devon A Heritage Hotel - Diaria a partir de R$342,00 \nNovotel New Plymouth Hobson - Diaria a partir de R$586,00 \nMillenium Hotel New Plymouth - Diaria a partir de R$734,00");
											printf("\nValor da passagem: R$4.401,00");
											printf("\nPopulacao: Media de 68 900 habitantes");
										break;
										case 5:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Lae");
											printf("\nPrincipais atracoes: Mount bangeta, Lae War Cemetery, Amelia Earhart Memorial, Lae Botanic Gardens, Rainforest Habitat.");
											printf("\nPrincipais acomodacoes: \nLae City Hotel - Diaria a partir de R$615,00 \nHuon Gulf - Diaria a partir de $610,00");
											printf("\nValor da passagem: R$4.589,00");
											printf("\nPopulacao: Media de 100 677 habitantes");
										break;
										default:
											printf("Cidade invalida.");
									}
								break;
								case 3: 
									printf("Preferencia turistica escolhida: Neve");
									printf("\n\nAqui esta alguns destinos recomendados. Escolha 1 para mais informacoes:\n1= Albury - Australia\n2= Wodonga - Australia\n3= Bombala - Australia\n4= Cooma - Australia\n5= Wangaratta - Australia\n");
									scanf("%d",&cidade);
									//O usuario escolheu neve. Logo, mostrar� as informa��es do destino escolhido. (Cada case � uma cidade)
									switch (cidade)
									{
										case 1:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Albury");
											printf("\nPrincipais atracoes: Albury Botanic Garden, Noreuil Park, Lake Hume, Monument Hill War Memorial, MAMA - Murray Art Museum Albury.");
											printf("\nPrincipais acomodacoes: \nMantra Albury - Diaria a partir de R$622,00 \nAtura Albury - Diaria a partir de R$438,00 \nAlbury Georgian Motel & Suites - Diaria a partir de R$445,00");
											printf("\nValor da passagem: R$8.000,00");
											printf("\nPopulacao: Media de 54 477 habitantes.");
										break;
										case 2:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Wodonga");
											printf("\nPrincipais atracoes: The Army Museum Bandiana, High Country Rail Trail, Belvoir Park Playground, Albury Wodonga Farmers Market, Huon Hill Parklands");
											printf("\nPrincipais acomodacoes: \nEcono Lodge Border Gateway Wodonga - Diaria a partir de R$423,00 \nStagecoach Motel Wodonga - Diaria a partir de R$510,00 \nDiscovery Parks, Lake Hume - Diaria a partir de R$600,00");
											printf("\nValor da passagem: R$5.100,00");
											printf("\nPopulacao: Media de 42 662 habitantes.");
										break;
										case 3:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Bombala");
											printf("\nPrincipais atracoes: Bombala Platypus Reserve, River Walk, Bombala Railway Station, South East Forests National Park, Burnima.");
											printf("\nPrincipais acomodacoes: \nImperial Hotel - Diaria a partir de R$500,00 \nHeritage Guest House Bombala - Diaria a partir de R$670,00 \nBombala Maneroo Motel - Diaria a partir de R$600,00");
											printf("\nValor da passagem: R$6.000,00");
											printf("\nPopulacao: Media de 1 387 habitantes.");
										break;
										case 4:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Cooma");
											printf("\nPrincipais atracoes: Snowy Hydro Discovery Centre and Cafe, Eucumbene Trout Farm, Corrective Services NSW Museum, Selwyn Snow Resort, Mount Gladstone Lookout.");
											printf("\nPrincipais acomodacoes: \nAlpine Hotel - Diaria a partir de R$392,00 \nCooma Motor Inn - Diaria a partir de R$529,00");
											printf("\nValor da passagem: R$4.000,00");
											printf("\nPopulacao:  Media de 6 742 habitantes.");
										break;
										case 5:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Wangaratta");
											printf("\nPrincipais atracoes: Murray to Mountains Rail Trail, Warby Ovens National Park, Wangaratta Library, Lake William Hovell, Wangaratta Visitor Information Centre.");
											printf("\nPrincipais acomodacoes: \nQuality Hotel Wangaratta Gateway - Diaria a partir de R$737");
											printf("\nValor da passagem: R$5.580,00");
											printf("\nPopulacao: Media de 19 318 de habitantes.");
										break;
										default:
											printf("Cidade invalida.");
									}
								break;
								case 4: 
									printf("Preferencia turistica escolhida: Gastronomia");
									printf("\n\nAqui esta alguns destinos recomendados. Escolha 1 para mais informacoes:\n1= Hamilton - Nova Zelandia\n2= Sydney - Australia\n3= Queenstown - Nova Zelandia\n4= Gold Coast - Australia\n5= Haleiwa - Havai\n");
									scanf("%d",&cidade);
									//O usuario escolheu gastronomia. Logo, mostrar� as informa��es do destino escolhido. (Cada case � uma cidade)
									switch (cidade)
									{
										case 1:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Hamilton");
											printf("\nPrincipais atracoes: Hamilton Gardens, Museu de Waikato, Jardim Zoologico de Hamilton, Taitua Arboretum, Hamilton Lake, Classics Museum.");
											printf("\nPrincipais acomodacoes: \nCamelot on Ulster - Diaria a partir de R$556,00 \nPark View Motor Lodge - Diaria a partir de R$604,00 \nAstra Motor Lodge - Diaria a partir de R$664,00");
											printf("\nValor da passagem: R$4.272,00");
											printf("\nPopulacao: Media de 165 400 habitantes");
										break;
										case 2:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Sydney ");
											printf("\nPrincipais atracoes: Bondi Beach, Manly Beach, A Baia de Sydney, Darling Harbour, Sydney Harbour Bridge, Sydney Opera House.");
											printf("\nPrincipais acomodacoes: \nHoliday Inn Express Sydney Airport - Diaria a partir de R$425,00 \nLittle National Hotel Sydney - Diaria a partir de R$784,00 \nSofitel Sydney Darling Harbour - Diaria a partir de R$1.250,00");
											printf("\nValor da passagem: R$4.812,00");
											printf("\nPopulacao: Media de 5,312 milhoes de habitantes");
										break;
										case 3:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Queenstown");
											printf("\nPrincipais atracoes: Milford Sound, Routeburn track, Coronet Peak, The Remarkables, The Remarkables Ski Area, Skyline Queenstown. ");
											printf("\nPrincipais acomodacoes: \nHilton Queenstown Resort & Spa - Diaria a partir de R$1.147,00 \nHotel St Moritz Queenstown, Menu - Diaria a partir de R$1083,00 \nThe Rees Hotel - Diaria a partir de R$1.262,00");
											printf("\nValor da passagem: R$6.822,00");
											printf("\nPopulacao: Media de 20 mil habitantes.");
										break;
										case 4:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Gold Coast");
											printf("\nPrincipais atracoes: Warner Bros. Movie World, Sea World, Dreamworld, Santuario de Vida Selvagem Currumbin, Wet'n Wild, Skypoint Observation Deck.");
											printf("\nPrincipais acomodacoes: \nQ1 Resort & Spa - Diaria a partir de R$1.002,00 \nSurfers Paradise Marriott Resort & Spa - Diaria a partir de R$1.286,00 \nPappers Broadbearch - Diaria a partir de R$1.216,00");
											printf("\nValor da passagem: R$7.751,00");
											printf("\nPopulacao: Media de 540 559 habitantes.");
										break;
										case 5:
											printf("\nAqui esta algumas informacoes da cidade escolhida.");
											printf("\nCidade: Haleiwa");
											printf("\nPrincipais atracoes: Haleiwa Beach Park, Haleiwa Ali'i Beach Park, Laniakea Beach, Puaena Point Beach Park, Kaiaka Bay Beach Park, Haleiwa Beach, Clark Little Gallery, Wyland Galleries.");
											printf("\nPrincipais acomodacoes: \nOcean Villas At Turtle Bay - Diaria a partir de R$5.503,00 \nBeach level Studio Direct Oceania - Diaria a partir de R$4.070,00 \nCourtyard Oahu North Shore - Diaria a partir de R$1.784,00");
											printf("\nValor da passagem: R$11.309,00");
											printf("\nPopulacao: Media de 3 757 habitantes.");
										break;
										default:
											printf("Cidade invalida.");
									}
								break;
								default:
									printf("Preferencia turistica invalida");
							}
						break;
						default:
							printf("Continente invalido");
					}	
				break;
				default:
					printf("Finalidade de viagem invalida");
			}
		break;
		default:
			printf("Preferencia de destino invalida\n"); 
	}
}
