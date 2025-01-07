#include Fila.hpp

// Implementação do construtor do nó
Node::Node(int value) : data(value), next(nullptr) {}

// Implementação do construtor da Fila
Fila::Fila() : front(nullptr), rear(nullptr), size(0) {}

// Implementação do destrutor da Fila
Fila::~Fila() {
    while (!isEmpty()) {
        dequeue();
    }
}

// Implementação do método enqueue
void Fila::enqueue(int value) {
    Node* newNode = new Node(value);
    if (isEmpty()) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
    ++size;
}

// Implementação do método dequeue
void Fila::dequeue() {
    if (isEmpty()) {
        throw std::out_of_range("Fila vazia");
    }
    Node* temp = front;
    front = front->next;
    delete temp;
    --size;
    if (isEmpty()) {
        rear = nullptr;
    }
}

// Implementação do método getFront
int Fila::getFront() const {
    if (isEmpty()) {
        throw std::out_of_range("Fila vazia");
    }
    return front->data;
}

// Implementação do método isEmpty
bool Fila::isEmpty() const {
    return size == 0;
}

// Implementação do método getSize
std::size_t Fila::getSize() const {
    return size;
}
//Final-Fila
