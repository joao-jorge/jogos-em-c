1- Problema:

O jogo adivinha o número é muito comum nas crianças de todo o mundo. Esse jogo é feito por duas crianças. Uma criança escreve um número numa folha e a outra tenta adivinhar o número escrito. A medida que a criança vai dando palpites sobre o possível número escrito a outra vai dando algumas mensagens como: está frio, está muito fria, está mormo, está quente, está muito quente, etc. 

2- Programa:

Desenvolva um programa para simular esse jogo. O menino que escreve o número e o guarda no papel é o computador, enquanto que, o menino que tenta adivinhar o número é você. O computador começa por selecionar um número inteiro entre 0 a 1024, para o efeito, utilize a função biblioteca srand(). Em seguida o utilizador, que é você, tenta adivinhar o número sorteado, digitando um número inteiro entre 0 e 1024. 

Se número digitado coincidir com o número gerado, voçê ganhou o jogo, e o programa pode começar um outro jogo, se o utilizador pretender. Para esse caso, o programa deve sortear um número aleactório entre 0 a 1024, utilizando a função rand(), cujo parâmetro deve ser o número gerado anteriormente. 

Se o número digitado não coincidir com o número gerado, o programa deve notificar se número digitado é maior ou menor, emitindo para o efeito, uma série de mensagens intuitivas que levarão ao utilizador a acertar o número. O utilizador tem no máximo um número positivo x de tentativas. Esse número x é pedido ao utilizador, antes de iniciar qualquer jogada. Se esse conjunto de tentativas for esgotado o jogo termina e o computador pode abrir um outro jogo se o utilizador quiser.

No termino de cada jogada, o programa deve mostrar o número de tentativas que o jogador pediu e o número de tentativas que levou a acertar ou não no número. 