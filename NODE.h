class NODE{
protected:
  int data;
  NODE* next;
public:
  NODE(int);
  virtual void show_node();
  void insert(NODE*&);
  void killed();
  int isDead();
  NODE* move_next();
  ~NODE();
};