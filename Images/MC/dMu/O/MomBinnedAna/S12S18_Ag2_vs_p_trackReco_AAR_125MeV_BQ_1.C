void S12S18_Ag2_vs_p_trackReco_AAR_125MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 08:59:33 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(522,-2.757386,2727,11.57285);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1043[22] = {
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
   Double_t Graph0_fy1043[22] = {
   4.857754,
   0.1013397,
   -0.1743205,
   0.1893088,
   0.01916267,
   0.02164171,
   -0.1527079,
   0.01899535,
   0.05840109,
   -0.007471438,
   0.009135814,
   0.08639759,
   0.1044503,
   -0.1356103,
   0.0506097,
   -0.002586567,
   0.1540318,
   -0.04716835,
   0.05539666,
   -0.04204302,
   -0.04871409,
   7.380821};
   Double_t Graph0_fex1043[22] = {
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
   Double_t Graph0_fey1043[22] = {
   1.461329,
   0.3014181,
   0.1946924,
   0.1175189,
   0.08914357,
   0.07613361,
   0.06926218,
   0.06519293,
   0.06273181,
   0.06092425,
   0.05960332,
   0.05824783,
   0.058533,
   0.06009419,
   0.06172216,
   0.06351753,
   0.06619943,
   0.06931218,
   0.0667654,
   0.06577848,
   0.1094492,
   1.803658};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1043,Graph0_fy1043,Graph0_fex1043,Graph0_fey1043);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01043 = new TH1F("Graph_Graph01043","S12S18_",100,49.5,3199.5);
   Graph_Graph01043->SetMinimum(-1.324362);
   Graph_Graph01043->SetMaximum(10.13983);
   Graph_Graph01043->SetDirectory(0);
   Graph_Graph01043->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01043->SetLineColor(ci);
   Graph_Graph01043->GetXaxis()->SetTitle("p [MeV]: in range p #minus 62 < p < p #plus 62 MeV");
   Graph_Graph01043->GetXaxis()->SetRange(23,78);
   Graph_Graph01043->GetXaxis()->CenterTitle(true);
   Graph_Graph01043->GetXaxis()->SetLabelFont(42);
   Graph_Graph01043->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01043->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01043->GetXaxis()->SetTitleFont(42);
   Graph_Graph01043->GetYaxis()->SetTitle("A_{g#minus2} [mrad]");
   Graph_Graph01043->GetYaxis()->CenterTitle(true);
   Graph_Graph01043->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01043->GetYaxis()->SetLabelFont(42);
   Graph_Graph01043->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01043->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01043->GetYaxis()->SetTitleFont(42);
   Graph_Graph01043->GetZaxis()->SetLabelFont(42);
   Graph_Graph01043->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01043->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01043);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4146231,0.9362587,0.5853769,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
