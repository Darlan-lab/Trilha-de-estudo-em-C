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

