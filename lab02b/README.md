## Especificações dos processadores utilizados:

Execução 1 processador: i3-7100 

Execução 2 processadores: i3-7100 

Execução 4 processadores: i3-7100 

Execução 6 processadores: i7-12700H

Execução 8 processadores: Apple M1 (resultados distintos dos outros processadores)


## 1. Qual o tempo de execução serial e paralelo para 1, 2, 4, 6 e 8 processadores? Desenhe um gráfico contendo todos os tempos de execução.

Tempos de execução:

serial: 0,003s

1 processador: 0,009s
![image7](https://github.com/erikhsu08/computacao-paralela/assets/111096802/4eceb1e7-39b1-4f24-b980-c18654430293)

2 processadores: 0,013s
![image3](https://github.com/erikhsu08/computacao-paralela/assets/111096802/b098109c-4e1a-473c-a09a-66139ce35e5d)

4 processadores: 0,047s
![image4](https://github.com/erikhsu08/computacao-paralela/assets/111096802/73977fec-4db1-4a0b-8756-a9407489a7e5)

6 processadores: 0,189s

![image](https://github.com/erikhsu08/computacao-paralela/assets/83241823/a0852301-3319-4f6f-a026-430594850258)

8 processadores: 0,015s
<img width="392" alt="image6" src="https://github.com/erikhsu08/computacao-paralela/assets/111096802/0bbb9f4f-1b22-4ab3-8e18-7ef21d9789be">

Grafico com os tempos de execução:

![image](https://github.com/erikhsu08/computacao-paralela/assets/83241823/7a0bd738-d2ad-4710-9662-a73ba83ff80b)


## 2. Qual o speedup para 1, 2, 4, 6 e 8 processadores? Desenhe um gráfico mostrando os diferentes valores de speedup.

speedups:

1 processador: 1

2 processadores: 0,009 / 0,013 = 0,6923076923

4 processadores: 0,009 / 0,047 = 0,1914893617

6 processadores: 0,009 / 0,189 = 0,04761904761

8 processadores: 0,009 / 0,015 = 0,6

## 3. Como você acha que poderia melhorar o seu algoritmo para obter maior benefício com o paralelismo? Para provar seu ponto, refaça a solução com essa abordagem e construa um novo gráfico de speedup para 1, 2, 4, 6 e 8 processadores.

Se houvesse algum jeito de alocar as threads divididas igualmente entre cada um dos processadores provavelmente conseguimos extrair um maior benefício do paralelismo, talvez criando apenas um número de threads correspondente ao número de processadores (por exemplo 8 threads para 8 processadores com cada processador responsável por 1 thread equivalente a ⅛ das linhas da matriz). Não conseguimos concretizar essa nova abordagem.




## Print de uso dos 8 núcleos (htop):

![image](https://github.com/erikhsu08/computacao-paralela/assets/83241823/383bc160-0ea7-437c-9b67-a7211a9fe6a2)
