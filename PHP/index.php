<?php

# Conexão com o banco de dados MySQL
#--------------------------------
$servidor = "localhost";
$usuario = "root";
$senha = "";
$database = "aulas";

$conexao = mysqli_connect($servidor, $usuario, $senha, $database);
/*
#Criando tabelas usando PHP
--------------------------------
#Tabela cursos (nome do curso, carga horaria)
--------------------------------
$query = "CREATE TABLE CURSOS (
	id_curso int not null auto_increment,
	nome_curso varchar(255) not null,
	carga_horaria int not null,
	primary key(id_curso)
)";

$executar = mysqli_query($conexao,$query);
if($executar){
	 Echo "Executado com sucesso(cursos)<br>";
}
else{
	echo "Falha ao executar(cursos)<br>";
}

#Tabela alunos (nome do aluno, data de nascimento)
--------------------------------

$query = "CREATE TABLE ALUNOS(
	id_aluno int not null auto_increment,
	nome_aluno varchar(255) not null,
	data_nascimento varchar(255) not null,
	primary key(id_aluno)
)";
$executar = mysqli_query($conexao,$query);
if($executar){
	 Echo "Executado com sucesso(alunos)<br>";
}
else{
	echo "Falha ao executar(alunos)<br>";
}

#Tabela alunos_cursos (aluno, curso)
--------------------------------

$query = "CREATE TABLE ALUNOS_CURSOS(
	id_aluno_curso int not null auto_increment,
	id_aluno int not null,
	id_curso int not null,
	primary key(id_aluno_curso)
)";

#$executar = mysqli_query($conexao,$query);
if($executar){
	 Echo "Executado com sucesso(alunos_cursos)<br>";
}
else{
	echo "Falha ao executar(alunos_cursos)<br>";
}

# Inserir dados nas tabelas --------------------------------

$query ="INSERT INTO alunos(nome_aluno,data_nascimento) VALUES('Joao', '10-03-1998')";
$executar = mysqli_query($conexao,$query);

if($executar){
	 Echo "Executado com sucesso(inserção)<br>";
}
else{
	echo "Falha ao executar(inserção)<br>";
}
$query = "INSERT INTO cursos(nome_curso,carga_horaria) VALUES('Curso de PHP','40')";

$executar = mysqli_query($conexao,$query);

if($executar){
	 Echo "Executado com sucesso(inserção cursos)<br>";
}
else{
	echo "Falha ao executar(inserção cursos)<br>";
}
$query = "INSERT INTO alunos_cursos(id_aluno, id_curso) VALUES('1','1')";
$executar = mysqli_query($conexao,$query);

if($executar){
	 Echo "Executado com sucesso(inserção alunos cursos)<br>";
}
else{
	echo "Falha ao executar(inserção alunos cursos)<br>";
}
/*
#Deletar dados da tabela --------------------------------

if(mysqli_query($conexao, "DELETE FROM alunos WHERE id_aluno = 4")){
	 Echo "Apagado com sucesso<br>";
}
else{
	echo "Falha ao apagar<br>";
}
*/
#Alteração de dados --------------------------------
/*
if(mysqli_query($conexao, "UPDATE alunos SET nome_aluno = 'Joao Victor' WHERE id_aluno = 1")){
		 Echo "Alterado com sucesso<br>";
}
else{
	echo "Falha ao editar<br>";
}

*/

#Consultas --------------------------------
/*
echo '<table border=1>
		<tr>
			<th>id</th>
			<th>Nome</th>
			<th>Data de Nascimento</th>
		</tr>';

$consulta = mysqli_query($conexao, "SELECT * FROM alunos");
while($linha = mysqli_fetch_array($consulta)){
	echo'<tr><td>'.$linha['id_aluno'].'</td>';
	echo'<td>'.$linha['nome_aluno'].'</td>';
	echo'<td>'.$linha['data_nascimento'].'</td></tr>';
}	

echo '</table>';
*/
$consulta = mysqli_query($conexao, "SELECT ALUNOS.nome_aluno, CURSOS.nome_curso FROM ALUNOS, CURSOS, ALUNOS_CURSOS WHERE ALUNOS_CURSOS.id_aluno = ALUNOS.id_aluno AND ALUNOS_CURSOS.id_curso = CURSOS.id_curso");
echo '<table><tr><th>Nome do Aluno</th><th>Nome do Curso</th></tr>';
while($linha = mysqli_fetch_array($consulta)){
	echo '<tr><td>'.$linha['nome_aluno'].'</td><td>'.$linha['nome_curso'].'</td></tr>';
}