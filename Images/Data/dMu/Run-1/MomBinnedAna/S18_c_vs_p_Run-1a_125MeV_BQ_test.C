void S18_c_vs_p_Run-1a_125MeV_BQ_test()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 13:46:38 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(491.3947,-0.3530878,3023.315,0.7761649);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1028[22] = {
   363.6742,
   456.9233,
   570.967,
   695.2781,
   815.5259,
   938.5837,
   1061.906,
   1188.014,
   1312.777,
   1436.197,
   1562.156,
   1685.12,
   1809.254,
   1935.716,
   2061.228,
   2185.339,
   2308.766,
   2432.082,
   2557.212,
   2678.382,
   2781.661,
   2879.577};
   Double_t Graph0_fy1028[22] = {
   20.64839,
   2.076664,
   -0.6161068,
   0.3194527,
   0.2823969,
   0.3801825,
   0.07534599,
   0.08477118,
   0.3864182,
   0.1779879,
   -0.1200255,
   0.2687071,
   0.1042193,
   0.04220512,
   -0.3035874,
   0.05528396,
   0.5537173,
   0.4520363,
   0.01352749,
   -0.09329447,
   1.757013,
   1.853335};
   Double_t Graph0_fex1028[22] = {
   2.024653,
   1.162748,
   0.839956,
   0.582615,
   0.4780578,
   0.4268186,
   0.4103958,
   0.3961116,
   0.3958377,
   0.4013615,
   0.4393997,
   0.4716689,
   0.5278869,
   0.5765577,
   0.6514839,
   0.7132642,
   0.8283014,
   1.013706,
   1.241928,
   1.421088,
   3.295854,
   1.395883};
   Double_t Graph0_fey1028[22] = {
   12.95295,
   1.1974,
   0.6142743,
   0.3857884,
   0.2685815,
   0.2186012,
   0.1942289,
   0.1781049,
   0.1644706,
   0.156398,
   0.1586252,
   0.156191,
   0.1602174,
   0.1618018,
   0.1675171,
   0.1720337,
   0.1836776,
   0.1972932,
   0.2026059,
   0.2329627,
   0.3099702,
   11.15886};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1028,Graph0_fy1028,Graph0_fex1028,Graph0_fey1028);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01028 = new TH1F("Graph_Graph01028","S18",100,109.7171,3132.906);
   Graph_Graph01028->SetMinimum(-0.2401625);
   Graph_Graph01028->SetMaximum(0.6632396);
   Graph_Graph01028->SetDirectory(0);
   Graph_Graph01028->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01028->SetLineColor(ci);
   Graph_Graph01028->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01028->GetXaxis()->SetRange(22,88);
   Graph_Graph01028->GetXaxis()->CenterTitle(true);
   Graph_Graph01028->GetXaxis()->SetLabelFont(42);
   Graph_Graph01028->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01028->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01028->GetXaxis()->SetTitleFont(42);
   Graph_Graph01028->GetYaxis()->SetTitle("c [mrad] / 125 MeV");
   Graph_Graph01028->GetYaxis()->CenterTitle(true);
   Graph_Graph01028->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01028->GetYaxis()->SetLabelFont(42);
   Graph_Graph01028->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01028->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01028->GetYaxis()->SetTitleFont(42);
   Graph_Graph01028->GetZaxis()->SetLabelFont(42);
   Graph_Graph01028->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01028->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01028);
   
   gre->Draw("alp");
   
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
