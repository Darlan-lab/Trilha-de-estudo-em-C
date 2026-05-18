# Objetivo

O objetivo deste trabalho  ́e consolidar o dominio sobre estruturas de dados compostas (struct),manipulação de arquivos e gestão eficiente de memoria através de Alocação Dinamica e
Listas Encadeadas.

# Descrição do Problema

desenvolver um sistema de gerenciamento de logs de e-mail. Diferente de
um vetor estatico, o sistema deve ser capaz de crescer conforme a necessidade, utilizando uma
lista encadeada para armazenar os registros em memoria.

## Modelagem de dados e estrutura de memoria

A aplicação deve utilizar obrigatoriamente uma lista simplesmente ligada cujos nós devem
ser compostos por structs compostas por structs aninhadas e um ponteiro para o próximo
nó:

- Sub-struct Data: Dia, Mês e Ano (inteiros).
- Sub-struct Horário: Hora, Minutos e Segundos (inteiros).
- Struct Registro: Nome (string), E-mail (string), Data (struct Data) e Hor ́ario (struct
Horário).
- Struct Nó (Node): Deve conter um identificador/ID (inteiro), um objeto do tipo Re-
gistro e um ponteiro para o pr ́oximo elemento da lista (struct Node *next).

# Implementação

## Gerenciamento de memoria

- Alocação Dinâmica: Cada novo registro inserido (seja via teclado ou via arquivo) deve
ser alocado dinamicamente utilizando a função malloc().
- Desalocação: Ao encerrar o programa ou remover um registro, a memória deve ser obri-
gatoriamente liberada utilizando a função free(), garantindo que não existam memory leaks.

## Interface e Interação

1. Adicionar: Inserir um novo nö (preferencialmente no final ou in ́ıcio da lista).

2. Listar: Percorrer a lista encadeada exibindo todos os registros com formatação na im-
pressão.

3. Procurar: Busca linear na lista por nome ou por data. Devem ser exibidos todos os
resultados cuja assinatura corresponda ao campo buscado. Deve ser exibido o ID e os
dados da Struct.
4. Remover: Localizar o nó com baseado ID, e ajustar os ponteiros da lista para remover
o dado da lista, e na sequência liberar a memória.

## Automação

1. Importação de Log: Ler o arquivo de texto (.txt), descartar o cabeçalho, e para cada
linha  ́util de dados lida, criar um novo nó na lista encadeada.
2. Exportação Binária: Salvar o conteúdo da lista em um arquivo binário. Nota: Não
deve ser salvo o ponteiro ”next”, apenas os dados do registro.
3. Recuperação: Ler o arquivo binário e reconstruir a lista encadeada em memória.