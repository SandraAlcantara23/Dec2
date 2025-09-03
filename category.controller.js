const categoryService = require("../service/Category.service");


exports.getAll = async (req,res,next)=>{
    try {
        const categories = await categoryService.getAll(req.user._id);
        res.json(categories);
    } catch (error) {
       next(error); 
    }
}

exports.create = async (req,res,next)=>{
    try {
        const {name} = req.body;
        const id = req.user._id;

        const category = await categoryService.create(name,id);

        res.status(201).json(category);

    } catch (error) {
        next(error);
    }
}