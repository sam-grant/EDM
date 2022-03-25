void S18_theta_Y_RMS_vs_p_Run-1a_250MeV_BQ_accCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 11:39:32 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(471.122,-0.02063087,3018.211,38.86714);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1076[11] = {
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
   Double_t Graph0_fy1076[11] = {
   35.62874,
   29.01824,
   22.47846,
   19.85723,
   17.72103,
   15.36443,
   13.45736,
   11.24278,
   9.165793,
   6.963216,
   5.367661};
   Double_t Graph0_fex1076[11] = {
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
   Double_t Graph0_fey1076[11] = {
   0.1301238,
   0.03342091,
   0.0167717,
   0.01322178,
   0.01187593,
   0.01146797,
   0.0122494,
   0.01293927,
   0.01410556,
   0.01530366,
   0.0517896};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1076,Graph0_fy1076,Graph0_fex1076,Graph0_fey1076);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01076 = new TH1F("Graph_Graph01076","S18",100,223.3915,3014.722);
   Graph_Graph01076->SetMinimum(3.868146);
   Graph_Graph01076->SetMaximum(34.97836);
   Graph_Graph01076->SetDirectory(0);
   Graph_Graph01076->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01076->SetLineColor(ci);
   Graph_Graph01076->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01076->GetXaxis()->SetRange(19,91);
   Graph_Graph01076->GetXaxis()->CenterTitle(true);
   Graph_Graph01076->GetXaxis()->SetLabelFont(42);
   Graph_Graph01076->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01076->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01076->GetXaxis()->SetTitleFont(42);
   Graph_Graph01076->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad] / 250 MeV");
   Graph_Graph01076->GetYaxis()->CenterTitle(true);
   Graph_Graph01076->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01076->GetYaxis()->SetLabelFont(42);
   Graph_Graph01076->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01076->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01076->GetYaxis()->SetTitleFont(42);
   Graph_Graph01076->GetZaxis()->SetLabelFont(42);
   Graph_Graph01076->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01076->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01076);
   
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
