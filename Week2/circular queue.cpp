
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
            if(rear==size-1&&front==0 ||front==(rear+1)%(size))
             {
                 cout<<"queue overflow";
                return;
             }   
             if(front==-1)
                {
                    rear=front=0;
                }
            else if(front !=0 &&rear==size-1)
               rear=0;

            else
              ++rear;


            arr[rear]=x;
        }
        int pop()
        {
            if(front==-1)
               {
                cout<<"stack underflow";
                return -1;
               } 
           
            int x=arr[front];
            if(front==rear)
            {
                front=rear=-1;
            }
            else if(front==size-1)
            front=0;
            else
            front++;

            
            return x;
        
        }
        void print()
        {
            if(front==-1)
            {cout<<"queue is empty";
            return;
            }
            if(rear>=front)
            {
                for(int i=front;i<=rear;i++)
                cout<<arr[i]<<" ";
            }
            else
            {
                 for(int i=front;i<=size-1;i++)
                cout<<arr[i]<<" ";
                 for(int i=0;i<=rear;i++)
                cout<<arr[i]<<" ";
            }
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
         
        st.print();
        cout<<endl<<"delete element="<<st.pop()<<endl;
        st.push(60);
        cout<<endl<<"delete element="<<st.pop()<<endl;
        st.print();

    }
