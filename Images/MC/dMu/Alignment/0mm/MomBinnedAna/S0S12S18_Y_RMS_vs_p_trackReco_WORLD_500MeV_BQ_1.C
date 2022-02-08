void S0S12S18_Y_RMS_vs_p_trackReco_WORLD_500MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Feb  7 14:58:38 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-126.7881,9.21958,3212.301,16.39179);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1162[6] = {
   451.6584,
   805.6381,
   1238.897,
   1725.211,
   2208.051,
   2633.759};
   Double_t Graph0_fy1162[6] = {
   12.98681,
   12.93848,
   12.82586,
   12.72767,
   12.66395,
   12.56174};
   Double_t Graph0_fex1162[6] = {
   0.1075792,
   0.09683756,
   0.09387275,
   0.1144096,
   0.1699271,
   0.203104};
   Double_t Graph0_fey1162[6] = {
   0.02994962,
   0.006929613,
   0.005949021,
   0.007268724,
   0.01088976,
   0.02092009};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1162,Graph0_fy1162,Graph0_fex1162,Graph0_fey1162);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01162 = new TH1F("Graph_Graph01162","S0S12S18_",100,233.3097,2852.203);
   Graph_Graph01162->SetMinimum(9.936801);
   Graph_Graph01162->SetMaximum(15.67457);
   Graph_Graph01162->SetDirectory(0);
   Graph_Graph01162->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01162->SetLineColor(ci);
   Graph_Graph01162->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01162->GetXaxis()->SetRange(0,101);
   Graph_Graph01162->GetXaxis()->CenterTitle(true);
   Graph_Graph01162->GetXaxis()->SetLabelFont(42);
   Graph_Graph01162->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01162->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01162->GetXaxis()->SetTitleFont(42);
   Graph_Graph01162->GetYaxis()->SetTitle("#sigma_{y} [mm] / 500 MeV");
   Graph_Graph01162->GetYaxis()->CenterTitle(true);
   Graph_Graph01162->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01162->GetYaxis()->SetLabelFont(42);
   Graph_Graph01162->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01162->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01162->GetYaxis()->SetTitleFont(42);
   Graph_Graph01162->GetZaxis()->SetLabelFont(42);
   Graph_Graph01162->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01162->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01162);
   
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
