var text = "Hello, world"
let textConst = "Texto constante"

print(text)

text = "Hello world (trocado)"
text = "⭐️ Emojis! com \"aspas\" ⭐️"
text = """
Varias linhas
De
Texto
"""

print(text)
print("Tamanho do texto sem contar quebras: \(text.count)")
print("Quebras de linha\n\n\nLinhas")

text = "tuildes com espacos"
print(text.count)
print(text.uppercased())
print(text.hasPrefix("tuildes")) // Verifica se tem o comeco com tuildes
print(text.hasSuffix("cesar"))

var numbers = 100
numbers = 10000
print(numbers)
numbers = 1_0 // Permite underscores nos numeros
print(numbers)
print(numbers.isMultiple(of: 10))
print(numbers >> 1)

var numbersDecimais = 0.1
print(numbersDecimais)
print(Double(numbers))