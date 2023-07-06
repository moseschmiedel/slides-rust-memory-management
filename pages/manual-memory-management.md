# do-it-yourself

<div class="flex w-full">

<div class="flex-none">

```c
#include <stdio.h>
#include <stdlib.h>

typedef struct Number {
    int number;
} Number;

void add_one(Number *a) {
    Number *one = malloc(sizeof(Number));
    one->number = 1;
    a->number = a->number + one->number;
    free(one);
}

Number *mul_by_two(Number *a) {
    Number *result = malloc(sizeof(Number));
    result->number = a->number * 2;
    return result;
}
```
</div>

<div>

<div class="flex justify-evenly">
<figure class="h-20">
<img src="/C-Logo.png" class="w-12" />
<figcaption class="text-sm italic text-center w-12">Fig.2</figcaption>
</figure>
<v-click>
<!-- Memory -->
<div class="px-2 pb-2 bg-green-600 rounded border-gray-600 border-2">
<strong class="text-white">Memory</strong>
<div class="overflow-hidden flex-none w-[230px] h-[204px] bg-white rounded border-2 border-gray-500">
</div>
</div>
<!-- Memory end -->
</v-click>

</div>


```c{all}{startLine: 20}
int main() {
    Number *incomplete_answer = malloc(sizeof(Number));
    incomplete_answer->number = 20;
    add_one(incomplete_answer);
    Number *answer_of_everything = mul_by_two(incomplete_answer);
    printf("the answer to everything is %d\n", answer_of_everything->number);
    free(incomplete_answer);
    free(answer_of_everything);
}
```
</div>
</div>

<!--
### do-it-yourself explanation:
1. explicitly allocate memory for `Number *incomplete_answer` with `malloc`
2. initialize `Number *incomplete_answer` with `20`
2. run `add_one` -> allocate memory for `Number one = malloc(sizeof(Number))`
3. memory is full, **but** gets cleaned up!
4. explicitly deallocate `one` with `free(one)`
5. run `mul_by_two`
6. explicitly allocate memory for `Number *result` with `malloc`
7. return allocated memory to `main` -> store it in `Number *answer_of_everything`
8. print answer
9. deallocate remaining memory
-->

---
title: c-main
---

# do-it-yourself

<div class="flex w-full">

<div class="flex-none">

```c{0}
#include <stdio.h>
#include <stdlib.h>

typedef struct Number {
    int number;
} Number;

void add_one(Number *a) {
    Number *one = malloc(sizeof(Number));
    one->number = 1;
    a->number = a->number + one->number;
    free(one);
}

Number *mul_by_two(Number *a) {
    Number *result = malloc(sizeof(Number));
    result->number = a->number * 2;
    return result;
}
```
</div>

<div>

<div class="flex justify-evenly">
<figure class="h-20">
<img src="/C-Logo.png" class="w-12" />
<figcaption class="text-sm italic text-center w-12">Fig.2</figcaption>
</figure>
<!-- Memory -->
<div class="px-2 pb-2 bg-green-600 rounded border-gray-600 border-2">
<strong class="text-white">Memory</strong>
<div class="overflow-hidden flex-none w-[230px] h-[204px] bg-white rounded border-2 border-gray-500">
</div>
</div>
<!-- Memory end -->

</div>


```c{all}{startLine: 20}
int main() {
    Number *incomplete_answer = malloc(sizeof(Number));
    incomplete_answer->number = 20;
    add_one(incomplete_answer);
    Number *answer_of_everything = mul_by_two(incomplete_answer);
    printf("the answer to everything is %d\n", answer_of_everything->number);
    free(incomplete_answer);
    free(answer_of_everything);
}
```
</div>
</div>

<!--
### do-it-yourself explanation:
1. explicitly allocate memory for `Number *incomplete_answer` with `malloc`
2. initialize `Number *incomplete_answer` with `20`
2. run `add_one` -> allocate memory for `Number one = malloc(sizeof(Number))`
3. memory is full, **but** gets cleaned up!
4. explicitly deallocate `one` with `free(one)`
5. run `mul_by_two`
6. explicitly allocate memory for `Number *result` with `malloc`
7. return allocated memory to `main` -> store it in `Number *answer_of_everything`
8. print answer
9. deallocate remaining memory
-->

---
title: malloc incomplete_answer
---

# do-it-yourself

<div class="flex w-full">

<div class="flex-none">

```c{4-6}
#include <stdio.h>
#include <stdlib.h>

typedef struct Number {
    int number;
} Number;

void add_one(Number *a) {
    Number *one = malloc(sizeof(Number));
    one->number = 1;
    a->number = a->number + one->number;
    free(one);
}

Number *mul_by_two(Number *a) {
    Number *result = malloc(sizeof(Number));
    result->number = a->number * 2;
    return result;
}
```
</div>

<div>

<div class="flex justify-evenly">
<figure class="h-20">
<img src="/C-Logo.png" class="w-12" />
<figcaption class="text-sm italic text-center w-12">Fig.2</figcaption>
</figure>
<!-- Memory -->
<div class="px-2 pb-2 bg-green-600 rounded border-gray-600 border-2">
<strong class="text-white">Memory</strong>
<div class="overflow-hidden flex-none w-[230px] h-[204px] bg-white rounded border-2 border-gray-500">
<div class="w-full h-[100px] bg-gray-200 border-b-2 border-gray-500 text-center text-4xl">
Number(__)
</div>
</div>
</div>
<!-- Memory end -->

</div>


```c{21}{startLine: 20}
int main() {
    Number *incomplete_answer = malloc(sizeof(Number));
    incomplete_answer->number = 20;
    add_one(incomplete_answer);
    Number *answer_of_everything = mul_by_two(incomplete_answer);
    printf("the answer to everything is %d\n", answer_of_everything->number);
    free(incomplete_answer);
    free(answer_of_everything);
}
```
</div>
</div>

<!--
### do-it-yourself explanation:
1. explicitly allocate memory for `Number *incomplete_answer` with `malloc`
2. initialize `Number *incomplete_answer` with `20`
2. run `add_one` -> allocate memory for `Number one = malloc(sizeof(Number))`
3. memory is full, **but** gets cleaned up!
4. explicitly deallocate `one` with `free(one)`
5. run `mul_by_two`
6. explicitly allocate memory for `Number *result` with `malloc`
7. return allocated memory to `main` -> store it in `Number *answer_of_everything`
8. print answer
9. deallocate remaining memory
-->

---
title: initialize incomplete_answer
---

# do-it-yourself

<div class="flex w-full">

<div class="flex-none">

```c{4-6}
#include <stdio.h>
#include <stdlib.h>

typedef struct Number {
    int number;
} Number;

void add_one(Number *a) {
    Number *one = malloc(sizeof(Number));
    one->number = 1;
    a->number = a->number + one->number;
    free(one);
}

Number *mul_by_two(Number *a) {
    Number *result = malloc(sizeof(Number));
    result->number = a->number * 2;
    return result;
}
```
</div>

<div>

<div class="flex justify-evenly">
<figure class="h-20">
<img src="/C-Logo.png" class="w-12" />
<figcaption class="text-sm italic text-center w-12">Fig.2</figcaption>
</figure>
<!-- Memory -->
<div class="px-2 pb-2 bg-green-600 rounded border-gray-600 border-2">
<strong class="text-white">Memory</strong>
<div class="overflow-hidden flex-none w-[230px] h-[204px] bg-white rounded border-2 border-gray-500">
<div class="w-full h-[100px] bg-gray-200 border-b-2 border-gray-500 text-center text-4xl">
Number(20)
</div>
</div>
</div>
<!-- Memory end -->

</div>


```c{22}{startLine: 20}
int main() {
    Number *incomplete_answer = malloc(sizeof(Number));
    incomplete_answer->number = 20;
    add_one(incomplete_answer);
    Number *answer_of_everything = mul_by_two(incomplete_answer);
    printf("the answer to everything is %d\n", answer_of_everything->number);
    free(incomplete_answer);
    free(answer_of_everything);
}
```
</div>
</div>

<!--
### do-it-yourself explanation:
1. explicitly allocate memory for `Number *incomplete_answer` with `malloc`
2. initialize `Number *incomplete_answer` with `20`
2. run `add_one` -> allocate memory for `Number one = malloc(sizeof(Number))`
3. memory is full, **but** gets cleaned up!
4. explicitly deallocate `one` with `free(one)`
5. run `mul_by_two`
6. explicitly allocate memory for `Number *result` with `malloc`
7. return allocated memory to `main` -> store it in `Number *answer_of_everything`
8. print answer
9. deallocate remaining memory
-->

---
title: add_one(incomplete_answer)
---

# do-it-yourself

<div class="flex w-full">

<div class="flex-none">

```c{8-13}
#include <stdio.h>
#include <stdlib.h>

typedef struct Number {
    int number;
} Number;

void add_one(Number *a) {
    Number *one = malloc(sizeof(Number));
    one->number = 1;
    a->number = a->number + one->number;
    free(one);
}

Number *mul_by_two(Number *a) {
    Number *result = malloc(sizeof(Number));
    result->number = a->number * 2;
    return result;
}
```
</div>

<div>

<div class="flex justify-evenly">
<figure class="h-20">
<img src="/C-Logo.png" class="w-12" />
<figcaption class="text-sm italic text-center w-12">Fig.2</figcaption>
</figure>
<!-- Memory -->
<div class="px-2 pb-2 bg-green-600 rounded border-gray-600 border-2">
<strong class="text-white">Memory</strong>
<div class="overflow-hidden flex-none w-[230px] h-[204px] bg-white rounded border-2 border-gray-500">
<div class="w-full h-[100px] bg-gray-200 border-b-2 border-gray-500 text-center text-4xl">
Number(21)
</div>
<div class="w-full h-[100px] bg-gray-200 text-center text-4xl">
Number(1)
</div>
</div>
</div>
<!-- Memory end -->

</div>


```c{23}{startLine: 20}
int main() {
    Number *incomplete_answer = malloc(sizeof(Number));
    incomplete_answer->number = 20;
    add_one(incomplete_answer);
    Number *answer_of_everything = mul_by_two(incomplete_answer);
    printf("the answer to everything is %d\n", answer_of_everything->number);
    free(incomplete_answer);
    free(answer_of_everything);
}
```
</div>
</div>

<!--
### do-it-yourself explanation:
1. explicitly allocate memory for `Number *incomplete_answer` with `malloc`
2. initialize `Number *incomplete_answer` with `20`
2. run `add_one` -> allocate memory for `Number one = malloc(sizeof(Number))`
3. memory is full, **but** gets cleaned up!
4. explicitly deallocate `one` with `free(one)`
5. run `mul_by_two`
6. explicitly allocate memory for `Number *result` with `malloc`
7. return allocated memory to `main` -> store it in `Number *answer_of_everything`
8. print answer
9. deallocate remaining memory
-->
