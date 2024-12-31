const circle = document.createElement('div');
const body = document.body;
let score = 0;

circle.style.position = 'absolute';
circle.style.borderRadius = '50%';
circle.style.width = '50px';
circle.style.height = '50px';
circle.style.background = 'red';

body.appendChild(circle);

function moveCircle() {
    const x = Math.random() * (window.innerWidth - 50);
    const y = Math.random() * (window.innerHeight - 50);
    circle.style.left = `${x}px`;
    circle.style.top = `${y}px`;
}

circle.addEventListener('click', () => {
    score++;
    moveCircle();
});

setInterval(() => {
    moveCircle();
    console.log(`Score: ${score}`);
}, 1000);
