__Eduarda dos Santos da Silva__

__Problema:__
O exercício pede que você atribua trabalhos aos trabalhadores de modo que o lucro total seja maximizado, respeitando as dificuldades dos trabalhos e as habilidades dos trabalhadores.

__Regras:__
- Cada trabalhador pode ser designado para no máximo um trabalho.
- Um trabalho pode ser realizado por múltiplos trabalhadores.
- Se um trabalhador não consegue realizar nenhum trabalho (porque todos os trabalhos disponíveis têm dificuldade maior que a habilidade do trabalhador), ele não ganha nenhum lucro (ou seja, seu lucro é 0).
- O objetivo é maximizar o lucro total ao designar os trabalhadores para os trabalhos.

__Objetivo:__
Você deve retornar o lucro máximo total que pode ser alcançado após atribuir os trabalhadores aos trabalhos, seguindo as regras mencionadas.

__Exemplos:__
 
Entrada 1:
difficulty = [2, 4, 6, 8, 10] \n
profit = [10, 20, 30, 40, 50]
worker = [4, 5, 6, 7]

Saída 1: 100

__Explicação:__
- difficulty1 e profit1 indicam que os trabalhos de dificuldade 2, 4, 6, 8 e 10 geram lucros de 10, 20, 30, 40 e 50, respectivamente.
- worker1 indica que os trabalhadores têm habilidades 4, 5, 6 e 7.
- O lucro máximo que pode ser obtido é 100, atribuindo os trabalhadores às dificuldades 4, 4, 6, 6.

Entrada 2:
difficulty = [85, 47, 57]
profit = [24, 66, 99]
worker = [40, 25, 25]

Saída 2: 0

__Explicação:__
- difficulty2 e profit2 indicam que os trabalhos de dificuldade 85, 47, 57 geram lucros de 24, 66 e 99, respectivamente.
- worker2 indica que os trabalhadores têm habilidades 40, 25, 25.
- Nenhum dos trabalhadores consegue realizar qualquer trabalho, portanto, o lucro é 0.

Entrada 3:
difficulty = [10, 20, 30, 40]
profit = [20, 40, 60, 80]
worker = [5, 15, 25, 35, 45]

Saída 3: 200

__Explicação:__
- difficulty3 e profit3 indicam que os trabalhos de dificuldade 10, 20, 30 e 40 geram lucros de 20, 40, 60 e 80, respectivamente.
- worker3 indica que os trabalhadores têm habilidades 5, 15, 25, 35 e 45.
- O lucro máximo que pode ser obtido é 200, atribuindo os trabalhadores às dificuldades 0, 10, 20, 30 e 40.

__Complexidade do algoritmo:__
A complexidade total do código é determinada pela combinação das operações individuais:
- Ordenação dos trabalhos: O(n log n)
- Ordenação dos trabalhadores: O(m log m)
- Criação e pré-processamento dos arrays: O(n)
- Computação do lucro total máximo: O(n + m)
Portanto, a complexidade total do código é: O(n log n + m log m)

__Resultado no Dr.Memory:__
FINAL SUMMARY:

DUPLICATE ERROR COUNTS:
	Error #   1:      2
	Error #   2:      2

SUPPRESSIONS USED:

ERRORS FOUND:
      0 unique,     0 total unaddressable access(es)
      3 unique,     5 total uninitialized access(es)
      0 unique,     0 total invalid heap argument(s)
      0 unique,     0 total GDI usage error(s)
      0 unique,     0 total handle leak(s)
      0 unique,     0 total warning(s)
      0 unique,     0 total,      0 byte(s) of leak(s)
      0 unique,     0 total,      0 byte(s) of possible leak(s)
ERRORS IGNORED:
      6 unique,     6 total,   4453 byte(s) of still-reachable allocation(s)
         (re-run with "-show_reachable" for details)
Details: C:\Users\Andre\AppData\Roaming\Dr. Memory\DrMemory-exQuatro.exe.3944.000\results.txt
