#ifndef MINHEAP_HPP
#define MINHEAP_HPP

#include <cstddef>
#include <stdexcept>
#include <iostream>

class MinHeap {
private:
    int* data;         // Array dinâmico para armazenar os elementos
    std::size_t size;  // Número atual de elementos na heap
    std::size_t capacity; // Capacidade máxima da heap

    // Métodos auxiliares
    void heapifyUp(std::size_t index);
    void heapifyDown(std::size_t index);

public:
    // Construtor
    MinHeap(std::size_t initial_capacity = 10);

    // Destrutor
    ~MinHeap();

    // Adiciona um elemento na heap
    void insert(int value);

    // Remove o menor elemento da heap (a raiz)
    void removeMin();

    // Retorna o menor elemento da heap (a raiz)
    int getMin() const;

    // Verifica se a heap está vazia
    bool isEmpty() const;

    // Retorna o tamanho da heap
    std::size_t getSize() const;

    // Imprime o conteúdo da heap (para depuração)
    void printHeap() const;
};

#endif // MINHEAP_HPP
