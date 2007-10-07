/* Automatically generated by po2tbl.sed from shadow.pot.  */

#if HAVE_CONFIG_H
# include <config.h>
#endif

#include "libgettext.h"

const struct _msg_ent _msg_tbl[] = {
  {"", 1},
  {"Warning: unknown group %s\n", 2},
  {"Warning: too many groups\n", 3},
  {"Your password has expired.", 4},
  {"Your password is inactive.", 5},
  {"Your login has expired.", 6},
  {"  Contact the system administrator.\n", 7},
  {"  Choose a new password.\n", 8},
  {"Your password will expire in %ld days.\n", 9},
  {"Your password will expire tomorrow.\n", 10},
  {"Your password will expire today.\n", 11},
  {"Unable to change tty %s", 12},
  {"Environment overflow\n", 13},
  {"You may not change $%s\n", 14},
  {"%d %s since last login.  Last was %s on %s.\n", 15},
  {"failures", 16},
  {"failure", 17},
  {"Too many logins.\n", 18},
  {"Password does not decrypt secret key for %s.\n", 19},
  {"Could not set %s's secret key: is the keyserv daemon running?\n", 20},
  {"You have new mail.", 21},
  {"No mail.", 22},
  {"You have mail.", 23},
  {"Bad password: %s.  ", 24},
  {"passwd: pam_start() failed, error %d\n", 25},
  {"passwd: %s\n", 26},
  {"Unable to cd to \"%s\"\n", 27},
  {"No directory, logging in with HOME=/", 28},
  {"Executing shell %s\n", 29},
  {"Cannot execute %s", 30},
  {"Access to su to that account DENIED.\n", 31},
  {"Password authentication bypassed.\n", 32},
  {"Please enter your OWN password as authentication.\n", 33},
  {"Invalid root directory \"%s\"\n", 34},
  {"Can't change root directory to \"%s\"\n", 35},
  {"malloc(%d) failed\n", 36},
  {"Dialup Password: ", 37},
  {"Could not allocate space for config info.\n", 38},
  {"configuration error - unknown item '%s' (notify administrator)\n", 39},
  {"error - lookup '%s' failed\n", 40},
  {"%s not found\n", 41},
  {"Password: ", 42},
  {"%s's Password: ", 43},
  {"(Echo on) ", 44},
  {"Unknown error %d", 45},
  {"\
Usage: %s [ -l ] [ -m min_days ] [ -M max_days ] [ -W warn ]\n\
  [ -I inactive ] [ -E expire ] [ -d last_day ] user\n", 46},
  {"Usage: %s [ -l ] [ -m min_days ] [ -M max_days ] [ -d last_day ] user\n", 47},
  {"\
Enter the new value, or press return for the default\n\
\n", 48},
  {"Minimum Password Age", 49},
  {"Maximum Password Age", 50},
  {"Last Password Change (YYYY-MM-DD)", 51},
  {"Password Expiration Warning", 52},
  {"Password Inactive", 53},
  {"Account Expiration Date (YYYY-MM-DD)", 54},
  {"Minimum:\t%ld\n", 55},
  {"Maximum:\t%ld\n", 56},
  {"Warning:\t%ld\n", 57},
  {"Inactive:\t%ld\n", 58},
  {"Last Change:\t\t", 59},
  {"Never\n", 60},
  {"Password Expires:\t", 61},
  {"Password Inactive:\t", 62},
  {"Account Expires:\t", 63},
  {"%s: do not include \"l\" with other flags\n", 64},
  {"%s: permission denied\n", 65},
  {"%s: can't lock password file\n", 66},
  {"%s: can't open password file\n", 67},
  {"%s: unknown user: %s\n", 68},
  {"%s: can't lock shadow password file\n", 69},
  {"%s: can't open shadow password file\n", 70},
  {"Changing the aging information for %s\n", 71},
  {"%s: error changing fields\n", 72},
  {"%s: can't update password file\n", 73},
  {"%s: can't update shadow password file\n", 74},
  {"Error updating the DBM password entry.\n", 75},
  {"%s: can't rewrite shadow password file\n", 76},
  {"%s: can't rewrite password file\n", 77},
  {"%s: no aging information present\n", 78},
  {"\
Usage: %s [ -f full_name ] [ -r room_no ] [ -w work_ph ]\n\
\t[ -h home_ph ] [ -o other ] [ user ]\n", 79},
  {"\
Usage: %s [ -f full_name ] [ -r room_no ] [ -w work_ph ] [ -h home_ph ]\n", 80},
  {"Enter the new value, or press return for the default\n", 81},
  {"Full Name", 82},
  {"\tFull Name: %s\n", 83},
  {"Room Number", 84},
  {"\tRoom Number: %s\n", 85},
  {"Work Phone", 86},
  {"\tWork Phone: %s\n", 87},
  {"Home Phone", 88},
  {"\tHome Phone: %s\n", 89},
  {"Other", 90},
  {"%s: Permission denied.\n", 91},
  {"%s: Unknown user %s\n", 92},
  {"%s: Cannot determine your user name.\n", 93},
  {"%s: cannot change user `%s' on NIS client.\n", 94},
  {"%s: `%s' is the NIS master for this client.\n", 95},
  {"Changing the user information for %s\n", 96},
  {"%s: invalid name: \"%s\"\n", 97},
  {"%s: invalid room number: \"%s\"\n", 98},
  {"%s: invalid work phone: \"%s\"\n", 99},
  {"%s: invalid home phone: \"%s\"\n", 100},
  {"%s: \"%s\" contains illegal characters\n", 101},
  {"%s: fields too long\n", 102},
  {"Cannot change ID to root.\n", 103},
  {"Cannot lock the password file; try again later.\n", 104},
  {"Cannot open the password file.\n", 105},
  {"%s: %s not found in /etc/passwd\n", 106},
  {"Error updating the password entry.\n", 107},
  {"Cannot commit password file changes.\n", 108},
  {"Cannot unlock the password file.\n", 109},
  {"usage: %s [-e]\n", 110},
  {"%s: can't lock shadow file\n", 111},
  {"%s: can't open shadow file\n", 112},
  {"%s: line %d: line too long\n", 113},
  {"%s: line %d: missing new password\n", 114},
  {"%s: line %d: unknown user %s\n", 115},
  {"%s: line %d: cannot update password entry\n", 116},
  {"%s: error detected, changes ignored\n", 117},
  {"%s: error updating shadow file\n", 118},
  {"%s: error updating password file\n", 119},
  {"Usage: %s [ -s shell ] [ name ]\n", 120},
  {"Login Shell", 121},
  {"You may not change the shell for %s.\n", 122},
  {"Changing the login shell for %s\n", 123},
  {"%s: Invalid entry: %s\n", 124},
  {"%s is an invalid shell.\n", 125},
  {"Usage: %s [ -(a|d) ] shell\n", 126},
  {"Shell password: ", 127},
  {"re-enter Shell password: ", 128},
  {"%s: Passwords do not match, try again.\n", 129},
  {"%s: can't create %s", 130},
  {"%s: can't open %s", 131},
  {"%s: Shell %s not found.\n", 132},
  {"Usage: expiry { -f | -c }\n", 133},
  {"%s: WARNING!  Must be set-UID root!\n", 134},
  {"%s: unknown user\n", 135},
  {"usage: %s [-a|-u user] [-m max] [-r] [-t days] [-l locksecs]\n", 136},
  {"Unknown User: %s\n", 137},
  {"Username   Failures  Maximum  Latest\n", 138},
  {"  %s on %s", 139},
  {" [%lds left]", 140},
  {" [%lds lock]", 141},
  {"usage: %s [-r|-R] group\n", 142},
  {"       %s [-a user] group\n", 143},
  {"       %s [-d user] group\n", 144},
  {"       %s [-A user,...] [-M user,...] group\n", 145},
  {"       %s [-M user,...] group\n", 146},
  {"%s: unknown user %s\n", 147},
  {"Permission denied.\n", 148},
  {"%s: shadow group passwords required for -A\n", 149},
  {"Who are you?\n", 150},
  {"unknown group: %s\n", 151},
  {"Adding user %s to group %s\n", 152},
  {"Removing user %s from group %s\n", 153},
  {"%s: unknown member %s\n", 154},
  {"%s: Not a tty\n", 155},
  {"Changing the password for group %s\n", 156},
  {"New Password: ", 157},
  {"Re-enter new password: ", 158},
  {"They don't match; try again", 159},
  {"%s: Try again later\n", 160},
  {"%s: can't get lock\n", 161},
  {"%s: can't get shadow lock\n", 162},
  {"%s: can't open file\n", 163},
  {"%s: can't update entry\n", 164},
  {"%s: can't update shadow entry\n", 165},
  {"%s: can't re-write file\n", 166},
  {"%s: can't re-write shadow file\n", 167},
  {"%s: can't unlock file\n", 168},
  {"%s: can't update DBM files\n", 169},
  {"%s: can't update DBM shadow files\n", 170},
  {"usage: groupadd [-g gid [-o]] group\n", 171},
  {"%s: error adding new group entry\n", 172},
  {"%s: cannot add new dbm group entry\n", 173},
  {"%s: name %s is not unique\n", 174},
  {"%s: gid %ld is not unique\n", 175},
  {"%s: can't get unique gid\n", 176},
  {"%s: %s is a not a valid group name\n", 177},
  {"%s: invalid group %s\n", 178},
  {"%s: -O requires NAME=VALUE\n", 179},
  {"%s: cannot rewrite group file\n", 180},
  {"%s: cannot rewrite shadow group file\n", 181},
  {"%s: unable to lock group file\n", 182},
  {"%s: unable to open group file\n", 183},
  {"%s: unable to lock shadow group file\n", 184},
  {"%s: unable to open shadow group file\n", 185},
  {"%s: group %s exists\n", 186},
  {"usage: groupdel group\n", 187},
  {"%s: error removing group entry\n", 188},
  {"%s: error removing group dbm entry\n", 189},
  {"%s: error removing shadow group entry\n", 190},
  {"%s: error removing shadow group dbm entry\n", 191},
  {"%s: cannot remove user's primary group.\n", 192},
  {"%s: group %s does not exist\n", 193},
  {"%s: group %s is a NIS group\n", 194},
  {"%s: %s is the NIS master\n", 195},
  {"usage: groupmod [-g gid [-o]] [-n name] group\n", 196},
  {"%s: %s not found in /etc/group\n", 197},
  {"%s: cannot add new dbm shadow group entry\n", 198},
  {"%s: %ld is not a unique gid\n", 199},
  {"%s: %s is not a unique name\n", 200},
  {"unknown user %s\n", 201},
  {"Usage: %s [ -r ] [ group [ gshadow ] ]\n", 202},
  {"Usage: %s [ -r ] [ group ]\n", 203},
  {"No", 204},
  {"%s: cannot lock file %s\n", 205},
  {"%s: cannot open file %s\n", 206},
  {"invalid group file entry\n", 207},
  {"delete line `%s'? ", 208},
  {"duplicate group entry\n", 209},
  {"invalid group name `%s'\n", 210},
  {"group %s: bad GID (%d)\n", 211},
  {"group %s: no user %s\n", 212},
  {"delete member `%s'? ", 213},
  {"invalid shadow group file entry\n", 214},
  {"duplicate shadow group entry\n", 215},
  {"no matching group file entry\n", 216},
  {"shadow group %s: no administrative user %s\n", 217},
  {"delete administrative member `%s'? ", 218},
  {"shadow group %s: no user %s\n", 219},
  {"%s: cannot update file %s\n", 220},
  {"%s: the files have been updated; run mkpasswd\n", 221},
  {"%s: no changes\n", 222},
  {"%s: the files have been updated\n", 223},
  {"%s: can't lock group file\n", 224},
  {"%s: can't open group file\n", 225},
  {"%s: can't lock shadow group file\n", 226},
  {"%s: can't open shadow group file\n", 227},
  {"%s: can't remove shadow group %s\n", 228},
  {"%s: can't update shadow entry for %s\n", 229},
  {"%s: can't update entry for group %s\n", 230},
  {"%s: can't update shadow group file\n", 231},
  {"%s: can't update group file\n", 232},
  {"%s: not configured for shadow group support.\n", 233},
  {"%s: can't delete shadow group file\n", 234},
  {"usage: id [ -a ]\n", 235},
  {"usage: id\n", 236},
  {"uid=%d(%s)", 237},
  {"uid=%d", 238},
  {" gid=%d(%s)", 239},
  {" gid=%d", 240},
  {" euid=%d(%s)", 241},
  {" euid=%d", 242},
  {" egid=%d(%s)", 243},
  {" egid=%d", 244},
  {" groups=", 245},
  {"Username         Port     From             Latest\n", 246},
  {"Username                Port     Latest\n", 247},
  {"**Never logged in**", 248},
  {"usage: %s [-p] [name]\n", 249},
  {"       %s [-p] [-h host] [-f name]\n", 250},
  {"       %s [-p] -r host\n", 251},
  {"Invalid login time\n", 252},
  {"\
\n\
System closed for routine maintenance\n", 253},
  {"\
\n\
[Disconnect bypassed -- root login allowed.]\n", 254},
  {"\
\n\
Login timed out after %d seconds.\n", 255},
  {" on `%.100s' from `%.200s'", 256},
  {" on `%.100s'", 257},
  {"\
\n\
%s login: ", 258},
  {"login: ", 259},
  {"Login incorrect", 260},
  {"Warning: login re-enabled after temporary lockout.\n", 261},
  {"Last login: %s on %s", 262},
  {"Last login: %.19s on %s", 263},
  {" from %.*s", 264},
  {"Starting rad_login\n", 265},
  {"%s: no DBM database on system - no action performed\n", 266},
  {"%s: cannot overwrite file %s\n", 267},
  {"%s: cannot open DBM files for %s\n", 268},
  {"%s: the beginning with ", 269},
  {"%s: error parsing line \"%s\"\n", 270},
  {"adding record for name ", 271},
  {"%s: error adding record for ", 272},
  {"added %d entries, longest was %d\n", 273},
  {"Usage: %s [ -vf ] [ -p|g|sp|sg ] file\n", 274},
  {"Usage: %s [ -vf ] [ -p|g|sp ] file\n", 275},
  {"Usage: %s [ -vf ] [ -p|g ] file\n", 276},
  {"usage: newgrp [ - ] [ group ]\n", 277},
  {"usage: sg group [[-c] command ]\n", 278},
  {"unknown uid: %d\n", 279},
  {"unknown gid: %ld\n", 280},
  {"unknown gid: %d\n", 281},
  {"Sorry.\n", 282},
  {"too many groups\n", 283},
  {"Usage: %s [ input ]\n", 284},
  {"%s: can't lock /etc/passwd.\n", 285},
  {"%s: can't lock files, try again later\n", 286},
  {"%s: can't open files\n", 287},
  {"%s: line %d: invalid line\n", 288},
  {"%s: line %d: can't create GID\n", 289},
  {"%s: line %d: can't create UID\n", 290},
  {"%s: line %d: cannot find user %s\n", 291},
  {"%s: line %d: can't update password\n", 292},
  {"%s: line %d: mkdir failed\n", 293},
  {"%s: line %d: chown failed\n", 294},
  {"%s: line %d: can't update entry\n", 295},
  {"%s: error updating files\n", 296},
  {"usage: %s [ -f | -s ] [ name ]\n", 297},
  {"       %s [ -x max ] [ -n min ] [ -w warn ] [ -i inact ] name\n", 298},
  {"       %s { -l | -u | -d | -S | -e } name\n", 299},
  {"User %s has a TCFS key, his old password is required.\n", 300},
  {"You can use -t option to force the change.\n", 301},
  {"Old password: ", 302},
  {"Incorrect password for `%s'\n", 303},
  {"Warning: user %s has a TCFS key.\n", 304},
  {"\
Enter the new password (minimum of %d, maximum of %d characters)\n\
Please use a combination of upper and lower case letters and numbers.\n", 305},
  {"New password: ", 306},
  {"Try again.\n", 307},
  {"\
\n\
Warning: weak password (enter it again to use it anyway).\n", 308},
  {"They don't match; try again.\n", 309},
  {"The password for %s cannot be changed.\n", 310},
  {"Sorry, the password for %s cannot be changed yet.\n", 311},
  {"%s: out of memory\n", 312},
  {"Cannot lock the TCFS key database; try again later\n", 313},
  {"Cannot open the TCFS key database.\n", 314},
  {"Error updating the TCFS key database.\n", 315},
  {"Cannot commit TCFS changes.\n", 316},
  {"%s: Cannot execute %s", 317},
  {"%s: repository %s not supported\n", 318},
  {"%s: Permission denied\n", 319},
  {"You may not change the password for %s.\n", 320},
  {"Changing password for %s\n", 321},
  {"The password for %s is unchanged.\n", 322},
  {"Password changed.\n", 323},
  {"Usage: %s [ -qr ] [ passwd [ shadow ] ]\n", 324},
  {"Usage: %s [ -qr ] [ passwd ]\n", 325},
  {"invalid password file entry\n", 326},
  {"duplicate password entry\n", 327},
  {"invalid user name `%s'\n", 328},
  {"user %s: bad UID (%d)\n", 329},
  {"user %s: no group %d\n", 330},
  {"user %s: directory %s does not exist\n", 331},
  {"user %s: program %s does not exist\n", 332},
  {"invalid shadow password file entry\n", 333},
  {"duplicate shadow password entry\n", 334},
  {"no matching password file entry\n", 335},
  {"user %s: last password change in the future\n", 336},
  {"%s: can't lock passwd file\n", 337},
  {"%s: can't open passwd file\n", 338},
  {"%s: can't remove shadow entry for %s\n", 339},
  {"%s: can't update passwd entry for %s\n", 340},
  {"%s: can't update shadow file\n", 341},
  {"%s: can't update passwd file\n", 342},
  {"%s: Shadow passwords are not configured.\n", 343},
  {"%s: can't update entry for user %s\n", 344},
  {"%s: can't delete shadow password file\n", 345},
  {"Sorry.", 346},
  {"%s: must be run from a terminal\n", 347},
  {"%s: pam_start: error %d\n", 348},
  {"Unknown id: %s\n", 349},
  {"You are not authorized to su %s\n", 350},
  {"(Enter your own password.)", 351},
  {"%s: permission denied (shell).\n", 352},
  {"\
%s: %s\n\
(Ignored)\n", 353},
  {"No shell\n", 354},
  {"No password file\n", 355},
  {"No password entry for 'root'\n", 356},
  {"\
\n\
Type control-d to proceed with normal startup,\n\
(or give root password for system maintenance):", 357},
  {"Entering System Maintenance Mode\n", 358},
  {"%s: rebuild the group database\n", 359},
  {"%s: rebuild the shadow group database\n", 360},
  {"%s: invalid numeric argument `%s'\n", 361},
  {"%s: unknown gid %s\n", 362},
  {"%s: unknown group %s\n", 363},
  {"group=%s,%ld  basedir=%s  skel=%s\n", 364},
  {"shell=%s  ", 365},
  {"inactive=%ld  expire=%s", 366},
  {"GROUP=%ld\n", 367},
  {"HOME=%s\n", 368},
  {"INACTIVE=%ld\n", 369},
  {"EXPIRE=%s\n", 370},
  {"SHELL=%s\n", 371},
  {"SKEL=%s\n", 372},
  {"%s: cannot create new defaults file\n", 373},
  {"%s: rename: %s", 374},
  {"%s: group `%s' is a NIS group.\n", 375},
  {"%s: too many groups specified (max %d).\n", 376},
  {"usage: %s\t[-u uid [-o]] [-g group] [-G group,...] \n", 377},
  {"\t\t[-d home] [-s shell] [-c comment] [-m [-k template]]\n", 378},
  {"[-f inactive] [-e expire ] ", 379},
  {"[-A program] ", 380},
  {"[-p passwd] name\n", 381},
  {"       %s\t-D [-g group] [-b base] [-s shell]\n", 382},
  {"\t\t[-f inactive] [-e expire ]\n", 383},
  {"%s: error locking group file\n", 384},
  {"%s: error opening group file\n", 385},
  {"%s: error locking shadow group file\n", 386},
  {"%s: error opening shadow group file\n", 387},
  {"%s: uid %d is not unique\n", 388},
  {"%s: can't get unique uid\n", 389},
  {"%s: invalid field `%s'\n", 390},
  {"%s: invalid base directory `%s'\n", 391},
  {"%s: invalid comment `%s'\n", 392},
  {"%s: invalid home directory `%s'\n", 393},
  {"%s: invalid date `%s'\n", 394},
  {"%s: shadow passwords required for -e\n", 395},
  {"%s: shadow passwords required for -f\n", 396},
  {"%s: invalid shell `%s'\n", 397},
  {"%s: invalid user name `%s'\n", 398},
  {"%s: cannot rewrite password file\n", 399},
  {"%s: cannot rewrite shadow password file\n", 400},
  {"%s: unable to lock password file\n", 401},
  {"%s: unable to open password file\n", 402},
  {"%s: cannot lock shadow password file\n", 403},
  {"%s: cannot open shadow password file\n", 404},
  {"%s: error adding authentication method\n", 405},
  {"%s: error adding new password entry\n", 406},
  {"%s: error updating password dbm entry\n", 407},
  {"%s: error adding new shadow password entry\n", 408},
  {"%s: error updating shadow passwd dbm entry\n", 409},
  {"%s: cannot create directory %s\n", 410},
  {"%s: user %s exists\n", 411},
  {"%s: warning: CREATE_HOME not supported, please use -m instead.\n", 412},
  {"usage: %s [-r] name\n", 413},
  {"%s: error updating group entry\n", 414},
  {"%s: cannot update dbm group entry\n", 415},
  {"%s: cannot rewrite TCFS key file\n", 416},
  {"%s: cannot lock TCFS key file\n", 417},
  {"%s: cannot open TCFS key file\n", 418},
  {"%s: cannot open group file\n", 419},
  {"%s: cannot open shadow group file\n", 420},
  {"%s: error deleting authentication\n", 421},
  {"%s: error deleting password entry\n", 422},
  {"%s: error deleting shadow password entry\n", 423},
  {"%s: error deleting TCFS entry\n", 424},
  {"%s: error deleting password dbm entry\n", 425},
  {"%s: error deleting shadow passwd dbm entry\n", 426},
  {"%s: user %s is currently logged in\n", 427},
  {"%s: warning: %s not owned by %s, not removing\n", 428},
  {"%s: warning: can't remove ", 429},
  {"%s: user %s does not exist\n", 430},
  {"%s: user %s is a NIS user\n", 431},
  {"%s: %s not owned by %s, not removing\n", 432},
  {"%s: not removing directory %s (would remove home of user %s)\n", 433},
  {"%s: error removing directory %s\n", 434},
  {"\t\t[-d home [-m]] [-s shell] [-c comment] [-l new_name]\n", 435},
  {"[-A {DEFAULT|program},... ] ", 436},
  {"%s: out of memory in update_group\n", 437},
  {"%s: out of memory in update_gshadow\n", 438},
  {"%s: no flags given\n", 439},
  {"%s: shadow passwords required for -e and -f\n", 440},
  {"%s: uid %ld is not unique\n", 441},
  {"%s: error deleting authentication method\n", 442},
  {"%s: error changing authentication method\n", 443},
  {"%s: error changing password entry\n", 444},
  {"%s: error removing password entry\n", 445},
  {"%s: error adding password dbm entry\n", 446},
  {"%s: error removing passwd dbm entry\n", 447},
  {"%s: error removing shadow password entry\n", 448},
  {"%s: error removing shadow passwd dbm entry\n", 449},
  {"%s: directory %s exists\n", 450},
  {"%s: can't create %s\n", 451},
  {"%s: can't chown %s\n", 452},
  {"%s: cannot rename directory %s to %s\n", 453},
  {"%s: warning: %s not owned by %s\n", 454},
  {"failed to change mailbox owner", 455},
  {"failed to rename mailbox", 456},
  {"\
\n\
%s: %s is unchanged\n", 457},
  {"Couldn't lock file", 458},
  {"Couldn't make backup", 459},
  {"%s: can't restore %s: %s (your changes are in %s)\n", 460},
  {"\
Usage:\n\
`vipw' edits /etc/passwd        `vipw -s' edits /etc/shadow\n\
`vigr' edits /etc/group         `vigr -s' edits /etc/gshadow\n", 461},
};

int _msg_tbl_length = 461;
