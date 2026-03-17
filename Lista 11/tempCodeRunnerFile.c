int conta, i, j;

    printf("\nDigite a conta a excluir: ");
    scanf("%d", &conta);

    for (i = 0; i < total; i++) {
        if (contas[i].Corrente == conta) {
            for (j = i; j < total - 1; j++) {
                contas[j] = contas[j + 1];
            }
            total--;
            printf("\nConta excluída com sucesso!\n");
            return;
        }
    }

    printf("\nConta não encontrada.\n");
}