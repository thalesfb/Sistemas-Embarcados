# Sistemas Embarcados: Projeto Final de Linha de Produção Simulada

## Introdução
O projeto consiste em na implementação de uma balança que fará a pesagem de um item, simulando uma linha de produção, e este será avaliado se está dentro do peso conforme programado. Após a validação do seu peso, ele será gravado em uma planilha juntamente com as informações pertinentes sobre o processo fabril.

### Objetivos Educacionais:
- Compreensão Prática de Sistemas Embarcados: Ganhar experiência prática no design, implementação e teste de sistemas embarcados em um contexto de aplicação realista.
- Desenvolvimento de Habilidades de Engenharia: Aprimorar habilidades em engenharia de software e hardware, incluindo programação, design de circuitos e integração de componentes.
- Resolução de Problemas: Desenvolver a capacidade de identificar e resolver problemas técnicos complexos relacionados à automação e controle de processos.
- Trabalho em Equipe e Comunicação: Melhorar habilidades de colaboração e comunicação, trabalhando em equipe para projetar e construir o sistema.
- Pensamento Crítico e Criativo: Estimular o pensamento crítico e criativo na busca de soluções inovadoras para desafios de engenharia.

### Objetivos Técnicos:
- Desenvolvimento de um Sistema de Pesagem Automatizado: Criar um sistema capaz de pesar itens de forma precisa e automática, integrando sensores e atuadores.
- Programação de Microcontroladores: Utilizar microcontroladores para controlar o processo de pesagem e garantir a precisão e confiabilidade do sistema.
- Integração com Banco de Dados: Desenvolver uma solução para armazenar os dados de pesagem em um banco de dados, permitindo análise e monitoramento do processo.
- Interface Usuário-Máquina (HMI): Implementar uma interface de usuário que permita a interação fácil e intuitiva com o sistema, incluindo a visualização de dados e controle operacional.
- Otimização de Processos e Eficiência Energética: Focar na eficiência do processo e na redução do consumo de energia, explorando estratégias para otimizar o desempenho do sistema.

## Objetivos do Projeto
Será simulado e estrada de um item em uma linha de produção que se encaminhará até uma balança através de uma esteira ou algo similar. Situado na posição correta, se iniciará a validação do item, confirmando a princípio seu peso, se está em conformidade com o programado. Caso ele não esteja de acordo, será acionado uma luz vermelha de identificação para o operador informando a não conformidade e acionando o processo de adição de produto, onde mais produtos serão acrescidos até que esteja de acordo com a especificação de peso. Estando em conformidade, suas informações pertinentes ao processo serão gravadas em um sistema de dados compatilhados para a sequência no processo fabril, dando continuidade no seu deslocamento até o seu destino.

## Descrição e Funcionalidades
Detalhes do processo de pesagem
Descrição da interação item-máquina
Automatização envolvida (se aplicável)

## Materiais e Componentes
Lista detalhada de sensores e atuadores
Microcontroladores e outras peças eletrônicas

## Tecnologias Utilizadas
Neste projeto, utilizaremos predominantemente duas linguagens de programação: C e VBA. Ambas foram escolhidas por suas características únicas e complementares que se alinham bem com os objetivos do nosso sistema embarcado.

### Linguagem C
A linguagem C é fundamental no controle dos microcontroladores, como o Arduino, que formam o núcleo do nosso sistema de pesagem. Sua eficiência e proximidade com o hardware permitem um controle preciso e uma rápida resposta dos componentes eletrônicos. Isso é crucial para a precisão e confiabilidade do processo de pesagem, onde cada milissegundo e cada grama contam. Além disso, a capacidade de C de operar com recursos limitados é uma vantagem significativa, considerando a natureza compacta dos sistemas embarcados.

### Linguagem VBA
Para a gestão de dados e automatização do fluxo de informações, optamos pela linguagem VBA, que se integra perfeitamente com as aplicações do pacote Office. No nosso caso, o VBA será utilizado para criar scripts automatizados no Excel, permitindo que os dados de pesagem coletados pelo sistema embarcado sejam eficientemente catalogados, analisados e apresentados. Isso facilita o monitoramento em tempo real do processo de produção, além de oferecer uma plataforma acessível para análises posteriores e geração de relatórios.

### Integração entre C e VBA
A interação entre as linguagens C e VBA será uma faceta crucial do projeto. Os dados processados pelo microcontrolador (usando C) serão transmitidos para um sistema baseado em Excel, onde o VBA será utilizado para manipular e apresentar essas informações de maneira organizada e acessível. Essa integração é vital para garantir um fluxo de dados suave e eficiente, desde a coleta até a análise.

### Contribuição para os Objetivos do Projeto
Essa combinação de tecnologias não apenas atende às necessidades técnicas do projeto, mas também contribui significativamente para nossos objetivos educacionais. Através da implementação prática dessas linguagens, os alunos terão a oportunidade de aprimorar suas habilidades de programação e compreender melhor a interação entre software e hardware, um aspecto crucial na engenharia de sistemas embarcados. Além disso, a experiência com a integração entre diferentes tecnologias e plataformas preparará os alunos para desafios similares no mundo real da engenharia e da automação industrial.

## Integração e Comunicação
O sistema será capaz de se comunicar com uma planilha que servirá como banco de dados para o armazenamento das informações relevantes do processo.
Como a base de dados ficará com acesso remoto, facilitará a consulta do que está sendo produzido naquele momento, podendo ser monitorado o processo.

## Desafios Técnicos e Soluções
Principais desafios esperados
Estratégias propostas para superação desses desafios

## Testes e Validação
Procedimentos de teste
Protocolos de calibração e manutenção

## Segurança e Conformidade
Medidas de segurança implementadas
Conformidade com regulamentações relevantes

## Impacto Ambiental e Sustentabilidade
Considerações de sustentabilidade
Medidas de eficiência energética

## Futuras Extensões e Aplicações
Potenciais expansões do projeto
Integração com tecnologias emergentes

## Conclusão
Resumo dos pontos chave
Visão geral do impacto esperado do projeto

## Referências
Citações de fontes externas usadas no desenvolvimento do projeto