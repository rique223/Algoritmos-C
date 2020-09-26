# [PT-BR]

## Algoritmo de encriptação de palavras com a Cifra de Cesar

### O que é a Cifra de Cesar?
> Em criptografia, a Cifra de César, também conhecida como cifra de troca, código de César ou troca de César, é uma das mais simples e conhecidas técnicas de criptografia. É um > tipo de cifra de substituição na qual cada letra do texto é substituída por outra, que se apresenta no alfabeto abaixo dela um número fixo de vezes. Por exemplo, com uma troca > de três posições, A seria substituído por D, B se tornaria E, e assim por diante. O nome do método é em homenagem a Júlio César, que o usou para se comunicar com os seus 
> generais.

-Wikipedia

### Como funciona esse algoritmo?

1. O usuário fornece uma palavra(string) e uma chave de encriptação(integer) para o algoritmo processar;
2. A função principal roda a função de encriptação que recebe a palavra e a chave antes fornecidas como parâmetros;
3. Para cada letra da palavra o algoritmo adiciona o valor da chave à essa letra(que é interpretado como um valor inteiro da tabela ASCII) e verifica se o resultado dessa operação passou do valor da letra z ou da letra Z na tabela ASCII(dependendo se a letra for maiúscula ou minúscula);
4. Caso o resultado anterior seja menor que o valor de z ou Z o algoritmo continua sem verificações extras, porém caso o valor seja maior que Z ou Z o algoritmo pega a diferença entre o valor ASCII do símbolo resultante e o Valor ASCII de z ou Z, adiciona essa diferença ao valor de a - 1 ou A-1, o que faz com que o algoritmo "dê uma volta no alfabeto" e adicione o restante da chave de encriptação partindo da primeira letra do alfabeto, e só após isso tudo fornece o novo valor da letra;
5. Quando a função termina a palavra fornecida inicialmente está com todas suas letras encriptadas pela cifra de Cesar e sendo assim é escrita na tela para que o usuário a veja;

# [EN]

## Caesar Cipher algorithm for word encryption

### What is the Caesar Cipher?

> In cryptography, a Caesar cipher, also known as Caesar's cipher, the shift cipher, Caesar's code or Caesar shift, is one of the simplest and most widely known encryption 
> techniques. It is a type of substitution cipher in which each letter in the plaintext is replaced by a letter some fixed number of positions down the alphabet. For example, 
> with a left shift of 3, D would be replaced by A, E would become B, and so on. The method is named after Julius Caesar, who used it in his private correspondence.

-Wikipedia

### How does this algorithm work?

1. The user types a word(string) and a encryption key(integer) for the algorithm to process;
2. The main function runs the encryption function who receives the word and the key cited above as parameters;
3. For each letter from the word the algorithm adds the value of the key to this letter(which is interpreted as a integer value from the ASCII table) and verifies if the result of this operation passed the z or Z letter value on the ASCII table(depending on whether it is upper or lowercase);
4. If the prior result is less than the value of z or Z the algorithm continues without further verifications, else if the value is bigger than z or Z the algorithm gets the difference between the resulting ASCII symbol value and the letter z or Z ascii value, adds this difference to the a - 1 or A - 1 value, which makes the algorithm "go full circle" around the alphabet and add the rest of the encryption key starting from the first letter of the alphabet and only after all this it will store the letter's new value;
5. When the function ends the original word has all its letters encrypted by the Caesar Cipher and so it is written on the screen for the user to see it;
