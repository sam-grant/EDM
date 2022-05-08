void S12S18_chi2NDF_vs_p_Run-1c_250MeV_1000_2500_MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun May  8 18:10:14 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(785.1601,0.2678013,2703.761,2.174881);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1108[11] = {
   456.169,
   654.5552,
   883.9874,
   1127.416,
   1373.27,
   1619.964,
   1866.887,
   2116.045,
   2359.597,
   2607.039,
   2781.499};
   Double_t Graph0_fy1108[11] = {
   1.174199,
   0.8590662,
   1.274243,
   1.658187,
   1.210202,
   0.8652879,
   1.478886,
   1.176063,
   0.5726305,
   0.8835857,
   0.8081686};
   Double_t Graph0_fex1108[11] = {
   0.07806059,
   0.05494614,
   0.03668293,
   0.03331732,
   0.03291709,
   0.0364692,
   0.04438718,
   0.0559475,
   0.07338766,
   0.102104,
   0.1694422};
   Double_t Graph0_fey1108[11] = {
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
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1108,Graph0_fy1108,Graph0_fex1108,Graph0_fey1108);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01108 = new TH1F("Graph_Graph01108","S12S18",100,223.5332,3014.226);
   Graph_Graph01108->SetMinimum(0.4585093);
   Graph_Graph01108->SetMaximum(1.984173);
   Graph_Graph01108->SetDirectory(0);
   Graph_Graph01108->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01108->SetLineColor(ci);
   Graph_Graph01108->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01108->GetXaxis()->SetRange(28,82);
   Graph_Graph01108->GetXaxis()->CenterTitle(true);
   Graph_Graph01108->GetXaxis()->SetLabelFont(42);
   Graph_Graph01108->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01108->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01108->GetXaxis()->SetTitleFont(42);
   Graph_Graph01108->GetYaxis()->SetTitle("#chi^{2}_{NDF} / 250 MeV");
   Graph_Graph01108->GetYaxis()->CenterTitle(true);
   Graph_Graph01108->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01108->GetYaxis()->SetLabelFont(42);
   Graph_Graph01108->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01108->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01108->GetYaxis()->SetTitleFont(42);
   Graph_Graph01108->GetZaxis()->SetLabelFont(42);
   Graph_Graph01108->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01108->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01108);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4253015,0.94,0.5746985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
