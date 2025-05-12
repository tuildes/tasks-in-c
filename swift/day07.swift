func printTela(name: String) {
    print("Hello, \(name)!")
}

func rollDice() -> Int { // Retorno
    return Int.random(in: 1...6)
}

func rollDice2() -> Int { // Retorno
    Int.random(in: 1...6) // Funciona retorno de uma linha
}

printTela(name: "Freh")
print(rollDice())

// REtornar varios valores

// Por aray
func getUser() -> [String: String] {
    return [
        "name": "Freh",
        "id": "0" 
    ]
}

// Por tuplas
func getName() -> (firstName: String, lastName: String) {
    return (
        firstName: "Taylor",
        lastName: "The Creator"
    )
}

let user1: [String: String] = getUser()
let user2: (firstName: String, lastName: String) = getName()
let (firstName, lastName) = getName() // Remover interno
// let (firstName, _) = getName() // Jogar pro void

print(user1)
print(user1["name", default: "Desconhecido"])

print(user2)
print(user2.firstName)

print("\(firstName) \(lastName)")

// Remover parametro externo
func printHello(_ string: String) {
    print(string)
}

printHello("Hello")

func printTimesTables(nomeExterno number: Int) { // Trocar o nome interno e externo
    for i in 1...2 {
        print("\(i) x \(number) is \(i * number)")
    }
}

printTimesTables(nomeExterno: 10)
