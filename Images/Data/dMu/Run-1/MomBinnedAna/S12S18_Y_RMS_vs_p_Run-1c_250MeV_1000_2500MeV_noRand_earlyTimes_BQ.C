void S12S18_Y_RMS_vs_p_Run-1c_250MeV_1000_2500MeV_noRand_earlyTimes_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 12 11:33:10 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(785.2535,9.277688,2704.441,15.78028);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1110[11] = {
   456.2058,
   654.8466,
   884.1235,
   1127.669,
   1373.376,
   1620.054,
   1867.064,
   2116.134,
   2359.718,
   2607.235,
   2782.111};
   Double_t Graph0_fy1110[11] = {
   13.48296,
   12.71196,
   12.61219,
   12.5533,
   12.54126,
   12.54534,
   12.51896,
   12.42825,
   12.40972,
   12.60058,
   14.21358};
   Double_t Graph0_fex1110[11] = {
   0.1219626,
   0.08527478,
   0.05671146,
   0.05129666,
   0.05046668,
   0.05574541,
   0.06765883,
   0.084999,
   0.1107256,
   0.1542815,
   0.2603668};
   Double_t Graph0_fey1110[11] = {
   0.03690901,
   0.01125701,
   0.007142824,
   0.006301362,
   0.006269678,
   0.006941403,
   0.008354519,
   0.01040911,
   0.0137342,
   0.0201866,
   0.09915109};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1110,Graph0_fy1110,Graph0_fex1110,Graph0_fey1110);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01110 = new TH1F("Graph_Graph01110","S12S18",100,223.455,3015);
   Graph_Graph01110->SetMinimum(9.927947);
   Graph_Graph01110->SetMaximum(15.13002);
   Graph_Graph01110->SetDirectory(0);
   Graph_Graph01110->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01110->SetLineColor(ci);
   Graph_Graph01110->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01110->GetXaxis()->SetRange(28,82);
   Graph_Graph01110->GetXaxis()->CenterTitle(true);
   Graph_Graph01110->GetXaxis()->SetLabelFont(42);
   Graph_Graph01110->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01110->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01110->GetXaxis()->SetTitleFont(42);
   Graph_Graph01110->GetYaxis()->SetTitle("#sigma_{y} [mm] / 250 MeV");
   Graph_Graph01110->GetYaxis()->CenterTitle(true);
   Graph_Graph01110->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01110->GetYaxis()->SetLabelFont(42);
   Graph_Graph01110->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01110->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01110->GetYaxis()->SetTitleFont(42);
   Graph_Graph01110->GetZaxis()->SetLabelFont(42);
   Graph_Graph01110->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01110->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01110);
   
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
