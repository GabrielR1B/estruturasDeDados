#include "vetor.hpp"

// Construtor
Vetor::Vetor(size_t initial_capacity)
    : capacity(initial_capacity), size(0) {
    data = new int[capacity];  // Alocação dinâmica do array
}

// Destruidor
Vetor::~Vetor() {
    delete[] data;  // Liberação da memória
}

// Retorna o tamanho atual do vetor
size_t Vetor::getSize() const {
    return size;
}

// Adiciona um elemento ao final do vetor
void Vetor::push_back(int value) {
    if (size == capacity) {
        resize();  // Redimensiona o vetor se estiver cheio
    }
    data[size++] = value;
}

// Acessa o elemento no índice especificado
int& Vetor::operator[](size_t index) {
    if (index >= size) {
        throw std::out_of_range("Índice fora dos limites");
    }
    return data[index];
}

// Acessa o elemento no índice especificado (versão constante)
const int& Vetor::operator[](size_t index) const {
    if (index >= size) {
        throw std::out_of_range("Índice fora dos limites");
    }
    return data[index];
}

// Redimensiona o vetor quando atingir a capacidade máxima
void Vetor::resize() {
    capacity *= 2;  // Dobra a capacidade
    int* new_data = new int[capacity];

    for (size_t i = 0; i < size; ++i) {
        new_data[i] = data[i];  // Copia os elementos para o novo vetor
    }

    delete[] data;  // Libera a memória do vetor antigo
    data = new_data;  // Atualiza o ponteiro para o novo vetor
}
