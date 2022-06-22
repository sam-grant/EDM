void S12S18_N_vs_p_Run-1c_250MeV_1000_2500MeV_noRand_earlyTimes_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 12 11:33:10 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(785.2535,-111345.8,2704.441,2679641);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1112[11] = {
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
   Double_t Graph0_fy1112[11] = {
   66742,
   637652,
   1558981,
   1984464,
   2000675,
   1633233,
   1122707,
   712803,
   408221,
   194833,
   10286};
   Double_t Graph0_fex1112[11] = {
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
   Double_t Graph0_fey1112[11] = {
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
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1112,Graph0_fy1112,Graph0_fex1112,Graph0_fey1112);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01112 = new TH1F("Graph_Graph01112","S12S18",100,223.455,3015);
   Graph_Graph01112->SetMinimum(167753);
   Graph_Graph01112->SetMaximum(2400543);
   Graph_Graph01112->SetDirectory(0);
   Graph_Graph01112->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01112->SetLineColor(ci);
   Graph_Graph01112->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01112->GetXaxis()->SetRange(28,82);
   Graph_Graph01112->GetXaxis()->CenterTitle(true);
   Graph_Graph01112->GetXaxis()->SetLabelFont(42);
   Graph_Graph01112->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01112->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01112->GetXaxis()->SetTitleFont(42);
   Graph_Graph01112->GetYaxis()->SetTitle("Positrons / 250 MeV");
   Graph_Graph01112->GetYaxis()->CenterTitle(true);
   Graph_Graph01112->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01112->GetYaxis()->SetLabelFont(42);
   Graph_Graph01112->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01112->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01112->GetYaxis()->SetTitleFont(42);
   Graph_Graph01112->GetZaxis()->SetLabelFont(42);
   Graph_Graph01112->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01112->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01112);
   
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
