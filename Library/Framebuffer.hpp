#ifndef Framebuffer

class Framebuffer {
  public:
    Framebuffer() {}
    Framebuffer(unsigned long long Address, unsigned long long Size, unsigned int Width, unsigned int Height, unsigned int PPSL) {
      this->Address = (void*) Address;
      this->Size = Size;
      this->Width = Width;
      this->Height = Height;
      this->PPSL = PPSL;
    }
    void* Address;
    unsigned long long Size;
    unsigned int Width, Height, PPSL;
};

#endif