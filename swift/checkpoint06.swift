struct car {
    public var model: String 
    public var seats: Int = 4
    private var actualMarch: Int = 1

    static let example: car = car(model: "Modelo", seats: 4)

    init(model: String, seats: Int) {
        self.model = model
        self.seats = seats
    }

    mutating func upMarch() {
        if(actualMarch < 5) {
            actualMarch += 1
        }
    }

    mutating func downMarch() {
        if(actualMarch > 0) {
            actualMarch -= 1
        }
    }

    func printCar() {
        print("Car:\t\(model) with \(seats) seats\n\t\tMarch: \(actualMarch)")
    }
}

var carro: car = car.example
carro.upMarch()
carro.printCar()