var numbers: [Int] = [0, 1, 2, 3, 4]

print(numbers)
print(numbers[4]) // 0 .. 4
print(numbers.count)

numbers.append(5)
print(numbers)

// Empty array
var scores: [Int] = [Int]()

print(numbers.contains(10))
print(numbers.contains(3))

var numbers2: [Int] = [10, 30, 5, 0, 30]
print(numbers2.sorted())
print(numbers.reversed()._base)

// Dicionarios

numbers.remove(at: 0)
print(numbers)

let aluno: [String: String] = [
    "name": "Cesar",
    "job": "Estudante"
]

print(aluno["name", default: "Desconhecido"])

// Set - IMPEDIR DADOS DUPLICADOS
var people: Set<Int> = Set([1, 2, 3, 4, 5])
people.insert(5)
print(people)

// Enum => textos ou retornos com certo tipos
// Evitar erros de escrita
enum Weekday {
    case monday
    case tuesday
}

print(Weekday.monday)
var week = Weekday.monday
print(week)
week = .tuesday // Nao precisa declarar novamente
print(week)