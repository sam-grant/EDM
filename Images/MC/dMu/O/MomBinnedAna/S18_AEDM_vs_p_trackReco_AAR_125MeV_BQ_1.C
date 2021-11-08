void S18_AEDM_vs_p_trackReco_AAR_125MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 08:59:33 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(522,-11.78641,2727,27.422);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1032[22] = {
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
   Double_t Graph0_fy1032[22] = {
   20.45951,
   -0.5517406,
   0.8088153,
   -0.3853379,
   0.1406114,
   0.01643669,
   -0.1687461,
   0.02890937,
   0.04179702,
   0.03923105,
   0.03794068,
   0.09929654,
   -0.07484706,
   0.1294292,
   -0.02923196,
   -0.1875046,
   -0.03633951,
   0.1020142,
   -0.05537508,
   -0.1951709,
   -0.01096493,
   -4.389446};
   Double_t Graph0_fex1032[22] = {
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
   Double_t Graph0_fey1032[22] = {
   0.4277497,
   0.4865861,
   0.3069429,
   0.1875435,
   0.1409059,
   0.1209344,
   0.1093417,
   0.1034673,
   0.09950142,
   0.09753298,
   0.09457679,
   0.09273314,
   0.09403559,
   0.09686774,
   0.09932583,
   0.1019181,
   0.1051449,
   0.1114107,
   0.1058005,
   0.10489,
   0.1647082,
   0.8622264};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1032,Graph0_fy1032,Graph0_fex1032,Graph0_fey1032);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01032 = new TH1F("Graph_Graph01032","S18_",100,49.5,3199.5);
   Graph_Graph01032->SetMinimum(-7.865566);
   Graph_Graph01032->SetMaximum(23.50116);
   Graph_Graph01032->SetDirectory(0);
   Graph_Graph01032->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01032->SetLineColor(ci);
   Graph_Graph01032->GetXaxis()->SetTitle("p [MeV]: in range p #minus 62 < p < p #plus 62 MeV");
   Graph_Graph01032->GetXaxis()->SetRange(23,78);
   Graph_Graph01032->GetXaxis()->CenterTitle(true);
   Graph_Graph01032->GetXaxis()->SetLabelFont(42);
   Graph_Graph01032->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01032->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01032->GetXaxis()->SetTitleFont(42);
   Graph_Graph01032->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01032->GetYaxis()->CenterTitle(true);
   Graph_Graph01032->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01032->GetYaxis()->SetLabelFont(42);
   Graph_Graph01032->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01032->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01032->GetYaxis()->SetTitleFont(42);
   Graph_Graph01032->GetZaxis()->SetLabelFont(42);
   Graph_Graph01032->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01032->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01032);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
