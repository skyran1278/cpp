class lib1 {
private:
  bool is_initialized;
  /* data */
public:
  lib1(/* args */) { this->is_initialized = false; }
  ~lib1() {}
  int print_is_initialized();
};