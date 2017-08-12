#include "matching/matcher.h"

#include "math/numeric.h"
#include "image/image.h"
#include "keypoint/sift.h"
#include "matching/matcher.h"
#include "vis/plot.h"

using open3DCV::Vec;
using open3DCV::Image;
using open3DCV::Keypoint;
using open3DCV::Sift;
using open3DCV::Match;
using open3DCV::Matcher;
using std::string;

//int main(int argc, const char* argv[])
//{
//    string iname0 = "/Users/BlacKay/Documents/Projects/Images/test/basmati.pgm";
//    string iname1 = "/Users/BlacKay/Documents/Projects/Images/test/book.pgm";
//    string iname2 = "/Users/BlacKay/Documents/Projects/Images/test/box.pgm";
//    string iname3 = "/Users/BlacKay/Documents/Projects/Images/test/scene.pgm";
//    
//    Sift sift;
//    vector<Keypoint> keys0, keys1;
//    vector<Vec> desc0, desc1;
//    
//    Image img0, img1;
//    img1.read(iname3);
//    sift.detect_keypoints_simp(img1, keys1);
//    sift.extract_descriptors(img1, keys1, desc1);
////    for (int i = 0; i < desc1.size(); ++i)
////        std::cout << desc1[i] << std::endl;
//    
//    img0.read(iname0);
//    sift.detect_keypoints_simp(img0, keys0);
//    sift.extract_descriptors(img0, keys0, desc0);
//    
//    vector<Match> matches;
//    Matcher matcher;
//    matcher.match(desc0, desc1, matches);
//    draw_matches(img0, keys0, img1, keys1, matches);
//    
//    return 0;
//}