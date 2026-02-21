
#### How to run C++ code in terminal

This gives error & doesn't work:

~~````g++ test.cpp -o test then ./test````~~

This works according to [Gemini](https://gemini.google.com/share/f80e72c5d8ad):

E.g. When in root of directory:
````
g++ test.cpp -o test && ./test
````

E.g. When in c1m1_0_test folder:
````
g++ c1m1_0_test/test.cpp -o c1m1_0_test/test && ./c1m1_0_test/test
````