void Test_Run4_2021()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May 28 00:00:59 2021) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-3.1375,-0.7338729,28.2375,1.371481);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1001[22] = {
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9,
   10,
   11,
   12,
   13,
   14,
   15,
   16,
   17,
   18,
   19,
   20,
   21,
   22,
   23};
   Double_t Graph0_fy1001[22] = {
   -0.3779626,
   0.764153,
   -0.1453952,
   0.9916102,
   0.5597995,
   0.9714162,
   0.2731981,
   -0.342596,
   0.09876095,
   -0.3472759,
   -0.1719897,
   0.4609955,
   -0.08810693,
   0.7446305,
   -0.09317,
   0.8215451,
   1.015557,
   0.04468465,
   0.1933401,
   0.2350456,
   0.1826728,
   -0.001134083};
   Double_t Graph0_fex1001[22] = {
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
   Double_t Graph0_fey1001[22] = {
   0.005017991,
   0.004863338,
   0.004542574,
   0.004555397,
   0.004562071,
   0.00456385,
   0.004569277,
   0.004516409,
   0.004941315,
   0.00594699,
   0.005184392,
   0.008284341,
   0.005546915,
   0.005065319,
   0.005029632,
   0.00520751,
   0.005031904,
   0.00522774,
   0.005059784,
   0.005058954,
   0.004834576,
   0.00447199};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
   gre->SetName("Graph0");
   gre->SetTitle(";Calo;#LTy_{calo i}#GT #minus #LTy_{calo 1}#GT;");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","",100,0,25.1);
   Graph_Graph1001->SetMinimum(-0.5233375);
   Graph_Graph1001->SetMaximum(1.160945);
   Graph_Graph1001->SetDirectory(0);
   Graph_Graph1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1001->SetLineColor(ci);
   Graph_Graph1001->GetXaxis()->SetTitle("Calo");
   Graph_Graph1001->GetXaxis()->CenterTitle(true);
   Graph_Graph1001->GetXaxis()->SetLabelFont(42);
   Graph_Graph1001->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1001->GetXaxis()->SetTitleFont(42);
   Graph_Graph1001->GetYaxis()->SetTitle("#LTy_{calo i}#GT #minus #LTy_{calo 1}#GT");
   Graph_Graph1001->GetYaxis()->CenterTitle(true);
   Graph_Graph1001->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1001->GetYaxis()->SetLabelFont(42);
   Graph_Graph1001->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1001->GetYaxis()->SetTitleFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1001);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
