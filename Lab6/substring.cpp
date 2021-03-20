#include <iostream>

struct string {
    char *str;
    size_t size;
    size_t capacity;

    string() {
        size = 1;
        capacity = 1;
        str = new char [capacity];
    }  // Конструктор пустой строки

    void reallocate(size_t new_capacity) {
        capacity = new_capacity;
        char * new_data = new char [capacity];
        for (int i = 0; i < size and i < capacity; ++i)
        {
            new_data[i] = str[i];
        }
        delete [] str;
        str = new_data;
    }

    string(size_t cnt, char c) {
        string();
        while (capacity <= size) {
            reallocate(capacity * 2);
        }
        for (int i = 0; i < size; ++i)
        {
            str[i] = c;
        }
        str[size]='\0'; }  // Заполняющий конструктор

    string(const string& s) {
        size = s.size;
        capacity = s.capacity;
        str = new char[capacity];
        for (size_t i = 0; i < size; i++)
        {
            str[i] = s.str[i];
        }
        str[size] = '\0'; }  // Копирующий конструктор

    string(char c){
        size = 1;
        capacity = 2;
        str = new char[2];
        str[0] = c;
        str[1] = '\0';
    } // Конструктор строки из одного символа

    string(const char * c_str)  {
        size = 0;
        capacity = 2;
        str = new char[capacity];
        str[0] = '\0';
        int k = 0;
        while (c_str[k] != '\0') {
            k++;
        }
        while (capacity <= k) {
            reallocate(capacity * 2);
        }
        size = k;
        for (size_t i = 0; i < k; ++i)
            str[i] = c_str[i];
        str[k] = '\0';
    } // Конструктор строки из c-style строки (массива символов)

    ~string();{
        delete []str;
        str = NULL;
        capacity = 0;
        size = 0;
    };    //очистить всю используемую память

    string& operator= (const string& new_str) {
        if (this->capacity <= new_str.size)
        {
            while (capacity <= new_str.size)
            {
                reallocate(capacity * 2);
            }

            size = new_str.size;
            for (int k = 0; k < size; k++)
            {
                str[k] = new_str.str[k];
            }
            str[size] = '\0';
        }
        else
        {
            size = new_str.size;
            if (str)
            {delete [] str;}
            str = new_str.str;
        }
        return *this; }

    bool operator== (const string& other) {
        if (size != other.size)
        {return false;}
        else {
        for (int i = 0; i < size; i++) {
            if (str[i] != other.str[i])
                return false;
        }
        return true;}
    }

    bool operator!= (const string& other) {
        return !(*this == other);
    }

    bool operator> (const string& other) {
        for (size_t i = 0; i < size; i++)
        {
            if (this->str[i] != '\0' and other.str[i] == '\0')
            {return true;}
            if (this->str[i] > other.str[i])
            {return true;}
            if (this->str[i] < other.str[i])
            {return false;}
        }
        return false;
    }

    bool operator< (const string& other) {
        for (size_t i = 0; i < size; i++)
        {   if (this->str[i] > other.str[i])
            {return false;}
            if (this->str[i] == '\0' and other.str[i] != '\0')
            {return true;}
            if (this->str[i] < other.str[i])
            {return true;}
        }
        return false;
    }


    string& operator+= (const string& other) {
        size_t new_size = size + other.size;
        while (capacity <= new_size)
        {reallocate(capacity * 2);}

        for (size_t i = size; i < new_size; i++)
        {
            str[i] = other.str[i - size];
        }
        size = new_size;
        str[size] = '\0';
        return *this;
    }

    char operator[] (unsigned int pos) {  }

    void append(const string other);  // дописать в конец данной строки другую

    void resize(unsigned int new_capacity);  // увеличить/уменьшить емкость строки

    void reserve(unsigned int capacity); // зарезервировать память в нужном объеме

    void insert(unsigned int pos, string other);  // Вставка другой строки внутрь данной

    void shrink_to_fit();  //очистить неиспользуемую память

    void clear();   //очистить содержимое строки, занимаемое место при этом не меняется

    friend std::ostream& operator<< (std::ostream& ostr, const string& str) {  }
    friend std::istream& operator>> (std::istream& istr, const string& str) {  }

};


string operator + (const string & str1, const string & str2)
{

}


int stoi(const string str, size_t pos = 0, int base = 10 );
// Преобразование числа, записанного символами в строке, в int
// base - основание системы счисления
// Числа могут быть отрицательными
// Обработка чисел в сс > 10. Большие и маленькие буквы.
