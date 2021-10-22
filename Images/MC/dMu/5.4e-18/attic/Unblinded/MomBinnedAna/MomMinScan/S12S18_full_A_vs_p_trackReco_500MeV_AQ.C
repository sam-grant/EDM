void S12S18_full_A_vs_p_trackReco_500MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun 15 13:08:28 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-374.6875,0.09730435,3097.188,0.3037655);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1190[6] = {
   0,
   500,
   1000,
   1500,
   2000,
   2500};
   Double_t Graph0_fy1190[6] = {
   0.185569,
   0.1889253,
   0.152359,
   0.2003197,
   0.1970792,
   0.2180594};
   Double_t Graph0_fex1190[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1190[6] = {
   0.01840538,
   0.01850007,
   0.02064442,
   0.02655563,
   0.03832786,
   0.05129582};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1190,Graph0_fy1190,Graph0_fex1190,Graph0_fey1190);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01190 = new TH1F("Graph_Graph01190","S12S18",100,0,2750);
   Graph_Graph01190->SetMinimum(0.1179505);
   Graph_Graph01190->SetMaximum(0.2831193);
   Graph_Graph01190->SetDirectory(0);
   Graph_Graph01190->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01190->SetLineColor(ci);
   Graph_Graph01190->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_Graph01190->GetXaxis()->SetRange(0,100);
   Graph_Graph01190->GetXaxis()->CenterTitle(true);
   Graph_Graph01190->GetXaxis()->SetLabelFont(42);
   Graph_Graph01190->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01190->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01190->GetXaxis()->SetTitleFont(42);
   Graph_Graph01190->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01190->GetYaxis()->CenterTitle(true);
   Graph_Graph01190->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01190->GetYaxis()->SetLabelFont(42);
   Graph_Graph01190->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01190->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01190->GetYaxis()->SetTitleFont(42);
   Graph_Graph01190->GetZaxis()->SetLabelFont(42);
   Graph_Graph01190->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01190->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01190);
   
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
