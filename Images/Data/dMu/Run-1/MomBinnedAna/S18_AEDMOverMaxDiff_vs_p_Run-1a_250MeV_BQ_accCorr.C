void S18_AEDMOverMaxDiff_vs_p_Run-1a_250MeV_BQ_accCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 11:39:32 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(471.122,-0.006909941,3018.211,0.03888233);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1082[11] = {
   456.1582,
   653.9005,
   883.5294,
   1127.34,
   1373.07,
   1619.549,
   1866.691,
   2115.977,
   2359.683,
   2607.205,
   2781.75};
   Double_t Graph0_fy1082[11] = {
   -0.002096139,
   0.001012321,
   0.002106684,
   0.001573542,
   -0.0001514022,
   0.000762891,
   -0.0008664098,
   0.004026981,
   -0.0002139964,
   -0.002994322,
   0.02068388};
   Double_t Graph0_fex1082[11] = {
   0.1558516,
   0.1097482,
   0.07461565,
   0.06792102,
   0.06754761,
   0.07503672,
   0.09225336,
   0.1164617,
   0.154189,
   0.2106078,
   0.3609038};
   Double_t Graph0_fey1082[11] = {
   -0.007300011,
   0.00230942,
   0.001494396,
   0.001333166,
   -0.001344594,
   0.001494539,
   -0.001823234,
   0.002299883,
   -0.003093805,
   -0.004380632,
   0.01896355};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1082,Graph0_fy1082,Graph0_fex1082,Graph0_fey1082);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01082 = new TH1F("Graph_Graph01082","S18",100,223.3915,3014.722);
   Graph_Graph01082->SetMinimum(-0.002330714);
   Graph_Graph01082->SetMaximum(0.0343031);
   Graph_Graph01082->SetDirectory(0);
   Graph_Graph01082->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01082->SetLineColor(ci);
   Graph_Graph01082->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01082->GetXaxis()->SetRange(19,91);
   Graph_Graph01082->GetXaxis()->CenterTitle(true);
   Graph_Graph01082->GetXaxis()->SetLabelFont(42);
   Graph_Graph01082->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01082->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01082->GetXaxis()->SetTitleFont(42);
   Graph_Graph01082->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   Graph_Graph01082->GetYaxis()->CenterTitle(true);
   Graph_Graph01082->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01082->GetYaxis()->SetLabelFont(42);
   Graph_Graph01082->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01082->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01082->GetYaxis()->SetTitleFont(42);
   Graph_Graph01082->GetZaxis()->SetLabelFont(42);
   Graph_Graph01082->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01082->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01082);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
