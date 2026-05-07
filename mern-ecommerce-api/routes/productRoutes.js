const express = require('express');
const router = express.Router();
const Product = require('../models/Product');
const upload = require('../middleware/upload');
const { isAdmin } = require('../middleware/auth');

// Get All Products with Category Details (Populate)
router.get('/', async (req, res) => {
    const products = await Product.find().populate('category');
    res.json(products);
});

// Add Product (Protected + Image Upload)
router.post('/', isAdmin, upload.single('image'), async (req, res) => {
    const newProduct = new Product({
        ...req.body,
        image: req.file ? req.file.path : null
    });
    await newProduct.save();
    res.status(201).json(newProduct);
});

module.exports = router;