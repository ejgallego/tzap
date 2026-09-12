const tests = [...document.querySelectorAll('section.test')];
const search = document.querySelector('#filter'), decision = document.querySelector('#decision-filter');
function filter() {
 const query = search.value.toLowerCase();
 for (const test of tests) test.hidden = !test.textContent.toLowerCase().includes(query) || (decision.value !== 'all' && test.dataset.decision !== decision.value);
 document.querySelector('#count').textContent = `${tests.filter(t => !t.hidden).length} tests`;
}
search.addEventListener('input', filter); decision.addEventListener('change', filter); filter();
for (const button of document.querySelectorAll('[data-viewer]')) button.addEventListener('click', () => {
 const frame = document.getElementById(button.dataset.viewer);
 frame.hidden = !frame.hidden;
 if (!frame.hidden && !frame.src) frame.src = frame.dataset.source;
 button.setAttribute('aria-expanded', String(!frame.hidden));
 button.textContent = frame.hidden ? 'Show interactive profile' : 'Hide interactive profile';
});
for (const link of document.querySelectorAll('nav a')) link.addEventListener('click', () => {
 search.value = ''; decision.value = 'all'; filter();
});
