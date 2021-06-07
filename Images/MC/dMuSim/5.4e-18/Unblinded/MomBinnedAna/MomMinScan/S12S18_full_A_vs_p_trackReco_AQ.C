void S12S18_full_A_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May 21 13:26:06 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-419.65,-0.1361328,3468.85,0.242468);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1408[15] = {
   0,
   200,
   400,
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200,
   2400,
   2600,
   2800};
   Double_t Graph0_fy1408[15] = {
   0.1548291,
   0.1556187,
   0.1554053,
   0.1667874,
   0.156909,
   0.1405441,
   0.1516162,
   0.1566828,
   0.1395181,
   0.1327415,
   0.1161085,
   0.1058438,
   0.1107158,
   0.07681269,
   -0.03022526};
   Double_t Graph0_fex1408[15] = {
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
   Double_t Graph0_fey1408[15] = {
   0.01280259,
   0.01280259,
   0.01276808,
   0.0125805,
   0.01245835,
   0.01251058,
   0.01275222,
   0.01322009,
   0.01397464,
   0.01510685,
   0.01669915,
   0.01891755,
   0.02205077,
   0.02700584,
   0.04280744};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1408,Graph0_fy1408,Graph0_fex1408,Graph0_fey1408);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01408 = new TH1F("Graph_Graph01408","S12S18",100,0,3080);
   Graph_Graph01408->SetMinimum(-0.09827276);
   Graph_Graph01408->SetMaximum(0.2046079);
   Graph_Graph01408->SetDirectory(0);
   Graph_Graph01408->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01408->SetLineColor(ci);
   Graph_Graph01408->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_Graph01408->GetXaxis()->SetRange(0,100);
   Graph_Graph01408->GetXaxis()->CenterTitle(true);
   Graph_Graph01408->GetXaxis()->SetLabelFont(42);
   Graph_Graph01408->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01408->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01408->GetXaxis()->SetTitleFont(42);
   Graph_Graph01408->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01408->GetYaxis()->CenterTitle(true);
   Graph_Graph01408->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01408->GetYaxis()->SetLabelFont(42);
   Graph_Graph01408->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01408->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01408->GetYaxis()->SetTitleFont(42);
   Graph_Graph01408->GetZaxis()->SetLabelFont(42);
   Graph_Graph01408->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01408->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01408);
   
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
