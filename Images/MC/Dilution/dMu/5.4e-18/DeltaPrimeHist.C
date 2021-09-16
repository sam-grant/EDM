void DeltaPrimeHist()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Sep 16 17:31:27 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__4 = new TH1D("h__4","",24,1.464264,1.960027);
   h__4->SetBinContent(8,1);
   h__4->SetBinContent(9,5);
   h__4->SetBinContent(10,3);
   h__4->SetBinContent(11,3);
   h__4->SetBinContent(12,4);
   h__4->SetBinContent(13,2);
   h__4->SetBinContent(14,4);
   h__4->SetBinContent(15,3);
   h__4->SetBinContent(16,1);
   h__4->SetEntries(26);
   h__4->SetStats(0);
   h__4->GetXaxis()->SetTitle("#delta' [mrad]");
   h__4->GetXaxis()->CenterTitle(true);
   h__4->GetXaxis()->SetLabelFont(42);
   h__4->GetXaxis()->SetTitleSize(0.04);
   h__4->GetXaxis()->SetTitleOffset(1.1);
   h__4->GetXaxis()->SetTitleFont(42);
   h__4->GetYaxis()->SetTitle("Mahalanobis distances");
   h__4->GetYaxis()->CenterTitle(true);
   h__4->GetYaxis()->SetNdivisions(4000510);
   h__4->GetYaxis()->SetLabelFont(42);
   h__4->GetYaxis()->SetTitleSize(0.04);
   h__4->GetYaxis()->SetTitleOffset(1.1);
   h__4->GetYaxis()->SetTitleFont(42);
   h__4->GetZaxis()->SetLabelFont(42);
   h__4->GetZaxis()->SetTitleOffset(1);
   h__4->GetZaxis()->SetTitleFont(42);
   h__4->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
