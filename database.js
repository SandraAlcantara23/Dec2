
const sqlite3 = require('sqlite3').verbose();
const path = require('path');

const dbPath = path.resolve(__dirname, 'punto_venta.db');
const db = new sqlite3.Database(dbPath, (err) => {
  if (err) console.error('Error al conectar a la base de datos:', err);
  else console.log('Base de datos conectada');
});

db.serialize(() => {
  db.run(`
    CREATE TABLE IF NOT EXISTS productos (
      id INTEGER PRIMARY KEY AUTOINCREMENT,
      nombre TEXT NOT NULL,
      precio_compra REAL,
      precio_venta REAL,
      stock_actual INTEGER,
      stock_min INTEGER,
      stock_max INTEGER,
      merma INTEGER DEFAULT 0
    )
  `);

  db.run(`
    CREATE TABLE IF NOT EXISTS ventas (
      id INTEGER PRIMARY KEY AUTOINCREMENT,
      fecha TEXT,
      total REAL,
      iva REAL,
      total_con_iva REAL
    )
  `);

  db.run(`
    CREATE TABLE IF NOT EXISTS venta_detalle (
      id INTEGER PRIMARY KEY AUTOINCREMENT,
      venta_id INTEGER,
      producto_id INTEGER,
      cantidad INTEGER,
      FOREIGN KEY (venta_id) REFERENCES ventas(id),
      FOREIGN KEY (producto_id) REFERENCES productos(id)
    )
  `);
});

module.exports = db;
