void -20_-15()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 02:41:02 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h1_ratio__98 = new TH1D("h1_ratio__98","",630,-1575,1575);
   h1_ratio__98->SetBinContent(312,1e+09);
   h1_ratio__98->SetBinContent(313,34.1022);
   h1_ratio__98->SetBinContent(314,122.315);
   h1_ratio__98->SetBinContent(315,136.2107);
   h1_ratio__98->SetBinContent(316,145.2454);
   h1_ratio__98->SetBinContent(317,126.4537);
   h1_ratio__98->SetBinContent(318,105.1652);
   h1_ratio__98->SetBinContent(319,124.2143);
   h1_ratio__98->SetBinContent(320,128.6223);
   h1_ratio__98->SetBinContent(321,106.9875);
   h1_ratio__98->SetBinError(313,5.395679);
   h1_ratio__98->SetBinError(314,9.78547);
   h1_ratio__98->SetBinError(315,10.12387);
   h1_ratio__98->SetBinError(316,10.43118);
   h1_ratio__98->SetBinError(317,9.929448);
   h1_ratio__98->SetBinError(318,9.463804);
   h1_ratio__98->SetBinError(319,11.04937);
   h1_ratio__98->SetBinError(320,13.51765);
   h1_ratio__98->SetBinError(321,23.3961);
   h1_ratio__98->SetEntries(772.5608);
   h1_ratio__98->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   h1_ratio__98->GetXaxis()->SetRange(296,335);
   h1_ratio__98->GetXaxis()->CenterTitle(true);
   h1_ratio__98->GetXaxis()->SetLabelFont(42);
   h1_ratio__98->GetXaxis()->SetTitleSize(0.04);
   h1_ratio__98->GetXaxis()->SetTitleOffset(1.1);
   h1_ratio__98->GetXaxis()->SetTitleFont(42);
   h1_ratio__98->GetYaxis()->SetTitle("Tracks");
   h1_ratio__98->GetYaxis()->CenterTitle(true);
   h1_ratio__98->GetYaxis()->SetNdivisions(4000510);
   h1_ratio__98->GetYaxis()->SetLabelFont(42);
   h1_ratio__98->GetYaxis()->SetTitleSize(0.04);
   h1_ratio__98->GetYaxis()->SetTitleOffset(1.1);
   h1_ratio__98->GetYaxis()->SetTitleFont(42);
   h1_ratio__98->GetZaxis()->SetLabelFont(42);
   h1_ratio__98->GetZaxis()->SetTitleOffset(1);
   h1_ratio__98->GetZaxis()->SetTitleFont(42);
   h1_ratio__98->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
