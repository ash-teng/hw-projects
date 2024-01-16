// IntegerBuffer.java
public class IntegerBuffer {
    int data[];
    int dataLength = 0;
    private class MyIterator extends GoFIterator {
        int cursor = 0;

        public void first() {
            cursor = 0;
        }

        public void next() {
            if(!isDone())
                ++cursor;
        }

        public boolean isDone() {
            return !(cursor < dataLength);
        }

        public int currentItem() {
            if (isDone())
                return 0;
            else
                return data[cursor];
        }
    }

    public GoFIterator createIterator() {
        return new MyIterator();
    }
   
    


    public IntegerBuffer(int capacity) {
        data = new int[capacity];
    }

    public boolean add(int value) {
        if (dataLength < data.length) {
            data[dataLength] = value;
            ++dataLength;
            return true;
        } else
            return false;
    }

    public int add(int values[]) {
        int count = 0;
        for (int i = 0; i < values.length; ++i)
        if (add(values[i]))
            ++count;
        return count;
    }

    public int sum() {
        int sumOfValues = 0;
        for (int i = 0; i < dataLength; ++i)
            sumOfValues += data[i];
        return sumOfValues;
    }

    public static void main(String args[]) {
        int values[] =
            {23, 12, -6, 14, 0, 37, -26, 5, 11, -4, 16, 12, 8, -3, 6, -2};
        IntegerBuffer ibuf = new IntegerBuffer(32);;
        ibuf.add(values);
        ibuf.add(values);
        System.out.println(ibuf.sum());
    // this section tests the iterator
        int column = 0;
        GoFIterator iter = ibuf.createIterator();
        for (iter.first(); !iter.isDone(); iter.next()) {
            if (column >= 10) {
            System.out.println();
            column = 1;
            } else
                ++column;
                System.out.format("%5d", iter.currentItem());
        }
            System.out.println();
    // end if iterator test
        }
}
