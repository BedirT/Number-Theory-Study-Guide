# Number Theory Study Guide
---
Since I had hard time understanding Number theory topics from both my lectures and my book, I decided to make a study guide and add every source that I use to understand the topics. I was just going to make a blog post, but decided that repository would be more beneficial since everyone can contribute and it will be more dynamic this way...

### Topic 1: Preliminaries
It is preliminaries... I didn't really study here because I already knew the topics from my previous classes, but I will try to put some useful sources here.

Basically topics here are just proof systems and how to do proof properly in Math.

- Will put something about Basic Induction :)
- Will put something about Strong Induction :)
- Binomial Theorem

The book that I am working on, just passed over these topics so you don't really have to work deeply on them. Knowing how to use induction would be beneficial though (more like neccesity :) ). I don't think we will cover other proof methods like deductions etc. in this course, so Induction will be assumed as default proof solving concept.

### Topic 2: Divisibility Theory in the Integers
##### The Division Algorithm
This really is too basic... Literaly... 

I will just put the definition for "the Division Algorithm" and you will see what I mean:
**Theorem** Given integers a, b with b > 0 there exist some unique integers q and r such that,
a = qb + r where 0 <= r < b... Really...

##### The Greatest Common Divisor (GCD)
I used the book for the concept I believe. It is an easy topic, but it might be tricky if you are not using calculator and the numbers are enormous.

##### Euclidean Algorithm to find GCD
This is an algorithm to solve GCD problems. Basically, (at least in the book that I am studying) this is the way we approach to almost any gcd problems in hand.

##### Diophantine Equations
Fancy name,

##### The Least Common Multiple (LCM)


### Topic 3: Primes and Prime Distibutions

##### Fundamental Theorem of Arithmetic

##### Sieve of Erotosthenes

##### The Goldbach Conjecture

### Topic 4: The Theory on Congruences

[Congurences and Fermat's Little Theorem - DLBmaths](https://www.youtube.com/watch?v=QgPfagOgOAc)
[Chinese Remainder Theorem](https://www.youtube.com/watch?v=ru7mWZJlRQg)

### Topic 5: Fermat's Theorem

##### Fermat's Decomposition
[Fermat's decomposition - DLBmaths](https://www.youtube.com/watch?v=0a6R8qPZCk4) Beautiful video that explains what Fermat's decomposition is, with example questions. I love the guy who creates these videos (I already put couple videos of him for the previous chapters.) ENJOY!

This topic is not that hard, so just this video should be enough for understanding the topic. A little practice and you will be set for your exam...

##### Fermat's Little Theorem

[Video - Socratica](https://www.youtube.com/watch?v=w0ZQvZLx2KA) *

[Video - Maths with Jay](https://www.youtube.com/watch?v=pMA-dD-KCWM)

[Video (Visualization) - Khan Academy Labs](https://www.youtube.com/watch?v=OoQ16YCYksw)

[Practice questions and answers](http://www.math.cmu.edu/~mlavrov/arml/15-16/number-theory-09-27-15-solutions.pdf)

### Topic 6: Number Theoretic Functions

Even though they are easy to understand functions, calculations and problems might be difficult & tricky to process.

##### Tau Function
[Video Explanation (Explains both Tau and Sigma Functions) - Dustin Jones](https://www.youtube.com/watch?v=DcJxt7oD-_I)

##### Sigma Function
[Video Explanation (Explains both Tau and Sigma Functions) - Dustin Jones](https://www.youtube.com/watch?v=DcJxt7oD-_I) (Also concepts for **Sigma* Function**, **Proper divisors**, **Perfect Numbers**, **Deficiant Numbers**, **Abundunt Numbers**, **Amicable Pairs** introduced)

##### Euler's Phi Function
[Euler's Phi Function - Dustin Jones](https://www.youtube.com/watch?v=QbsWEVcjJy0)

[Euler's totient function | Journey into cryptography - Khan Academy](https://www.youtube.com/watch?v=qa_hksAzpSg) - Explains what is phi function really good. Not going into calculations and stuff, basic idea is covered though.

##### Mobius Function


##### Hensel's Lemma
This is not covered in this topic, but we learned it in this chapter, so I will just include it here. [Hensel's Lemma](http://www.cs.uleth.ca/~yazdani/courses/2011-2012/math3461/Hensel_sample.pdf)

### Topic 7: Euler's Generalization of Fermat's Theorem

### Topic 10: Cryptography

##### Ceasar Cipher

Ceasar Cipher is I guess one of the easiest crytography method. We only need a message and a key that will represent the shift value for our alphabet. So if I choose 2 as my shifting key, then all letters will shift by 2 (mod 26) - *Since we have 26 letters in English Alphabet*. So **A** will become A, B, **C** and **B** will be B, C, **D** if we apply this to every letter in the alphabet:

| A    | B    | C    | D    | E    | F    | G    | H    | I    | J    | K    | L    | M    | N    | O    | P    | Q    | R    | S    | T    | U    | V    | W    | X    | Y     | Z     |
| ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ----- | ----- |
| C    | D    | E    | F    | G    | H    | I    | J    | K    | L    | M    | N    | O    | P    | Q    | R    | S    | T    | U    | V    | W    | X    | Y    | Z    | **A** | **B** |

And as you can see at the end (since I have mod 26) I included the numbers at the beginning lets say index 0 - and index 1 , which are **A** and **B**. I can convert any text into my encrypted message and vice versa, with this table. There is no public thing in this algorithm, only the message will be public, since we didn't use anything other then message and the key that should be obvious :smile:. And the biggest problem with this cipher is, even though without a computer (If we have it we don't even need to know the key, we can try all 26 shifts) the property of languages has the most frequent letter used. If we know this then we can easily count the letter used the most and find the key...

- **Public:** Encrypted Message
- **Private:** Key

If you are still confused, here is a short beautiful video from KhanAcademy (as usual) that explains: [The Ceaser Cipher](https://www.youtube.com/watch?v=sMOZf4GN3oc)

##### Vigenere Cipher

Vigenere is again an easy ciphering method, more secure then Ceasar Cipher, but still vulnerable. This time we have a key as string instead of one letter or one number. To our message, we will add the repeting key and the result will be our encrypted message. With this way we will avoid the problem of frequency in the Ceasar Cipher. So how is it happening: Let's say that we have the key: **BEST**. And my message is **FOCUS MONKEY**. Since I have 4 letters key and 11 letters message, obviously I cannot use my key by itself. What do I do is, as I mentioned before, I just add my key to itself as long as it is shorter than my message. So: **BESTBESTBEST**, this is 12. Since it is longer than my message I am done. I will use the same logic as before for adding up the values. If you know a bit about Computers (not gaming wise, like legit computer stuff :slightly_smiling_face:) then you probably know ASCII table. This will be same logic, we can use some kind of table to convert letters to the others. This table is same for every one, we just add up the alphabetical values in mod 26 as before. So since **A** is the first letter it has the value of **00**, and since **B** is the second it will have the value of **1**… So table will be like this then:

| A    | B    | C    | D    | E    | F    | G    | H    | I    | J    | K    | L    | M    | N    | O    | P    | Q    | R    | S    | T    | U    | V    | W    | X    | Y    | Z    |
| ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- |
| 0    | 1    | 2    | 3    | 4    | 5    | 6    | 7    | 8    | 9    | 10   | 11   | 12   | 13   | 14   | 15   | 16   | 17   | 18   | 19   | 20   | 21   | 22   | 23   | 24   | 25   |

##### The RSA Algorithm

Public RSA is the most important and popular public-key crypto system. Couple methods we need to know to use this algorithm are:

- [Eulers Totient Function (phi function)](#Euler's Phi Function)
- [Euler's Generalization of Fermat's Little Theorem](#Euler's Generalization of Fermat's Theorem)
- [Extended Euclidian Algorithm]()

For main source I will include a paper that my professor handed out, it is explaining really nice and smooth. So if you are ok with a bit of reading the paper should be enough by itself (Only 5 half pages with an example included)

[The Paper - The RSA Algorithm]()

###### Little Note: You don't have to watch all of the videos or follow all tutorials here. Choose the ones that works best for you, because most of them are doing the same thing with a bit different approaches.

[RSA Made Easy - Randell Heyman](https://www.youtube.com/watch?v=t5lACDDoQTk) - Really good explanation with everything included

[How RSA Works (No proof) - Anthony Vance](https://www.youtube.com/watch?v=Z8M2BTscoD4) - A nice video that goes over how to use formulas and general samples, not going deep into explanation (Actually none) but can be used to understand how to solve the questions, also used technique for Extended Euclidian is cool, first time I occured.

[RSA, tiny example - Eddie Woo](https://www.youtube.com/watch?v=4zahvcJ9glg) - Really simple explanation of how to solve the questions. Don't forget to watch both parts, 1st one is an example second one is mroe of an explanation

[How to Generate the keys - Eddie Woo](https://www.youtube.com/watch?v=oOcTVTpUsPQ) - Second Part of the one above

[Example of how to apply the Methods - Daniel Rees](https://www.youtube.com/watch?v=O-4_oS3G7MI&t=312s) - If you are still confused you can go ahead and watch people applying everything in a question. After that if you still didn't get it, watch it again with ambling this time.

**Lastly for fun :) If you want to learn how puclic key cryptography works watch this short video by ComputerPhile, (These guys are awesome) [Public Key Cryptography](https://www.youtube.com/watch?v=GSIDS_lvRv4)** 