def main():
    alternatives = ["A", "B", "C", "D", "E"]

    while True:
        # Read the number of test cases
        num_questions = int(input())
        if num_questions == 0:
            break

        for _ in range(num_questions):
            # Initialize the responses array
            responses = list(map(int, input().split()))
            marked_answer_index = -1
            is_valid = False

            # Check each response
            for i in range(5):
                if responses[i] <= 127:
                    if marked_answer_index == -1:
                        marked_answer_index = i
                        is_valid = True
                    else:
                        is_valid = False

            # Print the result based on the validity of the marked answer
            if is_valid:
                print(alternatives[marked_answer_index])
            else:
                print("*")


# Run the main function
if __name__ == "__main__":
    main()
