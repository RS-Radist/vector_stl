#include <iostream>
#include <iterator>
#include <vector>
using namespace std;
/*
template <class T, class Allocator = Allocator<T> >
class vector
{
    1 explicit vector(const Allocator &a = Allocator());
    2 explicit vector(size_type num, const T &val = T(), const Allocator &a = Allocator());
    3 vector(const vector <T,Allocator> &ob);
    4 template < class InIter> vector(InIter start, InIter end, const Allocator &a = Allocator());
    // == > < <= >= !=
  +  5 template <class InIter> void assign(InIter start, InIter end);
    // Помещает в вектор последовательность, определяемую параметрами start и end.
  + 6 void assign(size_type num, const T &val);
    // Помещает в вектор num элементов со значением val.
  + 7 reference at(size_type i);
    const_reference at(size_type i) const;
    // Возвращает ссылку на элемент, заданный параметром i. При этом, в отличие от перегруженного оператора [] данная функция в случае выхода за пределы массива //генерирует исключение.
  + 8 reference back();
    const_reference back() const;
    // Возвращает ссылку на последний элемент в векторе
    
  + 9 iterator begin();
    const_iterator begin() const;
    // Возвращает итератор для первого элемента в векторе.
    
  + 10 size_type capacity() const;
    // Возвращает текущую ёмкость вектора, которая представляет собой количество элементов, способное храниться в векторе до того, как возникнет необходимость в выделении дополнительной памяти.
    
  + 11 void clear();
    // Удаляет все элементы из вектора.
    
  + 12 bool empty() const;
    // Возвращает значение истины, если используемый вектор пуст, и значение лжи в противном случае.
    
    13 const_iterator end() const;
  + iterator end();
    // Возвращает итератор для конца вектора.
    
  + 14 iterator erase(iterator i);
    // Удаляет элемент, адресуемый итератором i, возвращает итератор для элемента, расположенного после удаленного.
    
  + 15 iterator erase(iterator start, iterator end);
    // Удаляет элементы в диапазоне, задаваемом параметрами start и end, возвращает итератор для элемента, расположенного за последним удалённым элементом.

  + 16 reference front();
    const_reference front() const;
    // Возвращает ссылку на первый элемент в векторе.
    
    17 allocator_type get_allocator() const;
    // !!! Возвращает распределитель вектора.
    
  + 18 iterator insert(iterator i, const T &val = T());
    // Вставляет значение val непосредственно перед элементом, заданным параметром i, возвращает итератор для этого элемента.

  + 19 void insert(iterator i, size_type num, const T &val);
    // Вставляет num копий значения val непосредственно перед элементом, заданным параметром i.

  + 20 size_type max_size() const;
    // Возвращает максимальное число элементов, которое может содержать вектор.
    
    21 reference operator[](size_type i) const;
    const_reference operator[](size_type i) const;
    // Возвращает ссылку на элемент, заданный параметром i.
    
 +  22 void pop_back();
    // Удаляет последний элемент в векторе.
 
 +  23 void push_back(const T &val);
    // Добавлчет в конец вектора элемент со значением, заданным параметром val.
    
 +  24 reverse_iterator rbegin();
    const_reverse_iterator rbegin() const;
    // Возвращает реверсивный итератор для конца вектора.
    
 +  25 reverse_iterator rend();
    const_reverse_iterator rend() const;
    // Возвращает реверсивный итератор для начала вектора.
    
 +  26 void reverse(size_type num);
    // Устанавливает емкость вектора равной не менее заданного значения num
    
  + 27 void resize(size_type num, const T &val = T());
    // Устанавливает емкость вектора равной не менее заданного значения num, если вектор для этого нужно удлинить, то в его конец добавляются элементы со значением, заданным параметром val.
    
  + 28 size_type size() const;
    // Возвращает текущее количество элементов в векторе.
    
  + 29 void swap(deque<T,Allocator> &ob);
    // Выполняет обмен элементами данного вектора и вектора ob.
    
  + 30 void flip();
    // Инвертирует значения всех битов в векторе.
    
    31 static void swap(reference i, reference j);
    // Переставляет местами биты, заданные параметрами i и j.
};
*/
int main()
{
    /*
     template <class InIter, class Dist>
     void advance(InIter &itr, Dist d);
     
     template <class InIter>
     ptrdiff_t distance(InIter &start, InIter end);
     */
    
    
//КОНСТРУКТОРЫ
    //push_back(); // size();
    cout<<"push_back(); size();"<<endl;
    std::vector<int> vector1;
    cout<<"Size: "<<vector1.size()<<endl;
    vector1.push_back(10);
    cout<<"Vector: ";
    for(int i=0;i<vector1.size();++i)
    {
        cout<<"["<<vector1[i]<<"]"<<" ";
    }
    cout<<endl;
    cout<<"Size: "<<vector1.size()<<endl;
    cout<<"--------------------------------"<<endl<<endl;
    // capacity(), // reserve()
    cout<<"capacity(); reserve()"<<endl;
    vector1.reserve(10);
    //assing(размер,значение)
    vector1.assign(20, 5);
    cout<<"Vector: ";
    for(int i=0;i<vector1.size();++i)
    {
        cout<<"["<<vector1[i]<<"]"<<" ";
    }
    cout<<endl;
    cout<<"Capacity: "<<vector1.capacity()<<endl;
    cout<<"--------------------------------"<<endl<<endl;
    //reference at
    cout<<"at"<<endl;
    cout<<"Vector: ";
    vector1.assign(10, arc4random()%10);
    for(int i=0;i<vector1.size();++i)
    {
        cout<<"["<<vector1.at(i)<<"]"<<" ";
    }
    cout<<endl;
    cout<<"--------------------------------"<<endl<<endl;
    //iterator begin() // end()
    cout<<"iterator begin(); end()"<<endl;
    for (std::vector<int>::iterator it = vector1.begin() ; it != vector1.end(); ++it)
        std::cout << ' ' << *it;
    std::cout << '\n';
    cout<<"--------------------------------"<<endl<<endl;
    //clear
    cout<<"Clear"<<endl;
    cout<<"Size: "<<vector1.size()<<endl;
    vector1.clear();
    cout<<"Size: "<<vector1.size()<<endl;// удаляет элементы но память остаеться.
    cout<<"Capacity: "<<vector1.capacity()<<endl;
    //empty()
    cout<<"empty()"<<endl;
    if (vector1.empty())
        cout<<"Пустой";
    else
        cout<<"Полный";
    vector1.clear();
    vector1.push_back(10);
    vector1.push_back(5);
    int sum;
    while (!vector1.empty())
    {
        sum += vector1.back();
        vector1.pop_back();
    }
    cout<<endl;
    cout<<sum<<" "<<endl;
    cout<<"--------------------------------"<<endl<<endl;
    // erase
    cout<<"erase"<<endl;
    std::vector<int> vector2;
    vector2.push_back(4);
    vector2.push_back(3);
    vector2.push_back(2);
    vector2.push_back(1);
    
    cout<<"Vector: ";
  
    for(int i=0;i<vector2.size();++i)
    {
        cout<<"["<<vector2[i]<<"]"<<" ";
    }
    cout<<endl;
    vector2.erase(vector2.begin());
    vector2.erase(vector2.begin()+1,vector2.end()-1);
    cout<<"Vector: ";
    for(int i=0;i<vector2.size();++i)
    {
        cout<<"["<<vector2[i]<<"]"<<" ";
    }
    cout<<endl;
    cout<<"--------------------------------"<<endl<<endl;
    //front()
    cout<<"front()"<<endl;
    cout<<"Front: "<<"["<<vector2.front()<<"]"<<endl;
    vector2.insert(vector2.begin(),5);
    cout<<"Front: "<<"["<<vector2.front()<<"]"<<endl;
    cout<<"--------------------------------"<<endl<<endl;
    //max_size()
    cout<<"max_size()"<<endl;
    cout<<"Max Size: "<<vector2.max_size()<<endl;
    cout<<"--------------------------------"<<endl<<endl;
    // pop_back()
    cout<<"pop_back()"<<endl;
    cout<<"Vector: ";
    for(int i=0;i<vector2.size();++i)
    {
        cout<<"["<<vector2[i]<<"]"<<" ";
    }
    cout<<endl;
    vector2.pop_back();
    cout<<"Vector: ";
    for(int i=0;i<vector2.size();++i)
    {
        cout<<"["<<vector2[i]<<"]"<<" ";
    }
    cout<<endl;
    cout<<"--------------------------------"<<endl<<endl;
    //resize()
    cout<<"resize()"<<endl;
    cout<<"Size: "<<vector2.size()<<endl;
    // vector2.resize(1);//уменьшает размер
    vector2.resize(5,1); // увеличивает размер и заполняет числами
    cout<<"Size: "<<vector2.size()<<endl;
    for(int i=0;i<vector2.size();++i)
    {
        cout<<"["<<vector2[i]<<"]"<<" ";
    }
    cout<<"--------------------------------"<<endl<<endl;
    //swap
    cout<<"swap()"<<endl;
    cout<<"Vector: ";
    vector1.push_back(1);
    vector1.push_back(2);
    vector1.push_back(3);
    vector1.push_back(4);
    vector1.push_back(5);
    for(int i=0;i<vector1.size();++i)
    {
        cout<<"["<<vector1[i]<<"]"<<" ";
    }
    cout<<"------ "<<"Vector2: ";
    for(int i=0;i<vector2.size();++i)
    {
        cout<<"["<<vector2[i]<<"]"<<" ";
    }
    cout<<endl;
    swap(vector1, vector2);
    cout<<"Vector: ";
    for(int i=0;i<vector1.size();++i)
    {
        cout<<"["<<vector1[i]<<"]"<<" ";
    }
    cout<<"------ "<<"Vector2: ";
    for(int i=0;i<vector2.size();++i)
    {
        cout<<"["<<vector2[i]<<"]"<<" ";
    }
    cout<<endl;
    cout<<"--------------------------------"<<endl<<endl;
    //rbegin() , rend()
    cout<<"rbegin(), rend()"<<endl;
    cout<<"Vector2: ";
    for (auto it=vector2.rbegin();it<vector2.rend();it++)
    {
       cout<<"["<<*it<<"]"<<" ";
    }
    cout<<endl;
    cout<<"--------------------------------"<<endl<<endl;
    //flip
    cout<<"flip()"<<endl;
    std::vector<bool> vector3;
    vector3.push_back(true);
    vector3.push_back(false);
    vector3.push_back(false);
    vector3.push_back(true);
    vector3.flip();
    for (unsigned i=0; i<vector3.size(); i++)
        std::cout << ' ' << vector3.at(i);
    std::cout << '\n';
    cout<<"--------------------------------"<<endl<<endl;
    //reverse
    cout<<"revers()"<<endl;
    for (unsigned i=0; i<vector1.size(); i++)
        std::cout << ' ' << vector1.at(i);
    std::cout << '\n';
    
    std::reverse(vector1.begin(),vector1.end());
    
    for (unsigned i=0; i<vector1.size(); i++)
        std::cout << ' ' << vector1.at(i);
    std::cout << '\n';
    cout<<"--------------------------------"<<endl<<endl;
    cout<<"Costructor"<<endl;
   //vector(const vector <T,Allocator> &ob);
    vector<string> str;
    //explicit vector(size_type num, const T &val = T(), const Allocator &a = Allocator());
    vector<int>  vec1(vector2);
    for (unsigned i=0; i<vec1.size(); i++)
        std::cout << ' ' << vec1.at(i);
    std::cout << '\n';
    //insert
    vec1.insert(vec1.begin(), 100);
    for (unsigned i=0; i<vec1.size(); i++)
        std::cout << ' ' << vec1.at(i);
    std::cout << '\n';
    
    //template < class InIter> vector(InIter start, InIter end, const Allocator &a = Allocator());
    vector<int> vec2(vector1.begin(),vector1.end());
    cout<<"vector2: ";
    for (unsigned i=0; i<vec2.size(); i++)
        std::cout << ' ' << vec2.at(i);
    std::cout << '\n';
    cout<<"--------------------------------"<<endl<<endl;
    
}
