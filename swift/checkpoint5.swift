let luckyNumbers = [7, 4, 38, 21, 16, 15, 12, 33, 31, 49]

print(luckyNumbers.filter({
    return $0 % 2 == 0
}))

print(luckyNumbers.sorted(by: {
    return $0 < $1
}))

_ = luckyNumbers.map({
    print("\($0) is a Lucky Number")
    return $0
})