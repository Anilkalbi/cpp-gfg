// logical error
int main()
{
    int i = 0;
 
    // logical error : a semicolon after loop
    for(i = 0; i < 3; i++);
    {
       cout << "loop ";
        continue;
    } 
    return 0;
}
