const {saludarController} = require("../controllers/greet.controller");
const router = require("express").Router();
router.get("/",saludarController)
router.get("/saludo-2",saludarController)



router.get("/", (req, res) => {
  res.json({ message: "Adiós desde express usando S.O.L.I.D" });
});

module.exports = router;

module.exports = router