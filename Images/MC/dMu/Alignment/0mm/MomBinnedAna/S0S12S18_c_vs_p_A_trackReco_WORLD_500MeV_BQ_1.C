void S0S12S18_c_vs_p_A_trackReco_WORLD_500MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Feb  7 14:58:38 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-126.7881,-2.303643e-05,3212.301,0.0001651938);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1158[6] = {
   451.6584,
   805.6381,
   1238.897,
   1725.211,
   2208.051,
   2633.759};
   Double_t Graph0_fy1158[6] = {
   4.756601e-05,
   -1.799893e-07,
   -1.714798e-07,
   -2.332655e-07,
   -4.000678e-07,
   -2.447396e-06};
   Double_t Graph0_fex1158[6] = {
   0.1075792,
   0.09683756,
   0.09387275,
   0.1144096,
   0.1699271,
   0.203104};
   Double_t Graph0_fey1158[6] = {
   1.001743e-06,
   1.272908e-08,
   8.182327e-09,
   1.577534e-08,
   6.281695e-08,
   5.537758e-07};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1158,Graph0_fy1158,Graph0_fex1158,Graph0_fey1158);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01158 = new TH1F("Graph_Graph01158","S0S12S18_",100,233.3097,2852.203);
   Graph_Graph01158->SetMinimum(-4.213411e-06);
   Graph_Graph01158->SetMaximum(0.0001463707);
   Graph_Graph01158->SetDirectory(0);
   Graph_Graph01158->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01158->SetLineColor(ci);
   Graph_Graph01158->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01158->GetXaxis()->SetRange(0,101);
   Graph_Graph01158->GetXaxis()->CenterTitle(true);
   Graph_Graph01158->GetXaxis()->SetLabelFont(42);
   Graph_Graph01158->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01158->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01158->GetXaxis()->SetTitleFont(42);
   Graph_Graph01158->GetYaxis()->SetTitle("c / 500 MeV");
   Graph_Graph01158->GetYaxis()->CenterTitle(true);
   Graph_Graph01158->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01158->GetYaxis()->SetLabelFont(42);
   Graph_Graph01158->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01158->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01158->GetYaxis()->SetTitleFont(42);
   Graph_Graph01158->GetZaxis()->SetLabelFont(42);
   Graph_Graph01158->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01158->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01158);
   
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
