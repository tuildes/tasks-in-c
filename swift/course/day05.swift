var score: Int = 3
if (score > 5) { // < > <= >= ==
    print("Score maior que 5")
} else if (score != 0) {
    print("maior q zero")
} else {
    print(":(")
}

let ourName = "Atve Lister"
let friendName = "Arnold Rimmer"

if ourName < friendName { // Pega por ordem alfabetica
    print("It's \(ourName) vs \(friendName)")
}

if ourName > friendName {
    print("It's \(friendName) vs \(ourName)")
}

if ourName == "Atve Listner" { // Compara nomes
    print("Eh o Atve")
}

var name: String = String()

if name.isEmpty {
    print("vazio")
}

score = 10
if (score > 5) && (score < 10) || (score == 0) {
    print("eh")
}

enum TransportOption {
    case airplane, helicopter, bicycle, car, scooter
}

let transport = TransportOption.airplane

if transport == .airplane { // Acessar enums
    print("eh aviao")
}

switch transport {
    case .airplane:
        print("aviao")
        fallthrough // Vai para o proximo
    default:
        print("nao eh nada")
}

// Operador ternario
score = 5
var scoreTest = (score > 5) ? "Passou!" : "Nao passou"
print(scoreTest)