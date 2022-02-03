void S0_AEDM_vs_p_A_trackReco_WORLD_250MeV_BQ.1_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:32:58 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-168.4604,-1.112512e-05,3409.867,0.0001029937);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1061[11] = {
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
   Double_t Graph0_fy1061[11] = {
   1.834396e-06,
   4.486179e-07,
   3.584218e-07,
   4.906448e-07,
   7.033637e-07,
   8.571769e-07,
   1.516308e-06,
   2.279558e-06,
   1.612899e-06,
   4.609641e-06,
   2.527102e-05};
   Double_t Graph0_fex1061[11] = {
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
   Double_t Graph0_fey1061[11] = {
   7.437992e-06,
   4.938071e-07,
   1.719103e-07,
   1.571088e-07,
   1.90944e-07,
   2.54558e-07,
   3.836572e-07,
   6.741007e-07,
   1.302277e-06,
   2.623886e-06,
   4.627963e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1061,Graph0_fy1061,Graph0_fex1061,Graph0_fey1061);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01061 = new TH1F("Graph_Graph01061","S0_",100,217.4377,3023.969);
   Graph_Graph01061->SetMinimum(2.867685e-07);
   Graph_Graph01061->SetMaximum(9.158185e-05);
   Graph_Graph01061->SetDirectory(0);
   Graph_Graph01061->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01061->SetLineColor(ci);
   Graph_Graph01061->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01061->GetXaxis()->SetRange(0,101);
   Graph_Graph01061->GetXaxis()->CenterTitle(true);
   Graph_Graph01061->GetXaxis()->SetLabelFont(42);
   Graph_Graph01061->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01061->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01061->GetXaxis()->SetTitleFont(42);
   Graph_Graph01061->GetYaxis()->SetTitle("A_{EDM} / 250 MeV");
   Graph_Graph01061->GetYaxis()->CenterTitle(true);
   Graph_Graph01061->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01061->GetYaxis()->SetLabelFont(42);
   Graph_Graph01061->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01061->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01061->GetYaxis()->SetTitleFont(42);
   Graph_Graph01061->GetZaxis()->SetLabelFont(42);
   Graph_Graph01061->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01061->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01061);
   
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
