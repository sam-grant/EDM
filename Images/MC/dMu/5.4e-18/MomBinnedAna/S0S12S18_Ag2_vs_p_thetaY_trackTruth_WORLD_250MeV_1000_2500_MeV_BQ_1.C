void S0S12S18_Ag2_vs_p_thetaY_trackTruth_WORLD_250MeV_1000_2500_MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May  6 11:05:16 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-164.7815,-0.1340228,3380.88,0.38175);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1207[11] = {
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
   Double_t Graph0_fy1207[11] = {
   0.214049,
   0.02065434,
   -0.03240329,
   -0.01602307,
   0.003047431,
   -0.002216943,
   0.01747069,
   0.002483549,
   0.02413233,
   0.01926512,
   0.004439302};
   Double_t Graph0_fex1207[11] = {
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
   Double_t Graph0_fey1207[11] = {
   0.08173883,
   0.02734855,
   0.01565738,
   0.01284514,
   0.01176432,
   0.01125977,
   0.01135869,
   0.01209289,
   0.01329598,
   0.0137809,
   0.03219388};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1207,Graph0_fy1207,Graph0_fex1207,Graph0_fey1207);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01207 = new TH1F("Graph_Graph01207","S0S12S18_",100,217.869,3026.313);
   Graph_Graph01207->SetMinimum(-0.08244553);
   Graph_Graph01207->SetMaximum(0.3301727);
   Graph_Graph01207->SetDirectory(0);
   Graph_Graph01207->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01207->SetLineColor(ci);
   Graph_Graph01207->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01207->GetXaxis()->SetRange(0,100);
   Graph_Graph01207->GetXaxis()->CenterTitle(true);
   Graph_Graph01207->GetXaxis()->SetLabelFont(42);
   Graph_Graph01207->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01207->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01207->GetXaxis()->SetTitleFont(42);
   Graph_Graph01207->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph01207->GetYaxis()->CenterTitle(true);
   Graph_Graph01207->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01207->GetYaxis()->SetLabelFont(42);
   Graph_Graph01207->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01207->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01207->GetYaxis()->SetTitleFont(42);
   Graph_Graph01207->GetZaxis()->SetLabelFont(42);
   Graph_Graph01207->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01207->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01207);
   
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
