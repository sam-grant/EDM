void S0S12S18_full_Y_RMS_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jun  7 14:58:34 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-437.25,11.15045,3605.25,26.32267);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1468[15] = {
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
   Double_t Graph0_fy1468[15] = {
   22.16171,
   23.76046,
   19.18752,
   15.02129,
   14.06556,
   13.80714,
   13.7173,
   13.68526,
   13.82121,
   14.10976,
   14.31722,
   14.51964,
   14.89688,
   14.57966,
   15.34901};
   Double_t Graph0_fex1468[15] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t Graph0_fey1468[15] = {
   0.3444316,
   0.03350734,
   0.01171111,
   0.007204985,
   0.006214587,
   0.005922037,
   0.005873851,
   0.006103198,
   0.006677601,
   0.007667628,
   0.008935697,
   0.01060124,
   0.01402957,
   0.01742881,
   0.03589157};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1468,Graph0_fy1468,Graph0_fex1468,Graph0_fey1468);
   gre->SetName("Graph0");
   gre->SetTitle(";p [MeV]: in range p #minus 100 < p < p #plus 100 MeV;#sigmay [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01468 = new TH1F("Graph_Graph01468","",100,0,3300);
   Graph_Graph01468->SetMinimum(12.66768);
   Graph_Graph01468->SetMaximum(24.80545);
   Graph_Graph01468->SetDirectory(0);
   Graph_Graph01468->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01468->SetLineColor(ci);
   Graph_Graph01468->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01468->GetXaxis()->SetRange(0,97);
   Graph_Graph01468->GetXaxis()->CenterTitle(true);
   Graph_Graph01468->GetXaxis()->SetLabelFont(42);
   Graph_Graph01468->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01468->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01468->GetXaxis()->SetTitleFont(42);
   Graph_Graph01468->GetYaxis()->SetTitle("#sigmay [mm]");
   Graph_Graph01468->GetYaxis()->CenterTitle(true);
   Graph_Graph01468->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01468->GetYaxis()->SetLabelFont(42);
   Graph_Graph01468->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01468->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01468->GetYaxis()->SetTitleFont(42);
   Graph_Graph01468->GetZaxis()->SetLabelFont(42);
   Graph_Graph01468->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01468->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01468);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
