#include <iostream>
#include <omp.h>

int main() {
    int num_threads = 4; // Number of threads to use

    // Set the number of threads
    omp_set_num_threads(num_threads);

    // Parallel region starts here
    #pragma omp parallel
    {
        // Get the ID of the current thread
        int thread_id = omp_get_thread_num();

        // Get the total number of threads
        int num_threads = omp_get_num_threads();

        // Each thread prints its ID and the total number of threads
        std::cout << "Thread ID: " << thread_id << " out of " << num_threads << " threads." << std::endl;
    } // Parallel region ends here

    return 0;
}
