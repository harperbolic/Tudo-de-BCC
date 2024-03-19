#Dinâmica da Web

## HTML e CSS

### HTML

- Linguagem de marcação baseada em tags no formato de hipertextos.

- Indica quais outros arquivos serão requisitados.

**Estrutura de um documento HTML**

```<!DOCTYPE html>¹
<html>
	<head>²
		<meta name="author" content="Rommel">³
	</head>
	<body>
		<h1> título </h1>
		<p> parágrafo </p>
	</body>
</html>```

##### 1: versão html 2:elementos -> <tag> [conteúdo] </tag> 3: atributos -> nome="valor"

- Indica ID e classes dos elementos.

### CSS

- Define características dos elementos html (cor, tamanho, fonte e etc).

- Utiliza IDs(#) e Classes(.) como referência.

## Dinâmica e carga e processamento

1. Informar endereço.

2. Requesitar, receber e carregar HTML.

3. Requisitar, receber e carregar CSS.

4. Requisitar, receber e carregar JavaScript.

5. Requistar, receber e carregar Imagens e outros arquivos.

# Linguagem HTML

## Sintaxe

### Elementos HTML

Os elementos são a estrutura básica do documento HTML, marcados por meio de tags que são delimitadas pelos símbolos < e >. Veja o exemplo:

```<body> [conteúdo] </body.```

Toda página deve estar contida dentro de um elemento HTML.

```<html> [conteúdo] </html>```

Os nomes dos elementos nas tags **NÃO** são sensíveis ao case (maísculo ou minúsculo é indiferente."

- - -

Elementos HTML podem se apresentar em quatro formatos:

- Elementos com elemento filhos

```<html> <head></head> <body></body> </html>```

- Elementos com texto

```<title> PUC Minas Web Site </title>```

- Elementos vazios

```<meta name="author" content="Rommel"> ou <br>```

- Elementos de conteúdo misto (texto e elementos filhos)

```<p> Documento <span lang="en">Web</span> </p>```

### Atributos

- Os atributos podem ser incluídos em elementos HTML.

- Um atributo não se repete em um elemento.

- São definidos pelo par nome/valor

```<input disabled name="Nome_Usuario" value="rommelcarneiro">```

- Recomenda-se utilizar aspas duplas

- Os atributos alteram o funcionamento dos elementos do HTML.

- Cada elemento possui um conjunto próprio de atributos.

- Os atributos possuem valores livres ou pré-definidos.

### Comentários

- Os comentários não são exibidos pelo navegador

- São delimitados por <!-- e -->

```<!-- os comentarios documentam o codigo HTML -->```

### Doctype

O **DOCTYPE** indica ao browser qual versão do HTML está sendo utilizada no documento, alternando entre *quirks mode* e *strict mode*.

HTML5 	      	->      ```<!DOCTYPE html>```
     
HTML 4.01	- >	```<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN"
"http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">```

Para todos tipos de declaração, consulte [w3.org](https://www.w3.org/QA/2002/04/valid-dtd-list.html)

### Cabeçalho

Primeira parte do arquivo HTML, representada pela tag <head>, que inclui informações sobre o documento (metadados), referências a scripts, folhas de estilo (CSS) que complementam o documento.

```<!DOCTYPE html>
<html lang="pt-br">
      <head> ... </head>
      <body>
	<h1> título </h1>
	<p> parágrafo </p>
      </body>
</html>```