async function registrarProducto() {
  const nombre = document.getElementById('nombre').value;
  const precio = parseFloat(document.getElementById('precio').value);

  const response = await fetch('http://localhost:3000/productos/', {
    method: 'POST',
    headers: {
      'Content-Type': 'application/json'
    },
    body: JSON.stringify({ nombre, precio })
  });

  if (response.ok) {
    alert('Producto registrado exitosamente.');
  } else {
    alert('Error al registrar el producto.');
  }
}

async function calcularTotal() {
  const response = await fetch('http://localhost:3000/total/', {
    method: 'POST'
  });

  if (response.ok) {
    const data = await response.json();
    document.getElementById('total').innerText = `Total de la compra: ${data.total}`;
  } else {
    alert('Error al calcular el total de la compra.');
  }
}
