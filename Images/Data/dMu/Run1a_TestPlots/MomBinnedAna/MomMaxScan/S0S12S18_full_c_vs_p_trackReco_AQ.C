void S0S12S18_full_c_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jun  7 14:58:44 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(250,-0.07468114,3550,0.8314137);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1544[12] = {
   3000,
   2800,
   2600,
   2400,
   2200,
   2000,
   1800,
   1600,
   1400,
   1200,
   1000,
   800};
   Double_t Graph0_fy1544[12] = {
   0.02265898,
   0.02228567,
   0.02159599,
   0.02365018,
   0.03035822,
   0.04411406,
   0.06865402,
   0.1201201,
   0.2215966,
   0.4219927,
   0.6644715,
   0.506794};
   Double_t Graph0_fex1544[12] = {
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
   0,
   0};
   Double_t Graph0_fey1544[12] = {
   0.003819898,
   0.003835895,
   0.003897822,
   0.003999613,
   0.004178058,
   0.004444354,
   0.004843315,
   0.005452663,
   0.006389633,
   0.007903743,
   0.01059578,
   0.01705195};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1544,Graph0_fy1544,Graph0_fex1544,Graph0_fey1544);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01544 = new TH1F("Graph_Graph01544","S0S12S18",100,580,3220);
   Graph_Graph01544->SetMinimum(0.01592835);
   Graph_Graph01544->SetMaximum(0.7408042);
   Graph_Graph01544->SetDirectory(0);
   Graph_Graph01544->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01544->SetLineColor(ci);
   Graph_Graph01544->GetXaxis()->SetTitle("p_{max} [MeV]");
   Graph_Graph01544->GetXaxis()->SetRange(1,100);
   Graph_Graph01544->GetXaxis()->CenterTitle(true);
   Graph_Graph01544->GetXaxis()->SetLabelFont(42);
   Graph_Graph01544->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01544->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01544->GetXaxis()->SetTitleFont(42);
   Graph_Graph01544->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01544->GetYaxis()->CenterTitle(true);
   Graph_Graph01544->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01544->GetYaxis()->SetLabelFont(42);
   Graph_Graph01544->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01544->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01544->GetYaxis()->SetTitleFont(42);
   Graph_Graph01544->GetZaxis()->SetLabelFont(42);
   Graph_Graph01544->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01544->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01544);
   
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
