#include <stdio.h>

int main() {
    float N1, N2, N3, N4, exam_score, average, final_average;

    // Reading the four grades
    scanf("%f %f %f %f", &N1, &N2, &N3, &N4);

    // Calculating the weighted average
    average = (N1 * 2 + N2 * 3 + N3 * 4 + N4 * 1) / 10;

    // Printing the calculated average
    printf("Media: %.1f\n", average);

    // Checking if the student is approved, in exam, or failed
    if (average >= 7.0) {
        printf("Aluno aprovado.\n");
    } else if (average < 5.0) {
        printf("Aluno reprovado.\n");
    } else {
        printf("Aluno em exame.\n");
        // Reading the exam score
        scanf("%f", &exam_score);
        printf("Nota do exame: %.1f\n", exam_score);

        // Calculating the final average
        final_average = (average + exam_score) / 2;

        // Checking if the student passed or failed after the exam
        if (final_average >= 5.0) {
            printf("Aluno aprovado.\n");
        } else {
            printf("Aluno reprovado.\n");
        }
        // Printing the final average
        printf("Media final: %.1f\n", final_average);
    }

    return 0;
}
