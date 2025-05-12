func printTimes(for number: Int = 10) { // Valores padroes
    for i in 1...number {
        print("Repeticao \(i)")
    }
}

printTimes()
printTimes(for: 5)

// Throws -- algo fatal aconteceu
enum PasswordError: Error {
        case short, other
    }
func checkPassword(_ password: String) throws -> String {

    if (password.count < 5) {
        throw PasswordError.short
    }

    return "De boa"
}

// Tentar fazer algo
do {
    // let result: String = try checkPassword("teste")
    let result: String = try checkPassword("tes")
    print("Password: \(result)")
} catch PasswordError.short {
    print("Erro aconteceu")
} catch {
    print("Erro generico")
}