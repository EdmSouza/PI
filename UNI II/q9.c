#include <stdio.h>

//Faça um programa para armazenar o nome e o salário de 10 funcionários. Após a leitura,
//exibir a média dos salários dos funcionários.

int main()
{
    typedef struct{
        char nome[50];
        double salario;
    }Funcionario;

    static Funcionario funcionario[10];
    double media = 0;

    for(int i = 0; i<10; i++){
        scanf("%s %lf",funcionario[i].nome,&funcionario[i].salario);
    }
    for(int j = 0; j<10; j++){
        media += funcionario[j].salario;
    }
    printf("%lf",media/10);
}

// Faça um programa para armazenar informações bancárias dos clientes, com os seguintes dados: a) Número da conta b) Nome do titular c) Saldo bancário
//O programa irá cadastrar apenas 15 clientes. Exibir o saldo total do banco

int main()
{
    typedef struct{
        long int numeroConta;
        char nome[50];
        double saldo;
    }Contabancaria;

    static Contabancaria cliente[15];
    for(int i = 0; i<15; i++){
        scanf("%ld %s %lf",&cliente[i].numeroConta,cliente[i].nome,&cliente[i].saldo);
    }for(int j = 0; j<15; j++){
        printf("%ld %s %lf",cliente[j].numeroConta,cliente[j].nome,cliente[j].saldo);
    }
    double saldoT = 0;
    for(int k = 0; k<15; k++){
        saldoT += cliente[k].saldo;
    }
    printf("%lf\n",saldoT);
}

//Faça um programa em C que funcione da seguinte forma: a) Em uma turma de 50 alunos, cada aluno tem um nome, matrícula e a nota de 2 provas.
//b) Ler o nome, matrícula e as notas dos alunos.
//c) Calcular quantos alunos foram aprovados na disciplina, sabendo que a média é 5.

void faprovados(float media[50]){
    int contador = 0;
    for(int j = 0; j<50; j++){
        if(media[j]>=5){
            contador++;
        }
    }
    printf("%d",contador);
}

int main()

{
    typedef struct{
        char nome[50];
        long int matri;
        float nota1,nota2;
    }Aluno;

    static Aluno turma[50];
    for(int i = 0; i<50; i++){
        scanf("%s %ld %f %f",turma[i].nome,&turma[i].matri,&turma[i].nota1,&turma[i].nota2);
    }
    float media[50];
    for(int k = 0; k<50; k++){
        media[k] = (turma[k].nota1+turma[k].nota2)/(float)2;
    }
    faprovados(media);
}


//Faça um programa para armazenar o nome, sexo e idade de 10 pessoas. As entradas devem
//aceitar apenas “F” ou “M” para o sexo e valores positivos para a idade. Após a digitação dos
//dados, exibir os dados (nome, sexo e idade) de todas as pessoas do sexo feminino.

int main()
{
    typedef struct{
        char nome[50];
        char sexo;
        int idade;
    }Pessoa;

    static Pessoa pessoas[10];
    for(int i = 0; i<10; i++){
        scanf("%s %c %d",pessoas[i].nome,&pessoas[i].sexo,&pessoas[i].idade);
        if((pessoas[i].sexo != 'F' && pessoas[i].sexo != 'M') || pessoas[i].idade <0){
            printf("Valor(es) inválido(s), tente novamente\n");
            i--;
        }
    }for(int j =0; j<10; j++){
        if(pessoas[j].sexo == 'F'){
            printf("%s %c %d\n",pessoas[j].nome,pessoas[j].sexo,pessoas[j].idade);
        }
    }
}

//A prefeitura da cidade de Aracaju fez uma pesquisa entre seus habitantes, coletando dados sobre salário, idade e número de filhos. Faça um programa para ler o dado de 20 pessoas. Calcule e exiba:
//a) A média de salário da população
//b) A média do número de filhos
//c) O maior salário
double fsalario(double sal[20]){
    double temp = 0;
    for(int i = 0; i<20; i++){
        temp += sal[i];
    }return temp/(double)20;
}

double fnfilho(double fil[20]){
    double temp = 0;
    for (int i = 0; i<20; i++){
        temp += fil[i];
    }return temp/(double)20;
}

double fmaiorsal(double sal[20]){
    double maiorsal = sal[0];
    for(int i = 0; i<20; i++){
        if(sal[i]>= maiorsal){
            maiorsal = sal[i];
        }
    }return maiorsal;
}

int main()
{
    typedef struct {
        double salario;
        int idade;
        int nfilho;
    }habitante;
    static habitante Populacao[20];
    double mediasaltemp[20];
    double mediafiltemp[20];
    for(int i = 0; i<20; i++){
        scanf("%lf %d %d",&Populacao[i].salario,&Populacao[i].idade,&Populacao[i].nfilho);
        mediasaltemp[i] = Populacao[i].salario;
        mediafiltemp[i] = Populacao[i].nfilho;
    }
    double mediasal = fsalario(mediasaltemp);
    double mediafilhs = fnfilho(mediafiltemp);
    double maiorsal = fmaiorsal(mediasaltemp);
}

