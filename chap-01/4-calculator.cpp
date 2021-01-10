#include <iostream>
#include <string>
#include <vector>

// Le '*' a été remplacé par 'x' parce que sur mon systeme il n'accepte pas le '*' en argument. 

bool parse_args(char& op, std::vector<int>& values, int arg, char** argv){
    if (arg < 2)
    {
        std::cerr << "Expected operator as first argument." << std::endl;
        return false;
    }

    std::string op_bis = argv[1];

    if (op_bis != "+" && op_bis != "x" && op_bis != "-")
    {
        std::cerr << "Expected operator to be '+', '*' or '-'." << std::endl;
        return false;
    }

    op = op_bis[0]; 

    for (auto arg_i = 2; arg_i < arg; ++arg_i)
    {
        values.emplace_back(std::stoi(argv[arg_i]));
    }

    if (op == '-' && values.empty()){
        std::cerr << "Il faut au moins un nombre pour une soustraction" << std::endl;
        return false;
    }
    
    return true;
}

int add(const std::vector<int>& values){
    int result = 0;
    for (auto v : values)
    {
        result += v;
    }
    return result;
}

int multiply(const std::vector<int>& values){
    int result = 1;
    for (auto v : values)
    {
        result *= v;
    }
    return result;
}

int sub(const std::vector<int>& values){
    int result = values[0];
    for (auto i = 1; i < values.size(); ++i)
    {
        result -= values[i];
    }
    return result;
}

int compute_result(char op, const std::vector<int>& values){
    switch (op)
    {
    case '+':
        return add(values);
    case 'x' :
        return multiply(values);
    case '-' :
        return sub(values);
    default:
        return 0;
    }
}

void display_result(int result){
    std::cout << "Result is " << result << std::endl;
}

int main(int argc, char** argv)
{
    char op = '?';
    std::vector<int> values;

    if (!parse_args(op, values, argc, argv))
    {
        return -1;
    }

    auto result = compute_result(op, values);
    display_result(result);

    return 0;
}
