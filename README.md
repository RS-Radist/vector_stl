# vector_stl

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
