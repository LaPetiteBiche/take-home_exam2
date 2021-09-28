#include <iostream>
#include <vector>

// Not working
class Fruit {
    public:
    Fruit*(int ripeness) : ripeness_(ripeness) {}
    int sugar_content() const { return 2*ripeness_+3; }
    
    private:
    int ripeness_;
}

class Apple : public Fruit {
    
    private:
    int ripeness_;

};

class Orange : public Fruit {
    public:
    int sugar_content() const { return 5*ripeness_+6; }
    
    private:
    int ripeness_;
    
};

void print(Fruit fruit) {
    std::cout << fruit.sugar_content() << " ";
}

int main() {
    std::vector<Fruit*> fruits;
    for(int i = 0; i < 6; ++1)
        i < 3 ? fruits.push_back(new Orange(i-3));
    for(int i = 0; i < 6; ++i)
        print(*fruits[i]);
    std::cout << std::endl;
    for(int i = 0; i < 6; ++ i)
        delete fruits[i];
    return 0;
}