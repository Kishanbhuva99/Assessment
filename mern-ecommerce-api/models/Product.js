  const mongoose = require('mongoose');
  const productSchema = new mongoose.Schema({
      name: { type: String, required: true },
      price: Number,
      image: String, // Store file path
      category: { type: mongoose.Schema.Types.ObjectId, ref: 'Category', required: true }
  });
  module.exports = mongoose.model('Product', productSchema);