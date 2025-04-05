#ifndef FORNECEDORES_H_INCLUDED
#define FORNECEDORES_H_INCLUDED

#define NOME1_TAM 50 //variáveis globais para o comprimento dos caracteres
#define NOME2_TAM 50
#define CONTATO_TAM 15

struct Fornecedor { //struct usada para atribuir diferentes dados aos fornecedores 
    int codigo;
    char empresaNome[NOME1_TAM+1];
    char responsavel[NOME2_TAM+1];
    char contato[CONTATO_TAM+1];
};

struct TabelaFornecedor { //servirá para cadastrar os fornecedores em um vetor
    int qtd;
    Fornecedor *dados;
};

#endif // FORNECEDORES_H_INCLUDED
