let plataforms: [String] = ["MacOS", "Linux"]
for os in plataforms {
    print("\(os)")
}
for i in 1...5 { // ate com 5
    print("\(i)")
}
for i in 1..<5 { // ate 5
    print("\(i)")
}

var lyric = "Haters gonna"
for _ in 1...5 { // Sem variavel
    lyric += " hate"
}
print(lyric)

var countdown = 10
while countdown > 0 {
    print("\(Int.random(in: 1...100))")
    countdown -= 1
}

let filenames = ["me.jpg", "me.png"]
for file in filenames {
    if file.hasSuffix(".jpg") {
        print("Erro!")
        continue // Pula para a proxima iteracao
    }

    print("Deu bom!")
}

for file in filenames {
    if file.hasSuffix(".jpg") {
        print("Erro!")
        break // Quebra a iteracao
    }

    print("Deu bom!")
}