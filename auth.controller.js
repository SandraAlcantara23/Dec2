const authService = require("../service/User.service");

exports.register = async (req, res, next) => {
  try {
    const { email, password } = req.body;
    const user = await authService.registerUser(email, password);
    const token = authService.generateToken(user);
    res.status(201).json({ token });
  } catch (error) {
    next(error); 
  }
};

exports.login = async (req, res, next) => {
  try {
    const { email, password } = req.body;
    const token = await authService.loginUser(email, password); 
    res.json({ token });
  } catch (error) {
    next(error);
  }
};
