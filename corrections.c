#include "corrections_personal.c"

char* correct_chord(char* buffer) {
  switch (buffer[0]) {
    case 'a':
      switch (buffer[1]) {
        case ' ':
          if (buffer[2] == 0) /*a */ return "a+Dup";
        case 'b':
          if (strcmp(buffer+2, /*ab*/"out ") == 0) return "Dup+u+t";
        case 'f':
          if (strcmp(buffer+2, /*af*/"ter ") == 0) return "f+t+r";
        case 'g':
          if (strcmp(buffer+2, /*ag*/"ainst ") == 0) return "a+g+n";
        case 'l':
          switch (buffer[2]) {
            case 'l':
              if (strcmp(buffer+3, /*all*/" ") == 0) return "a+l+Dup";
            case 's':
              if (strcmp(buffer+3, /*als*/"o ") == 0) return "a+l+o";
          }
          break;
        case 'n':
          switch (buffer[2]) {
            case 'd':
              if (strcmp(buffer+3, /*and*/" ") == 0) return "a+n+d";
            case 'y':
              if (strcmp(buffer+3, /*any*/" ") == 0) return "a+n+y";
          }
          break;
        case 'r':
          if (strcmp(buffer+2, /*ar*/"ound ") == 0) return "a+r+d";
        case 's':
          if (strcmp(buffer+2, /*as*/" ") == 0) return "a+s+Dup";
      }
      break;
    case 'A':
      if (strcmp(buffer+1, /*A*/" ") == 0) return "a+Bksp";
    case 'b':
      switch (buffer[1]) {
        case 'a':
          if (strcmp(buffer+2, /*ba*/"ck ") == 0) return "b+a+c";
        case 'e':
          switch (buffer[2]) {
            case ' ':
              if (buffer[3] == 0) /*be */ return "b+e+Dup";
            case 'c':
              switch (buffer[3]) {
                case 'a':
                  if (strcmp(buffer+4, /*beca*/"use ") == 0) return "b+e+a";
                case 'o':
                  if (strcmp(buffer+4, /*beco*/"me ") == 0) return "c+m+e";
              }
              break;
            case 'g':
              if (strcmp(buffer+3, /*beg*/"in ") == 0) return "e+g+i";
            case 't':
              if (strcmp(buffer+3, /*bet*/"ween ") == 0) return "b+e+n";
          }
          break;
        case 'o':
          if (strcmp(buffer+2, /*bo*/"th ") == 0) return "Dup+t+h";
        case 'u':
          if (strcmp(buffer+2, /*bu*/"t ") == 0) return "i+u+t";
        case 'y':
          if (strcmp(buffer+2, /*by*/" ") == 0) return "b+y+Dup";
      }
      break;
    case 'c':
      switch (buffer[1]) {
        case 'a':
          switch (buffer[2]) {
            case 'l':
              if (strcmp(buffer+3, /*cal*/"l ") == 0) return "Dup+c+a";
            case 'n':
              if (strcmp(buffer+3, /*can*/" ") == 0) return "c+a+n";
          }
          break;
        case 'h':
          if (strcmp(buffer+2, /*ch*/"ild ") == 0) return "c+i+d";
        case 'o':
          switch (buffer[2]) {
            case 'm':
              if (strcmp(buffer+3, /*com*/"e ") == 0) return "c+o+m";
            case 'u':
              switch (buffer[3]) {
                case 'l':
                  if (strcmp(buffer+4, /*coul*/"d ") == 0) return "c+o+u";
                case 'r':
                  if (strcmp(buffer+4, /*cour*/"se ") == 0) return "o+r+s";
              }
              break;
          }
          break;
      }
      break;
    case 'd':
      switch (buffer[1]) {
        case 'a':
          if (strcmp(buffer+2, /*da*/"y ") == 0) return "a+y+Dup";
        case 'e':
          if (strcmp(buffer+2, /*de*/"velop ") == 0) return "d+e+v";
        case 'o':
          switch (buffer[2]) {
            case ' ':
              if (buffer[3] == 0) /*do */ return "d+o+Dup";
            case 'w':
              if (strcmp(buffer+3, /*dow*/"n ") == 0) return "Dup+d+n";
          }
          break;
        case 'u':
          if (strcmp(buffer+2, /*du*/"ring ") == 0) return "d+r+n";
      }
      break;
    case 'e':
      switch (buffer[1]) {
        case 'a':
          switch (buffer[2]) {
            case 'c':
              if (strcmp(buffer+3, /*eac*/"h ") == 0) return "a+c+h";
            case 'r':
              if (strcmp(buffer+3, /*ear*/"ly ") == 0) return "e+l+y";
          }
          break;
        case 'n':
          if (strcmp(buffer+2, /*en*/"d ") == 0) return "e+n+d";
        case 'v':
          if (strcmp(buffer+2, /*ev*/"en ") == 0) return "e+v+n";
        case 'y':
          if (strcmp(buffer+2, /*ey*/"e ") == 0) return "e+y+Dup";
      }
      break;
    case 'E':
      if (strcmp(buffer+1, /*E*/"lbereth") == 0) return "e+l+b+h";
    case 'f':
      switch (buffer[1]) {
        case 'a':
          if (strcmp(buffer+2, /*fa*/"ce ") == 0) return "f+a+c";
        case 'i':
          switch (buffer[2]) {
            case 'n':
              if (strcmp(buffer+3, /*fin*/"d ") == 0) return "Dup+f+n";
            case 'r':
              if (strcmp(buffer+3, /*fir*/"st ") == 0) return "f+r+s";
          }
          break;
        case 'o':
          if (strcmp(buffer+2, /*fo*/"r ") == 0) return "f+o+r";
        case 'r':
          if (strcmp(buffer+2, /*fr*/"om ") == 0) return "Dup+o+m";
      }
      break;
    case 'g':
      switch (buffer[1]) {
        case 'e':
          switch (buffer[2]) {
            case 'n':
              if (strcmp(buffer+3, /*gen*/"eral ") == 0) return "g+e+n";
            case 't':
              if (strcmp(buffer+3, /*get*/" ") == 0) return "g+e+t";
          }
          break;
        case 'i':
          if (strcmp(buffer+2, /*gi*/"ve ") == 0) return "Dup+g+e";
        case 'o':
          switch (buffer[2]) {
            case ' ':
              if (buffer[3] == 0) /*go */ return "g+o+Dup";
            case 'o':
              if (strcmp(buffer+3, /*goo*/"d ") == 0) return "v+o+d";
            case 'v':
              if (strcmp(buffer+3, /*gov*/"ern ") == 0) return "g+r+n";
          }
          break;
        case 'r':
          if (strcmp(buffer+2, /*gr*/"oup ") == 0) return "g+o+u";
      }
      break;
    case 'h':
      switch (buffer[1]) {
        case 'a':
          switch (buffer[2]) {
            case 'n':
              if (strcmp(buffer+3, /*han*/"d ") == 0) return "h+n+d";
            case 'v':
              if (strcmp(buffer+3, /*hav*/"e ") == 0) return "h+a+v";
          }
          break;
        case 'e':
          switch (buffer[2]) {
            case ' ':
              if (buffer[3] == 0) /*he */ return "h+e+Dup";
            case 'a':
              if (strcmp(buffer+3, /*hea*/"d ") == 0) return "h+e+d";
            case 'r':
              if (strcmp(buffer+3, /*her*/"e ") == 0) return "h+r+Dup";
          }
          break;
        case 'i':
          if (strcmp(buffer+2, /*hi*/"gh ") == 0) return "h+i+g";
        case 'o':
          switch (buffer[2]) {
            case 'l':
              if (strcmp(buffer+3, /*hol*/"d ") == 0) return "h+d+Dup";
            case 'm':
              if (strcmp(buffer+3, /*hom*/"e ") == 0) return "Dup+o+e";
            case 'u':
              if (strcmp(buffer+3, /*hou*/"se ") == 0) return "o+s+e";
            case 'w':
              if (strcmp(buffer+3, /*how*/"ever ") == 0) return "h+e+v";
          }
          break;
      }
      break;
    case 'i':
      switch (buffer[1]) {
        case 'f':
          if (strcmp(buffer+2, /*if*/" ") == 0) return "i+f+Dup";
        case 'n':
          switch (buffer[2]) {
            case ' ':
              if (buffer[3] == 0) /*in */ return "i+n+Dup";
            case 'c':
              if (strcmp(buffer+3, /*inc*/"rease ") == 0) return "i+n+c";
            case 't':
              if (strcmp(buffer+3, /*int*/"erest ") == 0) return "i+n+r";
          }
          break;
        case 't':
          if (strcmp(buffer+2, /*it*/" ") == 0) return "i+t+Dup";
      }
      break;
    case 'I':
      if (strcmp(buffer+1, /*I*/" ") == 0) return "i+Dup";
    case 'j':
      if (strcmp(buffer+1, /*j*/"ust ") == 0) return "u+s+t";
    case 'k':
      switch (buffer[1]) {
        case 'e':
          if (strcmp(buffer+2, /*ke*/"ep ") == 0) return "e+p+Dup";
        case 'n':
          if (strcmp(buffer+2, /*kn*/"ow ") == 0) return "k+n+o";
        case 'u':
          if (strcmp(buffer+2, /*ku*/"bernetes ") == 0) return "k+e+n+s";
      }
      break;
    case 'l':
      switch (buffer[1]) {
        case 'a':
          switch (buffer[2]) {
            case 'r':
              if (strcmp(buffer+3, /*lar*/"ge ") == 0) return "a+r+g";
            case 's':
              if (strcmp(buffer+3, /*las*/"t ") == 0) return "l+a+s";
            case 't':
              if (strcmp(buffer+3, /*lat*/"e ") == 0) return "l+a+t";
          }
          break;
        case 'e':
          if (strcmp(buffer+2, /*le*/"ave ") == 0) return "e+a+v";
        case 'i':
          switch (buffer[2]) {
            case 'f':
              if (strcmp(buffer+3, /*lif*/"e ") == 0) return "l+i+f";
            case 'k':
              if (strcmp(buffer+3, /*lik*/"e ") == 0) return "i+e+Dup";
            case 'n':
              if (strcmp(buffer+3, /*lin*/"e ") == 0) return "l+n+e";
            case 't':
              if (strcmp(buffer+3, /*lit*/"tle ") == 0) return "l+i+t";
          }
          break;
        case 'o':
          switch (buffer[2]) {
            case 'n':
              if (strcmp(buffer+3, /*lon*/"g ") == 0) return "l+o+n";
            case 'o':
              if (strcmp(buffer+3, /*loo*/"k ") == 0) return "l+o+k";
          }
          break;
      }
      break;
    case 'm':
      switch (buffer[1]) {
        case 'a':
          switch (buffer[2]) {
            case 'n':
              if (strcmp(buffer+3, /*man*/"y ") == 0) return "m+n+y";
            case 'y':
              if (strcmp(buffer+3, /*may*/" ") == 0) return "m+a+y";
          }
          break;
        case 'e':
          if (strcmp(buffer+2, /*me*/"an ") == 0) return "m+n+Dup";
        case 'i':
          if (strcmp(buffer+2, /*mi*/"ght ") == 0) return "m+i+t";
        case 'o':
          switch (buffer[2]) {
            case 'r':
              if (strcmp(buffer+3, /*mor*/"e ") == 0) return "m+o+r";
            case 's':
              if (strcmp(buffer+3, /*mos*/"t ") == 0) return "m+o+t";
          }
          break;
        case 'u':
          switch (buffer[2]) {
            case 'c':
              if (strcmp(buffer+3, /*muc*/"h ") == 0) return "m+u+c";
            case 's':
              if (strcmp(buffer+3, /*mus*/"t ") == 0) return "m+u+t";
          }
          break;
      }
      break;
    case 'n':
      switch (buffer[1]) {
        case 'a':
          if (strcmp(buffer+2, /*na*/"tion ") == 0) return "a+t+i";
        case 'e':
          switch (buffer[2]) {
            case 'v':
              if (strcmp(buffer+3, /*nev*/"er ") == 0) return "n+v+r";
            case 'w':
              if (strcmp(buffer+3, /*new*/" ") == 0) return "n+e+w";
          }
          break;
        case 'o':
          switch (buffer[2]) {
            case ' ':
              if (buffer[3] == 0) /*no */ return "n+e+Dup";
            case 't':
              if (strcmp(buffer+3, /*not*/" ") == 0) return "n+o+t";
          }
          break;
        case 'u':
          if (strcmp(buffer+2, /*nu*/"mber ") == 0) return "n+e+r";
      }
      break;
    case 'o':
      switch (buffer[1]) {
        case 'f':
          switch (buffer[2]) {
            case ' ':
              if (buffer[3] == 0) /*of */ return "o+f+Dup";
            case 'f':
              if (strcmp(buffer+3, /*off*/" ") == 0) return "o+f+n+e";
          }
          break;
        case 'l':
          if (strcmp(buffer+2, /*ol*/"d ") == 0) return "Dup+o+l";
        case 'n':
          switch (buffer[2]) {
            case 'e':
              if (strcmp(buffer+3, /*one*/" ") == 0) return "o+n+e";
            case 'l':
              if (strcmp(buffer+3, /*onl*/"y ") == 0) return "o+l+y";
          }
          break;
        case 'p':
          if (strcmp(buffer+2, /*op*/"en ") == 0) return "o+p+n";
        case 'r':
          switch (buffer[2]) {
            case ' ':
              if (buffer[3] == 0) /*or */ return "o+r+Dup";
            case 'd':
              if (strcmp(buffer+3, /*ord*/"er ") == 0) return "o+r+d";
          }
          break;
        case 't':
          if (strcmp(buffer+2, /*ot*/"her ") == 0) return "o+t+r";
        case 'u':
          if (strcmp(buffer+2, /*ou*/"t ") == 0) return "o+u+t";
        case 'v':
          if (strcmp(buffer+2, /*ov*/"er ") == 0) return "o+v+r";
        case 'w':
          if (strcmp(buffer+2, /*ow*/"n ") == 0) return "Dup+w+n";
      }
      break;
    case 'p':
      switch (buffer[1]) {
        case 'a':
          if (strcmp(buffer+2, /*pa*/"rt ") == 0) return "p+a+r";
        case 'e':
          switch (buffer[2]) {
            case 'o':
              if (strcmp(buffer+3, /*peo*/"ple ") == 0) return "p+e+l";
            case 'r':
              if (strcmp(buffer+3, /*per*/"son ") == 0) return "p+s+n";
          }
          break;
        case 'l':
          if (strcmp(buffer+2, /*pl*/"ace ") == 0) return "p+c+e";
        case 'o':
          switch (buffer[2]) {
            case 'i':
              if (strcmp(buffer+3, /*poi*/"nt ") == 0) return "p+o+i";
            case 's':
              if (strcmp(buffer+3, /*pos*/"sible ") == 0) return "p+s+e";
          }
          break;
        case 'r':
          switch (buffer[2]) {
            case 'e':
              if (strcmp(buffer+3, /*pre*/"sent ") == 0) return "r+n+t";
            case 'o':
              if (strcmp(buffer+3, /*pro*/"blem ") == 0) return "l+e+m";
          }
          break;
        case 'u':
          if (strcmp(buffer+2, /*pu*/"blic ") == 0) return "p+l+i";
      }
      break;
    case 'r':
      switch (buffer[1]) {
        case 'e':
          if (strcmp(buffer+2, /*re*/"al ") == 0) return "e+a+l";
        case 'i':
          if (strcmp(buffer+2, /*ri*/"ght ") == 0) return "r+i+t";
        case 'u':
          if (strcmp(buffer+2, /*ru*/"n ") == 0) return "r+u+n";
      }
      break;
    case 's':
      switch (buffer[1]) {
        case 'a':
          switch (buffer[2]) {
            case 'm':
              if (strcmp(buffer+3, /*sam*/"e ") == 0) return "s+a+m";
            case 'y':
              if (strcmp(buffer+3, /*say*/" ") == 0) return "s+a+y";
          }
          break;
        case 'c':
          if (strcmp(buffer+2, /*sc*/"hool ") == 0) return "s+h+l";
        case 'e':
          switch (buffer[2]) {
            case 'e':
              switch (buffer[3]) {
                case ' ':
                  if (buffer[4] == 0) /*see */ return "s+e+Dup";
                case 'm':
                  if (strcmp(buffer+4, /*seem*/" ") == 0) return "s+e+m";
              }
              break;
            case 't':
              if (strcmp(buffer+3, /*set*/" ") == 0) return "s+e+t";
          }
          break;
        case 'h':
          if (strcmp(buffer+2, /*sh*/"ould ") == 0) return "s+o+u";
        case 'i':
          if (strcmp(buffer+2, /*si*/"nce ") == 0) return "s+i+e";
        case 'm':
          if (strcmp(buffer+2, /*sm*/"all ") == 0) return "m+a+l";
        case 'o':
          switch (buffer[2]) {
            case ' ':
              if (buffer[3] == 0) /*so */ return "s+o+Dup";
            case 'm':
              if (strcmp(buffer+3, /*som*/"e ") == 0) return "s+o+m";
          }
          break;
        case 't':
          switch (buffer[2]) {
            case 'a':
              switch (buffer[3]) {
                case 'n':
                  if (strcmp(buffer+4, /*stan*/"d ") == 0) return "s+n+d";
                case 't':
                  if (strcmp(buffer+4, /*stat*/"e ") == 0) return "s+t+a";
              }
              break;
            case 'i':
              if (strcmp(buffer+3, /*sti*/"ll ") == 0) return "s+t+l";
          }
          break;
        case 'u':
          if (strcmp(buffer+2, /*su*/"ch ") == 0) return "s+c+h";
      }
      break;
    case 't':
      switch (buffer[1]) {
        case 'a':
          if (strcmp(buffer+2, /*ta*/"ke ") == 0) return "a+k+e";
        case 'e':
          if (strcmp(buffer+2, /*te*/"ll ") == 0) return "t+e+l";
        case 'h':
          switch (buffer[2]) {
            case 'a':
              switch (buffer[3]) {
                case 'n':
                  if (strcmp(buffer+4, /*than*/"ks ") == 0) return "t+n+s";
                case 't':
                  if (strcmp(buffer+4, /*that*/" ") == 0) return "t+h+a";
              }
              break;
            case 'e':
              switch (buffer[3]) {
                case ' ':
                  if (buffer[4] == 0) /*the */ return "t+h+e";
                case 'n':
                  if (strcmp(buffer+4, /*then*/" ") == 0) return "t+e+n";
                case 'r':
                  if (strcmp(buffer+4, /*ther*/"e ") == 0) return "t+h+r";
                case 's':
                  if (strcmp(buffer+4, /*thes*/"e ") == 0) return "n+h+s";
                case 'y':
                  if (strcmp(buffer+4, /*they*/" ") == 0) return "Dup+h+y";
              }
              break;
            case 'i':
              switch (buffer[3]) {
                case 'n':
                  switch (buffer[4]) {
                    case 'g':
                      if (strcmp(buffer+5, /*thing*/" ") == 0) return "t+i+n";
                    case 'k':
                      if (strcmp(buffer+5, /*think*/" ") == 0) return "h+i+k";
                  }
                  break;
                case 's':
                  if (strcmp(buffer+4, /*this*/" ") == 0) return "t+h+s";
              }
              break;
            case 'o':
              if (strcmp(buffer+3, /*tho*/"se ") == 0) return "t+o+s";
            case 'r':
              if (strcmp(buffer+3, /*thr*/"ough ") == 0) return "h+r+g";
          }
          break;
        case 'i':
          if (strcmp(buffer+2, /*ti*/"me ") == 0) return "t+m+e";
        case 'o':
          switch (buffer[2]) {
            case ' ':
              if (buffer[3] == 0) /*to */ return "t+o+Dup";
            case 'o':
              if (strcmp(buffer+3, /*too*/" ") == 0) return "t+o+f";
          }
          break;
        case 'u':
          if (strcmp(buffer+2, /*tu*/"rn ") == 0) return "t+u+n";
      }
      break;
    case 'u':
      switch (buffer[1]) {
        case 'n':
          if (strcmp(buffer+2, /*un*/"der ") == 0) return "u+n+d";
        case 'p':
          if (strcmp(buffer+2, /*up*/" ") == 0) return "u+p+Dup";
      }
      break;
    case 'v':
      if (strcmp(buffer+1, /*v*/"ery ") == 0) return "v+e+r";
    case 'w':
      switch (buffer[1]) {
        case 'a':
          if (strcmp(buffer+2, /*wa*/"y ") == 0) return "w+a+c";
        case 'e':
          if (strcmp(buffer+2, /*we*/" ") == 0) return "w+e+Dup";
        case 'h':
          switch (buffer[2]) {
            case 'a':
              if (strcmp(buffer+3, /*wha*/"t ") == 0) return "Dup+h+a";
            case 'e':
              if (strcmp(buffer+3, /*whe*/"re ") == 0) return "Dup+e+r";
            case 'i':
              if (strcmp(buffer+3, /*whi*/"le ") == 0) return "h+i+e";
            case 'o':
              if (strcmp(buffer+3, /*who*/" ") == 0) return "n+h+e+.";
          }
          break;
        case 'i':
          switch (buffer[2]) {
            case 'l':
              if (strcmp(buffer+3, /*wil*/"l ") == 0) return "w+i+l";
            case 't':
              if (strcmp(buffer+3, /*wit*/"h ") == 0) return "w+i+h";
          }
          break;
        case 'o':
          switch (buffer[2]) {
            case 'r':
              switch (buffer[3]) {
                case 'd':
                  if (strcmp(buffer+4, /*word*/" ") == 0) return "Dup+r+d";
                case 'l':
                  if (strcmp(buffer+4, /*worl*/"d ") == 0) return "o+r+l";
              }
              break;
            case 'u':
              if (strcmp(buffer+3, /*wou*/"ld ") == 0) return "w+o+u";
          }
          break;
        case 'r':
          if (strcmp(buffer+2, /*wr*/"ite ") == 0) return "r+i+e";
      }
      break;
    case 'y':
      switch (buffer[1]) {
        case 'e':
          if (strcmp(buffer+2, /*ye*/"ar ") == 0) return "y+e+a";
        case 'o':
          if (strcmp(buffer+2, /*yo*/"u ") == 0) return "y+o+u";
      }
      break;
  }

  return correct_chord_personal(buffer);
}
