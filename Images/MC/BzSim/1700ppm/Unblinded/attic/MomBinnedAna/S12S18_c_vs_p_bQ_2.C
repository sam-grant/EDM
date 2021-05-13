void S12S18_c_vs_p_bQ_2()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  4 14:33:29 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(123,-0.7520788,2877,0.0201874);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1131[9] = {
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300};
   Double_t Graph0_fy1131[9] = {
   -0.5769245,
   -0.5672996,
   -0.4219537,
   -0.4155175,
   -0.3361969,
   -0.2411346,
   -0.1931539,
   -0.1296617,
   -0.1340394};
   Double_t Graph0_fex1131[9] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t Graph0_fey1131[9] = {
   0.04644325,
   0.02638886,
   0.02262946,
   0.02092907,
   0.02004205,
   0.01957458,
   0.02003423,
   0.02113808,
   0.02289171};
   TGraphErrors *gre = new TGraphErrors(9,Graph0_fx1131,Graph0_fy1131,Graph0_fex1131,Graph0_fey1131);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01131 = new TH1F("Graph_Graph01131","S12S18",100,420,2580);
   Graph_Graph01131->SetMinimum(-0.6748522);
   Graph_Graph01131->SetMaximum(-0.05703922);
   Graph_Graph01131->SetDirectory(0);
   Graph_Graph01131->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01131->SetLineColor(ci);
   Graph_Graph01131->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01131->GetXaxis()->SetRange(0,101);
   Graph_Graph01131->GetXaxis()->CenterTitle(true);
   Graph_Graph01131->GetXaxis()->SetLabelFont(42);
   Graph_Graph01131->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01131->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01131->GetXaxis()->SetTitleFont(42);
   Graph_Graph01131->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01131->GetYaxis()->CenterTitle(true);
   Graph_Graph01131->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01131->GetYaxis()->SetLabelFont(42);
   Graph_Graph01131->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01131->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01131->GetYaxis()->SetTitleFont(42);
   Graph_Graph01131->GetZaxis()->SetLabelFont(42);
   Graph_Graph01131->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01131->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01131);
   
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
