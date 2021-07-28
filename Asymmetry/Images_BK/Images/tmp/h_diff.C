void h_diff()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jul 13 13:06:36 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *h_N_u__12 = new TH1F("h_N_u__12","",31,0,3100);
   h_N_u__12->SetBinContent(1,1028);
   h_N_u__12->SetBinContent(2,1059);
   h_N_u__12->SetBinContent(3,1335);
   h_N_u__12->SetBinContent(4,1445);
   h_N_u__12->SetBinContent(5,1226);
   h_N_u__12->SetBinContent(6,2306);
   h_N_u__12->SetBinContent(7,1730);
   h_N_u__12->SetBinContent(8,1774);
   h_N_u__12->SetBinContent(9,2139);
   h_N_u__12->SetBinContent(10,2176);
   h_N_u__12->SetBinContent(11,3407);
   h_N_u__12->SetBinContent(12,3011);
   h_N_u__12->SetBinContent(13,3576);
   h_N_u__12->SetBinContent(14,3009);
   h_N_u__12->SetBinContent(15,2387);
   h_N_u__12->SetBinContent(16,2684);
   h_N_u__12->SetBinContent(17,2133);
   h_N_u__12->SetBinContent(18,2497);
   h_N_u__12->SetBinContent(19,2413);
   h_N_u__12->SetBinContent(20,2342);
   h_N_u__12->SetBinContent(21,1534);
   h_N_u__12->SetBinContent(22,1351);
   h_N_u__12->SetBinContent(23,1848);
   h_N_u__12->SetBinContent(24,2284);
   h_N_u__12->SetBinContent(25,1037);
   h_N_u__12->SetBinContent(26,950);
   h_N_u__12->SetBinContent(27,304);
   h_N_u__12->SetBinContent(28,701);
   h_N_u__12->SetBinContent(29,-163);
   h_N_u__12->SetBinContent(30,14);
   h_N_u__12->SetBinContent(31,15);
   h_N_u__12->SetEntries(53552);
   h_N_u__12->SetStats(0);
   h_N_u__12->GetXaxis()->SetTitle("Track momentum [MeV]");
   h_N_u__12->GetXaxis()->SetRange(1,310);
   h_N_u__12->GetXaxis()->CenterTitle(true);
   h_N_u__12->GetXaxis()->SetLabelFont(42);
   h_N_u__12->GetXaxis()->SetTitleSize(0.04);
   h_N_u__12->GetXaxis()->SetTitleOffset(1.1);
   h_N_u__12->GetXaxis()->SetTitleFont(42);
   h_N_u__12->GetYaxis()->SetTitle("Up #minus down");
   h_N_u__12->GetYaxis()->CenterTitle(true);
   h_N_u__12->GetYaxis()->SetNdivisions(4000510);
   h_N_u__12->GetYaxis()->SetLabelFont(42);
   h_N_u__12->GetYaxis()->SetTitleSize(0.04);
   h_N_u__12->GetYaxis()->SetTitleOffset(1.1);
   h_N_u__12->GetYaxis()->SetTitleFont(42);
   h_N_u__12->GetZaxis()->SetLabelFont(42);
   h_N_u__12->GetZaxis()->SetTitleOffset(1);
   h_N_u__12->GetZaxis()->SetTitleFont(42);
   h_N_u__12->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
