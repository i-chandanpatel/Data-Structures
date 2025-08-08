//There are n books. each book has arr[i] pages
//Allocate these books to m number of students
//so that max num of pages allocated to a student is min
//each book should be allocated
//each student has to be allocated at least one book
//Allotment should be in contiguous order

//Note Change file name to BookAllocationProblem

public class BookAllocationProblem {

    // Helper method to check if it's possible to allocate books such that
    // no student reads more than maxPages
    static boolean isValid(int[] books, int students, int maxPages) {
        int studentCount = 1;         // Start with the first student
        int currAllocation = 0;       // Pages currently allocated to the current student

        for (int pages : books) {
            // If any single book has more pages than maxPages, allocation is not possible
            if (pages > maxPages) return false;

            // If current student can be allocated this book within maxPages
            if (currAllocation + pages <= maxPages) {
                currAllocation += pages;
            } else {
                // Allocate to next student
                studentCount++;
                currAllocation = pages; // Start allocation for new student

                // If we exceed the allowed number of students, return false
                if (studentCount > students) return false;
            }
        }

        // Allocation is valid if we did not exceed the student limit
        return true;
    }


    // Main method to find the minimum possible value of the maximum pages assigned
    static int allocateBook(int[] books, int students) {
        // Edge case: if students are more than number of books, it's not possible
        if (students > books.length) return -1;

        int sum = 0;
        int min = 0;

        // Calculate total sum of pages and find the book with maximum pages
        for (int book : books) {
            sum += book;
            min = Math.max(min, book); // Minimum limit of binary search (largest book)
        }

        int st = min;     // Lower bound of binary search
        int end = sum;    // Upper bound of binary search
        int res = -1;     // Store the result (minimum of the maximum pages)

        // Binary search to find the minimum maxPages value that works
        while (st <= end) {
            int mid = st + (end - st) / 2; // Midpoint of current search range

            // If current mid is a valid maxPages allocation, try to minimize it
            if (isValid(books, students, mid)) {
                res = mid;
                end = mid - 1; // Try to find a smaller valid value
            } else {
                st = mid + 1; // Increase mid since current value is too small
            }
        }

        return res; // This is the minimum possible value of max pages
    }

    // Main function to run and test the allocation
    public static void main(String[] args) {
        int[] arr = {2, 1, 3, 4}; // Array representing pages in each book
        int students = 2;         // Number of students

        System.out.println(allocateBook(arr, students)); // Expected Output: 6
    }
}


