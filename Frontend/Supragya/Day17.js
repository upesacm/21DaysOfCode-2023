const box = document.querySelector('.box');
const rotateBtn = document.getElementById('rotate-btn');
const userForm = document.getElementById('user-form');
const resultDiv = document.getElementById('result');

let rotationPaused = true;

rotateBtn.addEventListener('click', () => {
  rotationPaused = !rotationPaused;
  box.classList.toggle('rotate-animation', !rotationPaused);
});

userForm.addEventListener('submit', (e) => {
  e.preventDefault();
  const name = document.getElementById('name').value;
  const email = document.getElementById('email').value;
  showResult(`Name: ${name}<br>Email: ${email}`);
});

function showResult(data) {
  resultDiv.innerHTML = data;
  resultDiv.style.display = 'block';
}
