void S18_full_c_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jun  7 14:58:07 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-437.25,-6.563863,3605.25,4.012719);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1253[15] = {
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
   Double_t Graph0_fy1253[15] = {
   1.309073,
   -4.693592,
   -0.6969483,
   0.5899622,
   0.8090822,
   0.02539072,
   -0.2231322,
   -0.1527298,
   -0.141434,
   -0.1041588,
   -0.09797481,
   0.003867353,
   -0.05731805,
   -0.03674395,
   -0.1699285};
   Double_t Graph0_fex1253[15] = {
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
   Double_t Graph0_fey1253[15] = {
   0.9408825,
   0.1075066,
   0.03806482,
   0.02414818,
   0.01878238,
   0.01621019,
   0.0145264,
   0.01360248,
   0.01307178,
   0.01319355,
   0.01365403,
   0.01440593,
   0.01649906,
   0.01677422,
   0.02800221};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1253,Graph0_fy1253,Graph0_fex1253,Graph0_fey1253);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01253 = new TH1F("Graph_Graph01253","S18",100,0,3300);
   Graph_Graph01253->SetMinimum(-5.506204);
   Graph_Graph01253->SetMaximum(2.955061);
   Graph_Graph01253->SetDirectory(0);
   Graph_Graph01253->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01253->SetLineColor(ci);
   Graph_Graph01253->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01253->GetXaxis()->SetRange(0,97);
   Graph_Graph01253->GetXaxis()->CenterTitle(true);
   Graph_Graph01253->GetXaxis()->SetLabelFont(42);
   Graph_Graph01253->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01253->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01253->GetXaxis()->SetTitleFont(42);
   Graph_Graph01253->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01253->GetYaxis()->CenterTitle(true);
   Graph_Graph01253->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01253->GetYaxis()->SetLabelFont(42);
   Graph_Graph01253->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01253->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01253->GetYaxis()->SetTitleFont(42);
   Graph_Graph01253->GetZaxis()->SetLabelFont(42);
   Graph_Graph01253->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01253->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01253);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
