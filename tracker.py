def add_problem():
    problem = input("Enter problem name: ")
    with open("problems.txt", "a") as file:
        file.write(problem + "\n")
    print("Problem added!")

def list_problems():
    print("\n--- Solved Problems ---")
    with open("problems.txt", "r") as file:
        for line in file:
            print(line.strip())

while True:
    print("\n1. Add Problem\n2. List Problems\n3. Exit")
    choice = input("Enter choice: ")

    if choice == '1':
        add_problem()
    elif choice == '2':
        list_problems()
    elif choice == '3':
        break
    else:
        print("Invalid choice.")
