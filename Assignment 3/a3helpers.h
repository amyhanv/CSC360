/* ---------- Typedefs ---------- */

typedef struct disk_file_t {
  char fileType;
  int fileSize;
  char* fileName;
  char* fileCreationDateTime;
} disk_file_t;

/* ---------- Constants and global variables ---------- */

#define TRUE 1
#define FALSE 0
#define SECTOR_SIZE 512
#define LISTING_SIZE 512

/* ---------- Helper functions ---------- */

int getFatEntry(int n, char* p);
int getTotalDiskSize(char* p);
int getFreeDiskSize(int diskSize, char* p);
int getFileSize(char* fileName, char* p);
int getFirstLogicalSector(char* fileName, char* p);
