#include <iostream>
#include <set>
#include <list>
#include <vector>

template <typename Container>
void print_container(const Container& cont) {
    for (const auto& element : cont) {
        std::cout << element;
        // ������� ������� � ������ ����� ������� ��������, ����� ����������
        if (&element != &(*cont.rbegin()))
            std::cout << ", ";
    }
    std::cout << std::endl;
}

int main() {
    std::set<std::string> test_set = { "one", "two", "three", "four" };
    std::list<std::string> test_list = { "one", "two", "three", "four" };
    std::vector<std::string> test_vector = { "one", "two", "three", "four" };

    print_container(test_set);   // �����: four, one, three, two
    print_container(test_list);  // �����: one, two, three, four
    print_container(test_vector);  // �����: one, two, three, four

    return 0;
}