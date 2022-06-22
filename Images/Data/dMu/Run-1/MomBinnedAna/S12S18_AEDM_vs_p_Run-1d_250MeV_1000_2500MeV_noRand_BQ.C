void S12S18_AEDM_vs_p_Run-1d_250MeV_1000_2500MeV_noRand_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jun 10 16:20:15 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(786.5464,0.0108862,2713.284,0.05914249);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1106[11] = {
   456.1275,
   654.8825,
   884.0267,
   1127.587,
   1373.406,
   1619.967,
   1866.905,
   2116.177,
   2359.563,
   2608.049,
   2791.411};
   Double_t Graph0_fy1106[11] = {
   0.05733353,
   0.06513435,
   0.04707035,
   0.01952802,
   0.03091402,
   0.03075677,
   0.03874393,
   0.02970752,
   0.02657278,
   0.02499719,
   0.03473645};
   Double_t Graph0_fex1106[11] = {
   0.04575766,
   0.03211299,
   0.02141739,
   0.01941565,
   0.01906774,
   0.02106441,
   0.02562821,
   0.03226453,
   0.04226119,
   0.05850123,
   0.1103473};
   Double_t Graph0_fey1106[11] = {
   0.06552249,
   0.0166076,
   0.008476262,
   0.00644912,
   0.005605732,
   0.005375869,
   0.00550617,
   0.005832301,
   0.006401826,
   0.007356515,
   0.02610773};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1106,Graph0_fy1106,Graph0_fex1106,Graph0_fey1106);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01106 = new TH1F("Graph_Graph01106","S12S18",100,222.5378,3025.065);
   Graph_Graph01106->SetMinimum(0.01571183);
   Graph_Graph01106->SetMaximum(0.05431686);
   Graph_Graph01106->SetDirectory(0);
   Graph_Graph01106->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01106->SetLineColor(ci);
   Graph_Graph01106->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01106->GetXaxis()->SetRange(28,82);
   Graph_Graph01106->GetXaxis()->CenterTitle(true);
   Graph_Graph01106->GetXaxis()->SetLabelFont(42);
   Graph_Graph01106->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01106->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01106->GetXaxis()->SetTitleFont(42);
   Graph_Graph01106->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
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
