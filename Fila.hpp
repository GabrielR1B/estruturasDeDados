#ifndef FILA_HPP
#define FILA_HPP
// Nó da lista encadeada
struct Node {
    int data;      // Dados armazenados no nó
    Node* next;    // Ponteiro para o próximo nó

    // Construtor do nó
    Node(int value);
};

// Classe Fila
class Fila {
private:
    Node* front;   // Ponteiro para o início da fila
    Node* rear;    // Ponteiro para o final da fila
    size_t size;   // Tamanho atual da fila

public:
    // Construtor
    Fila();

    // Destruidor
    ~Fila();

    // Adiciona um elemento ao final da fila
    void enqueue(int value);

    // Remove o elemento do início da fila
    void dequeue();

    // Retorna o elemento do início da fila
    int& getFront() const;

    // Verifica se a fila está vazia
    bool isEmpty() const;

    // Retorna o tamanho da fila
    size_t getSize() const;
};
#endif // FILA_HPP
