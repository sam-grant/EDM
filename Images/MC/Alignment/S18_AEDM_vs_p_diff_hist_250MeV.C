void S18_AEDM_vs_p_diff_hist_250MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Apr 26 12:33:29 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h_diff__2 = new TH1D("h_diff__2","",45,0,45);
   h_diff__2->SetBinContent(1,1);
   h_diff__2->SetBinContent(3,1);
   h_diff__2->SetBinContent(6,1);
   h_diff__2->SetBinContent(9,1);
   h_diff__2->SetBinContent(19,1);
   h_diff__2->SetBinContent(21,1);
   h_diff__2->SetBinContent(43,1);
   h_diff__2->SetEntries(7);
   h_diff__2->GetXaxis()->SetTitle("#DeltaA_{EDM} [%]");
   h_diff__2->GetXaxis()->CenterTitle(true);
   h_diff__2->GetXaxis()->SetLabelFont(42);
   h_diff__2->GetXaxis()->SetTitleSize(0.04);
   h_diff__2->GetXaxis()->SetTitleOffset(1.1);
   h_diff__2->GetXaxis()->SetTitleFont(42);
   h_diff__2->GetYaxis()->SetTitle("Entries / 1%");
   h_diff__2->GetYaxis()->CenterTitle(true);
   h_diff__2->GetYaxis()->SetNdivisions(4000510);
   h_diff__2->GetYaxis()->SetLabelFont(42);
   h_diff__2->GetYaxis()->SetTitleSize(0.04);
   h_diff__2->GetYaxis()->SetTitleOffset(1.1);
   h_diff__2->GetYaxis()->SetTitleFont(42);
   h_diff__2->GetZaxis()->SetLabelFont(42);
   h_diff__2->GetZaxis()->SetTitleOffset(1);
   h_diff__2->GetZaxis()->SetTitleFont(42);
   h_diff__2->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
