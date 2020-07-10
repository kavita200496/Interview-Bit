https://www.interviewbit.com/problems/fizzbuzz/

vector<string> Solution::fizzBuzz(int A) {
    vector<string> res;
     
    for (int index = 1; index <= A; index++) {
         if ((index%3 == 0) && (index%5 == 0)) 
            res.push_back("FizzBuzz");
        else if (index%3 == 0) res.push_back("Fizz");
        else if (index%5 == 0) res.push_back("Buzz");
        else res.push_back(to_string(index));
    }
    return res;
}
