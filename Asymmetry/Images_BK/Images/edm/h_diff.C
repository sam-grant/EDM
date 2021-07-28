void h_diff()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jul 13 13:12:32 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *h_N_u__9 = new TH1F("h_N_u__9","",15,0,3000);
   h_N_u__9->SetBinContent(1,2087);
   h_N_u__9->SetBinContent(2,2780);
   h_N_u__9->SetBinContent(3,3532);
   h_N_u__9->SetBinContent(4,3504);
   h_N_u__9->SetBinContent(5,4315);
   h_N_u__9->SetBinContent(6,6418);
   h_N_u__9->SetBinContent(7,6585);
   h_N_u__9->SetBinContent(8,5071);
   h_N_u__9->SetBinContent(9,4630);
   h_N_u__9->SetBinContent(10,4755);
   h_N_u__9->SetBinContent(11,2885);
   h_N_u__9->SetBinContent(12,4132);
   h_N_u__9->SetBinContent(13,1987);
   h_N_u__9->SetBinContent(14,1005);
   h_N_u__9->SetBinContent(15,-149);
   h_N_u__9->SetBinContent(16,15);
   h_N_u__9->SetEntries(53552);
   h_N_u__9->SetStats(0);
   h_N_u__9->GetXaxis()->SetTitle("Track momentum [MeV]");
   h_N_u__9->GetXaxis()->SetRange(1,310);
   h_N_u__9->GetXaxis()->CenterTitle(true);
   h_N_u__9->GetXaxis()->SetLabelFont(42);
   h_N_u__9->GetXaxis()->SetTitleSize(0.04);
   h_N_u__9->GetXaxis()->SetTitleOffset(1.1);
   h_N_u__9->GetXaxis()->SetTitleFont(42);
   h_N_u__9->GetYaxis()->SetTitle("Up #minus down");
   h_N_u__9->GetYaxis()->CenterTitle(true);
   h_N_u__9->GetYaxis()->SetNdivisions(4000510);
   h_N_u__9->GetYaxis()->SetLabelFont(42);
   h_N_u__9->GetYaxis()->SetTitleSize(0.04);
   h_N_u__9->GetYaxis()->SetTitleOffset(1.1);
   h_N_u__9->GetYaxis()->SetTitleFont(42);
   h_N_u__9->GetZaxis()->SetLabelFont(42);
   h_N_u__9->GetZaxis()->SetTitleOffset(1);
   h_N_u__9->GetZaxis()->SetTitleFont(42);
   h_N_u__9->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
