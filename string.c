int main() {
    char palavra[100];
    int tamanho;
    int i;          

    printf("Digite uma palavra: ");
    scanf("%99s", palavra);

    tamanho = strlen(palavra);

    printf("Palavra invertida: ");
    for (i = tamanho - 1; i >= 0; i--) {   
        printf("%c", palavra[i]);
    }
    printf("\n");
    system("pause");

    return 0;
}
