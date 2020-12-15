# CTraining
C Training MMITS

=======================================================================

# Baixar o codigo do site github/bitbucket/gitab/etc

1 - Clonar o repositório na sua maquina
> git clone http://muriloman.github.com/ctraining

=======================================================================
# Criar uma branch

1 - Escolha a versão a ser copiada (branch)
> git checkout nomeBranchQueSeraCopiada
> git branch nomeNovaBranch
> git checkout nomeNovaBranch

=======================================================================

# Acabou de codificar ? 

1 - Adicionar os arquivos em stage (marcar todos que devem entrar no pacote do commit)
> git add -A

2 - Criar o commit (fechar o pacote)
> git commit -m "Mensagem especificando resumidamente o que está sendo feito no commit"

=======================================================================

# Sincronizar

1 - Quer mandar os commits para sua branch no servidor ?
> git push origin nomeBranch

=======================================================================

# Ao dar push, deu erro que existem atualizações na sua frente e você ainda não tem?

1 - Baixar os commits da branch do servidor para sua branch local
> git pull origin nomeBranch

=======================================================================

# Deu conflito ?

1 - Abra seu editor de code e resolva os conflitos, após terminar todos eles mande:
> git add -A
> git merge --continue

=======================================================================

# Escreveu nome da branch errado ?

1 - Para renomear branch atual
> git branch -m nomeNovo

=======================================================================

# Quer apagar uma branch local?

1 - Apagar a branch local
> git branch -D nomeBranch

=======================================================================
