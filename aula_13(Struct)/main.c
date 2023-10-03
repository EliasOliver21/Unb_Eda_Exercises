#include <stdio.h>

int main(){

    struct Alunos{
        
        char nome[40];
        char curso[40];
        int matricula;
        float nota;
    };

    struct Alunos aluno;

    printf("\n ---------------Cadastro do Aluno--------------- \n\n\n");

    printf("Digite o nome do aluno:\n");
    fgets(aluno.nome,40,stdin);
    printf("Qual curso faz: \n");
    fgets(aluno.curso,40,stdin);
    printf("Digite a matrícula do aluno: \n");
    scanf("%d",&aluno.matricula);
    printf("Digite sua melhor nota: \n");
    scanf("%f",&aluno.nota);
    
    printf("\nInformações do Aluno\n\n");
    printf("Aluno     ---------------- %s",aluno.nome);   
    printf("Curso     ---------------- %s",aluno.curso);
    printf("Matrícula ---------------- %d\n",aluno.matricula);
    printf("Nota      ---------------- %.2f\n",aluno.nota);
}