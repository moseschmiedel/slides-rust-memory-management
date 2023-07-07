---
hideInToc: true
---

# Hiring a garbage collector

<div class="flex w-full">

<div class="flex-none">

```java{all|6-14}
class Number {
    public int number;
    public Number(int num) { this.number = num; }
    public void plus(Number summand) { this.number += summand.number; }

    public static void main(String[] args) {
        Number incompleteAnswer = new Number(20);
        addOne(incompleteAnswer);
        Number answerOfEverything = mulByTwo(incompleteAnswer);
        System.out.println(
            "the answer to everything is "
            + answerOfEverything.number
        );
    }

    public static void addOne(Number a) {
            Number one = new Number(1);
            a.plus(one);
    }

    public static Number mulByTwo(Number a) {
        return new Number(a.number * 2);
    }
}
```
</div>

<div class="ml-2">
<figure>
<img src="/Java-Logo.png" class="w-12"/>
<figcaption class="w-12 text-sm italic text-center">Fig.1</figcaption>
</figure>

<div class="px-2 pb-2 bg-green-600 mt-4 rounded border-gray-600 border-2">
<strong class="text-white">Memory</strong>
<div class="overflow-hidden flex-none w-[230px] h-[204px] bg-white rounded border-2 border-gray-500">
</div>
</div>
</div>

</div>

<!--
### garbage collector explanation:
1. allocate memory for `Number incompleteAnswer = new Number(20)`
2. run `addOne` -> allocate memory for `Number one = new Number(1)`
3. memory is full!!!
4. try to run mulByTwo -> doesn't work -> run garbage collector
5. garbage collector identifies, that `Number one` is not needed anymore -> mark it as reusable **(deallocation)**
6. allocate memory for `new Number(a.number * 2)`
7. return to `main` -> `Number answerOfEverything` references memory previously allocated
8. print answer
-->

---
title: new Number(20)
hideInToc: true
---

# Hiring a garbage collector

<div class="flex w-full">

<div class="flex-none">

```java{7}
class Number {
    public int number;
    public Number(int num) { this.number = num; }
    public void plus(Number summand) { this.number += summand.number; }

    public static void main(String[] args) {
        Number incompleteAnswer = new Number(20);
        addOne(incompleteAnswer);
        Number answerOfEverything = mulByTwo(incompleteAnswer);
        System.out.println(
            "the answer to everything is "
            + answerOfEverything.number
        );
    }

    public static void addOne(Number a) {
            Number one = new Number(1);
            a.plus(one);
    }

    public static Number mulByTwo(Number a) {
        return new Number(a.number * 2);
    }
}
```
</div>

<div class="ml-2">
<figure>
<img src="/Java-Logo.png" class="w-12"/>
<figcaption class="w-12 text-sm italic text-center">Fig.1</figcaption>
</figure>

<div class="px-2 pb-2 bg-green-600 mt-4 rounded border-gray-600 border-2">
<strong class="text-white">Memory</strong>
<div class="overflow-hidden flex-none w-[230px] h-[204px] bg-white rounded border-2 border-gray-500">
<div
    class="w-full h-[100px] bg-gray-200 border-b-2 border-gray-500 text-center text-4xl"
    >
Number(20)
</div>
</div>
</div>
</div>

</div>

<!--
### garbage collector explanation:
1. allocate memory for `Number incompleteAnswer = new Number(20)`
2. run `addOne` -> allocate memory for `Number one = new Number(1)`
3. memory is full!!!
4. try to run mulByTwo -> doesn't work -> run garbage collector
5. garbage collector identifies, that `Number one` is not needed anymore -> mark it as reusable **(deallocation)**
6. allocate memory for `new Number(a.number * 2)`
7. return to `main` -> `Number answerOfEverything` references memory previously allocated
8. print answer
-->

---
title: addOne
hideInToc: true
---

# Hiring a garbage collector

<div class="flex w-full">

<div class="flex-none">

```java{8,16-19}
class Number {
    public int number;
    public Number(int num) { this.number = num; }
    public void plus(Number summand) { this.number += summand.number; }

    public static void main(String[] args) {
        Number incompleteAnswer = new Number(20);
        addOne(incompleteAnswer);
        Number answerOfEverything = mulByTwo(incompleteAnswer);
        System.out.println(
            "the answer to everything is "
            + answerOfEverything.number
        );
    }

    public static void addOne(Number a) {
            Number one = new Number(1);
            a.plus(one);
    }

    public static Number mulByTwo(Number a) {
        return new Number(a.number * 2);
    }
}
```
</div>

<div class="ml-2">
<figure>
<img src="/Java-Logo.png" class="w-12"/>
<figcaption class="w-12 text-sm italic text-center">Fig.1</figcaption>
</figure>

<div class="px-2 pb-2 bg-green-600 mt-4 rounded border-gray-600 border-2">
<strong class="text-white">Memory</strong>
<div class="overflow-hidden flex-none w-[230px] h-[204px] bg-white rounded border-2 border-gray-500">
<div
    class="w-full h-[100px] bg-gray-200 border-b-2 border-gray-500 text-center text-4xl"
    >
Number(21)
</div>
<div
    class="w-full h-[100px] bg-gray-200 text-center text-4xl"
    >
Number(1)
</div>
</div>
</div>
</div>

</div>

<!--
### garbage collector explanation:
1. allocate memory for `Number incompleteAnswer = new Number(20)`
2. run `addOne` -> allocate memory for `Number one = new Number(1)`
3. memory is full!!!
4. try to run mulByTwo -> doesn't work -> run garbage collector
5. garbage collector identifies, that `Number one` is not needed anymore -> mark it as reusable **(deallocation)**
6. allocate memory for `new Number(a.number * 2)`
7. return to `main` -> `Number answerOfEverything` references memory previously allocated
8. print answer
-->

---
title: mem-full
hideInToc: true
---

# Hiring a garbage collector

<div class="flex w-full">

<div class="flex-none">

```java{9,21-23}
class Number {
    public int number;
    public Number(int num) { this.number = num; }
    public void plus(Number summand) { this.number += summand.number; }

    public static void main(String[] args) {
        Number incompleteAnswer = new Number(20);
        addOne(incompleteAnswer);
        Number answerOfEverything = mulByTwo(incompleteAnswer);
        System.out.println(
            "the answer to everything is "
            + answerOfEverything.number
        );
    }

    public static void addOne(Number a) {
            Number one = new Number(1);
            a.plus(one);
    }

    public static Number mulByTwo(Number a) {
        return new Number(a.number * 2);
    }
}
```
</div>

<div class="ml-2">
<figure>
<img src="/Java-Logo.png" class="w-12"/>
<figcaption class="w-12 text-sm italic text-center">Fig.1</figcaption>
</figure>

<div class="px-2 pb-2 bg-green-600 mt-4 rounded border-gray-600 border-2">
<strong class="text-white">Memory</strong>
<div class="overflow-hidden flex-none w-[230px] h-[204px] bg-white rounded border-2 border-gray-500">
<div class="w-full h-[100px] bg-gray-200 border-b-2 border-gray-500 text-center text-4xl">
Number(21)
</div>
<div class="w-full h-[100px] bg-gray-200 text-center text-4xl">
Number(1)
<div
    v-click
    class="mx-8 bg-cyan-200 rounded text-lg mt-2">

_Not used anymore_
</div>
</div>
</div>
<div class="bg-red mt-1 text-center rounded-sm">
    <strong class="text-black">NO MEMORY LEFT!</strong>
</div>
</div>
</div>

</div>

<!--
### garbage collector explanation:
1. allocate memory for `Number incompleteAnswer = new Number(20)`
2. run `addOne` -> allocate memory for `Number one = new Number(1)`
3. memory is full!!!
4. try to run mulByTwo -> doesn't work -> run garbage collector
5. garbage collector identifies, that `Number one` is not needed anymore -> mark it as reusable **(deallocation)**
6. allocate memory for `new Number(a.number * 2)`
7. return to `main` -> `Number answerOfEverything` references memory previously allocated
8. print answer
-->

---
title: finished-garbage-collector
hideInToc: true
---

# Hiring a garbage collector

<div class="flex w-full">

<div class="flex-none">

```java{9,21-23}
class Number {
    public int number;
    public Number(int num) { this.number = num; }
    public void plus(Number summand) { this.number += summand.number; }

    public static void main(String[] args) {
        Number incompleteAnswer = new Number(20);
        addOne(incompleteAnswer);
        Number answerOfEverything = mulByTwo(incompleteAnswer);
        System.out.println(
            "the answer to everything is "
            + answerOfEverything.number
        );
    }

    public static void addOne(Number a) {
            Number one = new Number(1);
            a.plus(one);
    }

    public static Number mulByTwo(Number a) {
        return new Number(a.number * 2);
    }
}
```
</div>

<div class="ml-2">
<figure>
<img src="/Java-Logo.png" class="w-12"/>
<figcaption class="w-12 text-sm italic text-center">Fig.1</figcaption>
</figure>

<div class="px-2 pb-2 bg-green-600 mt-4 rounded border-gray-600 border-2">
<strong class="text-white">Memory</strong>
<div class="overflow-hidden flex-none w-[230px] h-[204px] bg-white rounded border-2 border-gray-500">
<div class="w-full h-[100px] bg-gray-200 border-b-2 border-gray-500 text-center text-4xl">
Number(21)
</div>
</div>
</div>
</div>

</div>

<!--
### garbage collector explanation:
1. allocate memory for `Number incompleteAnswer = new Number(20)`
2. run `addOne` -> allocate memory for `Number one = new Number(1)`
3. memory is full!!!
4. try to run mulByTwo -> doesn't work -> run garbage collector
5. garbage collector identifies, that `Number one` is not needed anymore -> mark it as reusable **(deallocation)**
6. allocate memory for `new Number(a.number * 2)`
7. return to `main` -> `Number answerOfEverything` references memory previously allocated
8. print answer
-->

---
title: answerOfEverything-collector
hideInToc: true
---

# Hiring a garbage collector

<div class="flex w-full">

<div class="flex-none">

```java{9,21-23|10-13}
class Number {
    public int number;
    public Number(int num) { this.number = num; }
    public void plus(Number summand) { this.number += summand.number; }

    public static void main(String[] args) {
        Number incompleteAnswer = new Number(20);
        addOne(incompleteAnswer);
        Number answerOfEverything = mulByTwo(incompleteAnswer);
        System.out.println(
            "the answer to everything is "
            + answerOfEverything.number
        );
    }

    public static void addOne(Number a) {
            Number one = new Number(1);
            a.plus(one);
    }

    public static Number mulByTwo(Number a) {
        return new Number(a.number * 2);
    }
}
```
</div>

<div class="ml-2">
<figure>
<img src="/Java-Logo.png" class="w-12"/>
<figcaption class="w-12 text-sm italic text-center">Fig.1</figcaption>
</figure>

<div class="px-2 pb-2 bg-green-600 mt-4 rounded border-gray-600 border-2">
<strong class="text-white">Memory</strong>
<div class="overflow-hidden flex-none w-[230px] h-[204px] bg-white rounded border-2 border-gray-500">
<div class="w-full h-[100px] bg-gray-200 border-b-2 border-gray-500 text-center text-4xl">
Number(21)
</div>
<div class="w-full h-[100px] bg-gray-200 text-center text-4xl">
Number(42)
</div>
</div>
</div>
</div>

</div>

<!--
### garbage collector explanation:
1. allocate memory for `Number incompleteAnswer = new Number(20)`
2. run `addOne` -> allocate memory for `Number one = new Number(1)`
3. memory is full!!!
4. try to run mulByTwo -> doesn't work -> run garbage collector
5. garbage collector identifies, that `Number one` is not needed anymore -> mark it as reusable **(deallocation)**
6. allocate memory for `new Number(a.number * 2)`
7. return to `main` -> `Number answerOfEverything` references memory previously allocated
8. print answer
-->
