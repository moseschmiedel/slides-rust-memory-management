# Rust's approach: Let the compiler do it!

```rust
struct Number {
    pub number: i32,
}
impl Number {
    fn new(number: i32) -> Number {
        Number { number }
    }
}

fn main() {
    let mut incomplete_answer: Number = Number::new(20);
    add_one(&mut incomplete_answer);
    let answer_of_everything = mul_by_two(&incomplete_answer);
    println!(
        "the answer to everything is {}",
        answer_of_everything.number
    );
}

fn add_one(a: &mut Number) {
    let one: Number = Number::new(1);
    a.number += one.number;
}

fn mul_by_two(a: &Number) -> Number {
    return Number::new(a.number * 2);
}
```
<!--
1. code example:
-->
