from pdfminer.high_level import extract_text

def extract_text_from_pdf(pdf_file):
    text = extract_text(pdf_file)
    return text

pdf_file = "PDFS/demo.pdf"
extracted_text = extract_text_from_pdf(pdf_file)
print(extracted_text)
