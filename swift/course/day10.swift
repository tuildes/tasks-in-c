// Custom e dados continuos
struct Album {
    let cover: String
    let artist: String

    func hello() {
        print("Hello by \(artist)")
    }
}

let zin: Album = Album(cover: "teste", artist: "Rodrigo Zin")
zin.hello()

// Struct que pode mudar valores
struct Employee {
    let name: String
    var year: Int = 20 // Valores padroes
    var vacationAllocated = 14
    var vacationTaken = 2
    var vacationRemaining: Int { // Valores computados em atualizacoes
        vacationAllocated - vacationTaken
    }

    var vacationRemaining2: Int {
        get {
            vacationAllocated - vacationTaken
        }

        set {
            year = newValue
        }
    }

    // Mudar valores internos
    mutating func changeYear(newYear y: Int) {
        year = y
    }
}

var archer = Employee(name: "Archer", year: 100)
// Mesma coisa que
let friend: Employee = Employee.init(name: "2") // Valor padrao de 20

print(archer.year)
archer.changeYear(newYear: 10)
print(archer.year)

print(archer.vacationRemaining)

print(archer.year)
archer.vacationTaken += 1
print(archer.year)

// Structs que fazem coisas ao serem alteradas
struct Game {
    var score: Int = 0 {
        // willSet antes de fazer a atualizacao

        didSet { // Chamado ao ser alterado
            print("Score: \(score) (antes era \(oldValue))")
        }
    }

    // Incializadores customizados
    init(name: String, number: Int) {
        self.score = number
        print("Apresentando o \(name) com \(score)")
    }

    // Sobrecarga e construtor padrao
    init() {}
}

print()
var game = Game()
game.score += 10
game.score += 2

var game2: Game = Game(name: "Cesar", number: 30)