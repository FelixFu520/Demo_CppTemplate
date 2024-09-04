#include <iostream>
#include <type_traits>

template<typename T>
struct is_pointer_to_int:std::false_type{};

template<>
struct is_pointer_to_int<int*>:std::true_type{};

template<typename T>
typename std::enable_if<std::is_integral<T>::value, void>::type
print_type(T t){
    std::cout << "integral type\n";
}

template<typename T>
typename std::enable_if<std::is_floating_point<T>::value, void>::type
print_type(T t){
    std::cout << "floating point type\n";
}

int test0017(){
    std::cout << std::boolalpha;
    std::cout << "is int integral? "<< std::is_integral<int>::value<< '\n';
    std::cout << "is float integral? "<< std::is_integral<float>::value<< '\n';

    std::cout << "is int floating point? "<< std::is_floating_point<int>::value<< '\n';
    std::cout << "is float floating point? "<< std::is_floating_point<float>::value<< '\n';

    std::cout << "is int same as float? "<< std::is_same<int, float>::value<< '\n';
    std::cout << "is int same as int? "<< std::is_same<int, int>::value<< '\n';

    std::cout << "is int* pointer to int? "<< is_pointer_to_int<int*>::value<< '\n';
    std::cout << "is int* pointer to float? "<< is_pointer_to_int<float*>::value<< '\n';

    print_type(1);
    print_type(1.0f);

    return 0;
}