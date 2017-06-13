-- Assumes that you have a database and that you invoke psql
-- with the database name - e.g. psql -U myid myid < make-bank2.sql


-- Create the tables

create table account
   (account_number 	varchar(15),
    branch_name		varchar(15)	not null,
    balance 		numeric		not null,
    primary key(account_number));

create table branch
   (branch_name 	varchar(15),
    branch_city 	varchar(15)	not null,
    assets 		numeric		not null,
    primary key(branch_name));

create table customer
   (customer_name 	varchar(15),
    customer_street 	varchar(12)	not null,
    customer_city 	varchar(15)	not null,
    primary key(customer_name));

create table loan
   (loan_number 	varchar(15),
    branch_name		varchar(15)	not null,
    amount 		numeric		not null,
    primary key(loan_number));

create table depositor
   (customer_name 	varchar(15),
    account_number 	varchar(15),
    primary key(customer_name, account_number),
    foreign key(account_number) references account(account_number),
    foreign key(customer_name) references customer(customer_name));

create table borrower
   (customer_name 	varchar(15),
    loan_number 	varchar(15),
    primary key(customer_name, loan_number),
    foreign key(customer_name) references customer(customer_name),
    foreign key(loan_number) references loan(loan_number));

-- populate relations */

insert into customer	values ('Jones',	'Main',		'Harrison');
insert into customer	values ('Smith',	'Main',		'Rye');
insert into customer	values ('Hayes',	'Main',		'Harrison');
insert into customer	values ('Curry',	'North',	'Rye');
insert into customer	values ('Lindsay',	'Park',		'Pittsfield');
insert into customer	values ('Turner',	'Putnam',	'Stamford');
insert into customer	values ('Williams',	'Nassau',	'Princeton');
insert into customer	values ('Adams',	'Spring',	'Pittsfield');
insert into customer	values ('Johnson',	'Alma',		'Palo Alto');
insert into customer	values ('Glenn',	'Sand Hill',	'Woodside');
insert into customer	values ('Brooks',	'Senator',	'Brooklyn');
insert into customer	values ('Green',	'Walnut',	'Stamford');
insert into customer	values ('Jackson',	'University',	'Salt Lake');
insert into customer	values ('Majeris',	'First',	'Rye');
insert into customer	values ('McBride',	'Safety',	'Rye');

insert into branch	values ('Downtown',	'Brooklyn',	 900000.00);
insert into branch	values ('Redwood',	'Palo Alto',	2100000.00);
insert into branch	values ('Perryridge',	'Horseneck',	1700000.00);
insert into branch	values ('Mianus',	'Horseneck',	 400200.00);
insert into branch	values ('Round Hill',	'Horseneck',	8000000.00);
insert into branch	values ('Pownal',	'Bennington',	 400000.00);
insert into branch	values ('North Town',	'Rye',		3700000.00);
insert into branch	values ('Brighton',	'Brooklyn',	7000000.00);
insert into branch	values ('Central',	'Rye',		 400280.00);

insert into account	values ('A-101',	'Downtown',	500.00);
insert into account	values ('A-215',	'Mianus',	700.00);
insert into account	values ('A-102',	'Perryridge',	400.00);
insert into account	values ('A-305',	'Round Hill',	350.00);
insert into account	values ('A-201',	'Perryridge',	900.00);
insert into account	values ('A-222',	'Redwood',	700.00);
insert into account	values ('A-217',	'Brighton',	750.00);
insert into account	values ('A-333',	'Central',	850.00);
insert into account	values ('A-444',	'North Town',	625.00);

insert into depositor values ('Johnson','A-101');
insert into depositor values ('Smith',	'A-215');
insert into depositor values ('Hayes',	'A-102');
insert into depositor values ('Hayes',	'A-101');
insert into depositor values ('Turner',	'A-305');
insert into depositor values ('Johnson','A-201');
insert into depositor values ('Jones',	'A-217');
insert into depositor values ('Lindsay','A-222');
insert into depositor values ('Majeris','A-333');
insert into depositor values ('Smith',	'A-444');

insert into loan	values ('L-17',		'Downtown',	1000.00);
insert into loan	values ('L-23',		'Redwood',	2000.00);
insert into loan	values ('L-15',		'Perryridge',	1500.00);
insert into loan	values ('L-14',		'Downtown',	1500.00);
insert into loan	values ('L-93',		'Mianus',	500.00);
insert into loan	values ('L-11',		'Round Hill',	900.00);
insert into loan	values ('L-16',		'Perryridge',	1300.00);
insert into loan	values ('L-20',		'North Town',	7500.00);
insert into loan	values ('L-21',		'Central',	570.00);

insert into borrower values ('Jones',	'L-17');
insert into borrower values ('Smith',	'L-23');
insert into borrower values ('Hayes',	'L-15');
insert into borrower values ('Jackson',	'L-14');
insert into borrower values ('Curry',	'L-93');
insert into borrower values ('Smith',	'L-11');
insert into borrower values ('Williams','L-17');
insert into borrower values ('Adams',	'L-16');
insert into borrower values ('McBride',	'L-20');
insert into borrower values ('Smith',	'L-21');
