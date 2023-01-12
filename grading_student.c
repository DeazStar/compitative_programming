int* gradingStudents(int grades_count, int* grades, int* result_count) {
    *result_count = grades_count;
    int *final_grade = malloc(sizeof(int) * grades_count);
    int next_number;
    for (int i = 0; i < grades_count; i++){
        if (grades[i] < 38)
        {
            final_grade[i] = grades[i];
        } 
        else{
            next_number = grades[i] + 1;
            while(true)
            {
                if (next_number % 5 == 0)
                {
                    if (next_number - grades[i] < 3)
                    {
                        final_grade[i] = next_number;
                        break;
                    } 
                    else
                    {
                        final_grade[i] = grades[i];
                        break;
                    }
                }
                else{
                    next_number++;
                }
            }
        }
    }
    
    return final_grade;
}
