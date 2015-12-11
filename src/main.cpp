#include <iostream>

#include <projection/weston/play.hpp>
#include <scratch/scratch.hpp>

using namespace std;

int main()
{
  scratch::scratch *s = new scratch::scratch();
  shared_ptr<projection::drawing> drawing = shared_ptr<projection::drawing>(s);
  projection::weston::play(drawing);

  cout << "frame rate: " << drawing->frame_rate() << "f/s" << endl;

  return EXIT_SUCCESS;
}
