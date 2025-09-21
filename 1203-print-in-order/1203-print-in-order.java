class Foo {
    private boolean oneDone;
    private boolean twoDone;

    public Foo() {
        oneDone = false;
        twoDone = false;
    }

    public synchronized void first(Runnable printFirst) throws InterruptedException {
        printFirst.run();
        oneDone = true;
        notifyAll(); // now safe
    }

    public synchronized void second(Runnable printSecond) throws InterruptedException {
        while (!oneDone) {
            wait(); // now safe
        }
        printSecond.run();
        twoDone = true;
        notifyAll();
    }

    public synchronized void third(Runnable printThird) throws InterruptedException {
        while (!twoDone) {
            wait(); // now safe
        }
        printThird.run();
    }
}
