# desafio_xadrez_LucasMendes

Este projeto em C simula os movimentos básicos de algumas peças de xadrez, utilizando recursividade e estrutura de controle de fluxo (como loops e switch), com a interação do usuário para selecionar a peça a ser movida.

## Descrição

O programa permite que o usuário escolha entre os seguintes movimentos de peças de xadrez:

* **Torre** (movimenta-se em linha reta para frente, para trás ou lateralmente)
* **Rainha** (movimenta-se em qualquer direção)
* **Bispo** (movimenta-se apenas nas diagonais)
* **Cavalo** (movimenta-se de forma especial, "L", duas casas em uma direção e uma em outra)

O código está estruturado para que cada tipo de peça seja movido de acordo com sua lógica específica. A movimentação é implementada por meio de funções recursivas para a Torre e a Rainha, e loops para o Bispo e o Cavalo.

## Como usar

1. Clone o repositório ou baixe o código.

2. Compile o código com um compilador C, como o `gcc`:
3. 
   gcc xadrez.c -o xadrez
   
4. Execute o programa gerado:

   ./xadrez

5. O programa exibirá um menu interativo para que você escolha qual peça deseja mover. Para selecionar a peça, basta digitar a letra correspondente:

   * `T` ou `t` para Torre
   * `R` ou `r` para Rainha
   * `B` ou `b` para Bispo
   * `C` ou `c` para Cavalo

## Funcionalidades

* **Recursividade**: A Torre e a Rainha se movem usando recursão, com chamadas sucessivas até que o número de casas a serem movidas chegue a zero.
* **Looping**: O Bispo e o Cavalo se movem com laços `for` para simular seus deslocamentos.
* **Menu interativo**: O usuário pode selecionar a peça que deseja mover e visualizar sua movimentação.

## Estrutura do Código

* **movtorre**: Função recursiva para movimentação da torre.
* **movrainha**: Função recursiva para movimentação da rainha.
* **movbispo**: Função para movimentação do bispo.
* **main**: Função principal que gerencia a interação com o usuário e chama as funções para movimentar as peças.
