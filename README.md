# Описание
z
Этот репозиторий содержит решение последней задачи из практики Основы параллельных вычислений 28.02.24

# Задача

1. Напишите программу, в которой два потока параллельно вычисляют сумму чисел от 1 до N, используя OpenMP.
2. Модифицируйте программу таким образом, чтобы она работала для k потоков.

## Входные данные

Целое число k - количество потоков, целое число N - количество чисел

## Выходные данные

Каждый поток выводит свою частичную сумму в формате `[Номер потока]: Sum = <Частичная сумма>`, один раз выводится общая сумма в формате `Sum = <Сумма>`.

## Пример входных и выходных данных

| Входные данные | Выходные данные |
|---|---|
| `2`<br>`4` | `[0]: Sum = 3`<br>`[1]: Sum = 7`<br>`Sum = 10` |
| `2`<br>`2` | `[0]: Sum = 1`<br>`[1]: Sum = 2`<br>`Sum = 3` |
| `3`<br>`2` | `[0]: Sum = 1`<br>`[1]: Sum = 2`<br>`[2]: Sum = 0`<br>`Sum = 3` |

# Установка

- `$ git clone git@github.com:Crocussys/Parallel_Computing_Basics-Practice_1-8_semester.git`
- `$ cd Parallel_Computing_Basics-Practice_1-8_semester/`
- `$ make`

# Запуск

- `$ ./run`

# Возвращает

- `0` - Программа выполнена успешно
- `-1` - Неверный ввод
