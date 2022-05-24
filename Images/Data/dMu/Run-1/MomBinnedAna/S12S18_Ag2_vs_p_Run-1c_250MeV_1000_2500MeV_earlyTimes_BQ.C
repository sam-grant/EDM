void S12S18_Ag2_vs_p_Run-1c_250MeV_1000_2500MeV_earlyTimes_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May 12 13:19:11 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(785.2432,-0.02910353,2704.44,0.0384403);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1107[11] = {
   456.1939,
   654.8477,
   884.126,
   1127.672,
   1373.377,
   1620.055,
   1867.062,
   2116.138,
   2359.718,
   2607.233,
   2782.11};
   Double_t Graph0_fy1107[11] = {
   0.04924318,
   0.01046917,
   0.02526318,
   0.02644206,
   0.009235459,
   -0.005962224,
   -0.006756477,
   -0.02841314,
   0.001650637,
   -0.005596354,
   0.08318139};
   Double_t Graph0_fex1107[11] = {
   0.1219767,
   0.0852733,
   0.05670851,
   0.05129367,
   0.05046427,
   0.05574092,
   0.06765295,
   0.08499206,
   0.110715,
   0.1542762,
   0.2603046};
   Double_t Graph0_fey1107[11] = {
   0.1714421,
   0.04334077,
   0.02204337,
   0.016696,
   0.0144947,
   0.01393258,
   0.01428933,
   0.01524755,
   0.01694136,
   0.02032542,
   0.07843924};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1107,Graph0_fy1107,Graph0_fex1107,Graph0_fey1107);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01107 = new TH1F("Graph_Graph01107","S12S18",100,223.442,3015.001);
   Graph_Graph01107->SetMinimum(-0.02234915);
   Graph_Graph01107->SetMaximum(0.03168591);
   Graph_Graph01107->SetDirectory(0);
   Graph_Graph01107->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01107->SetLineColor(ci);
   Graph_Graph01107->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01107->GetXaxis()->SetRange(28,82);
   Graph_Graph01107->GetXaxis()->CenterTitle(true);
   Graph_Graph01107->GetXaxis()->SetLabelFont(42);
   Graph_Graph01107->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01107->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01107->GetXaxis()->SetTitleFont(42);
   Graph_Graph01107->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph01107->GetYaxis()->CenterTitle(true);
   Graph_Graph01107->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01107->GetYaxis()->SetLabelFont(42);
   Graph_Graph01107->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01107->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01107->GetYaxis()->SetTitleFont(42);
   Graph_Graph01107->GetZaxis()->SetLabelFont(42);
   Graph_Graph01107->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01107->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01107);
   
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
