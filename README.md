# MATRIZ-AULA-
AULA 04/11/26

EX 01 — Preencher e exibir uma matriz 3x3
Enunciado detalhado: Crie um programa que declare uma matriz de inteiros 3x3. Peça
ao usuário para digitar os 9 valores, um por vez, informando sempre a posição (ex:
[0][0], [0][1]...). Ao final, exiba a matriz na tela em formato de tabela (3 linhas e 3
colunas).
Objetivo: aprender a ler e imprimir matriz com for duplo. Arquivo: ex01.c

EX 02 — Soma de todos os elementos (4x4)
Enunciado detalhado: Declare uma matriz 4x4 de inteiros. Leia os 16 valores digitados
pelo usuário. Calcule a soma de TODOS os elementos usando um acumulador (soma
+= mat[i][j]). Exiba a matriz e depois a soma total.
Objetivo: treinar acumulador dentro de laço aninhado. Arquivo: ex02.c

EX 03 — Maior e menor valor com a posição (3x4)
Enunciado detalhado: Leia uma matriz 3x4 de inteiros. Descubra qual é o MAIOR valor
e qual é o MENOR valor, e em qual linha e coluna cada um está (se houver repetidos,
mostre a primeira ocorrência). Inicialize maior e menor com mat[0][0] e percorra o
resto comparando.
Objetivo: lógica de máximo/mínimo + guardar índices. Arquivo: ex03.c

EX 04 — Soma de uma linha e de uma coluna escolhidas (5x5)
Enunciado detalhado: Leia uma matriz 5x5. Depois peça ao usuário para escolher UM
número de linha (0 a 4) e UM número de coluna (0 a 4). Valide (repita a pergunta se
for inválido). Calcule e mostre: (a) a soma de todos os elementos daquela linha; (b) a
soma de todos os elementos daquela coluna.
Objetivo: fixar indexação mat[linha][j] e mat[i][coluna]. Arquivo: ex04.c

EX 05 — Matriz transposta (3x3)
Enunciado detalhado: Leia uma matriz 3x3. Crie uma segunda matriz trans onde
trans[j][i] = mat[i][j] (linhas viram colunas). Exiba a matriz original e depois a
transposta, ambas formatadas.
Objetivo: entender transposição. Arquivo: ex05.c

EX 06 — Soma de duas matrizes (3x3)
Enunciado detalhado: Leia duas matrizes A e B, ambas 3x3. Calcule a matriz C onde
cada elemento é C[i][j] = A[i][j] + B[i][j]. Exiba as três matrizes (ou pelo menos a
C).
Objetivo: operação elemento a elemento. Arquivo: ex06.c

EX 07 — Multiplicação por escalar (3x4)
Enunciado detalhado: Leia uma matriz 3x4 e depois leia um número inteiro K
(escalar). Exiba a matriz resultante da multiplicação de cada elemento por K. Não
precisa alterar a original, pode imprimir mat[i][j] * K direto.
Objetivo: operação simples com matriz retangular. Arquivo: ex07.c

EX 08 — Diagonal principal e secundária (4x4)
Enunciado detalhado: Leia uma matriz quadrada 4x4. Mostre os elementos da
diagonal principal (onde i == j) e os da diagonal secundária (onde j == N-1-i). Exiba
cada diagonal em uma linha.
Objetivo: entender condição de diagonais. Arquivo: ex08.c

EX 09 — Verificar se é matriz identidade (3x3)
Enunciado detalhado: Leia uma matriz 3x3. Verifique se ela é a matriz identidade:
tem 1 na diagonal principal e 0 em todo o resto. Use uma flag (ehIdentidade = 1) que
vira 0 se achar algo errado. No final diga "EH" ou "NAO EH".
Objetivo: validação com flag. Arquivo: ex09.c

EX 10 — Soma da diagonal e dos triângulos (5x5)
Enunciado detalhado: Leia uma matriz 5x5. Calcule separadamente: (a) soma da
diagonal principal; (b) soma dos elementos ACIMA da diagonal (j > i); (c) soma dos
elementos ABAIXO da diagonal (j < i). Exiba os três valores.
Objetivo: classificar posições com if/else. Arquivo: ex10.c

EX 11 — Contar pares e ímpares (4x5)
Enunciado detalhado: Leia uma matriz 4x5 de inteiros. Conte quantos números são
PARES (% 2 == 0) e quantos são ÍMPARES. Ao final exiba os dois totais e liste todos
os valores pares encontrados.
Objetivo: usar % dentro de matriz. Arquivo: ex11.c

EX 12 — Trocar duas linhas de lugar (4x4)
Enunciado detalhado: Leia uma matriz 4x4. Peça ao usuário dois números de linha L1
e L2 (0 a 3). Troque as duas linhas inteiras de posição (use uma variável temp coluna
por coluna). Valide os índices. Exiba a matriz após a troca.
Objetivo: manipulação de linhas. Arquivo: ex12.c

EX 13 — Boletim: média por aluno (5 alunos x 4 notas)
Enunciado detalhado: Uma escola tem 5 alunos, cada um com 4 notas. Leia a matriz
notas[5][4] (use float). Para cada aluno calcule a média das 4 notas e mostre: Aluno
1 | média | Aprovado (>=7) / Recuperação (>=5) / Reprovado. No final mostre a
média geral da turma (soma tudo ÷ 20).
Objetivo: matriz com float, aplicação real. Arquivo: ex13.c

EX 14 — Multiplicação de matrizes (2x3 vezes 3x2)
Enunciado detalhado: Leia a matriz A[2][3] e a matriz B[3][2]. Calcule C[2][2] = A x
B usando a fórmula: C[i][j] = soma de A[i][k]*B[k][j] para k=0..2 (precisa de 3 laços
aninhados: i, j, k). Exiba a matriz C resultante 2x2. Lembre-se: o no de colunas de A
deve ser igual ao no de linhas de B.
Objetivo: desafio clássico, 3 laços. Arquivo: ex14.c

EX 15 — Buscar valor e mostrar vizinhos (5x5) — DESAFIO
Enunciado detalhado: Leia uma matriz 5x5. Depois leia um valor X para buscar.
Procure X em TODA a matriz. Para cada ocorrência encontrada, mostre a posição [i][j]
e os vizinhos (cima, baixo, esquerda, direita), tomando cuidado para não acessar fora
da matriz (ex: se está na linha 0, não tem vizinho acima). Se não achar, diga "valor
não encontrado". Pode haver mais de uma ocorrência.
Objetivo: busca + controle de bordas. Arquivo: ex15.c
