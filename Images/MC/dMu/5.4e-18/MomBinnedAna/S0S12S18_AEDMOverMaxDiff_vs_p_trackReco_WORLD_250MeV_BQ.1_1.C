void S0S12S18_AEDMOverMaxDiff_vs_p_trackReco_WORLD_250MeV_BQ.1_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:33:13 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.7499,-0.0008191104,3408.061,0.003017822);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1218[11] = {
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
   Double_t Graph0_fy1218[11] = {
   0.0004309608,
   0.000616497,
   0.001038585,
   0.001060191,
   0.001745442,
   0.001540471,
   0.001873581,
   0.001414544,
   0.001226318,
   0.002211441,
   0.001418425};
   Double_t Graph0_fex1218[11] = {
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
   Double_t Graph0_fey1218[11] = {
   0.000812402,
   0.0003050762,
   0.0002210562,
   0.0001980744,
   0.0002186532,
   0.000239075,
   0.0002875785,
   0.0003044224,
   0.0003969749,
   0.0005736355,
   0.001875177};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1218,Graph0_fy1218,Graph0_fex1218,Graph0_fey1218);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01218 = new TH1F("Graph_Graph01218","S0S12S18_",100,217.8768,3022.434);
   Graph_Graph01218->SetMinimum(-0.0004354171);
   Graph_Graph01218->SetMaximum(0.002634129);
   Graph_Graph01218->SetDirectory(0);
   Graph_Graph01218->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01218->SetLineColor(ci);
   Graph_Graph01218->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01218->GetXaxis()->SetRange(0,101);
   Graph_Graph01218->GetXaxis()->CenterTitle(true);
   Graph_Graph01218->GetXaxis()->SetLabelFont(42);
   Graph_Graph01218->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01218->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01218->GetXaxis()->SetTitleFont(42);
   Graph_Graph01218->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   Graph_Graph01218->GetYaxis()->CenterTitle(true);
   Graph_Graph01218->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01218->GetYaxis()->SetLabelFont(42);
   Graph_Graph01218->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01218->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01218->GetYaxis()->SetTitleFont(42);
   Graph_Graph01218->GetZaxis()->SetLabelFont(42);
   Graph_Graph01218->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01218->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01218);
   
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
