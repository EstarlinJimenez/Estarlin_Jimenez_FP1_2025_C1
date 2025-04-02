#include <stdio.h>
#include <stdlib.h>

Archivo donde se almacenan los datos

data_file = "lottery_data.json"

def load_data():
    try:
        with open(data_file, "r") as file:
            return json.load(file)
    except FileNotFoundError:
        return {"players": [], "lottery_results": []}

def save_data(data):
    with open(data_file, "w") as file:
        json.dump(data, file, indent=4)

def generate_lottery_numbers():
    return [random.randint(0, 99) for _ in range(3)]

def register_player(name, number_played, amount):
    data = load_data()
    play_id = str(uuid.uuid4())
    player_entry = {
        "name": name,
        "number_played": number_played,
        "amount": amount,
        "play_id": play_id
    } data["players"].append(player_entry)
      save_data(data)
      print(f"Jugador {name} registrado con ID {play_id}")

def run_lottery():
    data = load_data()
    winning_numbers = generate_lottery_numbers()
    print(f"Números ganadores: {winning_numbers)

winners = []
for player in data["players"]:
    if player["number_played"] == winning_numbers[0]:
        prize = player["amount"] * 100
    elif player["number_played"] == winning_numbers[1]:
        prize = player["amount"] * 50
    elif player["number_played"] == winning_numbers[2]:
        prize = player["amount"] * 10
    else:
        prize = 0
    winners.append({"name": player["name"], "prize": prize})

data["lottery_results"].append({"winning_numbers": winning_numbers, "winners": winners})
save_data(data)
print("Lotería realizada y datos guardados.")

def show_lottery_history():
    data = load_data()
    for entry in data["lottery_results"]:
            print(f"Números ganadores: {entry['winning_numbers']}")
            for winner in entry["winners"]:
                print(f"Jugador: {winner['name']}, Premio: {winner['prize']}")

def show_players():
    data = load_data()
    for player in data["players"]:
        print(f"Jugador: {player['name']}, Número Jugado: {player['number_played']}, Monto: {player['amount']}, ID: {player['play_id']}")

def menu():
    while True:
            print("\nMenú:")
            print("1. Registrar jugador")
            print("2. Ejecutar lotería")
            print("3. Mostrar historial de lotería")
            print("4. Mostrar jugadores")
            print("5. Salir")
            opcion = input("Seleccione una opción: ")

            if opcion == "1":
            name = input("Ingrese su nombre: ")
            number = int(input("Ingrese su número (0-99): "))
            amount = float(input("Ingrese la cantidad de dinero apostada: "))
            register_player(name, number, amount)
        elif opcion == "2":
            run_lottery()
        elif opcion == "3":
            show_lottery_history()
        elif opcion == "4":
            show_players()
        elif opcion == "5":
            break
        else:
            print("Opción inválida. Intente nuevamente.")

if name == "main":
        menu()
