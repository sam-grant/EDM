void S0S12S18_AEDM_vs_p_A_trackReco_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 02:59:17 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-163.8426,-1.855752e-06,3375.838,6.610778e-06);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1209[11] = {
   451.8667,
   653.312,
   880.3161,
   1123.098,
   1371.082,
   1620.146,
   1866.982,
   2115.387,
   2362.989,
   2613.709,
   2788.105};
   Double_t Graph0_fy1209[11] = {
   -1.827384e-07,
   5.255389e-08,
   3.034143e-08,
   3.703416e-08,
   6.419506e-08,
   9.817786e-08,
   1.388958e-07,
   2.27818e-07,
   2.725342e-07,
   6.64203e-07,
   2.691627e-06};
   Double_t Graph0_fex1209[11] = {
   0.06192035,
   0.05229257,
   0.03786925,
   0.03698939,
   0.03950187,
   0.04367601,
   0.05102982,
   0.06353301,
   0.08237487,
   0.1006894,
   0.1228769};
   Double_t Graph0_fey1209[11] = {
   2.619251e-07,
   1.780217e-08,
   6.061235e-09,
   5.545322e-09,
   6.774911e-09,
   9.153065e-09,
   1.452813e-08,
   2.744518e-08,
   5.808387e-08,
   1.101618e-07,
   2.508062e-06};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1209,Graph0_fy1209,Graph0_fex1209,Graph0_fey1209);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01209 = new TH1F("Graph_Graph01209","S0S12S18_",100,218.1625,3021.87);
   Graph_Graph01209->SetMinimum(-1.009099e-06);
   Graph_Graph01209->SetMaximum(5.764125e-06);
   Graph_Graph01209->SetDirectory(0);
   Graph_Graph01209->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01209->SetLineColor(ci);
   Graph_Graph01209->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01209->GetXaxis()->SetRange(0,100);
   Graph_Graph01209->GetXaxis()->CenterTitle(true);
   Graph_Graph01209->GetXaxis()->SetLabelFont(42);
   Graph_Graph01209->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01209->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01209->GetXaxis()->SetTitleFont(42);
   Graph_Graph01209->GetYaxis()->SetTitle("A_{EDM} / 250 MeV");
   Graph_Graph01209->GetYaxis()->CenterTitle(true);
   Graph_Graph01209->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01209->GetYaxis()->SetLabelFont(42);
   Graph_Graph01209->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01209->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01209->GetYaxis()->SetTitleFont(42);
   Graph_Graph01209->GetZaxis()->SetLabelFont(42);
   Graph_Graph01209->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01209->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01209);
   
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
