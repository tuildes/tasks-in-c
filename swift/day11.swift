// Modificadores de acesso
struct bank {
    private var funds: Int
    public var teste: String
    fileprivate var teste2: Int // So pode ser mexida dentro do arquivo

    static let example: bank = bank(0) // Classe exemplo para uso

    init(_ funds: Int) {
        self.funds = funds
        self.teste = "Teste"
        self.teste2 = 0
    }

    mutating func setFunds(funds: Int) {
        self.funds = funds
    }

    func getFunds() -> Int {
        return funds
    }
}

var banco: bank = bank(200)

print(banco.getFunds())
banco.setFunds(funds: 500)
print(banco.getFunds())

print(banco.teste2) // So usado dentro do arquivo

// Self - tipo
// self - instancia e propriedades

// Static
struct AppData {
    static let version = "1.3 beta 2"
    static let saveFilename = "settings.json"
    static let homeURL = "https://www.hackingwithswift.com" // Estatico e fixo
}

