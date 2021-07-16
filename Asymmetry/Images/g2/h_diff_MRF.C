void h_diff_MRF()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jul 13 23:45:29 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *h_N_f__9 = new TH1F("h_N_f__9","",15,0,50.32258);
   h_N_f__9->SetBinContent(1,-721);
   h_N_f__9->SetBinContent(2,-4564);
   h_N_f__9->SetBinContent(3,-10340);
   h_N_f__9->SetBinContent(4,-16060);
   h_N_f__9->SetBinContent(5,-19664);
   h_N_f__9->SetBinContent(6,-19891);
   h_N_f__9->SetBinContent(7,-15495);
   h_N_f__9->SetBinContent(8,-1432);
   h_N_f__9->SetBinContent(9,19778);
   h_N_f__9->SetBinContent(10,52986);
   h_N_f__9->SetBinContent(11,100688);
   h_N_f__9->SetBinContent(12,159650);
   h_N_f__9->SetBinContent(13,236012);
   h_N_f__9->SetBinContent(14,328556);
   h_N_f__9->SetBinContent(15,436459);
   h_N_f__9->SetBinContent(16,400052);
   h_N_f__9->SetEntries(1508912);
   h_N_f__9->SetStats(0);
   h_N_f__9->GetXaxis()->SetTitle("Track momentum [MeV]");
   h_N_f__9->GetXaxis()->SetRange(1,310);
   h_N_f__9->GetXaxis()->CenterTitle(true);
   h_N_f__9->GetXaxis()->SetLabelFont(42);
   h_N_f__9->GetXaxis()->SetTitleSize(0.04);
   h_N_f__9->GetXaxis()->SetTitleOffset(1.1);
   h_N_f__9->GetXaxis()->SetTitleFont(42);
   h_N_f__9->GetYaxis()->SetTitle("Forwards #minus backwards");
   h_N_f__9->GetYaxis()->CenterTitle(true);
   h_N_f__9->GetYaxis()->SetNdivisions(4000510);
   h_N_f__9->GetYaxis()->SetLabelFont(42);
   h_N_f__9->GetYaxis()->SetTitleSize(0.04);
   h_N_f__9->GetYaxis()->SetTitleOffset(1.1);
   h_N_f__9->GetYaxis()->SetTitleFont(42);
   h_N_f__9->GetZaxis()->SetLabelFont(42);
   h_N_f__9->GetZaxis()->SetTitleOffset(1);
   h_N_f__9->GetZaxis()->SetTitleFont(42);
   h_N_f__9->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
