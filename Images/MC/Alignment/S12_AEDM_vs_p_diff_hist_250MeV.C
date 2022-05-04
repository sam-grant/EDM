void S12_AEDM_vs_p_diff_hist_250MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Apr 26 12:33:29 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h_diff__1 = new TH1D("h_diff__1","",45,0,45);
   h_diff__1->SetBinContent(8,1);
   h_diff__1->SetBinContent(10,1);
   h_diff__1->SetBinContent(13,1);
   h_diff__1->SetBinContent(17,1);
   h_diff__1->SetBinContent(18,1);
   h_diff__1->SetBinContent(34,1);
   h_diff__1->SetBinContent(38,1);
   h_diff__1->SetEntries(7);
   h_diff__1->GetXaxis()->SetTitle("#DeltaA_{EDM} [%]");
   h_diff__1->GetXaxis()->CenterTitle(true);
   h_diff__1->GetXaxis()->SetLabelFont(42);
   h_diff__1->GetXaxis()->SetTitleSize(0.04);
   h_diff__1->GetXaxis()->SetTitleOffset(1.1);
   h_diff__1->GetXaxis()->SetTitleFont(42);
   h_diff__1->GetYaxis()->SetTitle("Entries / 1%");
   h_diff__1->GetYaxis()->CenterTitle(true);
   h_diff__1->GetYaxis()->SetNdivisions(4000510);
   h_diff__1->GetYaxis()->SetLabelFont(42);
   h_diff__1->GetYaxis()->SetTitleSize(0.04);
   h_diff__1->GetYaxis()->SetTitleOffset(1.1);
   h_diff__1->GetYaxis()->SetTitleFont(42);
   h_diff__1->GetZaxis()->SetLabelFont(42);
   h_diff__1->GetZaxis()->SetTitleOffset(1);
   h_diff__1->GetZaxis()->SetTitleFont(42);
   h_diff__1->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
