#include "corrections_personal.c"

bool should_correct_chord(char* buffer) {
  switch (buffer[0]) {
    case 'a':
      switch (buffer[1]) {
        case ' ':
          return buffer[2] == 0; /*a */ // a+Dup
        case 'b':
          return strcmp(buffer+2, /*ab*/"out ") == 0; // Dup+u+t
        case 'f':
          return strcmp(buffer+2, /*af*/"ter ") == 0; // f+t+r
        case 'g':
          return strcmp(buffer+2, /*ag*/"ainst ") == 0; // a+g+n
        case 'l':
          switch (buffer[2]) {
            case 'l':
              return strcmp(buffer+3, /*all*/" ") == 0; // a+l+Dup
            case 's':
              return strcmp(buffer+3, /*als*/"o ") == 0; // a+l+o
          }
          break;
        case 'n':
          switch (buffer[2]) {
            case 'd':
              return strcmp(buffer+3, /*and*/" ") == 0; // a+n+d
            case 'y':
              return strcmp(buffer+3, /*any*/" ") == 0; // a+n+y
          }
          break;
        case 'r':
          return strcmp(buffer+2, /*ar*/"ound ") == 0; // a+r+d
        case 's':
          return strcmp(buffer+2, /*as*/" ") == 0; // a+s+Dup
      }
      break;
    case 'A':
      return strcmp(buffer+1, /*A*/" ") == 0; // a+Bksp
    case 'b':
      switch (buffer[1]) {
        case 'a':
          return strcmp(buffer+2, /*ba*/"ck ") == 0; // b+a+c
        case 'e':
          switch (buffer[2]) {
            case ' ':
              return buffer[3] == 0; /*be */ // b+e+Dup
            case 'c':
              switch (buffer[3]) {
                case 'a':
                  return strcmp(buffer+4, /*beca*/"use ") == 0; // b+e+a
                case 'o':
                  return strcmp(buffer+4, /*beco*/"me ") == 0; // c+m+e
              }
              break;
            case 'g':
              return strcmp(buffer+3, /*beg*/"in ") == 0; // e+g+i
            case 't':
              return strcmp(buffer+3, /*bet*/"ween ") == 0; // b+e+n
          }
          break;
        case 'o':
          return strcmp(buffer+2, /*bo*/"th ") == 0; // Dup+t+h
        case 'u':
          return strcmp(buffer+2, /*bu*/"t ") == 0; // i+u+t
        case 'y':
          return strcmp(buffer+2, /*by*/" ") == 0; // b+y+Dup
      }
      break;
    case 'c':
      switch (buffer[1]) {
        case 'a':
          switch (buffer[2]) {
            case 'l':
              return strcmp(buffer+3, /*cal*/"l ") == 0; // Dup+c+a
            case 'n':
              return strcmp(buffer+3, /*can*/" ") == 0; // c+a+n
          }
          break;
        case 'h':
          return strcmp(buffer+2, /*ch*/"ild ") == 0; // c+i+d
        case 'o':
          switch (buffer[2]) {
            case 'm':
              return strcmp(buffer+3, /*com*/"e ") == 0; // c+o+m
            case 'u':
              switch (buffer[3]) {
                case 'l':
                  return strcmp(buffer+4, /*coul*/"d ") == 0; // c+o+u
                case 'r':
                  return strcmp(buffer+4, /*cour*/"se ") == 0; // o+r+s
              }
              break;
          }
          break;
      }
      break;
    case 'd':
      switch (buffer[1]) {
        case 'a':
          return strcmp(buffer+2, /*da*/"y ") == 0; // a+y+Dup
        case 'e':
          return strcmp(buffer+2, /*de*/"velop ") == 0; // d+e+v
        case 'o':
          switch (buffer[2]) {
            case ' ':
              return buffer[3] == 0; /*do */ // d+o+Dup
            case 'w':
              return strcmp(buffer+3, /*dow*/"n ") == 0; // Dup+d+n
          }
          break;
        case 'u':
          return strcmp(buffer+2, /*du*/"ring ") == 0; // d+r+n
      }
      break;
    case 'e':
      switch (buffer[1]) {
        case 'a':
          switch (buffer[2]) {
            case 'c':
              return strcmp(buffer+3, /*eac*/"h ") == 0; // a+c+h
            case 'r':
              return strcmp(buffer+3, /*ear*/"ly ") == 0; // e+l+y
          }
          break;
        case 'n':
          return strcmp(buffer+2, /*en*/"d ") == 0; // e+n+d
        case 'v':
          return strcmp(buffer+2, /*ev*/"en ") == 0; // e+v+n
        case 'y':
          return strcmp(buffer+2, /*ey*/"e ") == 0; // e+y+Dup
      }
      break;
    case 'E':
      return strcmp(buffer+1, /*E*/"lbereth") == 0; // e+l+b+h
    case 'f':
      switch (buffer[1]) {
        case 'a':
          return strcmp(buffer+2, /*fa*/"ce ") == 0; // f+a+c
        case 'i':
          switch (buffer[2]) {
            case 'n':
              return strcmp(buffer+3, /*fin*/"d ") == 0; // Dup+f+n
            case 'r':
              return strcmp(buffer+3, /*fir*/"st ") == 0; // f+r+s
          }
          break;
        case 'o':
          return strcmp(buffer+2, /*fo*/"r ") == 0; // f+o+r
        case 'r':
          return strcmp(buffer+2, /*fr*/"om ") == 0; // Dup+o+m
      }
      break;
    case 'g':
      switch (buffer[1]) {
        case 'e':
          switch (buffer[2]) {
            case 'n':
              return strcmp(buffer+3, /*gen*/"eral ") == 0; // g+e+n
            case 't':
              return strcmp(buffer+3, /*get*/" ") == 0; // g+e+t
          }
          break;
        case 'i':
          return strcmp(buffer+2, /*gi*/"ve ") == 0; // Dup+g+e
        case 'o':
          switch (buffer[2]) {
            case ' ':
              return buffer[3] == 0; /*go */ // g+o+Dup
            case 'o':
              return strcmp(buffer+3, /*goo*/"d ") == 0; // v+o+d
            case 'v':
              return strcmp(buffer+3, /*gov*/"ern ") == 0; // g+r+n
          }
          break;
        case 'r':
          return strcmp(buffer+2, /*gr*/"oup ") == 0; // g+o+u
      }
      break;
    case 'h':
      switch (buffer[1]) {
        case 'a':
          switch (buffer[2]) {
            case 'n':
              return strcmp(buffer+3, /*han*/"d ") == 0; // h+n+d
            case 'v':
              return strcmp(buffer+3, /*hav*/"e ") == 0; // h+a+v
          }
          break;
        case 'e':
          switch (buffer[2]) {
            case ' ':
              return buffer[3] == 0; /*he */ // h+e+Dup
            case 'a':
              return strcmp(buffer+3, /*hea*/"d ") == 0; // h+e+d
            case 'r':
              return strcmp(buffer+3, /*her*/"e ") == 0; // h+r+Dup
          }
          break;
        case 'i':
          return strcmp(buffer+2, /*hi*/"gh ") == 0; // h+i+g
        case 'o':
          switch (buffer[2]) {
            case 'l':
              return strcmp(buffer+3, /*hol*/"d ") == 0; // h+d+Dup
            case 'm':
              return strcmp(buffer+3, /*hom*/"e ") == 0; // Dup+o+e
            case 'u':
              return strcmp(buffer+3, /*hou*/"se ") == 0; // o+s+e
            case 'w':
              return strcmp(buffer+3, /*how*/"ever ") == 0; // h+e+v
          }
          break;
      }
      break;
    case 'i':
      switch (buffer[1]) {
        case 'f':
          return strcmp(buffer+2, /*if*/" ") == 0; // i+f+Dup
        case 'n':
          switch (buffer[2]) {
            case ' ':
              return buffer[3] == 0; /*in */ // i+n+Dup
            case 'c':
              return strcmp(buffer+3, /*inc*/"rease ") == 0; // i+n+c
            case 't':
              return strcmp(buffer+3, /*int*/"erest ") == 0; // i+n+r
          }
          break;
        case 't':
          return strcmp(buffer+2, /*it*/" ") == 0; // i+t+Dup
      }
      break;
    case 'I':
      return strcmp(buffer+1, /*I*/" ") == 0; // i+Dup
    case 'j':
      return strcmp(buffer+1, /*j*/"ust ") == 0; // u+s+t
    case 'k':
      switch (buffer[1]) {
        case 'e':
          return strcmp(buffer+2, /*ke*/"ep ") == 0; // e+p+Dup
        case 'n':
          return strcmp(buffer+2, /*kn*/"ow ") == 0; // k+n+o
        case 'u':
          return strcmp(buffer+2, /*ku*/"bernetes ") == 0; // k+e+n+s
      }
      break;
    case 'l':
      switch (buffer[1]) {
        case 'a':
          switch (buffer[2]) {
            case 'r':
              return strcmp(buffer+3, /*lar*/"ge ") == 0; // a+r+g
            case 's':
              return strcmp(buffer+3, /*las*/"t ") == 0; // l+a+s
            case 't':
              return strcmp(buffer+3, /*lat*/"e ") == 0; // l+a+t
          }
          break;
        case 'e':
          return strcmp(buffer+2, /*le*/"ave ") == 0; // e+a+v
        case 'i':
          switch (buffer[2]) {
            case 'f':
              return strcmp(buffer+3, /*lif*/"e ") == 0; // l+i+f
            case 'k':
              return strcmp(buffer+3, /*lik*/"e ") == 0; // i+e+Dup
            case 'n':
              return strcmp(buffer+3, /*lin*/"e ") == 0; // l+n+e
            case 't':
              return strcmp(buffer+3, /*lit*/"tle ") == 0; // l+i+t
          }
          break;
        case 'o':
          switch (buffer[2]) {
            case 'n':
              return strcmp(buffer+3, /*lon*/"g ") == 0; // l+o+n
            case 'o':
              return strcmp(buffer+3, /*loo*/"k ") == 0; // l+o+k
          }
          break;
      }
      break;
    case 'm':
      switch (buffer[1]) {
        case 'a':
          switch (buffer[2]) {
            case 'n':
              return strcmp(buffer+3, /*man*/"y ") == 0; // m+n+y
            case 'y':
              return strcmp(buffer+3, /*may*/" ") == 0; // m+a+y
          }
          break;
        case 'e':
          return strcmp(buffer+2, /*me*/"an ") == 0; // m+n+Dup
        case 'i':
          return strcmp(buffer+2, /*mi*/"ght ") == 0; // m+i+t
        case 'o':
          switch (buffer[2]) {
            case 'r':
              return strcmp(buffer+3, /*mor*/"e ") == 0; // m+o+r
            case 's':
              return strcmp(buffer+3, /*mos*/"t ") == 0; // m+o+t
          }
          break;
        case 'u':
          switch (buffer[2]) {
            case 'c':
              return strcmp(buffer+3, /*muc*/"h ") == 0; // m+u+c
            case 's':
              return strcmp(buffer+3, /*mus*/"t ") == 0; // m+u+t
          }
          break;
      }
      break;
    case 'n':
      switch (buffer[1]) {
        case 'a':
          return strcmp(buffer+2, /*na*/"tion ") == 0; // a+t+i
        case 'e':
          switch (buffer[2]) {
            case 'v':
              return strcmp(buffer+3, /*nev*/"er ") == 0; // n+v+r
            case 'w':
              return strcmp(buffer+3, /*new*/" ") == 0; // n+e+w
          }
          break;
        case 'o':
          switch (buffer[2]) {
            case ' ':
              return buffer[3] == 0; /*no */ // n+e+Dup
            case 't':
              return strcmp(buffer+3, /*not*/" ") == 0; // n+o+t
          }
          break;
        case 'u':
          return strcmp(buffer+2, /*nu*/"mber ") == 0; // n+e+r
      }
      break;
    case 'o':
      switch (buffer[1]) {
        case 'f':
          switch (buffer[2]) {
            case ' ':
              return buffer[3] == 0; /*of */ // o+f+Dup
            case 'f':
              return strcmp(buffer+3, /*off*/" ") == 0; // o+f+n+e
          }
          break;
        case 'l':
          return strcmp(buffer+2, /*ol*/"d ") == 0; // Dup+o+l
        case 'n':
          switch (buffer[2]) {
            case 'e':
              return strcmp(buffer+3, /*one*/" ") == 0; // o+n+e
            case 'l':
              return strcmp(buffer+3, /*onl*/"y ") == 0; // o+l+y
          }
          break;
        case 'p':
          return strcmp(buffer+2, /*op*/"en ") == 0; // o+p+n
        case 'r':
          switch (buffer[2]) {
            case ' ':
              return buffer[3] == 0; /*or */ // o+r+Dup
            case 'd':
              return strcmp(buffer+3, /*ord*/"er ") == 0; // o+r+d
          }
          break;
        case 't':
          return strcmp(buffer+2, /*ot*/"her ") == 0; // o+t+r
        case 'u':
          return strcmp(buffer+2, /*ou*/"t ") == 0; // o+u+t
        case 'v':
          return strcmp(buffer+2, /*ov*/"er ") == 0; // o+v+r
        case 'w':
          return strcmp(buffer+2, /*ow*/"n ") == 0; // Dup+w+n
      }
      break;
    case 'p':
      switch (buffer[1]) {
        case 'a':
          return strcmp(buffer+2, /*pa*/"rt ") == 0; // p+a+r
        case 'e':
          switch (buffer[2]) {
            case 'o':
              return strcmp(buffer+3, /*peo*/"ple ") == 0; // p+e+l
            case 'r':
              return strcmp(buffer+3, /*per*/"son ") == 0; // p+s+n
          }
          break;
        case 'l':
          return strcmp(buffer+2, /*pl*/"ace ") == 0; // p+c+e
        case 'o':
          switch (buffer[2]) {
            case 'i':
              return strcmp(buffer+3, /*poi*/"nt ") == 0; // p+o+i
            case 's':
              return strcmp(buffer+3, /*pos*/"sible ") == 0; // p+s+e
          }
          break;
        case 'r':
          switch (buffer[2]) {
            case 'e':
              return strcmp(buffer+3, /*pre*/"sent ") == 0; // r+n+t
            case 'o':
              return strcmp(buffer+3, /*pro*/"blem ") == 0; // l+e+m
          }
          break;
        case 'u':
          return strcmp(buffer+2, /*pu*/"blic ") == 0; // p+l+i
      }
      break;
    case 'r':
      switch (buffer[1]) {
        case 'e':
          return strcmp(buffer+2, /*re*/"al ") == 0; // e+a+l
        case 'i':
          return strcmp(buffer+2, /*ri*/"ght ") == 0; // r+i+t
        case 'u':
          return strcmp(buffer+2, /*ru*/"n ") == 0; // r+u+n
      }
      break;
    case 's':
      switch (buffer[1]) {
        case 'a':
          switch (buffer[2]) {
            case 'm':
              return strcmp(buffer+3, /*sam*/"e ") == 0; // s+a+m
            case 'y':
              return strcmp(buffer+3, /*say*/" ") == 0; // s+a+y
          }
          break;
        case 'c':
          return strcmp(buffer+2, /*sc*/"hool ") == 0; // s+h+l
        case 'e':
          switch (buffer[2]) {
            case 'e':
              switch (buffer[3]) {
                case ' ':
                  return buffer[4] == 0; /*see */ // s+e+Dup
                case 'm':
                  return strcmp(buffer+4, /*seem*/" ") == 0; // s+e+m
              }
              break;
            case 't':
              return strcmp(buffer+3, /*set*/" ") == 0; // s+e+t
          }
          break;
        case 'h':
          return strcmp(buffer+2, /*sh*/"ould ") == 0; // s+o+u
        case 'i':
          return strcmp(buffer+2, /*si*/"nce ") == 0; // s+i+e
        case 'm':
          return strcmp(buffer+2, /*sm*/"all ") == 0; // m+a+l
        case 'o':
          switch (buffer[2]) {
            case ' ':
              return buffer[3] == 0; /*so */ // s+o+Dup
            case 'm':
              return strcmp(buffer+3, /*som*/"e ") == 0; // s+o+m
          }
          break;
        case 't':
          switch (buffer[2]) {
            case 'a':
              switch (buffer[3]) {
                case 'n':
                  return strcmp(buffer+4, /*stan*/"d ") == 0; // s+n+d
                case 't':
                  return strcmp(buffer+4, /*stat*/"e ") == 0; // s+t+a
              }
              break;
            case 'i':
              return strcmp(buffer+3, /*sti*/"ll ") == 0; // s+t+l
          }
          break;
        case 'u':
          return strcmp(buffer+2, /*su*/"ch ") == 0; // s+c+h
      }
      break;
    case 't':
      switch (buffer[1]) {
        case 'a':
          return strcmp(buffer+2, /*ta*/"ke ") == 0; // a+k+e
        case 'e':
          return strcmp(buffer+2, /*te*/"ll ") == 0; // t+e+l
        case 'h':
          switch (buffer[2]) {
            case 'a':
              switch (buffer[3]) {
                case 'n':
                  return strcmp(buffer+4, /*than*/"ks ") == 0; // t+n+s
                case 't':
                  return strcmp(buffer+4, /*that*/" ") == 0; // t+h+a
              }
              break;
            case 'e':
              switch (buffer[3]) {
                case ' ':
                  return buffer[4] == 0; /*the */ // t+h+e
                case 'n':
                  return strcmp(buffer+4, /*then*/" ") == 0; // t+e+n
                case 'r':
                  return strcmp(buffer+4, /*ther*/"e ") == 0; // t+h+r
                case 's':
                  return strcmp(buffer+4, /*thes*/"e ") == 0; // n+h+s
                case 'y':
                  return strcmp(buffer+4, /*they*/" ") == 0; // Dup+h+y
              }
              break;
            case 'i':
              switch (buffer[3]) {
                case 'n':
                  switch (buffer[4]) {
                    case 'g':
                      return strcmp(buffer+5, /*thing*/" ") == 0; // t+i+n
                    case 'k':
                      return strcmp(buffer+5, /*think*/" ") == 0; // h+i+k
                  }
                  break;
                case 's':
                  return strcmp(buffer+4, /*this*/" ") == 0; // t+h+s
              }
              break;
            case 'o':
              return strcmp(buffer+3, /*tho*/"se ") == 0; // t+o+s
            case 'r':
              return strcmp(buffer+3, /*thr*/"ough ") == 0; // h+r+g
          }
          break;
        case 'i':
          return strcmp(buffer+2, /*ti*/"me ") == 0; // t+m+e
        case 'o':
          switch (buffer[2]) {
            case ' ':
              return buffer[3] == 0; /*to */ // t+o+Dup
            case 'o':
              return strcmp(buffer+3, /*too*/" ") == 0; // t+o+f
          }
          break;
        case 'u':
          return strcmp(buffer+2, /*tu*/"rn ") == 0; // t+u+n
      }
      break;
    case 'u':
      switch (buffer[1]) {
        case 'n':
          return strcmp(buffer+2, /*un*/"der ") == 0; // u+n+d
        case 'p':
          return strcmp(buffer+2, /*up*/" ") == 0; // u+p+Dup
      }
      break;
    case 'v':
      return strcmp(buffer+1, /*v*/"ery ") == 0; // v+e+r
    case 'w':
      switch (buffer[1]) {
        case 'a':
          return strcmp(buffer+2, /*wa*/"y ") == 0; // w+a+c
        case 'e':
          return strcmp(buffer+2, /*we*/" ") == 0; // w+e+Dup
        case 'h':
          switch (buffer[2]) {
            case 'a':
              return strcmp(buffer+3, /*wha*/"t ") == 0; // Dup+h+a
            case 'e':
              return strcmp(buffer+3, /*whe*/"re ") == 0; // Dup+e+r
            case 'i':
              return strcmp(buffer+3, /*whi*/"le ") == 0; // h+i+e
            case 'o':
              return strcmp(buffer+3, /*who*/" ") == 0; // n+h+e+.
          }
          break;
        case 'i':
          switch (buffer[2]) {
            case 'l':
              return strcmp(buffer+3, /*wil*/"l ") == 0; // w+i+l
            case 't':
              return strcmp(buffer+3, /*wit*/"h ") == 0; // w+i+h
          }
          break;
        case 'o':
          switch (buffer[2]) {
            case 'r':
              switch (buffer[3]) {
                case 'd':
                  return strcmp(buffer+4, /*word*/" ") == 0; // Dup+r+d
                case 'l':
                  return strcmp(buffer+4, /*worl*/"d ") == 0; // o+r+l
              }
              break;
            case 'u':
              return strcmp(buffer+3, /*wou*/"ld ") == 0; // w+o+u
          }
          break;
        case 'r':
          return strcmp(buffer+2, /*wr*/"ite ") == 0; // r+i+e
      }
      break;
    case 'y':
      switch (buffer[1]) {
        case 'e':
          return strcmp(buffer+2, /*ye*/"ar ") == 0; // y+e+a
        case 'o':
          return strcmp(buffer+2, /*yo*/"u ") == 0; // y+o+u
      }
      break;
  }

  return should_correct_chord_personal(buffer);
}
