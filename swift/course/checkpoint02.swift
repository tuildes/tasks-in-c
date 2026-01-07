let albums: [String] = ["FZND Grana", "FZND Grana", "Grana Azul", "Invasor", "FZND Grana", "FZND Grana"]
let albumsAlt: Set<String> = Set(albums)

print("Albums: \(albums)")
print("Total: \(albums.count)")
print("Unicos: \(albumsAlt.count)")