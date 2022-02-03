void S12_c_vs_p_A_trackReco_WORLD_250MeV_BQ_HS_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb  1 16:31:02 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.3926,-8.105511e-05,3406.902,8.759294e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1097[11] = {
   451.8035,
   653.3616,
   880.3325,
   1123.156,
   1371.14,
   1620.289,
   1866.778,
   2114.882,
   2362.575,
   2614.184,
   2787.586};
   Double_t Graph0_fy1097[11] = {
   1.563704e-05,
   -1.803425e-07,
   -1.242095e-07,
   -7.146559e-08,
   -1.308868e-07,
   -8.835858e-08,
   -1.089209e-08,
   3.147015e-07,
   -3.449425e-07,
   -6.799363e-07,
   -2.345161e-05};
   Double_t Graph0_fex1097[11] = {
   0.1188671,
   0.1003469,
   0.07271107,
   0.071023,
   0.07561683,
   0.08358001,
   0.09743321,
   0.1220673,
   0.1594245,
   0.1959089,
   0.2394042};
   Double_t Graph0_fey1097[11] = {
   1.363893e-06,
   9.135731e-08,
   3.071425e-08,
   2.789472e-08,
   3.372205e-08,
   4.652604e-08,
   7.718458e-08,
   1.629872e-07,
   4.178001e-07,
   9.278147e-07,
   2.441447e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1097,Graph0_fy1097,Graph0_fex1097,Graph0_fey1097);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01097 = new TH1F("Graph_Graph01097","S12_",100,218.0706,3021.439);
   Graph_Graph01097->SetMinimum(-6.419031e-05);
   Graph_Graph01097->SetMaximum(7.072813e-05);
   Graph_Graph01097->SetDirectory(0);
   Graph_Graph01097->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01097->SetLineColor(ci);
   Graph_Graph01097->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01097->GetXaxis()->SetRange(0,101);
   Graph_Graph01097->GetXaxis()->CenterTitle(true);
   Graph_Graph01097->GetXaxis()->SetLabelFont(42);
   Graph_Graph01097->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01097->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01097->GetXaxis()->SetTitleFont(42);
   Graph_Graph01097->GetYaxis()->SetTitle("c / 250 MeV");
   Graph_Graph01097->GetYaxis()->CenterTitle(true);
   Graph_Graph01097->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01097->GetYaxis()->SetLabelFont(42);
   Graph_Graph01097->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01097->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01097->GetYaxis()->SetTitleFont(42);
   Graph_Graph01097->GetZaxis()->SetLabelFont(42);
   Graph_Graph01097->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01097->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01097);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
