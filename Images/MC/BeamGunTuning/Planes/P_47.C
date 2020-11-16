void P_47()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 16 13:12:28 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *P_47__98 = new TH1F("P_47__98","Plane 47",110,0,3300);
   P_47__98->SetBinContent(2,3);
   P_47__98->SetBinContent(3,1);
   P_47__98->SetBinContent(5,1);
   P_47__98->SetBinContent(6,2);
   P_47__98->SetBinContent(8,3);
   P_47__98->SetBinContent(9,4);
   P_47__98->SetBinContent(10,9);
   P_47__98->SetBinContent(11,61);
   P_47__98->SetBinContent(12,14);
   P_47__98->SetBinContent(13,1);
   P_47__98->SetBinContent(14,423);
   P_47__98->SetEntries(522);
   P_47__98->SetLineWidth(3);
   P_47__98->GetXaxis()->SetTitle("Momentum [MeV]");
   P_47__98->GetXaxis()->CenterTitle(true);
   P_47__98->GetXaxis()->SetLabelFont(42);
   P_47__98->GetXaxis()->SetTitleSize(0.04);
   P_47__98->GetXaxis()->SetTitleOffset(1.1);
   P_47__98->GetXaxis()->SetTitleFont(42);
   P_47__98->GetYaxis()->SetTitle("Ghost tracks");
   P_47__98->GetYaxis()->CenterTitle(true);
   P_47__98->GetYaxis()->SetNdivisions(4000510);
   P_47__98->GetYaxis()->SetLabelFont(42);
   P_47__98->GetYaxis()->SetTitleSize(0.04);
   P_47__98->GetYaxis()->SetTitleOffset(1.1);
   P_47__98->GetYaxis()->SetTitleFont(42);
   P_47__98->GetZaxis()->SetLabelFont(42);
   P_47__98->GetZaxis()->SetTitleOffset(1);
   P_47__98->GetZaxis()->SetTitleFont(42);
   P_47__98->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
