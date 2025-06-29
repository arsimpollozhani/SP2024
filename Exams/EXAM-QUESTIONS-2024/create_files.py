num_files = 12

base_name = "question_"

extension = ".cpp"



for i in range (1, num_files + 1):
    file_name = f"{base_name}{i}{extension}"
    with open(file_name, 'w') as f:
        f.write (f"//Created: {file_name}\n")
    print(f"Created file: {file_name}")
    