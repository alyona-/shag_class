Выделение памяти динамически - выделяется не в процессе компиляции, а в процессе выполнения программы.

Куча - область активной памяти. Необходимо указать тип памяти, разные типы - разный размер.
Н.: new int
Адрес можно сохранять в адреса. Если мы хотим выделить массив - мы должны написать массив,
 который должен быть не константой.
 
 int *p = new int[SIZE];
 
 Вернет нам new - не весь массив, а адрес начала всего массива(только первой ячейки).