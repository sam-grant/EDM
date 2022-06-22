void S12S18_thetaYMaxDiff_vs_p_Run-1d_250MeV_1000_2500MeV_earlyTimes_randomised_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 12 11:32:17 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(785.2282,36.80842,2704.209,239.8969);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1114[11] = {
   456.1818,
   654.8556,
   884.0354,
   1127.579,
   1373.427,
   1619.978,
   1866.931,
   2116.345,
   2359.544,
   2607.526,
   2781.946};
   Double_t Graph0_fy1114[11] = {
   183.7507,
   183.7507,
   183.0142,
   182.6459,
   174.9129,
   161.6564,
   145.4539,
   97.58301,
   90.21826,
   69.96518,
   48.23915};
   Double_t Graph0_fex1114[11] = {
   0.08787385,
   0.06168673,
   0.04108342,
   0.03725922,
   0.03658865,
   0.04039006,
   0.04912782,
   0.06164003,
   0.08047278,
   0.1114733,
   0.1852503};
   Double_t Graph0_fey1114[11] = {
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1114,Graph0_fy1114,Graph0_fex1114,Graph0_fey1114);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01114 = new TH1F("Graph_Graph01114","S12S18",100,223.4902,3014.735);
   Graph_Graph01114->SetMinimum(57.11727);
   Graph_Graph01114->SetMaximum(219.588);
   Graph_Graph01114->SetDirectory(0);
   Graph_Graph01114->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01114->SetLineColor(ci);
   Graph_Graph01114->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01114->GetXaxis()->SetRange(28,82);
   Graph_Graph01114->GetXaxis()->CenterTitle(true);
   Graph_Graph01114->GetXaxis()->SetLabelFont(42);
   Graph_Graph01114->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01114->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01114->GetXaxis()->SetTitleFont(42);
   Graph_Graph01114->GetYaxis()->SetTitle("(#Delta#theta_{y})_{MAX} [mrad] / 250 MeV");
   Graph_Graph01114->GetYaxis()->CenterTitle(true);
   Graph_Graph01114->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01114->GetYaxis()->SetLabelFont(42);
   Graph_Graph01114->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01114->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01114->GetYaxis()->SetTitleFont(42);
   Graph_Graph01114->GetZaxis()->SetLabelFont(42);
   Graph_Graph01114->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01114->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01114);
   
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
