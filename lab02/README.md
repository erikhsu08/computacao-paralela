# Documentação

## Nano
![image](https://github.com/erikhsu08/computacao-paralela/assets/111096802/b08a6024-597d-4929-be97-958748516249)

## Compilação e execução do programa no terminal AWS
![image](https://github.com/erikhsu08/computacao-paralela/assets/111096802/83dd48b8-47bf-4e2a-917c-7b205758b20e)

## Como compilar o programa na plataforma AWS
Para compilar o programa, é necessário digitalizar o código de solução no editor de texto "nano". Para fazer isso, digite nano e em seguida o nome do arquivo a ser criado. Por exemplo: `nano MultiMatrizVetor.c` . Após a digitalização, salvar o arquivo e fechar o editor de texto, é necessário utilizar o seguinte comando no terminal para compilação do arquivo: `gcc -o MultiMatrizVetor MultiMatrizVetor.c -lpthread`
## Como executar o programa
No terminal, digite o seguinte comando: `./{nome do arquivo de saída}`. No nosso caso, vamos digitar: `./MultiMatrizVetor`.
## Como comprovar que os resultados propostos foram alcançados
Após a execução do programa, podemos observar uma mensagem informando se as criações das threads foi bem sucedida e em seguida temos as execuções de cada thread demonstradas pelo vetor contendo os valores resultantes da operação de multiplicação. Em seguida, o vetor final resultante das operações realizadas é mostrado na tela.
**OBS: Os valores da matriz e do vetor que serão multiplicados podem ser alterados no código fonte, assim como seus respectivos tamanhos.**
