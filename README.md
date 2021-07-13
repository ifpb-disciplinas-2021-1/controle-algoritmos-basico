# Algoritmos - Conceitos básicos

Este projeto está estruturado com os assuntos relacionados aos conceitos básicos de entrada e saída, e os seus respectivos comendos na Linguagem de Programação C.

**Aulas**

*[Aula 1 - Fluxogramas ](https://github.com/ifpb-disciplinas-2021-1/controle-algoritmos-basico/commit/184ab8ba1a966263e52af8cdfb8275ed293a745f)*

*[Aula 2 - Conceitos básicos - comandos de entrada e saída](https://github.com/ifpb-disciplinas-2021-1/controle-algoritmos-basico/commit/a787e9b1937b7f0a823fd69d190210056cde52f0)*


# Ambientes de Desenvolvimento

Na disciplina poderemos usar dois ambientes de programação. O primeiro será utilizado de __off-line__, no computador. Por sua vez, o segundo utilizará de um serviço online para gerenciarmos os processos de criação, compilação e execução dos algoritmos.

Nos primeiro ambiente será utilizando o [Visual Studio Code](https://code.visualstudio.com/download) como nosso Editor de código-fonte. E o [GNU Compiler Collection](https://gcc.gnu.org/install/binaries.html) como Compilador.

O segundo ambiente será com o serviço __rel.it__.
O [repl.it](https://repl.it/) fornece um conjunto de funcionalidades para codificação, compilação e execução do código-fonte, sem a necessidade de instalação prévia.


# Atividade prática

Na pasta [atividades](/atividades) temos a nossa segunda lista de exercício. Desenvolva, para cada item, um algoritmo correspondente.
Os arquivos devem ser compiláveis (sem problemas para compilar) e atenderem ao solicitado em cada questão.

Na pasta [atividades-respostas](/atividades-respostas) temos quatro respostas da nossa segunda lista de exercício. As questões a serem respondidas foram escolhidasd pelos alunos em nossa turma no Classroom. Para exemplificar, observe o código desenvolvido na Linguagem C para a questão `e02-4`.

```
#include <stdio.h>
int main(){
    // int numero, sucessor,antecessor;
    //ler um numero
    printf("Digite um numero: \n");
    scanf("%i", &numero);
    //calcular o sucessor
    sucessor = numero + 1;
    //calcular o antecessor
    antecessor = numero - 1;
    printf("O sucessor ao número %i é: %i \n", numero, sucessor);
    printf("O antecessor ao número %i é: %i \n", numero, antecessor);
    return 0;
}
```



## Metodologia

Esta atividade prática está planejada em um conjunto de algoritmos e para ser desenvolvida individualmente ou coletivamente. 
Cada aluno deve fazer o __fork__ deste projeto e implementar sua própria solução. 

Caso surja alguma dúvida no desenvolvimento, falar de imediato via [Slack](https://ifpb-20211-algoritmos.slack.com/archives/C0278PKTBC3). 

> Lembrete: Não guardem dúvidas, elas são como as dívidas. Acumulam-se e nos prejudicam :)

### Compilação

Lembrem-se que após a criação do algotimos, o arquivo `.c` precisa ser compilado.

```
// main.c     -- Linguagem de programação C
// compilação -- compilador (sintaxe, léxico)
// main       -- executável
```

Seguimos os passos:

*1. compilar o código-fonte (gerar um arquivo executável)*

*2. executar o executável (gerado no passo 1)*

Passo 1: `gcc exemplo-01.c -o exemplo-01`.
Passo 2: `./exemplo-01`.