#include <iostream>
using namespace std;

class CPU
{
    public:
        virtual void calculate() = 0;
};

class VideoCard
{
    public:
        virtual void display() = 0;
};

class Memory
{
    public:
        virtual void storage() = 0;
};

class computer
{
    public:
    computer(CPU *cpu,VideoCard *vd,Memory *mem)
    {
        m_cpu = cpu;
        m_vd = vd;
        m_mem = mem;
    }
    void work()
    {
        m_cpu->calculate();
        m_vd->display();
        m_mem->storage();
    }

    ~computer()
    {
        if (m_cpu != NULL)
        {
            delete m_cpu;
            m_cpu = NULL;
        }
       
        if (m_vd!= NULL)
        {
            delete m_vd;
            m_vd = NULL;
        }

        if (m_mem != NULL)
        {
            delete m_mem;
            m_mem = NULL;
        } 
    }
    private:
        CPU *m_cpu;
        VideoCard *m_vd;
        Memory *m_mem;
};

class intel_cpu:public CPU
{
    public:
    void calculate()
    {
        cout << "intel's cpu is working " << endl;
    }
};

class intel_vdcard:public VideoCard
{
    public:
    void display()
    {
        cout << "intel's videocard is displaying " << endl;
    }
};

class intel_memory:public Memory
{
    public:
    void storage()
    {
        cout << "intel's memory is storaging " << endl;
    }
};

void test01()
{
    CPU *interlcpu = new intel_cpu;
    VideoCard *intel_vdc = new intel_vdcard;
    Memory *intel_mem = new intel_memory;

    // computer *p1(intel_cpu * cpu, intel_memory * mem, intel_vdcard * vd);
    computer *computer1 = new computer(interlcpu, intel_vdc, intel_mem );
    computer1->work();
    delete computer1;
}

int main()
{
    test01();
}