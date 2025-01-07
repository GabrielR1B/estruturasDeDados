#ifndef VETOR_HPP
#define VETOR_HPP

#include <stdexcept>

class Vetor {
private:
    int* data;          // Ponteiro para o array dinâmico
    size_t capacity;    // Capacidade do vetor
    size_t size;        // Tamanho atual do vetor

public:
    // Construtor
    Vetor(size_t initial_capacity = 10);

    // Destruidor
    ~Vetor();

    // Retorna o tamanho atual do vetor
    size_t getSize() const;

    // Adiciona um elemento ao final do vetor
    void push_back(int value);

    // Acessa o elemento no índice especificado
    int& operator[](size_t index);

    // Acessa o elemento no índice especificado (versão constante)
    const int& operator[](size_t index) const;

private:
    // Redimensiona o vetor quando atingir a capacidade máxima
    void resize();
};

#endif // VETOR_HPP
