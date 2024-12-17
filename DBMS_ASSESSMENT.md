

```sql
//DATABASE
CREATE DATABASE product_db;

//TABLE
use product_db;
CREATE TABLE product(pro_id int PRIMARY KEY , pro_name varchar(20), pro_price decimal(10,2),comp_cod int);

//DATA Entery
INSERT INTO product VALUES 
(101,"Mother Board",3200.00,15),
(102,"Key Board",450.00,16),
(103,"Zip drive",250.00,14),
(104,"Speaker",550.00,16),
(105,"Monitor",5000.00,11),
(106,"DVD drive",900.00,12),
(107,"CD drive",800.00,12),
(108,"Printer",2600.00,13),
(109,"Refill cartridge",350.00,13),
(110,"Mouse",250.00,12);

//SELECT asc product pro_name and desc price
SELECT pro_name as product_name,pro_price as product_price 
FROM product 
WHERE pro_price >=250 
ORDER BY pro_price DESC,pro_name ASC;


//SELECT name and price where price is minimum
SELECT pro_name as product_name,min(pro_price) as product_price 
FROM product; 

//SELECT average product price for each company
SELECT AVG(pro_price) as Average_price ,comp_cod as Company_code
FROM product GROUP BY comp_cod;

//SELECT average price of all product
SELECT avg(pro_price) as Average_price from product;
```