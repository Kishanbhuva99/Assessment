const express = require('express');
const router = express.Router();
const Category = require('../models/Category');
const { isAdmin } = require('../middleware/auth');

// GET all categories
router.get('/', async (req, res) => {
    try {
        const categories = await Category.find();
        res.json(categories);
    } catch (err) {
        res.status(500).json({ message: err.message });
    }
});

// POST new category (Admin Protected)
router.post('/', isAdmin, async (req, res) => {
    try {
        const category = new Category({ name: req.body.name });
        const savedCategory = await category.save();
        res.status(201).json(savedCategory);
    } catch (err) {
        res.status(400).json({ message: err.message });
    }
});

module.exports = router;