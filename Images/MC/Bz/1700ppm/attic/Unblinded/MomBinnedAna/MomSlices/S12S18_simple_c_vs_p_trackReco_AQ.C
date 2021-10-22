void S12S18_simple_c_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May 13 01:18:36 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-412.5,-3.716773,3712.5,0.7165865);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1277[15] = {
   100,
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t Graph0_fy1277[15] = {
   -2.004476,
   -2.861951,
   -1.470885,
   -0.5882166,
   -0.4058817,
   -0.3245488,
   -0.2519322,
   -0.2028677,
   -0.1250288,
   -0.1431618,
   -0.1355083,
   -0.128736,
   -0.056481,
   -0.0945902,
   -0.0590564};
   Double_t Graph0_fex1277[15] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t Graph0_fey1277[15] = {
   0.7117364,
   0.1159281,
   0.03960426,
   0.03070979,
   0.02715967,
   0.02512714,
   0.02348899,
   0.02228121,
   0.02159396,
   0.02160689,
   0.02229491,
   0.02380368,
   0.02563681,
   0.02604014,
   0.03674965};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1277,Graph0_fy1277,Graph0_fex1277,Graph0_fey1277);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01277 = new TH1F("Graph_Graph01277","S12S18",100,0,3300);
   Graph_Graph01277->SetMinimum(-3.273437);
   Graph_Graph01277->SetMaximum(0.2732505);
   Graph_Graph01277->SetDirectory(0);
   Graph_Graph01277->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01277->SetLineColor(ci);
   Graph_Graph01277->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01277->GetXaxis()->CenterTitle(true);
   Graph_Graph01277->GetXaxis()->SetLabelFont(42);
   Graph_Graph01277->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01277->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01277->GetXaxis()->SetTitleFont(42);
   Graph_Graph01277->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01277->GetYaxis()->CenterTitle(true);
   Graph_Graph01277->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01277->GetYaxis()->SetLabelFont(42);
   Graph_Graph01277->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01277->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01277->GetYaxis()->SetTitleFont(42);
   Graph_Graph01277->GetZaxis()->SetLabelFont(42);
   Graph_Graph01277->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01277->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01277);
   
   gre->Draw("ap");
   
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
