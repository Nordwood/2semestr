

#include <iostream>
#include <std.lib>


class Array
{
    
    private:
           int* data;
            size_t size;
     
    public:
        //default constructor
        Array(){
            data = (int*)malloc(10 * sizeof(int));
            size = 10;
        }
        
        //constructor
        Array(size_t s){
            data = (int*)malloc(s * sizeof(int));
            size = s;}
            ~Array(){
                free(data);
            }
            
        int& Get(size_t index){
                return data[index];
        }
        
        //constcopy
        Array(const Array& that){
           this ->  data = (int*)malloc(that.size * sizeof(int));
            size = that.size;
            for(size t i = 0; i < size; i++){
                this->data[i] = that.data[i];
            }
                
        }
        
        //int* GetPlace(size_t index){
               // return $(data[index]);
       // }
       int& operator[](size_t index){
           return data[index];
       }
       
       size_t Size() const{
           return size;
       }

}
void f(){
    Array a(11);
    int x = a.Get(10);
    //*(a.GetPlace(10)) = x;
}

Array sqr(Array in){
    Array result(in.Size());
    for(int i = 0; i < in.Size(); i++){
        in[i] = in[i] * in[i];
    }
    return in;
}



int main()
{
    Array a(10);
    int sum = sqr(x);
    
    

    return 0;
}
