function extractOnAnswers() {
  const soalElements = document.querySelectorAll('.itemsoal');  
  soalElements.forEach((soalElement, index) => {
    const soalData = JSON.parse(soalElement.getAttribute('data-soalperitem')); 
    const pilihanSoal = JSON.parse(soalData.pilihansoal);
    const soalNumber = soalElement.getAttribute('data-soalke'); 
    if (Array.isArray(pilihanSoal)) {
      const onAnswers = pilihanSoal.filter(pilihan => pilihan.kuncinya.includes("on"))
                                   .map(pilihan => pilihan.isipilihan);

      if (onAnswers.length > 0) {
        console.log(`Soal number ${soalNumber}: ${onAnswers.join(', ')}`);
      }
    } else {
      console.error(`Invalid format for soal number ${soalNumber}`);
    }
  });
}

extractOnAnswers();
