Deque
---------

Contains class "deque" with 5 methods.

# C++

    #include <iostream>

    using namespace std;

    class  deque
    {	
        private:
            int *d;
            int first, ind, maxsize;
        
        public:
            deque(int n)
            {
                d = new int[n];
                maxsize = n;
                first = 0;
                ind = 0;
                cout<<"deque is created.\n";
            }
            void print()
            {
                if (ind == 0) {cout<<"deque is empty.\n";return;}
                cout<<"print:\n";
                for (int i=0;i<=ind-1;i++) cout<<d[i]<<endl;
            }       
            void push_first(int a)
            {
                if (ind == maxsize) {cout<<"deque is full.\n";return;}
                for (int i=ind-1;i>=0;i--) d[i+1] = d[i];
                d[first] = a;
                ind++;
                cout<<"push_first: "<<d[first]<<endl;
            }
            void push_last(int b)
            {
                if (ind == maxsize) {cout<<"deque is full.\n";return;}
                d[ind++] = b;
                cout<<"push_last: "<<d[ind-1]<<endl;
            }
            void pop_first()
            {
                if (ind == 0) {cout<<"deque is empty.\n"; return;}
                cout<<"pop_first: "<<d[first]<<endl;
                for (int i=0;i<ind-1;i++) d[i]=d[i+1];
                ind--;
            }
            void pop_last()
            {
                if (ind == 0) {cout<<"deque is empty.\n"; return;}
                cout<<"pop_last: "<<d[--ind]<<endl;
            }
            void size()
            {
                cout<<"size: "<<ind<<endl;
            }
        };

        int main()
        {
            deque d1(3);
            d1.print();
            d1.push_first(1);
            d1.print();
            d1.push_first(2);
            d1.print();
            d1.push_last(0);
            d1.print();
            d1.push_first(4);
            d1.print();
            d1.pop_first();
            d1.print();
            d1.pop_first();
            d1.pop_first();
            d1.pop_first();
            d1.pop_first();
            d1.print();
            d1.push_last(24);
            d1.push_first(23);
            d1.print();
            d1.pop_last();
            d1.print();
            d1.pop_last();
            d1.print();
            d1.pop_first();

            return 0;
        }

> To run this open **deque.cpp**.
