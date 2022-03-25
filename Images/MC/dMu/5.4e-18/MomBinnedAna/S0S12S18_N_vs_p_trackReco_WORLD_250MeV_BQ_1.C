void S0S12S18_N_vs_p_trackReco_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 02:59:17 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-163.8426,-461533.1,3375.838,4672620);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1214[11] = {
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
   Double_t Graph0_fy1214[11] = {
   284356,
   1734988,
   3566836,
   3786336,
   3317433,
   2703895,
   1976332,
   1276688,
   757755,
   478332,
   57647};
   Double_t Graph0_fex1214[11] = {
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
   Double_t Graph0_fey1214[11] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1214,Graph0_fy1214,Graph0_fex1214,Graph0_fey1214);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01214 = new TH1F("Graph_Graph01214","S0S12S18_",100,218.1625,3021.87);
   Graph_Graph01214->SetMinimum(51882.3);
   Graph_Graph01214->SetMaximum(4159205);
   Graph_Graph01214->SetDirectory(0);
   Graph_Graph01214->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01214->SetLineColor(ci);
   Graph_Graph01214->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01214->GetXaxis()->SetRange(0,100);
   Graph_Graph01214->GetXaxis()->CenterTitle(true);
   Graph_Graph01214->GetXaxis()->SetLabelFont(42);
   Graph_Graph01214->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01214->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01214->GetXaxis()->SetTitleFont(42);
   Graph_Graph01214->GetYaxis()->SetTitle("Positrons / 250 MeV");
   Graph_Graph01214->GetYaxis()->CenterTitle(true);
   Graph_Graph01214->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01214->GetYaxis()->SetLabelFont(42);
   Graph_Graph01214->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01214->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01214->GetYaxis()->SetTitleFont(42);
   Graph_Graph01214->GetZaxis()->SetLabelFont(42);
   Graph_Graph01214->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01214->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01214);
   
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
