// Classes sao mt parecidas a structs
class Game {
    var score: Int

    init() {
        self.score = 0
    }
}

// Heranca

class LeagueOfLegends: Game {
    var mapName: String

    override init() {
        self.mapName = "Summoner Rift"
        super.init() // Acessar do pai
    }

    deinit {
        print("Chamada antes de destruir a classe")
    }
}

for _ in 1...3 {
    let user = LeagueOfLegends()
    print("User \(user): I'm in control!")
}

final class Dota: Game {} // Classe que nao pode ser instanciada