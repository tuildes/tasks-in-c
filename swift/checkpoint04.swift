enum errors: Error {
    case outOfBounds, without
}

func sqrtNumber(_ number: Int) throws -> Int {

    if((number < 1) || (number > 1000)) {
        throw errors.outOfBounds
    }

    for i in 2...(number / 2) {
        if((i * i) == number) {
            return i
        }
    }

    throw errors.without
}

do {
    var number: Int = 16
    var result: Int = try sqrtNumber(number) 
    print("Raiz: de \(number) eh \(result)")

    number = 17
    result = try sqrtNumber(number) 
    print("Raiz: de \(number) eh \(result)")
} catch {
    print("Erro ao tirar raiz!")
}