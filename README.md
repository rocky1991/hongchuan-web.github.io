# hongchuan website

SQL is not complete (mysql);
sudo apt-cache search php7-*

- ssh-keygen -t rsa -b 4096 -C "anytag"
- then copy key to github
- then clone repo using ssh    ---> important


# to remove large files accidently added to repo
git filter-branch --tree-filter 'rm -rf project_home/data/subject_programs/bbmap_jars_ecoli_reads/ecoliReads1.fastq' HEAD
git push