 SELECT *
 FROM transaction_data
 LIMIT 10;

 -- column names are id, full_name, email, zip, ip_address

 SELECT full_name, email
 FROM transaction_data
 WHERE zip = "20252";

-- the full names and emails of those in zip code 20252 which is where fraudulent transactions are coming from.

SELECT full_name, email
FROM transaction_data
WHERE full_name = 'Art Vandelay' OR full_name LIKE '% der %';

--the full names and emails of fraudulent transactions with names like 'Art Vandelay' or containing the middle name 'der'

SELECT ip_address, email
FROM transaction_data
WHERE ip_address LIKE '10.%';

--the ip_address and email of fraudulent transactions beginning with ip address 10

SELECT email
FROM transaction_data
WHERE email LIKE '%temp_email.com';

--the emails of those using temporary emails for fraud.

SELECT *
FROM transaction_data
WHERE ip_address LIKE '120.%'
AND full_name LIKE 'John%';

--The specific fraudulent transaction from IP address starting with 120. and full name starting with John


