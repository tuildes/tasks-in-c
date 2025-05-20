class Animal {
    var legs: Int

    init(legs: Int) {
        self.legs = legs
    }
}

class Dog: Animal {
    func speak() {
        print("Au!")
    }
}

let cachorro: Dog = Dog(legs: 4)
cachorro.speak()