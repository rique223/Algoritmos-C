# [PT-BR]
## Algoritmo para resolução facilitada do dispositivo prático de Briot-Ruffini
### O que é o dispositivo prático de Briot-Ruffini?
> Em matemática, o dispositivo de Briot-Ruffini é uma forma prática de resolver com papel e caneta a [divisão euclidiana](https://pt.wikipedia.org/wiki/Divis%C3%A3o_euclidiana)
> de um [polinômio](https://pt.wikipedia.org/wiki/Polin%C3%B4mio) por um binômio da forma x - r. Foi descrito inicialmente por [Paolo Ruffini](https://pt.wikipedia.org/wiki/Paolo_Ruffini) 
> em 1804. O dispositivo de Briot-Ruffini é um caso especial da divisão sintética quando o divisor é um fator linear.

-Traduzido da Wikipedia em inglês, [Ruffinis Rule](https://en.wikipedia.org/wiki/Ruffini%27s_rule)

### Como funciona esse algoritmo?
1. O usuário fornece o grau N do polinômio que deseja dividir, uma das raizes desse polinômio, que deve ter sido encontrada antes de utilizar o algoritmo e os M indices do polinômio;
2. O algoritmo cria dois vetores de números inteiros, um em que serão armazenados as raizes do polinômio e o outro para armazenar os indíces do polinômio resultante mais o resto da divisão(que pode ser 0);
3. O algoritmo então pega o primeiro indice do vetor de indices e o coloca no primeiro local de memória do vetor de novos indices;
4. A partir desse primeiro valor ele calcula todos os outros indices utilizando a fórmula ```novo_indice = (raiz * novo_indice_anterior) + indice_atual``` onde novo_indice_anterior é o indice que foi calculado no passo anterior ou na ultima iteração dessa mesma fórmula;
5. O algoritmo pega todos os valores resultantes do passo anterior (N-1 indices e um resto de divisão) e os printa na tela no seguinte modelo de texto:
   "O polinômio resultante é de grau X", sendo x o valor do grau original menos 1;
   "Grau y: z", sendo y e z o identificador, denotado por uma letra que vai de a até z dependendo do grau do polinômio original, e o valor do novo indície no polinômio resultante, respectivamente;
   ...
   "Resto da divisão: w" sendo w o ultimo valor do vetor de novos indices e, também, o resto da divisão entre os dois polinômios; 

# [EN]
## Algorithm for the easier resolution of the Briot-Ruffini's rule
### What is the Briot-Rufinni's rule?
> In mathematics, Ruffini's rule is a practical way for paper-and-pencil computation of the [Euclidean division](https://en.wikipedia.org/wiki/Euclidean_division) 
> of a [polynomial](https://en.wikipedia.org/wiki/Polynomial) by a [binomial](https://en.wikipedia.org/wiki/Binomial_(polynomial)) of the form x – r. It was described 
> by [Paolo Ruffini](https://en.wikipedia.org/wiki/Paolo_Ruffini) in 1804. Ruffini's rule is a special case of [synthetic division](https://en.wikipedia.org/wiki/Synthetic_division) 
> when the divisor is a linear factor.

-Wikipedia, [Ruffinis Rule](https://en.wikipedia.org/wiki/Ruffini%27s_rule)

### How does this algorithm works?
1. The user enters the N degree of the polynomial that will be divided, one of the aforementioned polynomial roots, which should have been found before the use of the algorithm, and the M coefficients of this polynomial;
2. The algorithm instantiates two integer vectors, in one of them it will be stored the coefficients of the polynomial and in the other one it will be stored the new coefficients of the resulting polynomial and the rest of the division(which can be 0); 
3. The algorithm then gets the first coefficient from the coefficients vector and puts it at the first memory place of the new coefficients vector;
4. From that first value, all other coefficients are calculated using the following equation ```new_coefficient = (root * last_new_coefficient) + current_coefficient``` in which last_new_coefficient is the coefficient that was calculated in the previous step or in the previous iteration of this same equation;
5. The algorithm takes all the values from the previous step (N-1 coefficients and the rest of the division) and prints them on the screen using the following text model:  \
   "The resulting polynomial is of X degree", being that x is the value of the original degree less one;  \
   "y degree: z", beign y and z the identifier, denoted by a letter that can go from a to z depending on the original polynomial degree, and the new coefficients value in the resulting polynomial, respectively; \
   ... \
   "Rest of the division: w" beign that w is the last value of the new coefficients vector and, also, the rest of the division between the two polynomials; \