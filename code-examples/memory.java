class Number {
    public int number;

    public Number(int num) { this.number = num; }
    public void plus(Number summand) { this.number += summand.number; }

    public static void main(String[] args) {
        Number incompleteAnswer = new Number(20);
        addOne(incompleteAnswer);
        Number answerOfEverything = mulByTwo(incompleteAnswer);
        System.out.println("the answer to everything is " + answerOfEverything.number);
    }

    public static void addOne(Number a) {
            Number one = new Number(1);
            a.plus(one);
    }

    public static Number mulByTwo(Number a) {
        return new Number(a.number * 2);
    }
}
