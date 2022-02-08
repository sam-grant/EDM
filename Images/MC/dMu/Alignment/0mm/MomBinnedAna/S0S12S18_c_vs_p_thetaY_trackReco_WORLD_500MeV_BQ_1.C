void S0S12S18_c_vs_p_thetaY_trackReco_WORLD_500MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Feb  7 14:58:38 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-126.7881,-2.349907,3212.301,18.93612);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1155[6] = {
   451.6584,
   805.6381,
   1238.897,
   1725.211,
   2208.051,
   2633.759};
   Double_t Graph0_fy1155[6] = {
   5.311585,
   -0.2674809,
   -0.2768173,
   -0.1945449,
   -0.1010991,
   -0.076676};
   Double_t Graph0_fex1155[6] = {
   0.1075792,
   0.09683756,
   0.09387275,
   0.1144096,
   0.1699271,
   0.203104};
   Double_t Graph0_fey1155[6] = {
   0.1017486,
   0.01730184,
   0.01104601,
   0.0101572,
   0.01135113,
   0.01585123};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1155,Graph0_fy1155,Graph0_fex1155,Graph0_fey1155);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01155 = new TH1F("Graph_Graph01155","S0S12S18_",100,233.3097,2852.203);
   Graph_Graph01155->SetMinimum(-0.2213046);
   Graph_Graph01155->SetMaximum(16.80752);
   Graph_Graph01155->SetDirectory(0);
   Graph_Graph01155->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01155->SetLineColor(ci);
   Graph_Graph01155->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01155->GetXaxis()->SetRange(0,101);
   Graph_Graph01155->GetXaxis()->CenterTitle(true);
   Graph_Graph01155->GetXaxis()->SetLabelFont(42);
   Graph_Graph01155->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01155->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01155->GetXaxis()->SetTitleFont(42);
   Graph_Graph01155->GetYaxis()->SetTitle("c [mrad] / 500 MeV");
   Graph_Graph01155->GetYaxis()->CenterTitle(true);
   Graph_Graph01155->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01155->GetYaxis()->SetLabelFont(42);
   Graph_Graph01155->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01155->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01155->GetYaxis()->SetTitleFont(42);
   Graph_Graph01155->GetZaxis()->SetLabelFont(42);
   Graph_Graph01155->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01155->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01155);
   
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
