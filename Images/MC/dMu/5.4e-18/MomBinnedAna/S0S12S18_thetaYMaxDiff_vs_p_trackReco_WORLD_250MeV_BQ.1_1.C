void S0S12S18_thetaYMaxDiff_vs_p_trackReco_WORLD_250MeV_BQ.1_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:33:13 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.7499,-38.05936,3408.061,314.035);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1217[11] = {
   451.6989,
   653.3673,
   880.3254,
   1123.144,
   1371.143,
   1620.226,
   1867.221,
   2115.543,
   2362.981,
   2614.165,
   2788.507};
   Double_t Graph0_fy1217[11] = {
   178.9636,
   159.447,
   126.6738,
   115.9949,
   96.4783,
   83.95822,
   69.96518,
   69.2287,
   56.34038,
   38.66497,
   26.51312};
   Double_t Graph0_fex1217[11] = {
   0.1090345,
   0.09195276,
   0.06666504,
   0.06508974,
   0.06952338,
   0.07686814,
   0.08948912,
   0.1108082,
   0.1425331,
   0.1752943,
   0.2141166};
   Double_t Graph0_fey1217[11] = {
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
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1217,Graph0_fy1217,Graph0_fex1217,Graph0_fey1217);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01217 = new TH1F("Graph_Graph01217","S0S12S18_",100,217.8768,3022.434);
   Graph_Graph01217->SetMinimum(-2.849923);
   Graph_Graph01217->SetMaximum(278.8255);
   Graph_Graph01217->SetDirectory(0);
   Graph_Graph01217->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01217->SetLineColor(ci);
   Graph_Graph01217->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01217->GetXaxis()->SetRange(0,101);
   Graph_Graph01217->GetXaxis()->CenterTitle(true);
   Graph_Graph01217->GetXaxis()->SetLabelFont(42);
   Graph_Graph01217->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01217->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01217->GetXaxis()->SetTitleFont(42);
   Graph_Graph01217->GetYaxis()->SetTitle("(#Delta#theta_{y})_{MAX} [mrad] / 250 MeV");
   Graph_Graph01217->GetYaxis()->CenterTitle(true);
   Graph_Graph01217->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01217->GetYaxis()->SetLabelFont(42);
   Graph_Graph01217->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01217->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01217->GetYaxis()->SetTitleFont(42);
   Graph_Graph01217->GetZaxis()->SetLabelFont(42);
   Graph_Graph01217->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01217->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01217);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.3920101,0.9362587,0.6079899,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
