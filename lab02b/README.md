## Especificações dos processadores utilizados:

Execução 1 processador : i3-7100 

Execução 2 processadores : i3-7100 

Execução 4 processadores : i3-7100 

Execução 6 processadores : i7-12700H

Execução 8 processadores : Apple M1 


## 1. Qual o tempo de execução serial e paralelo para 1, 2, 4, 6 e 8 processadores? Desenhe um gráfico contendo todos os tempos de execução.

## 2. Qual o speedup para 1, 2, 4, 6 e 8 processadores? Desenhe um gráfico mostrando os diferentes valores de speedup.

## 3. Como você acha que poderia melhorar o seu algoritmo para obter maior benefício com o paralelismo? Para provar seu ponto, refaça a solução com essa abordagem e construa um novo gráfico de speedup para 1, 2, 4, 6 e 8 processadores.

Se houvesse algum jeito de alocar as threads divididas igualmente entre cada um dos processadores provavelmente conseguimos extrair um maior benefício do paralelismo, talvez criando apenas um número de threads correspondente ao número de processadores (por exemplo 8 threads para 8 processadores com cada processador responsável por 1 thread equivalente a ⅛ das linhas da matriz). Não conseguimos concretizar essa nova abordagem.




## Print de uso dos 8 núcleos (htop):

![image](https://github.com/erikhsu08/computacao-paralela/assets/83241823/383bc160-0ea7-437c-9b67-a7211a9fe6a2)
