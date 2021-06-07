void S12S18_full_A_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May 21 13:26:11 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(250,0.1271741,3550,0.2886787);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1434[12] = {
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
   Double_t Graph0_fy1434[12] = {
   0.166794,
   0.1677634,
   0.1686652,
   0.1694178,
   0.1721221,
   0.1745212,
   0.1754604,
   0.1782267,
   0.1733417,
   0.1834492,
   0.2217444,
   0.218618};
   Double_t Graph0_fex1434[12] = {
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
   Double_t Graph0_fey1434[12] = {
   0.01258059,
   0.01264464,
   0.01283626,
   0.01312732,
   0.01359619,
   0.01431968,
   0.01538927,
   0.01695629,
   0.01925018,
   0.02276176,
   0.02887447,
   0.04314328};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1434,Graph0_fy1434,Graph0_fex1434,Graph0_fey1434);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01434 = new TH1F("Graph_Graph01434","S12S18",100,580,3220);
   Graph_Graph01434->SetMinimum(0.1433246);
   Graph_Graph01434->SetMaximum(0.2725283);
   Graph_Graph01434->SetDirectory(0);
   Graph_Graph01434->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01434->SetLineColor(ci);
   Graph_Graph01434->GetXaxis()->SetTitle("p_{max} [MeV]");
   Graph_Graph01434->GetXaxis()->SetRange(1,100);
   Graph_Graph01434->GetXaxis()->CenterTitle(true);
   Graph_Graph01434->GetXaxis()->SetLabelFont(42);
   Graph_Graph01434->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01434->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01434->GetXaxis()->SetTitleFont(42);
   Graph_Graph01434->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01434->GetYaxis()->CenterTitle(true);
   Graph_Graph01434->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01434->GetYaxis()->SetLabelFont(42);
   Graph_Graph01434->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01434->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01434->GetYaxis()->SetTitleFont(42);
   Graph_Graph01434->GetZaxis()->SetLabelFont(42);
   Graph_Graph01434->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01434->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01434);
   
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
