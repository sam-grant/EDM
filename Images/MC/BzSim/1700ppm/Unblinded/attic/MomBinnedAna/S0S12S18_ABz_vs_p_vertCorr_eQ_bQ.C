void S0S12S18_ABz_vs_p_vertCorr_eQ_bQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  4 14:03:15 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(488,0.04861306,1712,0.3292527);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1120[8] = {
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450};
   Double_t Graph0_fy1120[8] = {
   0.2130187,
   0.19552,
   0.2417095,
   0.1332498,
   0.1559246,
   0.1406141,
   0.1909468,
   0.1779649};
   Double_t Graph0_fex1120[8] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t Graph0_fey1120[8] = {
   0.05371011,
   0.04582392,
   0.04076997,
   0.03786349,
   0.0360889,
   0.03467824,
   0.03368782,
   0.0330064};
   TGraphErrors *gre = new TGraphErrors(8,Graph0_fx1120,Graph0_fy1120,Graph0_fex1120,Graph0_fey1120);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01120 = new TH1F("Graph_Graph01120","S0S12S18",100,620,1580);
   Graph_Graph01120->SetMinimum(0.07667703);
   Graph_Graph01120->SetMaximum(0.3011888);
   Graph_Graph01120->SetDirectory(0);
   Graph_Graph01120->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01120->SetLineColor(ci);
   Graph_Graph01120->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_Graph01120->GetXaxis()->SetRange(0,101);
   Graph_Graph01120->GetXaxis()->CenterTitle(true);
   Graph_Graph01120->GetXaxis()->SetLabelFont(42);
   Graph_Graph01120->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01120->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01120->GetXaxis()->SetTitleFont(42);
   Graph_Graph01120->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_Graph01120->GetYaxis()->CenterTitle(true);
   Graph_Graph01120->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01120->GetYaxis()->SetLabelFont(42);
   Graph_Graph01120->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01120->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01120->GetYaxis()->SetTitleFont(42);
   Graph_Graph01120->GetZaxis()->SetLabelFont(42);
   Graph_Graph01120->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01120->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01120);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4033166,0.94,0.5966834,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
