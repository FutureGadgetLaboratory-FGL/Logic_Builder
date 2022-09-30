# 👥Contributing

For contributing, you need to know the basics of git and github. If you don't know any of those, then seek help from others or check the internet for setting up git environment on your device.

Ways of making contributions in this repository:

- [Code Contributions](#Code-Contributions)
- [Non-Code Contributions](#Non-Code-Contributions)

## Add yourself in the official list of contributors (Optional)

Add yourself in the official list of contributors of this repository by adding you name in the `CONTRIBUTORS.yaml` file. 

Add the following block of code at the end of `CONTRIBUTORS.yaml` file:
```yaml
- name: 
  surname: 
  github username: 
  mail: 
  website: 
  comments: 
  contributing since: 
```
Filling any and all of these fields is optional.
Fill all the fields which you want and save the file.

## Code Contributions 

### Step 1: <br>
Go to the folder of the language in which you want to solve a program.
### Step 2: <br>
Create a new file with the name same as the [problem code](#problem-code) given in `problems.md` file.
### Step 3: <br>
Write the problem statement on top of the file in a multi-lined comment.
### Step 4: <br>
Add a single lined comment stating the username of the person solving the problem.
e.g. // Solved by XYZ
### Step 5: <br>
Add the solution and save the file.
### Step 6: <br>
#### Case 1: The problem was unsolved and the [issue] tag is present infront of the problem statement
- Replace the [issue] tag with the [solved: language_name] tag in `problems.md` file.<br>
#### Case 2: The problem was already solved in some other language and[solved: language_name] tag is present in front of the problem statement<br>
- Add the language name in which you solved the problem in the tag present in front of the problem statement. Eg: change [solved: language1, language2] to [solved: language1,language2,your_language]
### Step 7: <br>
Commit the changes and push them in the main repository. <b>

## Non-Code Contributions
- Adding questions in `problems.md` file: <br>
    > Add the questions in the correct difficulty level folder. <br>
    > Add the question at the end of the file. <br>
    > Enter the correct serial number and put 3 '#' symbols in front of it. <br>
    > Add the [issue] tag after the serial number. <br>
    > Start the question from a new line. <br>
    > Eg. <br> &emsp;&ensp;#57 [issue] <br> &emsp;&ensp;problem_statement
- Update or improve `README.md` file
- Fix typos and grammatical mistakes in any file inside the repository.
