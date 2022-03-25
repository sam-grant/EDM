void S0S12S18_c_vs_p_thetaY_trackReco_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 02:59:17 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-163.8426,-1.774012,3375.838,6.26911);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1205[11] = {
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
   Double_t Graph0_fy1205[11] = {
   4.874853,
   -0.1634844,
   -0.4231737,
   -0.3296566,
   -0.2529462,
   -0.2549614,
   -0.1720876,
   -0.1160085,
   -0.118806,
   -0.07435848,
   -0.1067531};
   Double_t Graph0_fex1205[11] = {
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
   Double_t Graph0_fey1205[11] = {
   0.05373655,
   0.01798928,
   0.01031773,
   0.008467842,
   0.007764205,
   0.007417844,
   0.007494852,
   0.007990274,
   0.008774435,
   0.009090406,
   0.02201196};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1205,Graph0_fy1205,Graph0_fex1205,Graph0_fey1205);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01205 = new TH1F("Graph_Graph01205","S0S12S18_",100,218.1625,3021.87);
   Graph_Graph01205->SetMinimum(-0.9696995);
   Graph_Graph01205->SetMaximum(5.464798);
   Graph_Graph01205->SetDirectory(0);
   Graph_Graph01205->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01205->SetLineColor(ci);
   Graph_Graph01205->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01205->GetXaxis()->SetRange(0,100);
   Graph_Graph01205->GetXaxis()->CenterTitle(true);
   Graph_Graph01205->GetXaxis()->SetLabelFont(42);
   Graph_Graph01205->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01205->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01205->GetXaxis()->SetTitleFont(42);
   Graph_Graph01205->GetYaxis()->SetTitle("c [mrad] / 250 MeV");
   Graph_Graph01205->GetYaxis()->CenterTitle(true);
   Graph_Graph01205->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01205->GetYaxis()->SetLabelFont(42);
   Graph_Graph01205->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01205->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01205->GetYaxis()->SetTitleFont(42);
   Graph_Graph01205->GetZaxis()->SetLabelFont(42);
   Graph_Graph01205->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01205->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01205);
   
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
