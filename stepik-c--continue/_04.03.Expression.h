//задача на класс вычисляющий выражение

struct Expression
{
    virtual double evaluate() const = 0;
    virtual ~Expression(){}
};

struct Number : Expression
{
public:
    Number(double value)
        : value(value)
    {}
    double evaluate() const{
       return value;
    }
    
private:
    
    double value;
};

struct BinaryOperation : Expression
{
    /*
      Здесь op это один из 4 символов: '+', '-', '*' или '/', соответствующих операциям,
      которые вам нужно реализовать.
     */
    BinaryOperation(Expression const * left, char op, Expression const * right)
        : left(left), op(op), right(right)
    { }
    
    ~BinaryOperation(){
        delete left;
        delete right;
    }
    
    double evaluate() const {
    switch (op) {
    case '+':
      return left->evaluate() + right->evaluate();
    case '-':
      return left->evaluate() - right->evaluate();
    case '*':
      return left->evaluate() * right->evaluate();
    case '/':
      if (left->evaluate() == 0) return 0;
      return left->evaluate() / right->evaluate();
    }

    };

private:
    Expression const * left;
    Expression const * right;
    char op;
};