void S0_Ag2_vs_p_A_trackReco_WORLD_250MeV_BQ.1_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:32:58 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-168.4604,-2.550461e-05,3409.867,0.0001171908);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1062[11] = {
   451.5017,
   653.2126,
   879.9286,
   1123.095,
   1371.312,
   1620.794,
   1868.128,
   2116.549,
   2363.467,
   2615.613,
   2789.755};
   Double_t Graph0_fy1062[11] = {
   -4.558446e-06,
   -1.089179e-06,
   -1.591648e-07,
   -1.228518e-08,
   1.028561e-07,
   -1.956722e-07,
   -2.203482e-07,
   -3.203205e-07,
   6.401268e-07,
   -9.1199e-06,
   1.822005e-05};
   Double_t Graph0_fex1062[11] = {
   0.1864231,
   0.1583684,
   0.1154331,
   0.1128051,
   0.1201848,
   0.132627,
   0.1524343,
   0.1843167,
   0.2313112,
   0.2891107,
   0.3358942};
   Double_t Graph0_fey1062[11] = {
   7.672077e-06,
   5.069285e-07,
   1.726434e-07,
   1.593974e-07,
   1.914109e-07,
   2.609513e-07,
   4.090148e-07,
   7.65659e-07,
   1.71902e-06,
   3.811744e-06,
   8.254623e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1062,Graph0_fy1062,Graph0_fex1062,Graph0_fey1062);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01062 = new TH1F("Graph_Graph01062","S0_",100,217.4377,3023.969);
   Graph_Graph01062->SetMinimum(-1.123507e-05);
   Graph_Graph01062->SetMaximum(0.0001029212);
   Graph_Graph01062->SetDirectory(0);
   Graph_Graph01062->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01062->SetLineColor(ci);
   Graph_Graph01062->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01062->GetXaxis()->SetRange(0,101);
   Graph_Graph01062->GetXaxis()->CenterTitle(true);
   Graph_Graph01062->GetXaxis()->SetLabelFont(42);
   Graph_Graph01062->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01062->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01062->GetXaxis()->SetTitleFont(42);
   Graph_Graph01062->GetYaxis()->SetTitle("A_{g#minus2} / 250 MeV");
   Graph_Graph01062->GetYaxis()->CenterTitle(true);
   Graph_Graph01062->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01062->GetYaxis()->SetLabelFont(42);
   Graph_Graph01062->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01062->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01062->GetYaxis()->SetTitleFont(42);
   Graph_Graph01062->GetZaxis()->SetLabelFont(42);
   Graph_Graph01062->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01062->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01062);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4567085,0.9362587,0.5432915,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
