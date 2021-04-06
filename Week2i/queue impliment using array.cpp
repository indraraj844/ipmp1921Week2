
    #include<bits/stdc++.h>
    using namespace std;

    class Queue
    {
        int front,rear;
        int size;
        int *arr;
        public:
        Queue(int n)
        {
            size=n;
            front=rear=-1;
            arr=new int[n];
        }

        void push(int x)
        {
            if(rear==size-1)
             {
                 cout<<"queue overflow";
                return;
             }   
            else
                if(front==-1)
                {
                    front++;
                }
               arr[++rear]=x;
        }
        int pop()
        {
            if(front==-1)
               {
                cout<<"stack underflow";
                return -1;
               } 
            else 
            {
            int x=arr[front];
            for(int i=0;i<rear;i++)
            arr[i]=arr[i+1];

            rear--;
            if(rear==-1)
            {front=-1;
            }
            return x;
            }
        }
        void print()
        {
            for(int i=rear;i>=front;i--)
            cout<<arr[i]<<" ";
        }
    };

    int main()
    {
        Queue st(5);
        st.push(10);
        st.push(20);
         st.push(30);
        st.push(40);
         st.push(50);

        cout<<endl<<"delete element="<<st.pop();
        st.print();

    }