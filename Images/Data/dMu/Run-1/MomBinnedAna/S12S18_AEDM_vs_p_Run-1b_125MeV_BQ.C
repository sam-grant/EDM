void S12S18_AEDM_vs_p_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov  9 09:18:10 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(522,-1.550854,2727,3.076487);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1038[22] = {
   312,
   437,
   562,
   687,
   812,
   937,
   1062,
   1187,
   1312,
   1437,
   1562,
   1687,
   1812,
   1937,
   2062,
   2187,
   2312,
   2437,
   2562,
   2687,
   2812,
   2937};
   Double_t Graph0_fy1038[22] = {
   0.7628167,
   0.3199393,
   0.1777213,
   0.06909989,
   0.07588019,
   0.03749435,
   0.05626358,
   0.01137256,
   0.03390514,
   0.01810715,
   0.0188262,
   0.01294591,
   0.008695611,
   0.02644695,
   0.05542757,
   0.01238596,
   0.05244251,
   0.04002129,
   0.01553634,
   -0.007868561,
   0.1658942,
   0.6982453};
   Double_t Graph0_fex1038[22] = {
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
   Double_t Graph0_fey1038[22] = {
   1.542447,
   0.134283,
   0.06577773,
   0.03961953,
   0.02751008,
   0.02262665,
   0.01992859,
   0.01797313,
   0.01690583,
   0.01602186,
   0.01598967,
   0.01549716,
   0.01605777,
   0.0162355,
   0.01698935,
   0.01719614,
   0.01798014,
   0.0193635,
   0.02045871,
   0.02203976,
   0.05441276,
   0.2857247};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1038,Graph0_fy1038,Graph0_fex1038,Graph0_fey1038);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01038 = new TH1F("Graph_Graph01038","S12S18",100,49.5,3199.5);
   Graph_Graph01038->SetMinimum(-1.088119);
   Graph_Graph01038->SetMaximum(2.613753);
   Graph_Graph01038->SetDirectory(0);
   Graph_Graph01038->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01038->SetLineColor(ci);
   Graph_Graph01038->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01038->GetXaxis()->SetRange(23,78);
   Graph_Graph01038->GetXaxis()->CenterTitle(true);
   Graph_Graph01038->GetXaxis()->SetLabelFont(42);
   Graph_Graph01038->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01038->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01038->GetXaxis()->SetTitleFont(42);
   Graph_Graph01038->GetYaxis()->SetTitle("A_{EDM} [mrad] / 125 MeV");
   Graph_Graph01038->GetYaxis()->CenterTitle(true);
   Graph_Graph01038->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01038->GetYaxis()->SetLabelFont(42);
   Graph_Graph01038->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01038->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01038->GetYaxis()->SetTitleFont(42);
   Graph_Graph01038->GetZaxis()->SetLabelFont(42);
   Graph_Graph01038->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01038->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01038);
   
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
