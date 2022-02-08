void S0S12S18_eAEDM_vs_p_thetaY_trackReco_WORLD_500MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Feb  7 15:00:20 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-126.9879,-0.03385098,3212.571,0.412415);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1165[6] = {
   451.5331,
   805.4564,
   1238.744,
   1725.082,
   2208.043,
   2633.959};
   Double_t Graph0_fy1165[6] = {
   0.1337628,
   0.02292205,
   0.0146656,
   0.01345689,
   0.01469844,
   0.01923575};
   Double_t Graph0_fex1165[6] = {
   0.1005982,
   0.09083834,
   0.08817913,
   0.1077158,
   0.1604039,
   0.1922119};
   Double_t Graph0_fey1165[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1165,Graph0_fy1165,Graph0_fex1165,Graph0_fey1165);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01165 = new TH1F("Graph_Graph01165","S0S12S18_",100,233.1606,2852.423);
   Graph_Graph01165->SetMinimum(0.01077562);
   Graph_Graph01165->SetMaximum(0.3677884);
   Graph_Graph01165->SetDirectory(0);
   Graph_Graph01165->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01165->SetLineColor(ci);
   Graph_Graph01165->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01165->GetXaxis()->SetRange(0,101);
   Graph_Graph01165->GetXaxis()->CenterTitle(true);
   Graph_Graph01165->GetXaxis()->SetLabelFont(42);
   Graph_Graph01165->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01165->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01165->GetXaxis()->SetTitleFont(42);
   Graph_Graph01165->GetYaxis()->SetTitle("#deltaA_{EDM} [mrad] / 500 MeV");
   Graph_Graph01165->GetYaxis()->CenterTitle(true);
   Graph_Graph01165->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01165->GetYaxis()->SetLabelFont(42);
   Graph_Graph01165->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01165->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01165->GetYaxis()->SetTitleFont(42);
   Graph_Graph01165->GetZaxis()->SetLabelFont(42);
   Graph_Graph01165->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01165->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01165);
   
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
