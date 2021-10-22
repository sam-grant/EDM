void gr_dBz_true_800_2000()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May  7 07:52:36 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(643.95,0.115,2154.45,0.165);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1004[15] = {
   100,
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t Graph0_fy1004[15] = {
   0.003133954,
   0.009486248,
   0.07898374,
   0.1345466,
   0.149824,
   0.150548,
   0.151193,
   0.1432431,
   0.1352368,
   0.1308866,
   0.1090313,
   0.1089738,
   0.0869413,
   0.07865771,
   0.04165139};
   Double_t Graph0_fex1004[15] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1004[15] = {
   0.01543678,
   0.009939102,
   0.007616419,
   0.006252719,
   0.005143107,
   0.004421118,
   0.003934081,
   0.003559795,
   0.003272652,
   0.003089894,
   0.002965678,
   0.00290774,
   0.002890308,
   0.002977034,
   0.003314348};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1004,Graph0_fy1004,Graph0_fex1004,Graph0_fey1004);
   gre->SetName("Graph0");
   gre->SetTitle(";p [MeV]: in range p #minus 100 < p < p #plus 100 MeV;Dilution, d_{Bz}(p)");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph010021004 = new TH1F("Graph_Graph_Graph010021004","",100,0,3180);
   Graph_Graph_Graph010021004->SetMinimum(0.12);
   Graph_Graph_Graph010021004->SetMaximum(0.16);
   Graph_Graph_Graph010021004->SetDirectory(0);
   Graph_Graph_Graph010021004->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph010021004->SetLineColor(ci);
   Graph_Graph_Graph010021004->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph_Graph010021004->GetXaxis()->SetRange(26,63);
   Graph_Graph_Graph010021004->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph010021004->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010021004->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010021004->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010021004->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010021004->GetYaxis()->SetTitle("Dilution, d_{Bz}(p)");
   Graph_Graph_Graph010021004->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph010021004->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph010021004->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph010021004->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010021004->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph010021004->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph010021004->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph010021004->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph010021004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph010021004);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
