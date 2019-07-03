sudo apt update
sudo apt install mysql-server
sudo mysql -u root -p 


backup database not working

single quotes around text values

create database firstDB;
drop database firstDB;
use firstDB;
show databases;
show tables;
insert into Persons values (11,"Alice","Mas");
select city,ID from Persons;
select distinct ID from Persons;
select count(distinct ID) from Persons;
select * from Persons where ID=1;
select * from Persons where city in ('WA','bozeman');
select * from Persons where ID between 0 and 20;
select * from Persons where city not like 'b%';
select * from Persons where city not like 'b%' and ID = 1;
select * from Persons order by ID asc;
select * from Persons order by ID desc, city asc;
select * from Persons where city is null;
update Persons set lastName='Joe' where ID=1;
update Persons set lastName='Alice',city='Miami' where ID=11 and city='Mas';
delete from Persons where id=15;     //case insensative;
DELETE FROM Persons;
select * from Persons limit 3;
select min(ID) from Persons;
select avg(ID) from Persons;
select sum(ID) from Persons;
select * from Persons where city like 'b%';
select * from Persons where city like '_o%';
select * from Persons where city REGEXP '^b';


regular expression reference is wrong!!!!!!!!

select * from Persons where city not REGEXP '^[a-c]';
select * from Persons where ID in (11);
select * from Persons where ID not in (11)
select * from Persons where ID between 0 and 20 and not city in ('wa');

Stopped SQL from "SQL AS" 