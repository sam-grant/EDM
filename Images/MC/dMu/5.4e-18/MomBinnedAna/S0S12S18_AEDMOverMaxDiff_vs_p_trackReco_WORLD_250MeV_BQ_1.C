void S0S12S18_AEDMOverMaxDiff_vs_p_trackReco_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 02:59:17 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-163.8426,-0.001543773,3375.838,0.003320619);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1218[11] = {
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
   Double_t Graph0_fy1218[11] = {
   0.0002196927,
   0.0007777354,
   0.0007476783,
   0.001037877,
   0.001260264,
   0.001446704,
   0.001627789,
   0.001599084,
   0.001574175,
   0.002224721,
   0.0003376183};
   Double_t Graph0_fex1218[11] = {
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
   Double_t Graph0_fey1218[11] = {
   0.0004469406,
   0.000173988,
   9.725387e-05,
   0.0001073631,
   0.0001036573,
   0.0001081496,
   0.0001445295,
   0.0001740129,
   0.0002251656,
   0.0002851657,
   0.001070659};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1218,Graph0_fy1218,Graph0_fex1218,Graph0_fey1218);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01218 = new TH1F("Graph_Graph01218","S0S12S18_",100,218.1625,3021.87);
   Graph_Graph01218->SetMinimum(-0.001057334);
   Graph_Graph01218->SetMaximum(0.00283418);
   Graph_Graph01218->SetDirectory(0);
   Graph_Graph01218->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01218->SetLineColor(ci);
   Graph_Graph01218->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01218->GetXaxis()->SetRange(0,100);
   Graph_Graph01218->GetXaxis()->CenterTitle(true);
   Graph_Graph01218->GetXaxis()->SetLabelFont(42);
   Graph_Graph01218->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01218->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01218->GetXaxis()->SetTitleFont(42);
   Graph_Graph01218->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   Graph_Graph01218->GetYaxis()->CenterTitle(true);
   Graph_Graph01218->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01218->GetYaxis()->SetLabelFont(42);
   Graph_Graph01218->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01218->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01218->GetYaxis()->SetTitleFont(42);
   Graph_Graph01218->GetZaxis()->SetLabelFont(42);
   Graph_Graph01218->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01218->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01218);
   
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
