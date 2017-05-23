
//Programa para saber o valor total das compras//

main()
{
	float item,valorTotal;
	char querContinuar;
	clrscr();
	
	printf("Caixa do Supermercado\n");
	printf("=====================");

	do
	{
		valorTotal=0;
		do
		{
		printf("\nInforme o valor do item: ");
		scanf("%f",&item);
		valorTotal = valorTotal + item;

		}
		while(item > 0);
		printf("\nValor total = %2f",valorTotal);
		printf("\nQuer continuar(S/N)?: ");
		querContinuar = toupper(getche());
		printf("\n");
	}
	while(toupper(querContinuar == 'S'));

	getch();
}