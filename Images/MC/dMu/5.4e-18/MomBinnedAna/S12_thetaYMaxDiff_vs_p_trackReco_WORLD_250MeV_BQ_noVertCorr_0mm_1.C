void S12_thetaYMaxDiff_vs_p_trackReco_WORLD_250MeV_BQ_noVertCorr_0mm_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Apr  5 17:19:31 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-164.3781,-12.10446,3376.081,214.267);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1106[11] = {
   451.5498,
   653.3939,
   880.0628,
   1123.153,
   1371.24,
   1619.947,
   1867.163,
   2114.835,
   2362.441,
   2614.458,
   2788.038};
   Double_t Graph0_fy1106[11] = {
   176.0177,
   163.8658,
   144.7175,
   117.8361,
   96.4783,
   80.27584,
   70.33342,
   62.60042,
   63.3369,
   40.13792,
   26.14488};
   Double_t Graph0_fex1106[11] = {
   0.1450545,
   0.1227995,
   0.08906524,
   0.08706518,
   0.09294933,
   0.1024967,
   0.1195046,
   0.1498014,
   0.1962366,
   0.2402987,
   0.30333};
   Double_t Graph0_fey1106[11] = {
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
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1106,Graph0_fy1106,Graph0_fex1106,Graph0_fey1106);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01106 = new TH1F("Graph_Graph01106","S12_",100,217.7111,3022.035);
   Graph_Graph01106->SetMinimum(10.53268);
   Graph_Graph01106->SetMaximum(191.6299);
   Graph_Graph01106->SetDirectory(0);
   Graph_Graph01106->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01106->SetLineColor(ci);
   Graph_Graph01106->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01106->GetXaxis()->SetRange(0,100);
   Graph_Graph01106->GetXaxis()->CenterTitle(true);
   Graph_Graph01106->GetXaxis()->SetLabelFont(42);
   Graph_Graph01106->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01106->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01106->GetXaxis()->SetTitleFont(42);
   Graph_Graph01106->GetYaxis()->SetTitle("(#Delta#theta_{y})_{MAX} [mrad] / 250 MeV");
   Graph_Graph01106->GetYaxis()->CenterTitle(true);
   Graph_Graph01106->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01106->GetYaxis()->SetLabelFont(42);
   Graph_Graph01106->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01106->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01106->GetYaxis()->SetTitleFont(42);
   Graph_Graph01106->GetZaxis()->SetLabelFont(42);
   Graph_Graph01106->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01106->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01106);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
