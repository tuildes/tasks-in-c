var booleano: Bool = false
print(booleano)

booleano = 120.isMultiple(of: 10);
print(booleano)

booleano = !booleano;
print(booleano)

booleano.toggle()
print(booleano)

// Concat

var texto: String = "texto 1"
texto += " Teste"
print(texto)

texto = "Texto " + String(100) + " Texto2"
print(texto)

texto = "Texto \(String(100)) Texto3"
print(texto)