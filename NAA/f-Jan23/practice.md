



\### Lab Exercise: Dynamic String Duplication



\*\*Task\*\*  

Write a function that:



\- Receives two parameters:

&nbsp; - A \*\*C-string\*\* (null-terminated character array / `const char \*`)

&nbsp; - A \*\*reference to a pointer\*\* (`char \*\*`)

\- Dynamically allocates memory for a \*\*complete copy\*\* of the input string (including the null terminator)

\- Stores the address of the newly allocated copy in the pointer passed by reference

\- Returns an integer status:

&nbsp; - `0` on success

&nbsp; - `-1` if memory allocation fails



\*\*Function signature\*\* (use exactly this):



```c

int duplicate\_string(const char \*source, char \*\*destination);

```



\*\*Requirements / Rules\*\*



\- The function must \*\*not\*\* modify the source string.

\- If `source` is `NULL`, set `\*destination = NULL` and return `0`.

\- The allocated memory must be large enough to hold the entire string \*\*including\*\* the null terminator (`\\0`).

\- Use `malloc` to allocate memory.

\- Check whether the allocation succeeded.

\- Copy the string contents (you may use `strcpy`, `memcpy`, or a manual loop).

\- The caller is responsible for freeing the returned string when it is no longer needed.

\- Do \*\*not\*\* use any global variables.



\*\*Expected behavior examples\*\*



```c

char \*copy = NULL;

int result;



// Normal case

result = duplicate\_string("Hello", \&copy);

// → result == 0, copy points to a new heap-allocated "Hello\\0"



duplicate\_string(NULL, \&copy);

// → result == 0, copy == NULL



duplicate\_string("", \&copy);

// → result == 0, copy points to a new heap-allocated empty string "\\0"

```



\*\*Deliverables\*\*



\- Write the complete function definition.

\- Write a short `main()` function that demonstrates:

&nbsp; - Copying a normal string

&nbsp; - Modifying the copy (to prove it's independent)

&nbsp; - Printing both original and copy before and after modification

&nbsp; - Copying a `NULL` pointer

&nbsp; - Freeing the allocated memory

&nbsp; - (Optional bonus) handling a very long string or empty string



\*\*Hints (do not share full solution with student)\*\*



\- You need `strlen()` to know how many bytes to allocate.

\- Remember to allocate `strlen(source) + 1` bytes.

\- The second parameter is a \*\*pointer to a pointer\*\* — that's how you can change what the caller's pointer points to.



Good luck — submit clean, commented code with proper error handling!

