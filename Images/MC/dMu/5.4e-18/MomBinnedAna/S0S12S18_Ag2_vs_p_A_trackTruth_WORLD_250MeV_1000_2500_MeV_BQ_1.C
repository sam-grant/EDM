void S0S12S18_Ag2_vs_p_A_trackTruth_WORLD_250MeV_1000_2500_MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May  6 11:05:16 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-164.7815,-6.983507e-06,3380.88,4.137187e-06);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1210[11] = {
   451.9673,
   653.3489,
   880.33,
   1123.071,
   1371.146,
   1620.133,
   1867.045,
   2115.331,
   2363.045,
   2613.562,
   2792.136};
   Double_t Graph0_fy1210[11] = {
   -1.879382e-07,
   1.926584e-08,
   -3.554302e-09,
   -1.124632e-09,
   1.151998e-09,
   -2.241101e-09,
   7.461755e-09,
   3.511532e-08,
   5.921901e-08,
   -4.303045e-08,
   -1.42316e-06};
   Double_t Graph0_fex1210[11] = {
   0.06119317,
   0.05168435,
   0.03738165,
   0.03651084,
   0.03897018,
   0.04308696,
   0.05035664,
   0.06256782,
   0.08122338,
   0.09940193,
   0.1408526};
   Double_t Graph0_fey1210[11] = {
   2.652177e-07,
   1.759631e-08,
   5.906326e-09,
   5.373484e-09,
   6.659962e-09,
   9.000546e-09,
   1.480421e-08,
   3.000558e-08,
   7.144681e-08,
   1.582435e-07,
   3.706898e-06};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1210,Graph0_fy1210,Graph0_fex1210,Graph0_fey1210);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01210 = new TH1F("Graph_Graph01210","S0S12S18_",100,217.869,3026.313);
   Graph_Graph01210->SetMinimum(-5.871438e-06);
   Graph_Graph01210->SetMaximum(3.025118e-06);
   Graph_Graph01210->SetDirectory(0);
   Graph_Graph01210->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01210->SetLineColor(ci);
   Graph_Graph01210->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01210->GetXaxis()->SetRange(0,100);
   Graph_Graph01210->GetXaxis()->CenterTitle(true);
   Graph_Graph01210->GetXaxis()->SetLabelFont(42);
   Graph_Graph01210->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01210->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01210->GetXaxis()->SetTitleFont(42);
   Graph_Graph01210->GetYaxis()->SetTitle("A_{g#minus2} / 250 MeV");
   Graph_Graph01210->GetYaxis()->CenterTitle(true);
   Graph_Graph01210->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01210->GetYaxis()->SetLabelFont(42);
   Graph_Graph01210->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01210->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01210->GetYaxis()->SetTitleFont(42);
   Graph_Graph01210->GetZaxis()->SetLabelFont(42);
   Graph_Graph01210->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01210->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01210);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.3920101,0.9362587,0.6079899,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
