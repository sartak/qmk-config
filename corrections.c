#include "corrections_personal.c"

char* correct_chord(char* buffer) {
  switch (buffer[0]) {
    case 'a':
      switch (buffer[1]) {
        case ' ':
          if (buffer[2] == 0) /*a */ return "a+Dup";
          break;
        case 'b':
          if (strcmp(buffer+2, /*ab*/"out ") == 0) return "Dup+u+t";
          break;
        case 'd':
          if (strcmp(buffer+2, /*ad*/"min ") == 0) return "d+m+n";
          break;
        case 'f':
          if (strcmp(buffer+2, /*af*/"ter ") == 0) return "f+t+r";
          break;
        case 'g':
          if (buffer[2] == 'a') {
              if (buffer[3] == 'i') {
                  if (buffer[4] == 'n') {
                      switch (buffer[5]) {
                        case ' ':
                          if (buffer[6] == 0) /*again */ return "a+g+i";
                          break;
                        case 's':
                          if (strcmp(buffer+6, /*agains*/"t ") == 0) return "a+g+n";
                          break;
                      }
                  }
              }
          }
          break;
        case 'l':
          switch (buffer[2]) {
            case 'l':
              if (strcmp(buffer+3, /*all*/" ") == 0) return "a+l+Dup";
              break;
            case 's':
              if (strcmp(buffer+3, /*als*/"o ") == 0) return "a+l+o";
              break;
          }
          break;
        case 'n':
          switch (buffer[2]) {
            case 'd':
              if (strcmp(buffer+3, /*and*/" ") == 0) return "a+n+d";
              break;
            case 'y':
              if (strcmp(buffer+3, /*any*/" ") == 0) return "a+n+y";
              break;
          }
          break;
        case 'r':
          if (strcmp(buffer+2, /*ar*/"ound ") == 0) return "a+r+d";
          break;
        case 's':
          switch (buffer[2]) {
            case ' ':
              if (buffer[3] == 0) /*as */ return "a+s+Dup";
              break;
            case 'k':
              if (strcmp(buffer+3, /*ask*/" ") == 0) return "a+s+k";
              break;
          }
          break;
      }
      break;
    case 'A':
      if (strcmp(buffer+1, /*A*/" ") == 0) return "a+Bksp";
      break;
    case 'b':
      switch (buffer[1]) {
        case 'a':
          if (strcmp(buffer+2, /*ba*/"ck ") == 0) return "b+a+c";
          break;
        case 'e':
          switch (buffer[2]) {
            case ' ':
              if (buffer[3] == 0) /*be */ return "b+e+Dup";
              break;
            case 'c':
              switch (buffer[3]) {
                case 'a':
                  if (strcmp(buffer+4, /*beca*/"use ") == 0) return "b+e+a";
                  break;
                case 'o':
                  if (strcmp(buffer+4, /*beco*/"me ") == 0) return "c+m+e";
                  break;
              }
              break;
            case 'f':
              if (strcmp(buffer+3, /*bef*/"ore ") == 0) return "b+f+o";
              break;
            case 'g':
              if (strcmp(buffer+3, /*beg*/"in ") == 0) return "e+g+i";
              break;
            case 't':
              if (strcmp(buffer+3, /*bet*/"ween ") == 0) return "b+e+n";
              break;
          }
          break;
        case 'o':
          if (strcmp(buffer+2, /*bo*/"th ") == 0) return "Dup+t+h";
          break;
        case 'u':
          if (strcmp(buffer+2, /*bu*/"t ") == 0) return "i+u+t";
          break;
        case 'y':
          if (strcmp(buffer+2, /*by*/" ") == 0) return "b+y+Dup";
          break;
      }
      break;
    case 'c':
      switch (buffer[1]) {
        case 'a':
          switch (buffer[2]) {
            case 'l':
              if (strcmp(buffer+3, /*cal*/"l ") == 0) return "Dup+c+a";
              break;
            case 'n':
              if (strcmp(buffer+3, /*can*/" ") == 0) return "c+a+n";
              break;
          }
          break;
        case 'h':
          switch (buffer[2]) {
            case 'a':
              if (strcmp(buffer+3, /*cha*/"nge ") == 0) return "c+h+e";
              break;
            case 'i':
              if (strcmp(buffer+3, /*chi*/"ld ") == 0) return "c+i+d";
              break;
          }
          break;
        case 'o':
          switch (buffer[2]) {
            case 'm':
              if (strcmp(buffer+3, /*com*/"e ") == 0) return "c+o+m";
              break;
            case 'n':
              if (strcmp(buffer+3, /*con*/"tinue ") == 0) return "c+n+t";
              break;
            case 'u':
              switch (buffer[3]) {
                case 'l':
                  if (strcmp(buffer+4, /*coul*/"d ") == 0) return "c+o+u";
                  break;
                case 'r':
                  if (strcmp(buffer+4, /*cour*/"se ") == 0) return "o+r+s";
                  break;
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
          break;
        case 'e':
          switch (buffer[2]) {
            case 's':
              if (strcmp(buffer+3, /*des*/"ign ") == 0) return "e+s+g";
              break;
            case 'v':
              if (strcmp(buffer+3, /*dev*/"elop ") == 0) return "d+e+v";
              break;
          }
          break;
        case 'o':
          switch (buffer[2]) {
            case ' ':
              if (buffer[3] == 0) /*do */ return "d+o+Dup";
              break;
            case 'w':
              if (strcmp(buffer+3, /*dow*/"n ") == 0) return "Dup+d+n";
              break;
          }
          break;
        case 'u':
          if (strcmp(buffer+2, /*du*/"ring ") == 0) return "d+r+n";
          break;
      }
      break;
    case 'e':
      switch (buffer[1]) {
        case 'a':
          switch (buffer[2]) {
            case 'c':
              if (strcmp(buffer+3, /*eac*/"h ") == 0) return "a+c+h";
              break;
            case 'r':
              if (strcmp(buffer+3, /*ear*/"ly ") == 0) return "e+l+y";
              break;
          }
          break;
        case 'n':
          switch (buffer[2]) {
            case 'd':
              if (strcmp(buffer+3, /*end*/" ") == 0) return "e+n+d";
              break;
            case 'v':
              if (strcmp(buffer+3, /*env*/"ironment ") == 0) return "e+v+t";
              break;
          }
          break;
        case 'v':
          if (strcmp(buffer+2, /*ev*/"en ") == 0) return "e+v+n";
          break;
        case 'x':
          if (strcmp(buffer+2, /*ex*/"pansion ") == 0) return "e+p+o";
          break;
        case 'y':
          if (strcmp(buffer+2, /*ey*/"e ") == 0) return "e+y+Dup";
          break;
      }
      break;
    case 'E':
      if (strcmp(buffer+1, /*E*/"lbereth") == 0) return "e+l+b+h";
      break;
    case 'f':
      switch (buffer[1]) {
        case 'a':
          if (buffer[2] == 'c') {
              switch (buffer[3]) {
                case 'e':
                  if (strcmp(buffer+4, /*face*/" ") == 0) return "f+a+c";
                  break;
                case 't':
                  if (strcmp(buffer+4, /*fact*/" ") == 0) return "f+c+t";
                  break;
              }
          }
          break;
        case 'e':
          if (strcmp(buffer+2, /*fe*/"el ") == 0) return "f+e+l";
          break;
        case 'i':
          switch (buffer[2]) {
            case 'n':
              switch (buffer[3]) {
                case 'a':
                  if (strcmp(buffer+4, /*fina*/"l ") == 0) return "f+i+n";
                  break;
                case 'd':
                  if (strcmp(buffer+4, /*find*/" ") == 0) return "Dup+f+n";
                  break;
              }
              break;
            case 'r':
              if (strcmp(buffer+3, /*fir*/"st ") == 0) return "f+r+s";
              break;
          }
          break;
        case 'o':
          switch (buffer[2]) {
            case 'l':
              if (strcmp(buffer+3, /*fol*/"low ") == 0) return "f+o+l";
              break;
            case 'r':
              switch (buffer[3]) {
                case ' ':
                  if (buffer[4] == 0) /*for */ return "f+o+r";
                  break;
                case 'm':
                  if (strcmp(buffer+4, /*form*/" ") == 0) return "f+r+Dup";
                  break;
              }
              break;
          }
          break;
        case 'r':
          if (strcmp(buffer+2, /*fr*/"om ") == 0) return "Dup+o+m";
          break;
      }
      break;
    case 'g':
      switch (buffer[1]) {
        case 'e':
          switch (buffer[2]) {
            case 'n':
              if (strcmp(buffer+3, /*gen*/"eral ") == 0) return "g+e+n";
              break;
            case 't':
              if (strcmp(buffer+3, /*get*/" ") == 0) return "g+e+t";
              break;
          }
          break;
        case 'i':
          switch (buffer[2]) {
            case 't':
              if (strcmp(buffer+3, /*git*/" ") == 0) return "g+i+t";
              break;
            case 'v':
              if (strcmp(buffer+3, /*giv*/"e ") == 0) return "Dup+g+e";
              break;
          }
          break;
        case 'o':
          switch (buffer[2]) {
            case ' ':
              if (buffer[3] == 0) /*go */ return "g+o+Dup";
              break;
            case 'o':
              if (strcmp(buffer+3, /*goo*/"d ") == 0) return "v+o+d";
              break;
            case 'v':
              if (strcmp(buffer+3, /*gov*/"ern ") == 0) return "g+r+n";
              break;
          }
          break;
        case 'r':
          switch (buffer[2]) {
            case 'e':
              if (strcmp(buffer+3, /*gre*/"at ") == 0) return "g+r+e";
              break;
            case 'o':
              if (strcmp(buffer+3, /*gro*/"up ") == 0) return "g+o+u";
              break;
          }
          break;
      }
      break;
    case 'h':
      switch (buffer[1]) {
        case 'a':
          switch (buffer[2]) {
            case 'n':
              if (strcmp(buffer+3, /*han*/"d ") == 0) return "h+n+d";
              break;
            case 'v':
              if (strcmp(buffer+3, /*hav*/"e ") == 0) return "h+a+v";
              break;
          }
          break;
        case 'e':
          switch (buffer[2]) {
            case ' ':
              if (buffer[3] == 0) /*he */ return "h+e+Dup";
              break;
            case 'a':
              if (strcmp(buffer+3, /*hea*/"d ") == 0) return "h+e+d";
              break;
            case 'r':
              if (strcmp(buffer+3, /*her*/"e ") == 0) return "h+r+Dup";
              break;
          }
          break;
        case 'i':
          if (strcmp(buffer+2, /*hi*/"gh ") == 0) return "h+i+g";
          break;
        case 'o':
          switch (buffer[2]) {
            case 'l':
              if (strcmp(buffer+3, /*hol*/"d ") == 0) return "h+d+Dup";
              break;
            case 'm':
              if (strcmp(buffer+3, /*hom*/"e ") == 0) return "Dup+o+e";
              break;
            case 'u':
              if (strcmp(buffer+3, /*hou*/"se ") == 0) return "o+s+e";
              break;
            case 'w':
              switch (buffer[3]) {
                case ' ':
                  if (buffer[4] == 0) /*how */ return "h+n+Dup";
                  break;
                case 'e':
                  if (strcmp(buffer+4, /*howe*/"ver ") == 0) return "h+e+v";
                  break;
              }
              break;
          }
          break;
      }
      break;
    case 'i':
      switch (buffer[1]) {
        case 'f':
          if (strcmp(buffer+2, /*if*/" ") == 0) return "i+f+Dup";
          break;
        case 'm':
          if (strcmp(buffer+2, /*im*/"plementation ") == 0) return "i+m+p";
          break;
        case 'n':
          switch (buffer[2]) {
            case ' ':
              if (buffer[3] == 0) /*in */ return "i+n+Dup";
              break;
            case 'c':
              if (strcmp(buffer+3, /*inc*/"rease ") == 0) return "i+n+c";
              break;
            case 'f':
              if (strcmp(buffer+3, /*inf*/"ra ") == 0) return "n+f+r";
              break;
            case 't':
              if (buffer[3] == 'e') {
                  if (buffer[4] == 'r') {
                      switch (buffer[5]) {
                        case 'e':
                          if (strcmp(buffer+6, /*intere*/"st ") == 0) return "i+n+r";
                          break;
                        case 'f':
                          if (strcmp(buffer+6, /*interf*/"ace ") == 0) return "i+c+f";
                          break;
                      }
                  }
              }
              break;
          }
          break;
        case 't':
          if (strcmp(buffer+2, /*it*/" ") == 0) return "i+t+Dup";
          break;
      }
      break;
    case 'I':
      if (strcmp(buffer+1, /*I*/" ") == 0) return "i+Dup";
      break;
    case 'j':
      switch (buffer[1]) {
        case 's':
          if (strcmp(buffer+2, /*js*/"on ") == 0) return "j+s+n";
          break;
        case 'u':
          if (strcmp(buffer+2, /*ju*/"st ") == 0) return "u+s+t";
          break;
      }
      break;
    case 'J':
      if (strcmp(buffer+1, /*J*/"SON ") == 0) return "j+s+n";
      break;
    case 'k':
      switch (buffer[1]) {
        case 'e':
          if (strcmp(buffer+2, /*ke*/"ep ") == 0) return "e+p+Dup";
          break;
        case 'n':
          if (strcmp(buffer+2, /*kn*/"ow ") == 0) return "k+n+o";
          break;
        case 'u':
          if (strcmp(buffer+2, /*ku*/"bernetes ") == 0) return "k+e+n+s";
          break;
      }
      break;
    case 'l':
      switch (buffer[1]) {
        case 'a':
          switch (buffer[2]) {
            case 'r':
              if (strcmp(buffer+3, /*lar*/"ge ") == 0) return "a+r+g";
              break;
            case 's':
              if (strcmp(buffer+3, /*las*/"t ") == 0) return "l+a+s";
              break;
            case 't':
              if (strcmp(buffer+3, /*lat*/"e ") == 0) return "l+a+t";
              break;
          }
          break;
        case 'e':
          if (buffer[2] == 'a') {
              switch (buffer[3]) {
                case 'd':
                  if (strcmp(buffer+4, /*lead*/" ") == 0) return "e+a+d";
                  break;
                case 'v':
                  if (strcmp(buffer+4, /*leav*/"e ") == 0) return "e+a+v";
                  break;
              }
          }
          break;
        case 'i':
          switch (buffer[2]) {
            case 'f':
              if (strcmp(buffer+3, /*lif*/"e ") == 0) return "l+i+f";
              break;
            case 'k':
              if (strcmp(buffer+3, /*lik*/"e ") == 0) return "i+e+Dup";
              break;
            case 'n':
              if (strcmp(buffer+3, /*lin*/"e ") == 0) return "l+n+e";
              break;
            case 't':
              if (strcmp(buffer+3, /*lit*/"tle ") == 0) return "l+i+t";
              break;
          }
          break;
        case 'o':
          switch (buffer[2]) {
            case 'n':
              if (strcmp(buffer+3, /*lon*/"g ") == 0) return "l+o+n";
              break;
            case 'o':
              if (strcmp(buffer+3, /*loo*/"k ") == 0) return "l+o+k";
              break;
          }
          break;
      }
      break;
    case 'm':
      switch (buffer[1]) {
        case 'a':
          switch (buffer[2]) {
            case 'k':
              if (strcmp(buffer+3, /*mak*/"e ") == 0) return "m+a+k";
              break;
            case 'n':
              switch (buffer[3]) {
                case ' ':
                  if (buffer[4] == 0) /*man */ return "m+a+n";
                  break;
                case 'y':
                  if (strcmp(buffer+4, /*many*/" ") == 0) return "m+n+y";
                  break;
              }
              break;
            case 'y':
              if (strcmp(buffer+3, /*may*/" ") == 0) return "m+a+y";
              break;
          }
          break;
        case 'e':
          if (strcmp(buffer+2, /*me*/"an ") == 0) return "m+n+Dup";
          break;
        case 'i':
          if (strcmp(buffer+2, /*mi*/"ght ") == 0) return "m+i+t";
          break;
        case 'o':
          switch (buffer[2]) {
            case 'r':
              if (strcmp(buffer+3, /*mor*/"e ") == 0) return "m+o+r";
              break;
            case 's':
              if (strcmp(buffer+3, /*mos*/"t ") == 0) return "m+o+t";
              break;
            case 'v':
              if (strcmp(buffer+3, /*mov*/"e ") == 0) return "m+v+e";
              break;
          }
          break;
        case 'u':
          switch (buffer[2]) {
            case 'c':
              if (strcmp(buffer+3, /*muc*/"h ") == 0) return "m+u+c";
              break;
            case 's':
              if (strcmp(buffer+3, /*mus*/"t ") == 0) return "m+u+t";
              break;
          }
          break;
      }
      break;
    case 'n':
      switch (buffer[1]) {
        case 'a':
          if (strcmp(buffer+2, /*na*/"tion ") == 0) return "a+t+i";
          break;
        case 'e':
          switch (buffer[2]) {
            case 'e':
              if (strcmp(buffer+3, /*nee*/"d ") == 0) return "t+n+d";
              break;
            case 'v':
              if (strcmp(buffer+3, /*nev*/"er ") == 0) return "n+v+r";
              break;
            case 'w':
              if (strcmp(buffer+3, /*new*/" ") == 0) return "n+e+w";
              break;
          }
          break;
        case 'o':
          switch (buffer[2]) {
            case ' ':
              if (buffer[3] == 0) /*no */ return "n+e+Dup";
              break;
            case 't':
              if (strcmp(buffer+3, /*not*/" ") == 0) return "n+o+t";
              break;
          }
          break;
        case 'u':
          if (strcmp(buffer+2, /*nu*/"mber ") == 0) return "n+e+r";
          break;
      }
      break;
    case 'o':
      switch (buffer[1]) {
        case 'f':
          switch (buffer[2]) {
            case ' ':
              if (buffer[3] == 0) /*of */ return "o+f+Dup";
              break;
            case 'f':
              switch (buffer[3]) {
                case ' ':
                  if (buffer[4] == 0) /*off */ return "o+f+n+e";
                  break;
                case 'i':
                  if (strcmp(buffer+4, /*offi*/"ce ") == 0) return "f+o+n+e+c";
                  break;
              }
              break;
          }
          break;
        case 'l':
          if (strcmp(buffer+2, /*ol*/"d ") == 0) return "Dup+o+l";
          break;
        case 'n':
          switch (buffer[2]) {
            case ' ':
              if (buffer[3] == 0) /*on */ return "o+n+Dup";
              break;
            case 'e':
              if (strcmp(buffer+3, /*one*/" ") == 0) return "o+n+e";
              break;
            case 'l':
              if (strcmp(buffer+3, /*onl*/"y ") == 0) return "o+l+y";
              break;
          }
          break;
        case 'p':
          if (strcmp(buffer+2, /*op*/"en ") == 0) return "o+p+n";
          break;
        case 'r':
          switch (buffer[2]) {
            case ' ':
              if (buffer[3] == 0) /*or */ return "o+r+Dup";
              break;
            case 'd':
              if (strcmp(buffer+3, /*ord*/"er ") == 0) return "o+r+d";
              break;
          }
          break;
        case 't':
          if (strcmp(buffer+2, /*ot*/"her ") == 0) return "o+t+r";
          break;
        case 'u':
          if (strcmp(buffer+2, /*ou*/"t ") == 0) return "o+u+t";
          break;
        case 'v':
          if (strcmp(buffer+2, /*ov*/"er ") == 0) return "o+v+r";
          break;
        case 'w':
          if (strcmp(buffer+2, /*ow*/"n ") == 0) return "Dup+w+n";
          break;
      }
      break;
    case 'p':
      switch (buffer[1]) {
        case 'a':
          if (strcmp(buffer+2, /*pa*/"rt ") == 0) return "p+a+r";
          break;
        case 'e':
          switch (buffer[2]) {
            case 'o':
              if (strcmp(buffer+3, /*peo*/"ple ") == 0) return "p+e+l";
              break;
            case 'r':
              if (buffer[3] == 's') {
                  if (buffer[4] == 'o') {
                      if (buffer[5] == 'n') {
                          switch (buffer[6]) {
                            case ' ':
                              if (buffer[7] == 0) /*person */ return "p+s+n";
                              break;
                            case 'a':
                              if (strcmp(buffer+7, /*persona*/"l ") == 0) return "p+s+o+n";
                              break;
                          }
                      }
                  }
              }
              break;
          }
          break;
        case 'l':
          if (buffer[2] == 'a') {
              switch (buffer[3]) {
                case 'c':
                  if (strcmp(buffer+4, /*plac*/"e ") == 0) return "p+c+e";
                  break;
                case 'n':
                  if (strcmp(buffer+4, /*plan*/" ") == 0) return "p+l+n";
                  break;
              }
          }
          break;
        case 'o':
          switch (buffer[2]) {
            case 'i':
              if (strcmp(buffer+3, /*poi*/"nt ") == 0) return "p+o+i";
              break;
            case 's':
              if (strcmp(buffer+3, /*pos*/"sible ") == 0) return "p+s+e";
              break;
          }
          break;
        case 'r':
          switch (buffer[2]) {
            case 'e':
              if (strcmp(buffer+3, /*pre*/"sent ") == 0) return "r+n+t";
              break;
            case 'o':
              switch (buffer[3]) {
                case 'b':
                  switch (buffer[4]) {
                    case 'a':
                      if (strcmp(buffer+5, /*proba*/"bly ") == 0) return "p+b+l+y";
                      break;
                    case 'l':
                      if (strcmp(buffer+5, /*probl*/"em ") == 0) return "l+e+m";
                      break;
                  }
                  break;
                case 'g':
                  if (strcmp(buffer+4, /*prog*/"ram ") == 0) return "r+g+m";
                  break;
                case 'j':
                  if (strcmp(buffer+4, /*proj*/"ect ") == 0) return "o+j+e";
                  break;
              }
              break;
          }
          break;
        case 'u':
          if (strcmp(buffer+2, /*pu*/"blic ") == 0) return "p+l+i";
          break;
      }
      break;
    case 'r':
      switch (buffer[1]) {
        case 'e':
          switch (buffer[2]) {
            case 'a':
              if (strcmp(buffer+3, /*rea*/"l ") == 0) return "e+a+l";
              break;
            case 't':
              if (strcmp(buffer+3, /*ret*/"urn ") == 0) return "r+e+t";
              break;
          }
          break;
        case 'i':
          if (strcmp(buffer+2, /*ri*/"ght ") == 0) return "r+i+t";
          break;
        case 'u':
          if (strcmp(buffer+2, /*ru*/"n ") == 0) return "r+u+n";
          break;
      }
      break;
    case 's':
      switch (buffer[1]) {
        case 'a':
          switch (buffer[2]) {
            case 'm':
              if (strcmp(buffer+3, /*sam*/"e ") == 0) return "s+a+m";
              break;
            case 'y':
              if (strcmp(buffer+3, /*say*/" ") == 0) return "s+a+y";
              break;
          }
          break;
        case 'c':
          if (buffer[2] == 'h') {
              switch (buffer[3]) {
                case 'e':
                  if (strcmp(buffer+4, /*sche*/"ma ") == 0) return "c+e+a";
                  break;
                case 'o':
                  if (strcmp(buffer+4, /*scho*/"ol ") == 0) return "s+h+l";
                  break;
              }
          }
          break;
        case 'e':
          switch (buffer[2]) {
            case 'e':
              switch (buffer[3]) {
                case ' ':
                  if (buffer[4] == 0) /*see */ return "s+e+Dup";
                  break;
                case 'm':
                  if (strcmp(buffer+4, /*seem*/" ") == 0) return "s+e+m";
                  break;
              }
              break;
            case 'r':
              if (buffer[3] == 'v') {
                  switch (buffer[4]) {
                    case 'e':
                      if (strcmp(buffer+5, /*serve*/"r ") == 0) return "s+r+v";
                      break;
                    case 'i':
                      if (strcmp(buffer+5, /*servi*/"ce ") == 0) return "s+v+i";
                      break;
                  }
              }
              break;
            case 't':
              if (strcmp(buffer+3, /*set*/" ") == 0) return "s+e+t";
              break;
          }
          break;
        case 'h':
          switch (buffer[2]) {
            case 'e':
              if (strcmp(buffer+3, /*she*/" ") == 0) return "s+h+e";
              break;
            case 'o':
              switch (buffer[3]) {
                case 'u':
                  if (strcmp(buffer+4, /*shou*/"ld ") == 0) return "s+o+u";
                  break;
                case 'w':
                  if (strcmp(buffer+4, /*show*/" ") == 0) return "s+h+Dup";
                  break;
              }
              break;
          }
          break;
        case 'i':
          if (strcmp(buffer+2, /*si*/"nce ") == 0) return "s+i+e";
          break;
        case 'm':
          if (strcmp(buffer+2, /*sm*/"all ") == 0) return "m+a+l";
          break;
        case 'o':
          switch (buffer[2]) {
            case ' ':
              if (buffer[3] == 0) /*so */ return "s+o+Dup";
              break;
            case 'm':
              if (strcmp(buffer+3, /*som*/"e ") == 0) return "s+o+m";
              break;
          }
          break;
        case 't':
          switch (buffer[2]) {
            case 'a':
              switch (buffer[3]) {
                case 'n':
                  if (strcmp(buffer+4, /*stan*/"d ") == 0) return "s+n+d";
                  break;
                case 't':
                  if (strcmp(buffer+4, /*stat*/"e ") == 0) return "s+t+a";
                  break;
              }
              break;
            case 'i':
              if (strcmp(buffer+3, /*sti*/"ll ") == 0) return "s+t+l";
              break;
          }
          break;
        case 'u':
          switch (buffer[2]) {
            case 'c':
              if (strcmp(buffer+3, /*suc*/"h ") == 0) return "s+c+h";
              break;
            case 'd':
              if (strcmp(buffer+3, /*sud*/"o ") == 0) return "o+u+e+i";
              break;
            case 'm':
              if (strcmp(buffer+3, /*sum*/"mer ") == 0) return "s+m+r";
              break;
          }
          break;
        case 'y':
          if (strcmp(buffer+2, /*sy*/"stem ") == 0) return "s+y+t";
          break;
      }
      break;
    case 't':
      switch (buffer[1]) {
        case 'a':
          if (strcmp(buffer+2, /*ta*/"ke ") == 0) return "a+k+e";
          break;
        case 'e':
          switch (buffer[2]) {
            case 'l':
              if (strcmp(buffer+3, /*tel*/"l ") == 0) return "t+e+l";
              break;
            case 'm':
              if (strcmp(buffer+3, /*tem*/"porary ") == 0) return "t+e+m+p";
              break;
          }
          break;
        case 'h':
          switch (buffer[2]) {
            case 'a':
              switch (buffer[3]) {
                case 'n':
                  switch (buffer[4]) {
                    case ' ':
                      if (buffer[5] == 0) /*than */ return "t+a+n";
                      break;
                    case 'k':
                      if (strcmp(buffer+5, /*thank*/"s ") == 0) return "t+n+s";
                      break;
                  }
                  break;
                case 't':
                  if (strcmp(buffer+4, /*that*/" ") == 0) return "t+h+a";
                  break;
              }
              break;
            case 'e':
              switch (buffer[3]) {
                case ' ':
                  if (buffer[4] == 0) /*the */ return "t+h+e";
                  break;
                case 'n':
                  if (strcmp(buffer+4, /*then*/" ") == 0) return "t+e+n";
                  break;
                case 'r':
                  if (strcmp(buffer+4, /*ther*/"e ") == 0) return "t+h+r";
                  break;
                case 's':
                  if (strcmp(buffer+4, /*thes*/"e ") == 0) return "n+h+s";
                  break;
                case 'y':
                  if (strcmp(buffer+4, /*they*/" ") == 0) return "Dup+h+y";
                  break;
              }
              break;
            case 'i':
              switch (buffer[3]) {
                case 'n':
                  switch (buffer[4]) {
                    case 'g':
                      if (strcmp(buffer+5, /*thing*/" ") == 0) return "t+i+n";
                      break;
                    case 'k':
                      if (strcmp(buffer+5, /*think*/" ") == 0) return "h+i+k";
                      break;
                  }
                  break;
                case 's':
                  if (strcmp(buffer+4, /*this*/" ") == 0) return "t+h+s";
                  break;
              }
              break;
            case 'o':
              if (strcmp(buffer+3, /*tho*/"se ") == 0) return "t+o+s";
              break;
            case 'r':
              if (strcmp(buffer+3, /*thr*/"ough ") == 0) return "h+r+g";
              break;
          }
          break;
        case 'i':
          if (strcmp(buffer+2, /*ti*/"me ") == 0) return "t+m+e";
          break;
        case 'o':
          switch (buffer[2]) {
            case ' ':
              if (buffer[3] == 0) /*to */ return "t+o+Dup";
              break;
            case 'o':
              if (strcmp(buffer+3, /*too*/" ") == 0) return "t+o+f";
              break;
          }
          break;
        case 'u':
          if (strcmp(buffer+2, /*tu*/"rn ") == 0) return "t+u+n";
          break;
      }
      break;
    case 'u':
      switch (buffer[1]) {
        case 'n':
          if (strcmp(buffer+2, /*un*/"der ") == 0) return "u+n+d";
          break;
        case 'p':
          if (strcmp(buffer+2, /*up*/" ") == 0) return "u+p+Dup";
          break;
        case 's':
          if (strcmp(buffer+2, /*us*/"e ") == 0) return "u+s+e";
          break;
      }
      break;
    case 'v':
      if (strcmp(buffer+1, /*v*/"ery ") == 0) return "v+e+r";
      break;
    case 'w':
      switch (buffer[1]) {
        case 'a':
          switch (buffer[2]) {
            case 'n':
              if (strcmp(buffer+3, /*wan*/"t ") == 0) return "w+a+t";
              break;
            case 'y':
              if (strcmp(buffer+3, /*way*/" ") == 0) return "w+a+c";
              break;
          }
          break;
        case 'e':
          if (strcmp(buffer+2, /*we*/" ") == 0) return "w+e+Dup";
          break;
        case 'h':
          switch (buffer[2]) {
            case 'a':
              if (strcmp(buffer+3, /*wha*/"t ") == 0) return "Dup+h+a";
              break;
            case 'e':
              if (strcmp(buffer+3, /*whe*/"re ") == 0) return "Dup+e+r";
              break;
            case 'i':
              switch (buffer[3]) {
                case 'c':
                  if (strcmp(buffer+4, /*whic*/"h ") == 0) return "h+i+c";
                  break;
                case 'l':
                  if (strcmp(buffer+4, /*whil*/"e ") == 0) return "h+i+e";
                  break;
              }
              break;
            case 'o':
              if (strcmp(buffer+3, /*who*/" ") == 0) return "n+h+e+.";
              break;
          }
          break;
        case 'i':
          switch (buffer[2]) {
            case 'l':
              if (strcmp(buffer+3, /*wil*/"l ") == 0) return "w+i+l";
              break;
            case 't':
              if (buffer[3] == 'h') {
                  switch (buffer[4]) {
                    case ' ':
                      if (buffer[5] == 0) /*with */ return "w+i+h";
                      break;
                    case 'o':
                      if (strcmp(buffer+5, /*witho*/"ut ") == 0) return "i+t+o";
                      break;
                  }
              }
              break;
          }
          break;
        case 'o':
          switch (buffer[2]) {
            case 'r':
              switch (buffer[3]) {
                case 'd':
                  if (strcmp(buffer+4, /*word*/" ") == 0) return "Dup+r+d";
                  break;
                case 'k':
                  if (strcmp(buffer+4, /*work*/" ") == 0) return "o+r+k";
                  break;
                case 'l':
                  if (strcmp(buffer+4, /*worl*/"d ") == 0) return "o+r+l";
                  break;
              }
              break;
            case 'u':
              if (strcmp(buffer+3, /*wou*/"ld ") == 0) return "w+o+u";
              break;
          }
          break;
        case 'r':
          if (strcmp(buffer+2, /*wr*/"ite ") == 0) return "r+i+e";
          break;
      }
      break;
    case 'y':
      switch (buffer[1]) {
        case 'e':
          if (strcmp(buffer+2, /*ye*/"ar ") == 0) return "y+e+a";
          break;
        case 'o':
          if (strcmp(buffer+2, /*yo*/"u ") == 0) return "y+o+u";
          break;
      }
      break;
  }

  return correct_chord_personal(buffer);
}
