#ifndef __prepdata_cmd__
#define __prepdata_cmd__
/*****
  command line parser interface -- generated by clig 
  (http://wsd.iitb.fhg.de/~kir/clighome/)

  The command line parser `clig':
  (C) 1995,1997,1998,1999,2000 Harald Kirsch (kir@iitb.fhg.de)
*****/

typedef struct s_Cmdline {
  /***** -o: Root of the output file names */
  char outfileP;
  char* outfile;
  int outfileC;
  /***** -pkmb: Raw data in Parkes Multibeam format */
  char pkmbP;
  /***** -bcpm: Raw data in Berkeley-Caltech Pulsar Machine (BPP) format */
  char bcpmP;
  /***** -if: For BPP format only:  A specific IF to use. */
  char ifsP;
  int ifs;
  int ifsC;
  /***** -wapp: Raw data in Wideband Arecibo Pulsar Processor (WAPP) format */
  char wappP;
  /***** -clip: For WAPP format only:  Time-domain sigma to use for clipping.  If zero, no clipping is performed. */
  char clipP;
  float clip;
  int clipC;
  /***** -numout: Output this many values.  If there are not enough values in the original data file, will pad the output file with the average value */
  char numoutP;
  int numout;
  int numoutC;
  /***** -nobary: Do not barycenter the data */
  char nobaryP;
  /***** -DE405: Use the DE405 ephemeris for barycentering instead of DE200 (the default) */
  char de405P;
  /***** -dm: The dispersion measure to de-disperse (cm^-3 pc) */
  char dmP;
  double dm;
  int dmC;
  /***** -mask: File containing masking information to use */
  char maskfileP;
  char* maskfile;
  int maskfileC;
  /***** uninterpreted command line parameters */
  int argc;
  /*@null*/char **argv;
  /***** the whole command line concatenated */
  char *full_cmd_line;
} Cmdline;


extern char *Program;
extern void usage(void);
extern /*@shared*/Cmdline *parseCmdline(int argc, char **argv);

extern void showOptionValues(void);

#endif

