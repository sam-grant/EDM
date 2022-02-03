void S0S12S18_AEDMOverThetaYRMS_vs_p_trackReco_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 31 18:52:00 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.9133,-0.01892336,3408.324,0.03021696);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1219[11] = {
   451.6112,
   653.1541,
   880.085,
   1123.204,
   1371.069,
   1620.186,
   1867.124,
   2115.282,
   2363.183,
   2614.691,
   2788.688};
   Double_t Graph0_fy1219[11] = {
   0.000136824,
   0.006585073,
   0.006264116,
   0.006508417,
   0.009980336,
   0.01107154,
   0.01342006,
   0.009740325,
   0.008641545,
   0.01164559,
   0.01435919};
   Double_t Graph0_fex1219[11] = {
   0.1107381,
   0.09418109,
   0.06848963,
   0.06711431,
   0.07174528,
   0.07961856,
   0.09256173,
   0.1151041,
   0.1486707,
   0.1826897,
   0.2225177};
   Double_t Graph0_fey1219[11] = {
   0.004736958,
   0.001928756,
   0.001354742,
   0.001315166,
   0.001409102,
   0.001564439,
   0.001825099,
   0.002272858,
   0.002936844,
   0.003694777,
   0.0104244};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1219,Graph0_fy1219,Graph0_fex1219,Graph0_fey1219);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01219 = new TH1F("Graph_Graph01219","S0S12S18_",100,217.7594,3022.651);
   Graph_Graph01219->SetMinimum(-0.01400933);
   Graph_Graph01219->SetMaximum(0.02530293);
   Graph_Graph01219->SetDirectory(0);
   Graph_Graph01219->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01219->SetLineColor(ci);
   Graph_Graph01219->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01219->GetXaxis()->SetRange(0,101);
   Graph_Graph01219->GetXaxis()->CenterTitle(true);
   Graph_Graph01219->GetXaxis()->SetLabelFont(42);
   Graph_Graph01219->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01219->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01219->GetXaxis()->SetTitleFont(42);
   Graph_Graph01219->GetYaxis()->SetTitle("A_{EDM}/#sigma#theta_{y} / 250 MeV");
   Graph_Graph01219->GetYaxis()->CenterTitle(true);
   Graph_Graph01219->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01219->GetYaxis()->SetLabelFont(42);
   Graph_Graph01219->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01219->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01219->GetYaxis()->SetTitleFont(42);
   Graph_Graph01219->GetZaxis()->SetLabelFont(42);
   Graph_Graph01219->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01219->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01219);
   
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
