#ifdef __CLING__
#pragma cling optimize(0)
#endif
void S12_Ag2_vs_p_Run-1a_250MeV_1000_2500MeV_randomised_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct 11 15:27:44 2022) by ROOT version 6.26/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(784.9134,-0.02942238,2704.094,0.02396314);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1041[11] = {
   455.906,
   656.0657,
   884.315,
   1127.636,
   1373.565,
   1620.32,
   1867.209,
   2116.296,
   2359.99,
   2607.572,
   2781.709};
   Double_t Graph0_fy1041[11] = {
   0.336584,
   0.02123408,
   0.008367717,
   0.005620773,
   0.01566612,
   0.001819189,
   -0.03026358,
   -0.01609341,
   -0.02276937,
   0.0145004,
   0.01356298};
   Double_t Graph0_fex1041[11] = {
   0.1611973,
   0.1117553,
   0.07355982,
   0.06671037,
   0.06510506,
   0.07171309,
   0.0861465,
   0.1077989,
   0.1395387,
   0.1943505,
   0.3152772};
   Double_t Graph0_fey1041[11] = {
   0.2289326,
   0.05725562,
   0.02872619,
   0.02179278,
   0.0188082,
   0.0179631,
   0.01827301,
   0.01938314,
   0.02157294,
   0.02553194,
   0.09760976};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1041,Graph0_fy1041,Graph0_fex1041,Graph0_fey1041);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01041 = new TH1F("Graph_Graph01041","S12",100,223.1169,3014.653);
   Graph_Graph01041->SetMinimum(-0.02408383);
   Graph_Graph01041->SetMaximum(0.01862459);
   Graph_Graph01041->SetDirectory(0);
   Graph_Graph01041->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01041->SetLineColor(ci);
   Graph_Graph01041->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01041->GetXaxis()->SetRange(28,82);
   Graph_Graph01041->GetXaxis()->CenterTitle(true);
   Graph_Graph01041->GetXaxis()->SetLabelFont(42);
   Graph_Graph01041->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01041->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01041->GetXaxis()->SetTitleFont(42);
   Graph_Graph01041->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph01041->GetYaxis()->CenterTitle(true);
   Graph_Graph01041->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01041->GetYaxis()->SetLabelFont(42);
   Graph_Graph01041->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01041->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01041->GetYaxis()->SetTitleFont(42);
   Graph_Graph01041->GetZaxis()->SetLabelFont(42);
   Graph_Graph01041->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01041->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01041);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
