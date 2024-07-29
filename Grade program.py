def get_grade(marks):
    if 90 <= marks <= 100:
        return 'A'
    elif 80 <= marks < 90:
        return 'B'
    elif 70 <= marks < 80:
        return 'C'
    elif 60 <= marks < 70:
        return 'D'
    elif 0 <= marks < 60:
        return 'F'
    else:
        return 'Invalid marks'

def main():
    while True:
        user_input = input("Enter the marks (or type 'exit' to quit): ")
        if user_input.lower() == 'exit':
            break
        try:
            marks = float(user_input)
            grade = get_grade(marks)
            print(f"The grade for marks {marks} is: {grade}")
        except ValueError:
            print("Invalid input. Please enter a number or type 'exit' to quit.")

if _name_ == "_main_":
    main()