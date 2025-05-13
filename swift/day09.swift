func getUser() {
    print("teste")
}

var getUser2 = getUser
getUser2() // Funciona para trocar o nome da funcao

let sayHello: () -> Void = {
    print("Hello")
}

let sayHello2: (String) -> String = { (name: String) -> String in
    "Hi \(name)"
}

sayHello()
print(sayHello2(("teste")))

func captainFirstSorted(name1: String, name2: String) -> Bool {
    if name1 == "Suzanne" {
        return true
    } else if name2 == "Suzanne" {
        return false
    }

    return name1 < name2
}

let team = ["Teste", "Abc", "Suzanne", "Suzanne"]

let captainFirstTeam = team.sorted(by: captainFirstSorted) // Dar nome novo a uma funcao
print(captainFirstTeam)

// Passar parametros e criar funcoes em variaveis
print(team.sorted(by: { name1, name2 in 
    return name1 == "Abc"
}))

// Se nao declarar, da pra usar as variaveis em ordem
let teamSuzanne = team.sorted {
    return $0 < $1 // Alfabetico
}
print(teamSuzanne)

print(team.map { $0.uppercased() }) // Filtrar pelas variaveis

// Ler funcoes

func printEsquisito(_ generator: () -> Void) {
    generator()
}

printEsquisito({
    print("Oi")}
)